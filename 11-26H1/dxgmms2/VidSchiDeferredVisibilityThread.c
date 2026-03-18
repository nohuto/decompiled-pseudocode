/*
 * XREFs of VidSchiDeferredVisibilityThread @ 0x1400436A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchSuspendAdapter @ 0x1401088A0 (VidSchSuspendAdapter.c)
 *     VidSchResumeAdapter @ 0x140117E00 (VidSchResumeAdapter.c)
 */

NTSTATUS __fastcall VidSchiDeferredVisibilityThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  char v5; // bp
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rsi
  NTSTATUS result; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+28h] [rbp-70h]
  __int64 v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  int v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+58h] [rbp-40h]
  char v21; // [rsp+60h] [rbp-38h]

  v19 = -1;
  v20 = 0LL;
  if ( (qword_14008A010 & 2) != 0 )
  {
    v21 = 1;
    v19 = 4024;
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 4024);
  }
  else
  {
    v21 = 0;
  }
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[82])(&v19, 4024LL);
  ((void (__fastcall *)(__int64, __int64))DxgCoreInterface[15])(a1, 3LL);
  if ( *(_DWORD *)(a1 + 200) == 1 )
  {
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 3044);
    v7 = 0;
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 3168) + 744LL);
    _InterlockedExchange((volatile __int32 *)(v8 + 2744), 0);
    if ( *(_DWORD *)(v8 + 48) )
    {
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v8 + 8LL * v7 + 3448) + 78944LL), 0, 3) == 3 )
        {
          if ( *(int *)(a1 + 3044) < 3100 )
          {
            if ( v6 >= 3000 && !v5 )
            {
              VidSchSuspendAdapter(v8, 0LL, 0LL);
              v5 = 1;
            }
          }
          else
          {
            v5 = 0;
          }
          LOBYTE(v4) = 1;
          LOBYTE(v15) = v5;
          v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))DxgCoreInterface[33])(
                  *(_QWORD *)(a1 + 3160),
                  v7,
                  v4,
                  0x2000LL,
                  v15,
                  v16,
                  v17,
                  v18);
          if ( v12 < 0 )
          {
            v13 = v12;
            WdLogSingleEntry3(1LL, v7, a1, v12);
            v18 = 0LL;
            v17 = v13;
            v16 = a1;
            v15 = v7;
            WdLogGlobalForLineNumber = 29500;
            DxgkLogInternalTriageEvent(v14, 0x40000LL);
          }
        }
        ++v7;
      }
      while ( v7 < *(_DWORD *)(v8 + 48) );
      if ( v5 )
        VidSchResumeAdapter(v8, 0LL);
    }
  }
  ((void (__fastcall *)(__int64, __int64))DxgCoreInterface[16])(a1, 3LL);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ((void (__fastcall *)(_QWORD, __int64))DxgCoreInterface[4])(*(_QWORD *)(a1 + 16), a1);
  result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[83])(&v19);
  if ( v21 )
  {
    if ( (byte_14008A202 & 1) != 0 )
      return McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v19);
  }
  return result;
}
