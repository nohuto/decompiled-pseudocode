/*
 * XREFs of MiClearMirrorBitmaps @ 0x1406F42D4
 * Callers:
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 *     MiCompleteMemoryRemoval @ 0x14086C0DC (MiCompleteMemoryRemoval.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 */

__int64 __fastcall MiClearMirrorBitmaps(int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  _QWORD *v13; // r9
  __int64 i; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rdi
  _QWORD *v19; // r10
  __int64 v20; // r8
  _QWORD *j; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  unsigned __int64 k; // rax
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  volatile signed __int32 *v31; // r8
  unsigned int v32; // eax
  int v33; // r9d
  unsigned __int64 v34; // rdx
  __int64 v35; // [rsp+28h] [rbp-40h]
  unsigned __int64 v36; // [rsp+78h] [rbp+10h]
  __int64 v37; // [rsp+80h] [rbp+18h]
  int Flink; // [rsp+88h] [rbp+20h]

  v37 = a3;
  v36 = a2;
  v3 = 0LL;
  Flink = (int)stru_140E2ED08.Timer.TimerListEntry.Flink;
  result = a1;
  v35 = a1;
  do
  {
    if ( !*(_DWORD *)&stru_140E2ED08.WaitBlockFill11[4 * result + 112] )
      goto LABEL_55;
    v5 = a2;
    v6 = (unsigned __int64 *)((char *)&stru_140E2ED08.WaitBlock[1] + 32 * result + 16 * v3);
    v7 = a2 + a3;
    v8 = a3;
    do
    {
      v9 = v6[1];
      v10 = v5 & -(__int64)(v5 < *v6);
      v11 = *v6 - 1;
      while ( 1 )
      {
        if ( v11 - v10 == -1LL )
          goto LABEL_6;
        v13 = (_QWORD *)(v9 + 8 * (v10 >> 6));
        for ( i = ~*v13 | ((1LL << v10) - 1); i == -1; i = ~*v13 )
        {
          if ( (unsigned __int64)++v13 > v9 + 8 * (v11 >> 6) )
            goto LABEL_6;
        }
        _BitScanForward64(&v15, ~i);
        v12 = v15 + ((__int64)((__int64)v13 - v9) >> 3 << 6);
        if ( v12 > v11 )
        {
LABEL_6:
          v12 = -1LL;
        }
        else if ( v12 != -1LL )
        {
          break;
        }
        if ( !v10 )
          break;
        v16 = v5 + 1;
        if ( v5 + 1 > *v6 )
          v16 = *v6;
        v11 = v16 - 1;
        v10 = 0LL;
      }
      if ( v12 < v5 || v12 >= v7 || v12 == -1LL )
        break;
      v17 = *v6;
      if ( *v6 <= v12 )
        goto LABEL_35;
      v18 = v9 + 8 * ((v17 - 1) >> 6);
      v19 = (_QWORD *)(v9 + 8 * (v12 >> 6));
      v20 = *v19 | ((1LL << v12) - 1);
      for ( j = v19 + 1; ; ++j )
      {
        v22 = ~v20;
        if ( v22 )
          break;
        if ( (unsigned __int64)j > v18 )
          goto LABEL_35;
        v20 = *++v19;
      }
      _BitScanForward64((unsigned __int64 *)&v23, v22);
      v24 = (unsigned int)v23 + ((__int64)((__int64)v19 - v9) >> 3 << 6);
      if ( v24 > v17 )
        goto LABEL_35;
      for ( k = ~(v22 | ((1LL << v23) - 1)); !k; k = *v26 )
      {
        v26 = v19 + 1;
        if ( (unsigned __int64)(v19 + 1) > v18 )
        {
          LODWORD(k) = 64;
          goto LABEL_32;
        }
        ++v19;
      }
      _BitScanForward64(&k, k);
LABEL_32:
      v27 = ((__int64)((__int64)v19 - v9) >> 3 << 6) + (unsigned int)k;
      if ( v27 > v17 )
        v27 = *v6;
      if ( v27 == v24 )
LABEL_35:
        v24 = *v6;
      v28 = v24 - v12;
      if ( v12 + v28 > v7 )
        v28 = v7 - v12;
      if ( Flink != 3 || v3 != 1 )
      {
        RtlClearBitsEx((__int64)v6, v12, v28);
        goto LABEL_53;
      }
      v29 = v12 & 0x1F;
      v30 = v28;
      v31 = (volatile signed __int32 *)(v9 + 4 * (v12 >> 5));
      if ( v29 + v28 > 0x20 )
      {
        if ( (v12 & 0x1F) != 0 )
        {
          v33 = v12 & 0x1F;
          _InterlockedAnd(v31, ~(((1 << (32 - v33)) - 1) << v29));
          v30 = v28 - (unsigned int)(32 - v33);
          ++v31;
        }
        if ( v30 >= 0x20 )
        {
          v34 = v30 >> 5;
          v30 += -32LL * (v30 >> 5);
          do
          {
            *v31++ = 0;
            --v34;
          }
          while ( v34 );
        }
        if ( !v30 )
          goto LABEL_53;
        v32 = -1 << v30;
        goto LABEL_51;
      }
      if ( v28 != 32 )
      {
        v32 = ~(((1 << v28) - 1) << v29);
LABEL_51:
        _InterlockedAnd(v31, v32);
        goto LABEL_53;
      }
      *v31 = 0;
LABEL_53:
      v5 += v28;
      v8 -= v28;
    }
    while ( v8 );
    result = v35;
    a3 = v37;
    a2 = v36;
LABEL_55:
    ++v3;
  }
  while ( v3 < 2 );
  return result;
}
