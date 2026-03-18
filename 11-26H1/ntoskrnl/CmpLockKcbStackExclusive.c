/*
 * XREFs of CmpLockKcbStackExclusive @ 0x1408BA310
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1408BACF0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 */

void __fastcall CmpLockKcbStackExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    CmpLockKcbExclusive(KcbAtLayerHeight);
  }
}
