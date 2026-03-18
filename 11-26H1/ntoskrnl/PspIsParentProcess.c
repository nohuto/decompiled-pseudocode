/*
 * XREFs of PspIsParentProcess @ 0x14047F71C
 * Callers:
 *     PspThreadOpen @ 0x1409854A0 (PspThreadOpen.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1409FE890 (PspOneDirectionSecurityDomainCombine.c)
 *     PspProcessOpen @ 0x140A7FB60 (PspProcessOpen.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsParentProcess(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a2 + 720) == *(_QWORD *)(a1 + 464) )
    return *(_QWORD *)(a2 + 1656) > *(_QWORD *)(a1 + 1656);
  return result;
}
