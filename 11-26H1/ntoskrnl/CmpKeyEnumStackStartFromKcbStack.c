/*
 * XREFs of CmpKeyEnumStackStartFromKcbStack @ 0x140984E0C
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1408607FC (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408BACF0 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpKeyEnumStackStart @ 0x140981C30 (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStack @ 0x140981CC8 (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140981F00 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140982164 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpCleanupKeyNodeStack @ 0x140982470 (CmpCleanupKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKcbStack(__int16 *a1, __int64 a2, __int64 a3)
{
  __int16 *v5; // r15
  _OWORD *v6; // r9
  __int64 v7; // r9
  __int64 v8; // r8
  int started; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  _OWORD *v12; // rbp
  __int64 v13; // rsi
  _OWORD *v14; // r14
  __int64 KcbAtLayerHeight; // rax
  __int64 v16; // rdx
  ULONG_PTR v17; // rcx
  __int64 CellFlat; // rax
  unsigned __int16 v21; // [rsp+30h] [rbp-98h] BYREF
  _OWORD v22[4]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-50h]

  v5 = a1;
  memset_0(&v21, 0, 0x50uLL);
  v6 = v22;
  do
  {
    CmpKeyNodeStackEntryInitialize((__int64)v6);
    v6 = (_OWORD *)(v7 + 32);
  }
  while ( v8 != 1 );
  started = CmpStartKeyNodeStack((__int64)&v21, *(_WORD *)(a2 + 2));
  v10 = 0;
  if ( started < 0 )
    goto LABEL_21;
  v11 = *(__int16 *)(a2 + 2);
  if ( (v11 & 0x8000u) == 0LL )
  {
    v12 = &v22[2 * v11];
    v13 = 32LL * (__int16)(v11 - 2);
    do
    {
      if ( (unsigned __int16)v11 >= 2u )
        v14 = (_OWORD *)(v13 + v23);
      else
        v14 = v12;
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v11);
      v16 = *(unsigned int *)(KcbAtLayerHeight + 40);
      if ( (_DWORD)v16 != -1 )
      {
        v17 = *(_QWORD *)(KcbAtLayerHeight + 32);
        *(_QWORD *)v14 = v17;
        *((_DWORD *)v14 + 2) = v16;
        if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v17, v16, (unsigned int *)v14 + 6);
        else
          CellFlat = HvpGetCellPaged(v17, v16);
        *((_QWORD *)v14 + 2) = CellFlat;
      }
      v13 -= 32LL;
      v12 -= 2;
      LOWORD(v11) = v11 - 1;
    }
    while ( (v11 & 0x8000u) == 0LL );
    v5 = a1;
  }
  if ( a3 )
    v5[1] = *(_WORD *)(a3 + 4);
  started = CmpKeyEnumStackStart((__int64)v5, v21);
  if ( started < 0 )
LABEL_21:
    v10 = started;
  else
    CmpKeyEnumStackBeginEnumerationForKeyNodeStack(v5, (__int64)&v21);
  CmpCleanupKeyNodeStack((__int64)&v21);
  return v10;
}
