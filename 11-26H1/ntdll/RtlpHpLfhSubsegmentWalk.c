/*
 * XREFs of RtlpHpLfhSubsegmentWalk @ 0x1800BC668
 * Callers:
 *     RtlpHpSegWalk @ 0x180094C1C (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x1800BC830 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163510 (_alloca_probe.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentWalk(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  unsigned int v11; // esi
  size_t v12; // r8
  __int64 v13; // rax
  void *v14; // rsp
  _DWORD *v15; // r12
  unsigned __int16 v16; // r10
  unsigned int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v21; // eax
  unsigned int v22; // r8d
  unsigned __int64 v23; // rsi
  _DWORD v24[2]; // [rsp+20h] [rbp+0h] BYREF

  v8 = 0LL;
  v9 = qword_1801C5EC8 ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v10 = *(unsigned __int16 *)(a2 + 34);
  v24[0] = v9;
  if ( a3 == a2 )
  {
    v11 = 0;
  }
  else
  {
    v22 = a3 - HIWORD(v24[0]) - a2;
    v23 = (v22 * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72)) >> 32;
    if ( v22 != (_DWORD)v23 * (unsigned __int16)v9 )
      return v8;
    v11 = v23 + 1;
    if ( v11 >= v10 )
      return v8;
  }
  if ( *(_WORD *)(a2 + 18) )
  {
    v12 = 8 * (unsigned int)*(unsigned __int8 *)(a2 + 24) - 64;
    v13 = v12 + 15;
    if ( v12 + 15 <= v12 )
      v13 = 0xFFFFFFFFFFFFFF0LL;
    v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
    v15 = v24;
    memmove(v24, (const void *)(a2 + 64), v12);
    v16 = *(_WORD *)(a2 + 16);
    while ( v16 )
    {
      v17 = v16 - 1;
      v18 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, (v16 - 1) & 0x1F);
      v16 = *(_WORD *)((unsigned __int16)v9 * v17 + a2 + ((unsigned __int64)v9 >> 16));
      *(_QWORD *)&v24[2 * ((unsigned __int64)v17 >> 5)] &= v18;
    }
  }
  else
  {
    v15 = (_DWORD *)(a2 + 64);
  }
  while ( v11 < v10 )
  {
    v19 = (unsigned int)*(_QWORD *)&v15[2 * ((unsigned __int64)v11 >> 5)];
    if ( _bittest64(&v19, v11 & 0x1F) )
    {
      v8 = a2 + HIWORD(v24[0]) + v11 * (unsigned __int16)v9;
      v21 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v8, v11, a7, v24[0]);
      *a5 = v21;
      *a6 = (unsigned __int16)v9 - v21;
      return v8;
    }
    ++v11;
  }
  return v8;
}
