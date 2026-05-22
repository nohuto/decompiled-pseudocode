/*
 * XREFs of ?BuildRequestForInputHitTestRequest@HitTestHelper@@SA?AUHitTestRequest@1@PEBU_InputHitTestRequest@@K@Z @ 0x1801A1EB4
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

_DWORD *__fastcall HitTestHelper::BuildRequestForInputHitTestRequest(_DWORD *a1, __int64 a2)
{
  memset_0(a1, 0, 0x88uLL);
  *a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 1) = *(_QWORD *)(a2 + 20);
  a1[26] = *(_DWORD *)(a2 + 64);
  *((_QWORD *)a1 + 14) = *(_QWORD *)(a2 + 68);
  return a1;
}
