/*
 * XREFs of PspIsParentProcess @ 0x14047908C
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x14091B690 (PspOneDirectionSecurityDomainCombine.c)
 *     PspThreadOpen @ 0x1409474A0 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x140A859D0 (PspProcessOpen.c)
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
