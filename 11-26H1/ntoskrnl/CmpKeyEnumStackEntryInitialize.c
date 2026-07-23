/*
 * XREFs of CmpKeyEnumStackEntryInitialize @ 0x1409440B4
 * Callers:
 *     CmpKeyEnumStackReset @ 0x1409437A4 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackStart @ 0x140943C40 (CmpKeyEnumStackStart.c)
 *     CmpKeyEnumStackInitialize @ 0x140944064 (CmpKeyEnumStackInitialize.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryInitialize(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  _DWORD *v4; // rdx
  __int64 v5; // r8

  memset_0(a1, 0, 0x80uLL);
  HvpGetCellContextInitialize(a1 + 2);
  v2 = a1 + 12;
  do
  {
    HvpGetCellContextInitialize(v2 - 5);
    result = HvpGetCellContextInitialize(v2++);
    *v4 = -1;
  }
  while ( v5 != 1 );
  return result;
}
