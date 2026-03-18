/*
 * XREFs of MiClearMirrorBitmaps @ 0x1406EF634
 * Callers:
 *     MiHotRemoveHugeRange @ 0x1406EBF04 (MiHotRemoveHugeRange.c)
 *     MiCompleteMemoryRemoval @ 0x140865CFC (MiCompleteMemoryRemoval.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14024EFA0 (RtlClearBitsEx.c)
 */

__int64 __fastcall MiClearMirrorBitmaps(int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  _QWORD *v13; // r9
  __int64 i; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r11
  __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  _QWORD *v20; // r10
  __int64 v21; // r8
  _QWORD *j; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int64 k; // rax
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rcx
  volatile signed __int32 *v32; // r8
  unsigned int v33; // eax
  int v34; // r9d
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  unsigned __int64 v38; // [rsp+88h] [rbp+10h]
  __int64 v39; // [rsp+90h] [rbp+18h]
  int Flink; // [rsp+98h] [rbp+20h]

  v39 = a3;
  v38 = a2;
  v3 = 0LL;
  Flink = (int)stru_140E2EB88.Timer.TimerListEntry.Flink;
  result = a1;
  v37 = a1;
  do
  {
    if ( !*(_DWORD *)&stru_140E2EB88.WaitBlockFill11[4 * result + 112] )
      goto LABEL_57;
    v5 = a2;
    v6 = a2 + a3;
    v7 = (unsigned __int64 *)((char *)&stru_140E2EB88.WaitBlock[1] + 32 * result + 16 * v3);
    v36 = a2 + a3;
    v8 = a3;
    do
    {
      v9 = v7[1];
      v10 = v5 & -(__int64)(v5 < *v7);
      v11 = *v7 - 1;
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
        if ( v5 + 1 > *v7 )
          v16 = *v7;
        v11 = v16 - 1;
        v10 = 0LL;
      }
      if ( v12 < v5 || v12 >= v6 || v12 == -1LL )
        break;
      v17 = *v7;
      if ( *v7 <= v12 )
        goto LABEL_37;
      v18 = 0LL;
      v19 = v9 + 8 * ((v17 - 1) >> 6);
      v20 = (_QWORD *)(v9 + 8 * (v12 >> 6));
      v21 = *v20 | ((1LL << v12) - 1);
      for ( j = v20 + 1; ; ++j )
      {
        v23 = ~v21;
        if ( v23 )
          break;
        if ( (unsigned __int64)j > v19 )
          goto LABEL_36;
        v21 = *++v20;
      }
      _BitScanForward64((unsigned __int64 *)&v24, v23);
      v25 = (unsigned int)v24 + ((__int64)((__int64)v20 - v9) >> 3 << 6);
      if ( v25 > v17 )
      {
LABEL_36:
        v6 = v36;
        goto LABEL_37;
      }
      for ( k = ~(v23 | ((1LL << v24) - 1)); !k; k = *v27 )
      {
        v18 += 64LL;
        v27 = v20 + 1;
        if ( (unsigned __int64)(v20 + 1) > v19 )
        {
          LODWORD(k) = 64;
          goto LABEL_32;
        }
        ++v20;
      }
      _BitScanForward64(&k, k);
LABEL_32:
      v28 = ((__int64)((__int64)v20 - v9) >> 3 << 6) + (unsigned int)k;
      if ( v28 > v17 )
        v28 = *v7;
      v6 = v36;
      if ( v28 == v25 )
LABEL_37:
        v25 = *v7;
      v29 = v25 - v12;
      if ( v12 + v29 > v6 )
        v29 = v6 - v12;
      if ( Flink != 3 || v3 != 1 )
      {
        RtlClearBitsEx((__int64)v7, v12, v29);
        goto LABEL_55;
      }
      v30 = v12 & 0x1F;
      v31 = v29;
      v32 = (volatile signed __int32 *)(v9 + 4 * (v12 >> 5));
      if ( v30 + v29 > 0x20 )
      {
        if ( (v12 & 0x1F) != 0 )
        {
          v34 = v12 & 0x1F;
          _InterlockedAnd(v32, ~(((1 << (32 - v34)) - 1) << v30));
          v31 = v29 - (unsigned int)(32 - v34);
          ++v32;
        }
        if ( v31 >= 0x20 )
        {
          v35 = v31 >> 5;
          v31 += -32LL * (v31 >> 5);
          do
          {
            *v32++ = 0;
            --v35;
          }
          while ( v35 );
        }
        if ( !v31 )
          goto LABEL_55;
        v33 = -1 << v31;
        goto LABEL_53;
      }
      if ( v29 != 32 )
      {
        v33 = ~(((1 << v29) - 1) << v30);
LABEL_53:
        _InterlockedAnd(v32, v33);
        goto LABEL_55;
      }
      *v32 = 0;
LABEL_55:
      v5 += v29;
      v8 -= v29;
    }
    while ( v8 );
    result = v37;
    a3 = v39;
    a2 = v38;
LABEL_57:
    ++v3;
  }
  while ( v3 < 2 );
  return result;
}
