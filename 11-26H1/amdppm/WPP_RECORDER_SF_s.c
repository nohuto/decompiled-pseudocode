/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1400070F8
 * Callers:
 *     CpcInitRegisterAddresses @ 0x140026D60 (CpcInitRegisterAddresses.c)
 *     AcpiParseLpiObject @ 0x14002AA00 (AcpiParseLpiObject.c)
 *     Display_LPI @ 0x14002C824 (Display_LPI.c)
 *     ValidateAcpiCPC @ 0x14002FA98 (ValidateAcpiCPC.c)
 *     ValidateAcpiCStates @ 0x14002FE30 (ValidateAcpiCStates.c)
 *     ValidateAcpiThrottleStates @ 0x1400301CC (ValidateAcpiThrottleStates.c)
 *     ValidatePccEntry @ 0x140031498 (ValidatePccEntry.c)
 *     LpiEnumerateDependencies @ 0x14003E8B8 (LpiEnumerateDependencies.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  __int64 v6; // rdi
  unsigned __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rbp
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  const wchar_t *v16; // rcx
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+70h] [rbp+8h]

  v20 = a1;
  v6 = -1LL;
  v8 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = 10LL;
  v12 = a6;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8), 43LL, a5, a4, v16, v15, 0LL);
    a1 = v20;
  }
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v10 = 2 * v6 + 2;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v12 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v19, v12, v10, 0LL);
}
