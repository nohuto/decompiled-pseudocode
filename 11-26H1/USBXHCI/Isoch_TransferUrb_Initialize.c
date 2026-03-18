/*
 * XREFs of Isoch_TransferUrb_Initialize @ 0x1400276F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x140027B70 (WPP_RECORDER_SF_DDqDDDD.c)
 */

__int64 __fastcall Isoch_TransferUrb_Initialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebp
  __int64 v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // r10
  __int64 v9; // rdx
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rtt
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rdx
  unsigned int v18; // ecx
  int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rdx
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rtt
  int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rdx
  int v33; // edx
  unsigned int v35; // r8d
  int v36; // eax
  unsigned int v37; // r8d
  int v38; // eax
  bool v39; // zf
  int v40; // [rsp+20h] [rbp-68h]

  v2 = *(_QWORD *)(a2 + 48);
  v3 = 0;
  if ( *(_WORD *)(v2 + 2) == 56 )
  {
LABEL_2:
    v6 = 36LL;
  }
  else
  {
    switch ( *(_WORD *)(v2 + 2) )
    {
      case '9':
      case ':':
        v6 = 52LL;
        break;
      default:
        goto LABEL_2;
    }
  }
  v7 = (_DWORD *)(v6 + v2);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    v9 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v8 + 844) / 10000LL;
    v10 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v8 + 88) + 40LL) + 1) >> 3;
    v11 = v10 & 0x7FF;
    _m_prefetchw((const void *)(v8 + 832));
    v12 = *(_QWORD *)(v8 + 832);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 832), v12, v12);
    }
    while ( v13 != v12 );
    v14 = ((_DWORD)v12 << 11) - (v12 >> 21) + v9;
    v15 = (((_WORD)v12 << 11) - (unsigned __int16)(v12 >> 21) + (_WORD)v9) & 0x7FF;
    v16 = v14 ^ ((unsigned __int16)v10 ^ (unsigned __int16)v14) & 0x7FF;
    if ( v15 < v11 )
    {
      v37 = v11 - v15;
      v38 = v16 - 2048;
      if ( v37 <= 0x400 )
        v38 = v14 ^ ((unsigned __int16)v10 ^ (unsigned __int16)v14) & 0x7FF;
      v16 = v38;
    }
    else if ( v15 - v11 > 0x400 )
    {
      v16 += 2048;
    }
    v17 = _InterlockedExchange64(
            (volatile __int64 *)(v8 + 832),
            ((unsigned __int64)v16 >> 11) | ((v9 - (v16 & 0x7FF)) << 21));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v17) = 5;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(v8 + 72),
        v17,
        4,
        185,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v16);
    }
    if ( *(_BYTE *)(a1 + 342) )
      goto LABEL_45;
    v18 = *(_DWORD *)(a1 + 368);
    *(_DWORD *)(v2 + 128) = v18;
    v19 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL);
    if ( v19 == 2 || (v39 = v19 == 3, v20 = 255, v39) )
      v20 = 1024;
    if ( v16 > v18 && v16 - v18 > v20 )
    {
LABEL_45:
      *(_BYTE *)(a1 + 341) = 1;
      *(_DWORD *)(v2 + 128) = v16 + 5;
      *(_DWORD *)(a1 + 368) = v16 + 5;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 368) = *(_DWORD *)(v2 + 128);
  }
  *(_DWORD *)(a1 + 368) += (unsigned int)(*(_DWORD *)(a1 + 364) + *(_DWORD *)(v2 + 132) - 1) / *(_DWORD *)(a1 + 364);
  v21 = 0;
  *v7 = 0;
  for ( *(_DWORD *)(v2 + 136) = 0; v21 < *(_DWORD *)(v2 + 132); *(_DWORD *)(v2 + 12 * v22 + 148) = -1 )
    v22 = v21++;
  v23 = *(_QWORD *)(a1 + 40);
  v24 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v23 + 844) / 10000LL;
  v25 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v23 + 88) + 40LL) + 2) >> 3;
  v26 = v25 & 0x7FF;
  _m_prefetchw((const void *)(v23 + 832));
  v27 = *(_QWORD *)(v23 + 832);
  do
  {
    v28 = v27;
    v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 832), v27, v27);
  }
  while ( v28 != v27 );
  v29 = ((_DWORD)v27 << 11) - (v27 >> 21) + v24;
  v30 = (((_WORD)v27 << 11) - (unsigned __int16)(v27 >> 21) + (_WORD)v24) & 0x7FF;
  v31 = v29 ^ ((unsigned __int16)v25 ^ (unsigned __int16)v29) & 0x7FF;
  if ( v30 < v26 )
  {
    v35 = v26 - v30;
    v36 = v31 - 2048;
    if ( v35 <= 0x400 )
      v36 = v29 ^ ((unsigned __int16)v25 ^ (unsigned __int16)v29) & 0x7FF;
    v31 = v36;
  }
  else if ( v30 - v26 > 0x400 )
  {
    v31 += 2048;
  }
  v32 = _InterlockedExchange64(
          (volatile __int64 *)(v23 + 832),
          ((unsigned __int64)v31 >> 11) | ((v24 - (v31 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v32) = 5;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(v23 + 72),
      v32,
      4,
      185,
      (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      v31);
  }
  v33 = *(_DWORD *)(v2 + 128) - v31;
  if ( v33 <= 0 )
    v33 = v31 - *(_DWORD *)(v2 + 128);
  if ( v33 > 1024 )
    v3 = -1073741823;
  else
    *(_BYTE *)(a1 + 342) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      v25,
      v40,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
      *(_QWORD *)(a2 + 24),
      *(_DWORD *)(v2 + 132),
      v31,
      *(_DWORD *)(v2 + 128),
      *(_DWORD *)(a1 + 368));
  return v3;
}
