/*
 * XREFs of IoSetOplockKeyContext @ 0x14030CDF4
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14030CCC0 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoSetOplockKeyContext(__int64 a1, __int128 *a2, unsigned __int16 a3)
{
  int v3; // r15d
  __int64 *v6; // rdi
  unsigned int v7; // ebx
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int64 *Pool2; // r12
  unsigned int v13; // ebp

  v3 = a3;
  if ( (unsigned __int16)(a3 - 1) > 1u )
    return 3221225485LL;
  v6 = *(__int64 **)(a1 + 208);
  v7 = 0;
  if ( v6 )
  {
    if ( v6 != qword_1400137E0 )
      goto LABEL_4;
    return (unsigned int)-1073741670;
  }
  Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
  v6 = Pool2;
  v13 = Pool2 == 0LL ? 0xC000009A : 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
  {
    if ( Pool2 && Pool2 != qword_1400137E0 )
      ExFreePoolWithTag(Pool2, 0);
    v6 = *(__int64 **)(a1 + 208);
  }
  if ( !Pool2 )
    return v13;
LABEL_4:
  v8 = ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&IopOplockFoExtLookasideList);
  if ( !v8 )
    return 3221225626LL;
  *v8 = 0LL;
  v8[1] = 0LL;
  v8[2] = 0LL;
  *(_WORD *)v8 = v3;
  if ( v3 == 1 )
  {
    v10 = *a2;
  }
  else
  {
    if ( v3 != 2 )
      goto LABEL_12;
    if ( *((_BYTE *)a2 + 32) )
    {
      v9 = *a2;
      *((_WORD *)v8 + 1) |= 1u;
      *(_OWORD *)((char *)v8 + 4) = v9;
    }
    if ( !*((_BYTE *)a2 + 33) )
      goto LABEL_12;
    v10 = a2[1];
  }
  *((_WORD *)v8 + 1) |= 2u;
  *(_OWORD *)((char *)v8 + 20) = v10;
LABEL_12:
  if ( _InterlockedCompareExchange64(v6 + 7, (signed __int64)v8, 0LL) )
  {
    v7 = -1073741823;
    ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&IopOplockFoExtLookasideList, v8);
  }
  return v7;
}
