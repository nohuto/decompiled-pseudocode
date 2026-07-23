/*
 * XREFs of CmRmIsKCBVisible @ 0x140A41AB0
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1408C94A0 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 */

char __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3 )
    goto LABEL_2;
  if ( !a2 )
    return a2;
  if ( a2 == v3 )
  {
LABEL_2:
    LOBYTE(a2) = 1;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 56);
    if ( v4 && (v5 = *(_QWORD *)(v3 + 56)) != 0 )
      LOBYTE(a2) = v4 == v5;
    else
      LOBYTE(a2) = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v3 + 88));
  }
  return a2;
}
