/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x1800B5D9C
 * Callers:
 *     PssNtWalkSnapshot @ 0x1800B5A00 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 896);
  v10 = 0LL;
  if ( !v4 )
    return 3221226021LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !*a2 )
  {
    result = ZwMapViewOfSection(v4, -1LL, a2, 0LL, 0LL, 0LL, &v10, 1, 0, 2);
    if ( (int)result < 0 )
      return result;
    a2[1] = 0LL;
  }
  v7 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 888) )
    return 2147483674LL;
  if ( !a3 )
    return 261LL;
  v9 = *(_QWORD *)(a1 + 904);
  memset_thunk_772440563353939046(a3, 0, 0x50uLL);
  *a3 = *(_QWORD *)((v7 << 6) + v9);
  *(_OWORD *)(a3 + 1) = *(_OWORD *)((v7 << 6) + v9 + 8);
  *(_OWORD *)(a3 + 3) = *(_OWORD *)((v7 << 6) + v9 + 24);
  *(_OWORD *)(a3 + 5) = *(_OWORD *)((v7 << 6) + v9 + 40);
  a3[7] = *(_QWORD *)((v7 << 6) + v9 + 56);
  a3[8] = *a2 + (unsigned int)((_DWORD)v7 << 12);
  result = 0LL;
  *((_DWORD *)a3 + 18) = 4096;
  a2[1] = (unsigned int)(v7 + 1);
  return result;
}
