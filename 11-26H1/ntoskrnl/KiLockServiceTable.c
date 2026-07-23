/*
 * XREFs of KiLockServiceTable @ 0x140718194
 * Callers:
 *     KeCompactServiceTable @ 0x1405EBF24 (KeCompactServiceTable.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x14042B178 (RtlCaptureImageExceptionValues.c)
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     RtlpConvertFunctionEntry @ 0x1404B6FE0 (RtlpConvertFunctionEntry.c)
 *     RtlLookupExceptionHandler @ 0x1405255F8 (RtlLookupExceptionHandler.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KiLockExtendedServiceTable @ 0x140542A48 (KiLockExtendedServiceTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KiFastGetCallersAddress @ 0x140D08074 (KiFastGetCallersAddress.c)
 *     KiFatalExceptionFilter @ 0x140D08080 (KiFatalExceptionFilter.c)
 */

void __fastcall KiLockServiceTable(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 CallersAddress; // r8
  __int64 v9; // r11
  ULONG v10; // r9d
  unsigned __int64 v11; // r8
  unsigned int *v12; // rcx
  int v13; // edx
  int v14; // r9d
  int v15; // r10d
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v16; // rax
  __int64 v17; // r9
  int v18; // eax
  int v19; // r8d
  unsigned int i; // ecx
  _QWORD v21[2]; // [rsp+48h] [rbp-10h] BYREF
  ULONG v22; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
    KeExitRetpoline(a1, a2);
  else
    _mm_lfence();
  KiLockExtendedServiceTable(a1, a2, a3, a4);
  if ( !a4 )
  {
    _mm_lfence();
    RtlCaptureImageExceptionValues((void *)0x140000000LL, v21, &v22);
    if ( !v21[0] )
      KeBugCheck(0x31u);
    CallersAddress = KiFastGetCallersAddress();
    v10 = v22 / 0xC;
    if ( !(v22 / 0xC) )
      goto LABEL_17;
    v11 = CallersAddress - 0x140000000LL;
    v12 = (unsigned int *)(v9 + 12LL * (v10 - 1));
    if ( v11 < *v12 )
    {
      v13 = 0;
      v14 = v10 - 2;
      while ( v14 >= v13 )
      {
        v15 = (v13 + v14) >> 1;
        v12 = (unsigned int *)(v9 + 12LL * v15);
        if ( v11 >= *v12 )
        {
          if ( v11 < v12[3] )
            break;
          v13 = v15 + 1;
        }
        else
        {
          v14 = v15 - 1;
        }
      }
    }
    if ( v11 < *v12 || v11 >= v12[1] )
LABEL_17:
      v12 = 0LL;
    if ( !v12 )
      KeBugCheck(0x31u);
    v16 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpConvertFunctionEntry((unsigned __int64)v12, 0x140000000uLL);
    v18 = RtlLookupExceptionHandler(v16, 0x140000000uLL, 1u, v17, 0LL, v21);
    if ( v18 < 0 )
      KeBugCheckEx(0x31u, v18, 0LL, 0LL, 0LL);
    v19 = 1;
    for ( i = 0; i < *(_DWORD *)v21[0]; ++i )
    {
      if ( i )
      {
        if ( *(_DWORD *)(v21[0] + 16LL * i + 12) != v19 )
          KeBugCheck(0x31u);
      }
      v19 = *(_DWORD *)(v21[0] + 16LL * i + 12);
    }
    if ( v19 == 1 )
      KeBugCheck(0x31u);
    guard_dispatch_icall_no_overrides(0LL, 0LL);
  }
}
