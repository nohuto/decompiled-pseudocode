/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005C2E0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // r14
  unsigned __int64 v5; // rcx
  UINT v6; // r15d
  __int64 v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rax
  const wchar_t *v10; // r9
  int v11; // edx
  int v12; // eax
  UINT PrivateDriverDataSize; // r8d
  void *pPrivateDriverData; // rdx
  struct _D3DKMT_QUERYADAPTERINFO Src; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v16[24]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+88h] [rbp+27h] BYREF
  int v18; // [rsp+90h] [rbp+2Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v16,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4947;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4947LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v4 )
  {
    memset(&Src, 0, sizeof(Src));
    Src.Type = *(_DWORD *)(v4 + 24);
    v5 = *(unsigned int *)(v4 + 28);
    v6 = v5 + 4;
    if ( !(_DWORD)v5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4983;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid OutputBufferSize for DXGKVMB_COMMAND_QUERYADAPTERINFO, size is zero",
        4983LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = 55798249LL;
      v18 = 0;
      RtlLogUnexpectedCodepath(&v17);
      goto LABEL_18;
    }
    if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 32 < v5 || (unsigned int)v5 > 0x20000 )
    {
      WdLogSingleEntry1(2LL);
      v9 = *(unsigned int *)(v4 + 28);
      v10 = L"Invalid OutputBufferSize";
      v11 = 0x40000;
      WdLogGlobalForLineNumber = 4961;
      goto LABEL_9;
    }
    Src.PrivateDriverDataSize = *(_DWORD *)(v4 + 28);
    v7 = operator new[](v6, 0x4B677844u, 64LL);
    v8 = (_DWORD *)v7;
    if ( !v7 )
    {
      WdLogSingleEntry0(6LL);
      v9 = 4971LL;
      v10 = L"Failed to allocate pPrivateDriverDate";
      WdLogGlobalForLineNumber = 4971;
      v11 = 262145;
LABEL_9:
      DxgkLogInternalTriageEvent(0LL, v11, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_18;
    }
    Src.pPrivateDriverData = (void *)(v7 + 4);
    memmove((void *)(v7 + 4), (const void *)(v4 + 32), *(unsigned int *)(v4 + 28));
    v12 = DxgkQueryAdapterInfoImpl(&Src, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL));
    if ( *((_DWORD *)a1 + 38) < 0x27u )
    {
      if ( v12 < 0 )
      {
LABEL_15:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
        goto LABEL_18;
      }
      PrivateDriverDataSize = Src.PrivateDriverDataSize;
      pPrivateDriverData = Src.pPrivateDriverData;
    }
    else
    {
      *v8 = v12;
      PrivateDriverDataSize = v6;
      pPrivateDriverData = v8;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), pPrivateDriverData, PrivateDriverDataSize);
    v2 = 1;
    goto LABEL_15;
  }
LABEL_18:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
  return v2;
}
