/*
 * XREFs of FsRtlRegisterUncProviderEx2 @ 0x140790D60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpRegisterUncProvider @ 0x140790F6C (FsRtlpRegisterUncProvider.c)
 */

__int64 __fastcall FsRtlRegisterUncProviderEx2(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( *(_WORD *)(a3 + 2) >= 0x200u )
    return FsRtlpRegisterUncProvider(a1, a2, a3, a4);
  *a4 = -1LL;
  return 3221225485LL;
}
