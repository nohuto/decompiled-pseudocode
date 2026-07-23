/*
 * XREFs of CmpMarkIndexDirty @ 0x1408C3D30
 * Callers:
 *     CmpMarkKeyDirty @ 0x1408C3494 (CmpMarkKeyDirty.c)
 *     CmpMarkKeyParentDirty @ 0x140B00B7C (CmpMarkKeyParentDirty.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x1408C3EF4 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpCopyCompressedName @ 0x1408C82E0 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpMarkIndexDirty(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  struct _PRIVILEGE_SET *v4; // r14
  unsigned int v5; // r9d
  __int64 CellFlat; // rax
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 Pool; // rax
  __int64 CellPaged; // rax
  int v11; // esi
  unsigned int i; // ebx
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  HvpGetCellContextInitialize(&v14);
  HvpGetCellContextInitialize(&v15);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, (unsigned int *)&v15);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v7 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) == 0 )
    goto LABEL_7;
  v8 = (unsigned __int16)(2 * *(_WORD *)(CellFlat + 72));
  Pool = CmpAllocatePool(0x100uLL);
  v4 = (struct _PRIVILEGE_SET *)Pool;
  if ( Pool )
  {
    CmpCopyCompressedName(Pool, v8, v7 + 76, *(unsigned __int16 *)(v7 + 72));
LABEL_7:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, (unsigned int *)&v14);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    if ( CellPaged )
    {
      v11 = 0;
      for ( i = -1073741772; v11 < *(_DWORD *)(BugCheckParameter3 + 216); ++v11 )
      {
        i = CmpMarkIndexDirtyInStorageType(BugCheckParameter3, v11);
        if ( i != -1073741772 )
          break;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v14);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v14);
    }
    else
    {
      i = -1073741670;
    }
    if ( v4 )
      CmSiFreeMemory(v4);
    goto LABEL_16;
  }
  i = -1073741670;
LABEL_16:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v15);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v15);
  return i;
}
