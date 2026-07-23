/*
 * XREFs of VmpFillSlat @ 0x1406C4B94
 * Callers:
 *     VmpProcessUpdateSlat @ 0x1406C5468 (VmpProcessUpdateSlat.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     HvlMapSparseGpaPages @ 0x140488880 (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x140489414 (HvlMapGpaPages.c)
 *     VmpLogLargeSlatFill @ 0x1406C6A0C (VmpLogLargeSlatFill.c)
 *     VmpLogSlatFillFailure @ 0x1406C6C70 (VmpLogSlatFillFailure.c)
 *     VmpLogSparseSlatFill @ 0x1406C6DC0 (VmpLogSparseSlatFill.c)
 */

__int64 __fastcall VmpFillSlat(__int64 a1, int a2, unsigned __int64 a3, __int64 *a4, __int64 *a5)
{
  int v7; // ebp
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 *i; // rcx
  __int64 *v12; // rsi
  int v13; // ebx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  v7 = a2;
  if ( _bittest64(*((const signed __int64 **)stru_140F06A28.StackBase + 1), 1u) )
    v7 = a2 | 0x400000;
  if ( a3 != 512 )
    goto LABEL_20;
  if ( (*a4 & 0x1FF) != 0 )
    goto LABEL_20;
  v9 = a4[1];
  if ( (v9 & 0x1FF) != 0 )
    goto LABEL_20;
  v10 = a4 + 1024;
  if ( a4[1022] != *a4 + 511 || a4[1023] != v9 + 511 )
    goto LABEL_20;
  for ( i = a4 + 2; i < v10; i += 2 )
  {
    if ( *i != *(i - 2) + 1 )
      goto LABEL_20;
    if ( i[1] != *(i - 1) + 1 )
      break;
  }
  if ( i == v10 )
  {
    *(_WORD *)(a1 + 152) |= 1u;
    v12 = a5;
    v13 = HvlMapGpaPages(*(_QWORD *)(a1 + 120), *a4, v7 | 0x80000000, 1uLL, (__int64)(a4 + 1), a5);
    if ( stru_140F06A28.InitialStack
      && *(_DWORD *)stru_140F06A28.InitialStack
      && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 1LL) )
    {
      VmpLogLargeSlatFill(v14, *a4, a4[1], v7, *(_QWORD *)(a1 + 120), v13);
    }
    if ( v13 >= 0 )
    {
      *a5 <<= 9;
      goto LABEL_25;
    }
  }
  else
  {
LABEL_20:
    v12 = a5;
    v13 = HvlMapSparseGpaPages(*(_QWORD *)(a1 + 120), v7, a3, (__int64)a4, a5);
    if ( stru_140F06A28.InitialStack
      && *(_DWORD *)stru_140F06A28.InitialStack
      && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 1LL) )
    {
      VmpLogSparseSlatFill(v15, (_DWORD)a4, a3, v7, *(_QWORD *)(a1 + 120), v13);
    }
    if ( v13 >= 0 )
    {
LABEL_25:
      if ( a3 == *v12 )
        return (unsigned int)v13;
    }
  }
  if ( stru_140F06A28.InitialStack
    && *(_DWORD *)stru_140F06A28.InitialStack
    && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 65LL) )
  {
    VmpLogSlatFillFailure(v16, (_DWORD)a4, a3, v7, *(_QWORD *)(a1 + 120), *(_DWORD *)v12, v13);
  }
  return (unsigned int)v13;
}
