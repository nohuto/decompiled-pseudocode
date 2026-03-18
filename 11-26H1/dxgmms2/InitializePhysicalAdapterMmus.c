/*
 * XREFs of InitializePhysicalAdapterMmus @ 0x1400AF998
 * Callers:
 *     CreateAndInitializeSegmentsAndMmus @ 0x1400AE950 (CreateAndInitializeSegmentsAndMmus.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall InitializePhysicalAdapterMmus(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int16 i; // bx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx

  for ( i = 0; i < a3; ++i )
  {
    v6 = operator new(1LL, 0x62306956u, 256LL);
    v7 = i;
    if ( !v6 )
    {
      _InterlockedAdd(&dword_14008A8F8, 1u);
      WdLogSingleEntry1(6LL, i);
      WdLogGlobalForLineNumber = 730;
      DxgkLogInternalTriageEvent(v8, 262145LL);
      return 3221225495LL;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 1888) + 8 * v7) = v6;
  }
  return 0LL;
}
