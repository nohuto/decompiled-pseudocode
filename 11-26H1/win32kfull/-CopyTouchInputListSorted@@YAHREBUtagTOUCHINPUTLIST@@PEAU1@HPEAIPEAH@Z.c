/*
 * XREFs of ?CopyTouchInputListSorted@@YAHREBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1401EE1B4
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1401EE0CC (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

__int64 __fastcall CopyTouchInputListSorted(
        const struct tagTOUCHINPUTLIST *volatile a1,
        struct tagTOUCHINPUTLIST *a2,
        __int64 a3,
        unsigned int *a4)
{
  int v5; // r12d
  unsigned int v6; // edi
  __m128i v7; // xmm3
  __m128i v8; // xmm2
  __int128 v9; // xmm4
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // r11
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  int *v27; // [rsp+80h] [rbp+28h]

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
        goto LABEL_34;
      v12 = v11 - 4;
      if ( !v12 )
      {
        v14 = 2;
        goto LABEL_15;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v14 = 1;
        goto LABEL_15;
      }
      if ( (unsigned int)(v13 - 1) < 2 )
        goto LABEL_34;
      v14 = -1;
    }
    else
    {
      v14 = 3;
    }
    if ( v14 == -1 )
      goto LABEL_34;
LABEL_15:
    if ( v14 == 1 )
    {
      v15 = 2;
    }
    else if ( v14 == 2 )
    {
      v15 = 1;
    }
    else
    {
      v15 = 4;
    }
    if ( v6 != v15 )
    {
      if ( v6 == 1 )
      {
        v6 = v15;
      }
      else if ( v15 != 1 )
      {
        goto LABEL_34;
      }
    }
    v16 = *((_DWORD *)a2 + 1);
    v17 = v16;
    v18 = _mm_srli_si128(v7, 8).m128i_u64[0];
    if ( v16 )
    {
      v19 = *((_QWORD *)a2 + 1);
      do
      {
        v20 = v17 - 1;
        if ( v18 >= *(_QWORD *)(v19 + 48 * v20 + 8)
          && (v18 != *(_QWORD *)(v19 + 48 * v20 + 8) || v8.m128i_i32[0] >= *(_DWORD *)(v19 + 48 * v20 + 16)) )
        {
          break;
        }
        v21 = 6LL * v17;
        *(_OWORD *)(v19 + 8 * v21) = *(_OWORD *)(v19 + 48 * v20);
        *(_OWORD *)(v19 + 8 * v21 + 16) = *(_OWORD *)(v19 + 48 * v20 + 16);
        *(_OWORD *)(v19 + 8 * v21 + 32) = *(_OWORD *)(v19 + 48 * v20 + 32);
        --v17;
      }
      while ( (_DWORD)v20 );
    }
    if ( v17 )
    {
      v22 = *((_QWORD *)a2 + 1);
      if ( v18 == *(_QWORD *)(v22 + 48LL * (v17 - 1) + 8) && v8.m128i_i32[0] == *(_DWORD *)(v22 + 48LL * (v17 - 1) + 16) )
      {
LABEL_34:
        SetLastNtError(-1073741811);
        return 0LL;
      }
    }
    v23 = 6LL * v17;
    v24 = *((_QWORD *)a2 + 1);
    *(__m128i *)(v24 + 8 * v23) = v7;
    *(__m128i *)(v24 + 8 * v23 + 16) = v8;
    *(_OWORD *)(v24 + 8 * v23 + 32) = v9;
    *((_DWORD *)a2 + 1) = v16 + 1;
    --v5;
    v27 += 12;
  }
  if ( a4 )
    *a4 = v6;
  return 1LL;
}
