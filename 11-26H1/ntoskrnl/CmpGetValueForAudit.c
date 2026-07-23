/*
 * XREFs of CmpGetValueForAudit @ 0x140B6B610
 * Callers:
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpGetValueForAudit(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  void *v7; // r14
  __int64 v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // rsi
  unsigned int v11; // ebx
  void *Pool; // rax
  int v13; // eax
  size_t Size; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  void *Src; // [rsp+58h] [rbp-8h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF

  v3 = 0;
  v17 = 0LL;
  v16 = 0LL;
  Src = 0LL;
  LOBYTE(v19) = 0;
  HvpGetCellContextInitialize(&v17);
  v7 = 0LL;
  HvpGetCellContextInitialize(&v16);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, (unsigned int *)&v16);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v8);
  v10 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  LODWORD(Size) = 0;
  if ( !*(_DWORD *)(CellFlat + 4) )
    goto LABEL_12;
  if ( CmpGetValueData(
         BugCheckParameter3,
         a2,
         CellFlat,
         (unsigned int *)&Size,
         (__int64)&Src,
         (__int64)&v19,
         (unsigned int *)&v17) )
  {
    v3 = Size;
    if ( (_DWORD)Size )
    {
      Pool = (void *)CmpAllocatePool(0x100uLL);
      v7 = Pool;
      if ( !Pool )
        goto LABEL_8;
      memmove(Pool, Src, v3);
    }
LABEL_12:
    v13 = *(_DWORD *)(v10 + 12);
    *(_DWORD *)(a3 + 4) = v3;
    v11 = 0;
    *(_DWORD *)a3 = v13;
    *(_QWORD *)(a3 + 8) = v7;
    goto LABEL_13;
  }
LABEL_8:
  v11 = -1073741670;
LABEL_13:
  if ( Src )
  {
    if ( (_BYTE)v19 )
    {
      ExFreePoolWithTag(Src, 0);
    }
    else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v17);
    }
    else
    {
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v17);
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v16);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v16);
  return v11;
}
