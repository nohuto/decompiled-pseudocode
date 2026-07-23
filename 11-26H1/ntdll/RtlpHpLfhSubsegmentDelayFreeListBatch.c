/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180064260
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x180063C80 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeListBatch(
        _QWORD *a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        int a5)
{
  int v6; // r14d
  unsigned int v9; // edi
  unsigned __int16 v10; // si
  unsigned int v11; // r15d
  char v12; // bp
  unsigned __int16 *v13; // r14
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 *v17; // r14
  unsigned __int64 *v18; // rsi
  volatile signed __int64 *v19; // rbx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rcx
  __int64 v25; // [rsp+20h] [rbp-288h]
  size_t v27; // [rsp+48h] [rbp-260h]
  _QWORD v28[64]; // [rsp+50h] [rbp-258h] BYREF

  v6 = a5;
  v27 = 8 * (unsigned int)*(unsigned __int8 *)(a2 + 24) - 64;
  memset_thunk_772440563353939046(v28, 255, v27);
  v9 = -1;
  if ( !a3 )
    return 0xFFFFFFFFLL;
  v10 = a3;
  do
  {
    v11 = v9;
    v9 = v10 - 1;
    v12 = v9;
    v13 = (unsigned __int16 *)(a4 + v9 * v6);
    v10 = *v13;
    if ( *((_DWORD *)v13 + 2) != ((unsigned int)v13 ^ HIDWORD(a1[11]) ^ __ROL4__(*(_DWORD *)v13 ^ a1[11], *v13)) )
    {
      RtlpLogHeapFailure(23, (_DWORD)a1, (_DWORD)v13, a2, v9, 0LL);
      NT_ASSERT("0");
    }
    v14 = v9;
    if ( v11 < v9 )
      v9 = v11;
    v15 = v28[v14 >> 5];
    v16 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v12 & 0x1F);
    v28[v14 >> 5] = v15 & v16;
    if ( ((unsigned int)v15 & ~(_DWORD)v16) == 0 )
    {
      RtlpLogHeapFailure(17, *a1, (_DWORD)v13, a2, v14, 0LL);
      NT_ASSERT("0");
    }
    v6 = a5;
  }
  while ( v10 );
  if ( v9 == -1 )
    return v9;
  v17 = &v28[v27 >> 3];
  v18 = &v28[(unsigned __int64)v9 >> 5];
  if ( v18 >= v17 )
    return v9;
  v19 = (volatile signed __int64 *)((char *)v18 + a2 - (_QWORD)v28 + 64);
  do
  {
    v20 = *v18;
    if ( *v18 != -1LL )
    {
      v21 = (unsigned int)v20 | (unsigned __int64)*(unsigned int *)v19;
      if ( v21 != 0xFFFFFFFF )
      {
        _RCX = ~v21;
        __asm { tzcnt   rcx, rcx }
        v25 = 32 * (unsigned int)(((__int64)v19 - 64 - a2) >> 3) + (unsigned int)_RCX;
        RtlpLogHeapFailure(17, *a1, a4 + a5 * v25, a2, v25, 0LL);
        NT_ASSERT("0");
      }
      _InterlockedAnd64(v19, v20);
    }
    ++v18;
    ++v19;
  }
  while ( v18 < v17 );
  return v9;
}
