/*
 * XREFs of PiCMEnumerateSubKeys @ 0x140974874
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404CEFB4 (CmIsStateSeparationEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 *     PiCMReturnBufferResultData @ 0x140959E10 (PiCMReturnBufferResultData.c)
 *     PiCMCaptureEnumerateInputData @ 0x140974B80 (PiCMCaptureEnumerateInputData.c)
 *     _RegRtlEnumKey @ 0x140974C20 (_RegRtlEnumKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMEnumerateSubKeys(void *a1, __int64 a2, char *a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  unsigned int v8; // ebx
  void *Pool2; // rdi
  int v10; // esi
  int v11; // r14d
  unsigned int v12; // esi
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // [rsp+54h] [rbp-25h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-21h] BYREF
  __int128 v24; // [rsp+60h] [rbp-19h]
  int v25; // [rsp+70h] [rbp-9h]

  KeyHandle = 0LL;
  v22 = 0;
  *a6 = 0;
  v24 = 0LL;
  v25 = 0;
  v8 = 0;
  Pool2 = 0LL;
  v10 = PiCMCaptureEnumerateInputData(a1);
  if ( v10 < 0 )
    return (unsigned int)v10;
  v11 = DWORD2(v24);
  if ( DWORD1(v24) || !a3 || a4 < 0x14 || (v12 = a4 - 20, a4 - 20 < 2) )
  {
LABEL_20:
    LODWORD(v16) = -1073741811;
    goto LABEL_16;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v8 = v12 >> 1;
    switch ( DWORD2(v24) )
    {
      case 1:
        v13 = *(_QWORD *)&PiPnpRtlCtx;
        v14 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 136LL);
        if ( !v14 )
        {
          v20 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 56LL);
          if ( v20 == *(_QWORD *)&PiPnpRtlCtx + 56LL )
            v14 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
          else
            v14 = (_QWORD *)(v20 - 16);
          *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 136LL) = v14;
        }
        v15 = 5;
        break;
      case 2:
        v13 = *(_QWORD *)&PiPnpRtlCtx;
        v14 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 152LL);
        if ( !v14 )
        {
          v14 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
          *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 152LL) = v14;
        }
        v15 = 7;
        break;
      case 3:
        v13 = *(_QWORD *)&PiPnpRtlCtx;
        v14 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 160LL);
        if ( !v14 )
        {
          v14 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
          *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 160LL) = v14;
        }
        v15 = 8;
        break;
      default:
        goto LABEL_20;
    }
    LODWORD(v16) = PnpCtxGetCachedNodeBaseKey(v13, v14, v15, &KeyHandle);
    if ( (int)v16 < 0 )
      goto LABEL_16;
    LODWORD(v16) = RegRtlEnumKey(KeyHandle);
    if ( (_DWORD)v16 != -2147483622 )
      goto LABEL_14;
    if ( v11 == 3 && CmIsStateSeparationEnabled() )
    {
      LODWORD(v16) = PnpCtxRegQueryInfoKey(v16, KeyHandle, &v22, 0LL, 0LL, 0LL, 0LL);
      if ( (int)v16 >= 0 )
      {
        if ( HIDWORD(v24) < v22 )
        {
          LODWORD(v16) = -1073741595;
        }
        else
        {
          v18 = *(_QWORD *)&PiPnpRtlCtx;
          v19 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 168LL);
          if ( !v19 )
          {
            v21 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 56LL);
            if ( v21 == *(_QWORD *)&PiPnpRtlCtx + 56LL )
              v19 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
            else
              v19 = (_QWORD *)(v21 - 16);
            *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 168LL) = v19;
          }
          LODWORD(v16) = PnpCtxGetCachedNodeBaseKey(v18, v19, 9, &KeyHandle);
          if ( (int)v16 >= 0 )
          {
            LODWORD(v16) = RegRtlEnumKey(KeyHandle);
LABEL_14:
            if ( (int)v16 >= 0 )
            {
              v10 = PiCMReturnBufferResultData(v16, 2 * (v12 >> 1), 0, Pool2, 2 * (v12 >> 1), v25, a3, a4, a6);
              goto LABEL_17;
            }
          }
        }
      }
    }
    v8 = v12 >> 1;
    goto LABEL_16;
  }
  LODWORD(v16) = -1073741670;
LABEL_16:
  v10 = PiCMReturnBufferResultData(v16, 2 * v8, 0, 0LL, 0, v25, a3, a4, a6);
  if ( Pool2 )
LABEL_17:
    ExFreePoolWithTag(Pool2, 0x34706E50u);
  return (unsigned int)v10;
}
