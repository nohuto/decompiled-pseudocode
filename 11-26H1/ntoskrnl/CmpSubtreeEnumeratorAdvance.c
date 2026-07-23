/*
 * XREFs of CmpSubtreeEnumeratorAdvance @ 0x140943D6C
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140946A20 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     CmpKeyEnumStackReset @ 0x1409437A4 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140943F10 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140943FD8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpFindKcbInHashEntryByName @ 0x1409DF780 (CmpFindKcbInHashEntryByName.c)
 *     CmpHashCompressedComponent @ 0x140A4C950 (CmpHashCompressedComponent.c)
 *     CmpPopulateKcbStack @ 0x140A4E010 (CmpPopulateKcbStack.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140B42454 (CmpFindKcbInHashEntryByCompressedName.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorAdvance(__int16 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 KcbInHashEntryByName; // rax
  __int64 v11; // rdx
  __int64 KcbAtLayerHeight; // r15
  __int64 v13; // r9
  __int64 EntryAtLayerHeight; // rax
  bool v15; // zf
  int v16; // r13d
  unsigned int v17; // ebp
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __m128i v21; // [rsp+30h] [rbp-38h] BYREF

  v21 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v3 = *a1;
    if ( (v3 & 0x8000u) != 0LL )
      return (unsigned int)-2147483622;
    v4 = *((_QWORD *)a1 + 12);
    v5 = 408 * v3;
    v6 = 408 * v3 + v4 + 56;
    v7 = 408 * v3 + v4;
    if ( !*(_BYTE *)v7 )
    {
      CmpKeyEnumStackBeginEnumerationForKeyNodeStack(408 * v3 + v4 + 56, *(_QWORD *)(v7 + 16), 0LL);
      *(_BYTE *)(v5 + v4) = 1;
    }
    if ( (unsigned int)CmpKeyEnumStackAdvance(v6) != -2147483622 )
      break;
    CmpKeyEnumStackReset(v6);
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v5 + v4 + 8) = 0LL;
    *(_BYTE *)(v5 + v4) = 0;
    --*a1;
  }
  v8 = *(_QWORD *)(v5 + v4 + 8);
  if ( v8 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v8, a1[1]);
    v13 = 0LL;
    while ( (v11 & 0x8000u) == 0LL )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v5 + v4 + 64, v11);
      if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
      {
        v13 = *(_QWORD *)(EntryAtLayerHeight + 16);
        break;
      }
      LOWORD(v11) = v11 - 1;
    }
    v15 = (*(_BYTE *)(v13 + 2) & 0x20) == 0;
    v16 = v13 + 76;
    v17 = *(unsigned __int16 *)(v13 + 72);
    v21.m128i_i64[1] = v13 + 76;
    v21.m128i_i16[0] = v17;
    v21.m128i_i16[1] = v17;
    if ( v15 )
    {
      v19 = CmpHashUnicodeComponent(&v21);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByName(
                               *(_QWORD *)(KcbAtLayerHeight + 32),
                               (unsigned int)(v19 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16)),
                               KcbAtLayerHeight,
                               &v21);
    }
    else
    {
      v18 = CmpHashCompressedComponent(v13 + 76, v17);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByCompressedName(
                               *(_QWORD *)(KcbAtLayerHeight + 32),
                               v18 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                               KcbAtLayerHeight,
                               v16,
                               v17);
    }
  }
  else
  {
    KcbInHashEntryByName = 0LL;
  }
  *(_QWORD *)(v5 + v4 + 424) = v5 + v4 + 64;
  if ( KcbInHashEntryByName )
  {
    CmpPopulateKcbStack(v5 + v4 + 24, KcbInHashEntryByName);
    *(_QWORD *)(v5 + v4 + 416) = v20;
  }
  ++*a1;
  return v2;
}
