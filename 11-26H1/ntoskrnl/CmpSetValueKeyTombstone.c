/*
 * XREFs of CmpSetValueKeyTombstone @ 0x140B4F768
 * Callers:
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 * Callees:
 *     CmpAddValueKeyTombstone @ 0x140858F40 (CmpAddValueKeyTombstone.c)
 *     CmpFreeValue @ 0x1408D0BF4 (CmpFreeValue.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     CmpAddValueToListEx @ 0x1408DD8C8 (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpSetValueKeyTombstone(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int *v5; // rbx
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int *v12; // [rsp+20h] [rbp-28h]
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = (unsigned int *)(a2 + 36);
  v13 = -1;
  if ( !*(_DWORD *)(a2 + 36) || (v9 = HvpMarkCellDirty(BugCheckParameter2, *(_DWORD *)(a2 + 40), 0), v9 >= 0) )
  {
    v9 = CmpAddValueKeyTombstone(BugCheckParameter2, a3, a5, &v13);
    if ( v9 < 0 )
    {
      v10 = v13;
    }
    else
    {
      v12 = v5;
      v10 = v13;
      v9 = CmpAddValueToListEx(BugCheckParameter2, v13, a4, a5, v12, 1);
      if ( v9 >= 0 )
      {
        v10 = -1;
        v9 = 0;
      }
    }
    if ( v10 != -1 )
      CmpFreeValue(BugCheckParameter2, v10);
  }
  return (unsigned int)v9;
}
