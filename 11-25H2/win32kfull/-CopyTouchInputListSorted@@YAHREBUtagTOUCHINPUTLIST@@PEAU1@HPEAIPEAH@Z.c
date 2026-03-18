/*
 * XREFs of ?CopyTouchInputListSorted@@YAHREBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x14027A420
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1400CA648 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 */

__int64 __fastcall CopyTouchInputListSorted(
        const struct tagTOUCHINPUTLIST *volatile a1,
        struct tagTOUCHINPUTLIST *a2,
        __int64 a3,
        unsigned int *a4)
{
  int v5; // r15d
  unsigned int v6; // ebx
  __m128i v7; // xmm3
  __m128i v8; // xmm2
  __int128 v9; // xmm4
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // edx
  unsigned __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int *v27; // [rsp+C0h] [rbp+28h]

  v27 = (int *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 1);
  v6 = 1;
  while ( v5 )
  {
    v7 = *(__m128i *)v27;
    v8 = *((__m128i *)v27 + 1);
    v9 = *((_OWORD *)v27 + 2);
    if ( (v8.m128i_i32[1] & 0xFFFFFF00) != 0 || (_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) & 0xFFFFFFF8) != 0 )
    {
      UserSetLastError(1004);
      return 0LL;
    }
    v10 = (_mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) & 0xF) - 4;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_9;
      v12 = v11 - 4;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
LABEL_9:
          v13 = -1;
          goto LABEL_13;
        }
        v13 = 1;
      }
      else
      {
        v13 = 2;
      }
    }
    else
    {
      v13 = 3;
    }
LABEL_13:
    switch ( v13 )
    {
      case -1:
        goto LABEL_39;
      case 1:
        v14 = 2;
        break;
      case 2:
        v14 = 1;
        break;
      default:
        v14 = 4;
        break;
    }
    if ( v6 != v14 )
    {
      if ( v6 == 1 )
      {
        v6 = v14;
      }
      else if ( v14 != 1 )
      {
        goto LABEL_39;
      }
    }
    v15 = *((_DWORD *)a2 + 1);
    v16 = _mm_srli_si128(v7, 8).m128i_u64[0];
    if ( v15 )
    {
      v17 = *((_QWORD *)a2 + 1);
      do
      {
        v18 = v15 - 1;
        if ( v16 >= *(_QWORD *)(v17 + 48 * v18 + 8)
          && (v16 != *(_QWORD *)(v17 + 48 * v18 + 8) || v8.m128i_i32[0] >= *(_DWORD *)(v17 + 48 * v18 + 16)) )
        {
          break;
        }
        v20 = 6LL * v15;
        *(_OWORD *)(v17 + 8 * v20) = *(_OWORD *)(v17 + 48 * v18);
        *(_OWORD *)(v17 + 8 * v20 + 16) = *(_OWORD *)(v17 + 48 * v18 + 16);
        *(_OWORD *)(v17 + 8 * v20 + 32) = *(_OWORD *)(v17 + 48 * v18 + 32);
        --v15;
      }
      while ( (_DWORD)v18 );
      if ( v15 )
      {
        v21 = *((_QWORD *)a2 + 1) + 48LL * (v15 - 1);
        if ( v16 == *(_QWORD *)(v21 + 8) && v8.m128i_i32[0] == *(_DWORD *)(v21 + 16) )
        {
LABEL_39:
          SetLastNtError(-1073741811);
          return 0LL;
        }
      }
    }
    v23 = 6LL * v15;
    v24 = *((_QWORD *)a2 + 1);
    *(__m128i *)(v24 + 8 * v23) = v7;
    *(__m128i *)(v24 + 8 * v23 + 16) = v8;
    *(_OWORD *)(v24 + 8 * v23 + 32) = v9;
    ++*((_DWORD *)a2 + 1);
    --v5;
    v27 += 12;
  }
  if ( a4 )
    *a4 = v6;
  return 1LL;
}
