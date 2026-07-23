/*
 * XREFs of CmpGetValueData @ 0x140942400
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x140865978 (CmpPreserveSystemHiveData.c)
 *     CmpValueToData @ 0x140866670 (CmpValueToData.c)
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408D65E0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpCopyValue @ 0x1408E342C (CmpCopyValue.c)
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 *     CmpQueryKeyValueData @ 0x140941E50 (CmpQueryKeyValueData.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B10F94 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpGetValueForAudit @ 0x140B6B610 (CmpGetValueForAudit.c)
 *     CmpFindTagIndex @ 0x140CF5804 (CmpFindTagIndex.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall CmpGetValueData(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  _BYTE *v7; // r14
  unsigned __int16 v8; // bp
  __int64 *v9; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax
  bool result; // al
  __int64 CellFlat; // rax
  bool v18; // zf
  __int64 v19; // rdx
  __int64 CellPaged; // rax
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned int v25; // r12d
  void *v26; // rdi
  __int64 v27; // rdx
  const void *v28; // rax
  size_t v29; // r8
  unsigned int v30; // [rsp+70h] [rbp+18h] BYREF
  int v31; // [rsp+74h] [rbp+1Ch]
  __int64 Pool2; // [rsp+78h] [rbp+20h]

  v7 = (_BYTE *)a6;
  v8 = 0;
  v9 = (__int64 *)a5;
  *(_BYTE *)a6 = 0;
  *v9 = 0LL;
  v12 = *(_DWORD *)(a3 + 4);
  v13 = v12 + 0x80000000;
  if ( v12 < 0x80000000 )
    v13 = *(_DWORD *)(a3 + 4);
  *a4 = v13;
  if ( *(_DWORD *)(a3 + 4) >= 0x80000000 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, a7);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, a2);
    if ( CellFlat )
    {
      *v9 = a3 + 8;
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v13 - 16345 <= 0x7FFFC026 )
  {
    v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v19 = *(unsigned int *)(a3 + 8);
    v30 = -1;
    v31 = 0;
    Pool2 = 0LL;
    a6 = 0xFFFFFFFFLL;
    a5 = 0xFFFFFFFFLL;
    if ( v18 )
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v19);
    else
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v19, &v30);
    v21 = CellPaged;
    if ( CellPaged )
    {
      v22 = *(unsigned int *)(CellPaged + 4);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v23 = HvpGetCellFlat(BugCheckParameter3, v22, (unsigned int *)&a5);
      else
        v23 = HvpGetCellPaged(BugCheckParameter3, v22);
      v24 = v23;
      if ( v23 )
      {
        v25 = *(_DWORD *)(a3 + 4);
        Pool2 = ExAllocatePool2(0x100uLL);
        v26 = (void *)Pool2;
        if ( Pool2 )
        {
          while ( v8 < *(_WORD *)(v21 + 2) )
          {
            v27 = *(unsigned int *)(v24 + 4LL * v8);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v28 = (const void *)HvpGetCellFlat(BugCheckParameter3, v27, (unsigned int *)&a6);
            else
              v28 = (const void *)HvpGetCellPaged(BugCheckParameter3, v27);
            if ( !v28 )
            {
              v26 = (void *)Pool2;
              LOBYTE(v8) = 0;
              goto LABEL_33;
            }
            v29 = v25;
            if ( v25 > 0x3FD8 )
              v29 = 16344LL;
            v26 = (void *)Pool2;
            memmove((void *)(Pool2 + 16344LL * v8), v28, v29);
            v25 -= 16344;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, (__int64)&a6);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&a6);
            ++v8;
          }
          LOBYTE(v8) = 1;
        }
LABEL_33:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&a5);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&a5);
      }
      else
      {
        v26 = (void *)Pool2;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v30);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v30);
      if ( (_BYTE)v8 )
      {
        *v9 = (__int64)v26;
        result = 1;
        *v7 = 1;
        return result;
      }
      if ( v26 )
        ExFreePoolWithTag(v26, 0);
    }
    return 0;
  }
  v14 = *(unsigned int *)(a3 + 8);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v15 = HvpGetCellFlat(BugCheckParameter3, v14, a7);
  else
    v15 = HvpGetCellPaged(BugCheckParameter3, v14);
  *v9 = v15;
  return v15 != 0;
}
