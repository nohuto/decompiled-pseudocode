/*
 * XREFs of XilEndpoint_AllocateStreamContextArray @ 0x140036890
 * Callers:
 *     Endpoint_Enable @ 0x14001F2E0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140035FF0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140048FE0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     XilCommonBuffer_AcquireBufferEx @ 0x140003F88 (XilCommonBuffer_AcquireBufferEx.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     CommonBuffer_ReleaseBuffer @ 0x14003D258 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x140040174 (CommonBuffer_AcquireSecureBuffer.c)
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x140047B0C (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_AllocateStreamContextArray(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // r12d
  void *v10; // rbp
  unsigned int v11; // esi
  int v12; // ebx
  char v13; // cl
  bool v14; // dl
  int v15; // eax
  unsigned __int16 v16; // r9
  __int64 Pool2; // rax
  int v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v22 = 0LL;
  v7 = *(_DWORD *)(a1 + 12);
  v21 = 0LL;
  v8 = *(_QWORD *)v4;
  v9 = 1 << (v7 + 1);
  v10 = *(void **)(*(_QWORD *)v4 + 120LL);
  v11 = 16 * v9;
  if ( !*(_BYTE *)(*(_QWORD *)v4 + 1001LL) )
  {
    v15 = 1;
    goto LABEL_29;
  }
  switch ( *(_DWORD *)(*(_QWORD *)(v8 + 88) + 80LL) )
  {
    case 1:
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 16) + 664LL) )
        goto LABEL_20;
      v14 = 1;
      v15 = 3;
LABEL_14:
      if ( !v14 )
      {
        if ( v15 != 2 )
        {
          if ( v15 == 3 )
          {
            v5 = CommonBuffer_AcquireSecureBuffer(*(_QWORD *)(*(_QWORD *)v4 + 120LL), v11, v4, 829714501LL);
            if ( !v5 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v16 = 16;
                v20 = *(_DWORD *)(v4 + 152);
                v19 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 143LL);
LABEL_33:
                WPP_RECORDER_SF_DD(
                  *(_QWORD *)(v4 + 80),
                  2u,
                  0xDu,
                  v16,
                  (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
                  v19,
                  v20);
                return (unsigned int)-1073741670;
              }
              return (unsigned int)-1073741670;
            }
          }
          goto LABEL_23;
        }
LABEL_20:
        Pool2 = ExAllocatePool2(64LL, v11 + 104, 1229146200LL);
        v5 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 40) = v11 + 104;
          *(_QWORD *)(Pool2 + 16) = Pool2 + 104;
          *(_DWORD *)(Pool2 + 44) = v11;
          *(_DWORD *)(Pool2 + 64) = 829714501;
          *(_QWORD *)(Pool2 + 72) = v4;
          *(_DWORD *)(Pool2 + 80) = 2;
          v12 = XilEndpoint_SendRequestToAllocateSecureStreamContextArray(v4 + 1328, v9, &v22, &v21);
          if ( v12 < 0 )
          {
            CommonBuffer_ReleaseBuffer(v10);
            return (unsigned int)v12;
          }
          *(_QWORD *)(v5 + 24) = v21;
          *(_QWORD *)(a1 + 40) = v22;
          goto LABEL_23;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 15;
LABEL_32:
          v20 = *(_DWORD *)(v4 + 152);
          v19 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 143LL);
          goto LABEL_33;
        }
        return (unsigned int)-1073741670;
      }
LABEL_29:
      v5 = XilCommonBuffer_AcquireBufferEx(v10, v11, v4, 0x31747045u, v15);
      if ( !v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 17;
          goto LABEL_32;
        }
        return (unsigned int)-1073741670;
      }
LABEL_23:
      *(_QWORD *)(a1 + 32) = v5;
      return 0;
    case 2:
    case 3:
      v13 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 664LL);
      v14 = v13 == 0;
      v15 = (v13 != 0) + 1;
      goto LABEL_14;
    case 4:
      goto LABEL_20;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, *(_BYTE *)(*(_QWORD *)(v8 + 88) + 80LL) - 3, 1, a4);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return (unsigned int)-1073741808;
}
