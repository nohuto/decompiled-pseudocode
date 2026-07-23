/*
 * XREFs of CmpAddValueToListEx @ 0x1408E3E88
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x1408E3FE4 (CmpSetValueKeyNew.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpMergeKeyValues @ 0x140B2DE64 (CmpMergeKeyValues.c)
 *     CmpSetValueKeyTombstone @ 0x140B51FF8 (CmpSetValueKeyTombstone.c)
 *     CmpSyncKeyValues @ 0x140B65AF8 (CmpSyncKeyValues.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     HvReallocateCell @ 0x1408E3254 (HvReallocateCell.c)
 */

__int64 __fastcall CmpAddValueToListEx(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        int a6)
{
  unsigned int *v6; // r15
  __int64 v8; // r12
  unsigned int v10; // r10d
  __int64 v11; // rbx
  unsigned int v12; // esi
  int v13; // edx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // r14d
  unsigned int v18; // r8d
  _DWORD *v19; // r8
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF

  v6 = a5;
  LODWORD(a5) = 0;
  v20 = 0LL;
  v21 = 0LL;
  v8 = a3;
  HvpGetCellContextInitialize(&v20);
  v11 = *v6;
  v12 = v11 + 1;
  if ( (unsigned int)(v11 + 1) > 1 )
  {
    if ( v12 >= 0x64 )
    {
      v18 = 4 * ((v11 + 100) & 0xFFFFFF9C);
      if ( v18 > 0x1000 )
        v18 = (v18 + 4095) & 0xFFFFF000;
    }
    else
    {
      v18 = 4 * v12;
    }
    v14 = HvReallocateCell(BugCheckParameter2, v6[1], v18, 1, (unsigned int *)&a5, &v21, &v20);
  }
  else
  {
    v13 = 1;
    if ( a6 )
      v13 = a6;
    v14 = HvAllocateCell(BugCheckParameter2, 4 * v13, v10, (unsigned int *)&a5, &v21, (__int64)&v20);
  }
  v15 = v21;
  v16 = v14;
  if ( v14 >= 0 )
  {
    v6[1] = (unsigned int)a5;
    if ( (unsigned int)v11 > (unsigned int)v8 )
    {
      v19 = (_DWORD *)(v15 + 4 * v11);
      do
      {
        v11 = (unsigned int)(v11 - 1);
        *v19-- = *(_DWORD *)(v15 + 4 * v11);
      }
      while ( (unsigned int)v11 > (unsigned int)v8 );
    }
    *(_DWORD *)(v15 + 4 * v8) = a2;
    v16 = 0;
    *v6 = v12;
  }
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v20);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v20);
  }
  return v16;
}
