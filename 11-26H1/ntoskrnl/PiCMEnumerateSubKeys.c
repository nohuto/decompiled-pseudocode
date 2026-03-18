/*
 * XREFs of PiCMEnumerateSubKeys @ 0x140919E14
 * Callers:
 *     PiCMHandleIoctl @ 0x140997F20 (PiCMHandleIoctl.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404D5744 (CmIsStateSeparationEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PiCMCaptureEnumerateInputData @ 0x14091A120 (PiCMCaptureEnumerateInputData.c)
 *     _RegRtlEnumKey @ 0x14091A1C0 (_RegRtlEnumKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14091B2F8 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140997720 (_PnpCtxGetCachedNodeBaseKey.c)
 *     PiCMReturnBufferResultData @ 0x1409993B0 (PiCMReturnBufferResultData.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMEnumerateSubKeys(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v8; // ebx
  void *Pool2; // rdi
  int v10; // esi
  int v11; // r14d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  int CachedNodeBaseKey; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int v26; // [rsp+54h] [rbp-25h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-21h] BYREF
  __int128 v28; // [rsp+60h] [rbp-19h]
  int v29; // [rsp+70h] [rbp-9h]

  KeyHandle = 0LL;
  v26 = 0;
  *a6 = 0;
  v28 = 0LL;
  v29 = 0;
  v8 = 0;
  Pool2 = 0LL;
  v10 = PiCMCaptureEnumerateInputData(a1);
  if ( v10 < 0 )
    return (unsigned int)v10;
  v11 = DWORD2(v28);
  if ( DWORD1(v28) || !a3 || a4 < 0x14 || (v12 = a4 - 20, a4 - 20 < 2) )
  {
LABEL_20:
    v17 = 3221225485LL;
    goto LABEL_16;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v8 = v12 >> 1;
    switch ( DWORD2(v28) )
    {
      case 1:
        v13 = *(_QWORD *)&PiPnpRtlCtx;
        v14 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 136LL);
        if ( !v14 )
        {
          v24 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 56LL);
          if ( v24 == *(_QWORD *)&PiPnpRtlCtx + 56LL )
            v14 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
          else
            v14 = v24 - 16;
          *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 136LL) = v14;
        }
        v15 = 5LL;
        break;
      case 2:
        v13 = *(_QWORD *)&PiPnpRtlCtx;
        v14 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 152LL);
        if ( !v14 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
          *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 152LL) = v14;
        }
        v15 = 7LL;
        break;
      case 3:
        v13 = *(_QWORD *)&PiPnpRtlCtx;
        v14 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 160LL);
        if ( !v14 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
          *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 160LL) = v14;
        }
        v15 = 8LL;
        break;
      default:
        goto LABEL_20;
    }
    CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey(v13, v14, v15, &KeyHandle);
    v17 = (unsigned int)CachedNodeBaseKey;
    if ( CachedNodeBaseKey < 0 )
      goto LABEL_16;
    v18 = RegRtlEnumKey(KeyHandle);
    v17 = v18;
    if ( v18 != -2147483622 )
      goto LABEL_14;
    if ( v11 == 3 && CmIsStateSeparationEnabled() )
    {
      v20 = PnpCtxRegQueryInfoKey(v17, KeyHandle, &v26, 0LL, 0LL, 0LL, 0LL);
      v17 = (unsigned int)v20;
      if ( v20 >= 0 )
      {
        if ( HIDWORD(v28) < v26 )
        {
          v17 = 3221225701LL;
        }
        else
        {
          v21 = *(_QWORD *)&PiPnpRtlCtx;
          v22 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 168LL);
          if ( !v22 )
          {
            v25 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 56LL);
            if ( v25 == *(_QWORD *)&PiPnpRtlCtx + 56LL )
              v22 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
            else
              v22 = v25 - 16;
            *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 168LL) = v22;
          }
          v23 = PnpCtxGetCachedNodeBaseKey(v21, v22, 9LL, &KeyHandle);
          v17 = (unsigned int)v23;
          if ( v23 >= 0 )
          {
            v17 = (unsigned int)RegRtlEnumKey(KeyHandle);
LABEL_14:
            if ( (int)v17 >= 0 )
            {
              v10 = PiCMReturnBufferResultData(v17, 2 * (v12 >> 1), 0LL, Pool2, 2 * (v12 >> 1), v29, a3, a4, a6);
              goto LABEL_17;
            }
          }
        }
      }
    }
    v8 = v12 >> 1;
    goto LABEL_16;
  }
  v17 = 3221225626LL;
LABEL_16:
  v10 = PiCMReturnBufferResultData(v17, 2 * v8, 0LL, 0LL, 0, v29, a3, a4, a6);
  if ( Pool2 )
LABEL_17:
    ExFreePoolWithTag(Pool2, 0x34706E50u);
  return (unsigned int)v10;
}
