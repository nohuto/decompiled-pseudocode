/*
 * XREFs of CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140943F10
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x140943D6C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140946E1C (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14094436C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140944550 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140944570 (CmpKeyEnumStackEntryBegin.c)
 */

__int64 __fastcall CmpKeyEnumStackBeginEnumerationForKeyNodeStack(__int16 *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 i; // bx
  __int64 v6; // rdx
  _QWORD *v7; // r9
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // edi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  for ( i = *a1; i >= 0; i += result )
  {
    CmpKeyNodeStackGetEntryAtLayerHeight(a2, (unsigned __int16)i);
    CmpKeyEnumStackGetEntryAtLayerHeight(a1, v6);
    if ( v7[2] )
    {
      result = CmpGetEffectiveKeyNodeSemantics(*v7);
      v10 = result;
      if ( (_DWORD)result == 1 )
        return result;
      result = CmpKeyEnumStackEntryBegin(v9, v8);
      if ( (v10 & 0xFFFFFFFD) != 0 )
        return result;
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0xFFFFLL;
    }
  }
  return result;
}
