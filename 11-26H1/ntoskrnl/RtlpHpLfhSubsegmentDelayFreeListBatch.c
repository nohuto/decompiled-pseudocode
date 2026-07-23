/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x14034DC40
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeListBatch(
        _QWORD *a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        int a5)
{
  __int64 v8; // rdi
  unsigned int v9; // r15d
  unsigned __int16 v10; // r12
  unsigned int v11; // r13d
  char v12; // si
  unsigned __int16 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 *v16; // r12
  unsigned __int64 *v17; // rdi
  volatile signed __int64 *v18; // rbx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // [rsp+20h] [rbp-178h]
  unsigned __int64 v27; // [rsp+40h] [rbp-158h]
  _QWORD v28[32]; // [rsp+50h] [rbp-148h] BYREF

  v8 = a4;
  v27 = 8 * (unsigned int)*(unsigned __int8 *)(a2 + 24) - 64;
  memset_0(v28, 255, (unsigned int)v27);
  v9 = -1;
  if ( !a3 )
    return 0xFFFFFFFFLL;
  v10 = a3;
  do
  {
    v11 = v9;
    v9 = v10 - 1;
    v12 = v9;
    v13 = (unsigned __int16 *)(v8 + a5 * v9);
    v10 = *v13;
    if ( *((_DWORD *)v13 + 2) != ((unsigned int)v13 ^ HIDWORD(a1[11]) ^ __ROL4__(*(_DWORD *)v13 ^ a1[11], *v13)) )
    {
      RtlpLogHeapFailure(23, (_DWORD)a1, v8 + a5 * v9, a2, v9, 0LL);
      NT_ASSERT("0");
    }
    v24 = v9;
    if ( v11 < v9 )
      v9 = v11;
    v14 = v28[v24 >> 6];
    v15 = __ROL8__(-2LL, v12 & 0x3F);
    v28[v24 >> 6] = v14 & v15;
    if ( (~v15 & v14) == 0 )
    {
      RtlpLogHeapFailure(17, *a1, (_DWORD)v13, a2, v24, 0LL);
      NT_ASSERT("0");
    }
    v8 = a4;
  }
  while ( v10 );
  if ( v9 == -1 )
    return v9;
  v16 = &v28[v27 >> 3];
  v17 = &v28[(unsigned __int64)v9 >> 6];
  if ( v17 >= v16 )
    return v9;
  v18 = (volatile signed __int64 *)((char *)v17 + a2 - (_QWORD)v28 + 64);
  do
  {
    v19 = *v17;
    if ( *v17 != -1LL )
    {
      v20 = *v18 | v19;
      if ( v20 != -1LL )
      {
        _RAX = ~v20;
        __asm { tzcnt   rcx, rax }
        v25 = ((unsigned int)(((__int64)v18 - 64 - a2) >> 3) << 6) + (unsigned int)_RCX;
        RtlpLogHeapFailure(17, *a1, a4 + a5 * v25, a2, v25, 0LL);
        NT_ASSERT("0");
      }
      _InterlockedAnd64(v18, v19);
    }
    ++v17;
    ++v18;
  }
  while ( v17 < v16 );
  return v9;
}
