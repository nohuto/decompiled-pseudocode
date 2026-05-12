/*
 * XREFs of NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E661C (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400ECA24 (NvmeAdapterReconnectFabricControllerAssociation.c)
 * Callees:
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhdqq_EtwWriteTransfer @ 0x1400E3880 (McTemplateK0qjzshhdqq_EtwWriteTransfer.c)
 *     McTemplateK0qjzshhq_EtwWriteTransfer @ 0x1400E3B48 (McTemplateK0qjzshhq_EtwWriteTransfer.c)
 *     NvmeFabricControllerQueueAuthReset @ 0x1400FBAA0 (NvmeFabricControllerQueueAuthReset.c)
 *     NvmeFabricControllerQueueProcessAuthChallenge @ 0x1400FD2D4 (NvmeFabricControllerQueueProcessAuthChallenge.c)
 *     NvmeFabricControllerQueueProcessCtrlResponse @ 0x1400FD3F0 (NvmeFabricControllerQueueProcessCtrlResponse.c)
 *     NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400FD5A8 (NvmeFabricControllerQueueReceiveAuthChallenge.c)
 *     NvmeFabricControllerQueueReceiveAuthResult1 @ 0x1400FDA30 (NvmeFabricControllerQueueReceiveAuthResult1.c)
 *     NvmeFabricControllerQueueSendAuthFailure @ 0x1400FDE64 (NvmeFabricControllerQueueSendAuthFailure.c)
 *     NvmeFabricControllerQueueSendAuthNegogiate @ 0x1400FE088 (NvmeFabricControllerQueueSendAuthNegogiate.c)
 *     NvmeFabricControllerQueueSendAuthReply @ 0x1400FE2D4 (NvmeFabricControllerQueueSendAuthReply.c)
 *     NvmeFabricControllerQueueSendAuthSuccess @ 0x1400FE598 (NvmeFabricControllerQueueSendAuthSuccess.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeFabricControllerQueueAuthenticate(__int64 a1)
{
  char v2; // r15
  LARGE_INTEGER v3; // rax
  LARGE_INTEGER v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 NvmeSrb; // rax
  void *v8; // r14
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  _BYTE v19[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v20; // [rsp+64h] [rbp-9Ch] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v22[256]; // [rsp+70h] [rbp-90h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v20 = 0;
  v19[0] = 0;
  memset_0(v22, 0, sizeof(v22));
  v2 = 0;
  if ( UseQPCTime )
    v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v3.QuadPart = KeQueryUnbiasedInterruptTime();
  v4 = v3;
  NvmeFabricControllerQueueAuthReset(a1);
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(v5 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(v5, 0);
  v8 = (void *)NvmeSrb;
  if ( NvmeSrb )
  {
    v2 = 1;
    v9 = NvmeFabricControllerQueueSendAuthNegogiate(a1, NvmeSrb);
    if ( v9 >= 0 )
    {
      v2 = 2;
      v9 = NvmeFabricControllerQueueReceiveAuthChallenge(a1, v8);
      if ( v9 >= 0 )
      {
        v2 = 3;
        v9 = NvmeFabricControllerQueueProcessAuthChallenge(a1, &v20, v22);
        if ( v9 >= 0 )
        {
          v2 = 4;
          v9 = NvmeFabricControllerQueueSendAuthReply(a1, v8, v10, v22);
          if ( v9 >= 0 )
          {
            v2 = 5;
            v9 = NvmeFabricControllerQueueReceiveAuthResult1(a1, v8, v19);
            if ( v9 >= 0 )
            {
              if ( v19[0] )
              {
                v2 = 6;
                v9 = NvmeFabricControllerQueueProcessCtrlResponse(a1);
                if ( v9 >= 0 )
                {
                  v2 = 7;
                  v9 = NvmeFabricControllerQueueSendAuthSuccess(a1, v8);
                }
                else
                {
                  LOBYTE(v12) = 1;
                  NvmeFabricControllerQueueSendAuthFailure(a1, v8, v11, v12);
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v9 < 0 )
  {
    if ( (byte_14017344A & 8) != 0 )
    {
      if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v4.QuadPart )
        v16 = PerformanceCounter.QuadPart - v4.QuadPart;
      else
        v16 = PerformanceCounter.QuadPart - v4.QuadPart - 1;
      if ( UseQPCTime )
      {
        v17 = 0LL;
        if ( PerformanceFrequency.QuadPart && v16 )
          v17 = 10000
              * (1000 * (v16 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
              / PerformanceFrequency.QuadPart
              + 10000
              * (1000 * (v16 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
               + 1000 * (v16 / PerformanceFrequency.QuadPart));
      }
      else
      {
        v17 = v16;
      }
      McTemplateK0qjzshhdqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 88),
        &EventNVMeoFAuthenticateControllerQueueFailure,
        v6 + 1048,
        *(_DWORD *)(v6 + 56),
        v6 + 1048,
        *(const wchar_t **)(v6 + 1032),
        *(const char **)(v5 + 792),
        *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
        *(_WORD *)(a1 + 136),
        v9,
        v2,
        v17 / 0xA);
    }
  }
  else if ( (byte_14017344A & 2) != 0 )
  {
    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v4.QuadPart )
      v14 = PerformanceCounter.QuadPart - v4.QuadPart;
    else
      v14 = PerformanceCounter.QuadPart - v4.QuadPart - 1;
    if ( UseQPCTime )
    {
      v15 = 0LL;
      if ( PerformanceFrequency.QuadPart && v14 )
        v15 = 10000
            * (1000 * (v14 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
            / PerformanceFrequency.QuadPart
            + 10000
            * (1000 * (v14 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
             + 1000 * (v14 / PerformanceFrequency.QuadPart));
    }
    else
    {
      v15 = v14;
    }
    McTemplateK0qjzshhq_EtwWriteTransfer(
      *(_QWORD *)(a1 + 88),
      &EventNVMeoFAuthenticateControllerQueueSuccess,
      v6 + 1048,
      *(_DWORD *)(v6 + 56),
      v6 + 1048,
      *(const wchar_t **)(v6 + 1032),
      *(const char **)(v5 + 792),
      *(_WORD *)(*(_QWORD *)(a1 + 88) + 4LL),
      *(_WORD *)(a1 + 136),
      v15 / 0xA);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x72536152u);
  return (unsigned int)v9;
}
