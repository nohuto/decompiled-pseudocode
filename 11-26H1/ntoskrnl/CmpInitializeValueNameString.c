/*
 * XREFs of CmpInitializeValueNameString @ 0x1408C5BB4
 * Callers:
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1408C54A0 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpMergeKeyValues @ 0x140B2DE64 (CmpMergeKeyValues.c)
 * Callees:
 *     CmSiBugCheck @ 0x140534D04 (CmSiBugCheck.c)
 *     CmpCopyCompressedName @ 0x1408C82E0 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeValueNameString(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int16 v3; // r9
  unsigned __int16 v6; // r9
  __int64 result; // rax

  v3 = *(_WORD *)(BugCheckParameter3 + 2);
  if ( (*(_BYTE *)(BugCheckParameter3 + 16) & 1) != 0 )
  {
    v6 = 2 * v3;
    *(_WORD *)a2 = v6;
    if ( v6 > 0x7FFFu )
      CmSiBugCheck(0x31uLL, 1uLL, BugCheckParameter3, v6);
    result = CmpCopyCompressedName(a3, 0x7FFFLL, BugCheckParameter3 + 20, *(unsigned __int16 *)(BugCheckParameter3 + 2));
    *(_QWORD *)(a2 + 8) = a3;
    *(_WORD *)(a2 + 2) = 0x7FFF;
  }
  else
  {
    result = BugCheckParameter3 + 20;
    *(_WORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = BugCheckParameter3 + 20;
    *(_WORD *)(a2 + 2) = v3;
  }
  return result;
}
