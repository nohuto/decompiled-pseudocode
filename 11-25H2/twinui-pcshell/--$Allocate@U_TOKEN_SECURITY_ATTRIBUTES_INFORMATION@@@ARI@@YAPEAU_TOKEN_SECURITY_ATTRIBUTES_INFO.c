/*
 * XREFs of ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@_K@Z @ 0x180190FF8
 * Callers:
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1806539C8 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ARI::Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(unsigned __int64 a1)
{
  if ( is_mul_ok(a1, 0x10uLL) )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (a1 * (unsigned __int128)0x10uLL) >> 64, 16 * a1);
  else
    return 0LL;
}
