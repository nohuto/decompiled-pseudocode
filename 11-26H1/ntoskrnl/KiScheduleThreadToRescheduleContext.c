/*
 * XREFs of KiScheduleThreadToRescheduleContext @ 0x14022FC30
 * Callers:
 *     KiEnterLongDpcProcessing @ 0x140230404 (KiEnterLongDpcProcessing.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x140230060 (KiEnterDeferredReadyState.c)
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 */

__int64 __fastcall KiScheduleThreadToRescheduleContext(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        _QWORD *a5)
{
  unsigned int v5; // r11d
  unsigned __int8 v6; // r14
  unsigned int v7; // esi
  __int64 v9; // r10
  unsigned int v10; // eax
  __int64 v12; // rbx
  unsigned int v14; // r9d
  __int64 v15; // r14
  unsigned __int8 *v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // r11
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rcx
  __int64 v21; // r11
  char v22; // al
  bool v23; // cl
  char v24; // cl
  char v25; // al
  __int64 result; // rax
  __int64 v27; // rcx
  __int64 v28; // r11
  unsigned __int8 *v29; // r10
  unsigned __int64 v30; // rcx
  unsigned __int8 v31; // al
  unsigned __int8 v32; // al
  __int64 v33; // r11
  __int64 v34; // rbp
  char v35; // al
  char v36; // al
  unsigned __int8 v37; // cl
  unsigned __int8 v38; // al
  __int64 v39; // r11
  unsigned __int8 v40; // al
  unsigned __int8 v41; // al
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx

  v5 = *a1;
  v6 = 0;
  v7 = 0;
  v9 = 0LL;
  v10 = 0;
  v12 = a2;
  while ( v10 < v5 )
  {
    a2 = 5LL * v10;
    if ( *(_QWORD *)&a1[40 * v10 + 16] == a3 )
    {
      v9 = (__int64)&a1[40 * v10 + 16];
      break;
    }
    ++v10;
  }
  v14 = (*(_DWORD *)(v12 + 120) >> 1) & 1;
  if ( v14 >= ((*(unsigned __int8 *)(v9 + 32) >> 1) & 1u) )
  {
    if ( v14 )
    {
      if ( (_BYTE)v5 )
      {
        do
        {
          v28 = *(_QWORD *)&a1[40 * v7 + 16];
          v29 = &a1[40 * v7];
          v30 = *((_QWORD *)v29 + 5);
          if ( v28 == a3 )
          {
            if ( v30 && v30 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v30) )
            {
              if ( (v29[49] & 1) != 0 )
                *(_DWORD *)(v43 + 116) |= 2u;
              *(_BYTE *)(v43 + 565) = 1;
              KiInsertDeferredReadyList(a5, v43);
            }
            v29[48] &= ~1u;
            v31 = v29[48];
            *((_QWORD *)v29 + 4) = v12;
            v29[48] = (v31 & 0xFD ^ (2 * ((*(_DWORD *)(v12 + 120) & 2) != 0))) & 0xC3 | 4;
            v32 = v29[49];
            *((_QWORD *)v29 + 5) = v12;
            v29[49] = v32 ^ (a4 ^ v32) & 1;
            if ( !(unsigned __int8)KiIsPrcbThread(v12) )
              *(_DWORD *)(v12 + 536) = *(_DWORD *)(v33 + 36);
          }
          else
          {
            v34 = *(_QWORD *)(v28 + 36544);
            if ( v30 && v30 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v30) )
            {
              if ( (v29[49] & 1) != 0 )
                *(_DWORD *)(v44 + 116) |= 2u;
              *(_BYTE *)(v44 + 565) = 1;
              KiInsertDeferredReadyList(a5, v44);
            }
            v29[48] &= ~1u;
            v35 = v29[48] & 0xFD;
            *((_QWORD *)v29 + 4) = v12;
            v36 = (v35 ^ (2 * ((*(_DWORD *)(v12 + 120) & 2) != 0))) & 0xE3 | 4;
            v37 = v36 | 0x20;
            v38 = v36 & 0xDF;
            if ( v12 == v34 )
              v37 = v38;
            v29[48] = v37;
            v29[49] &= ~1u;
            *((_QWORD *)v29 + 5) = v34;
            if ( !(unsigned __int8)KiIsPrcbThread(v34) )
              *(_DWORD *)(v34 + 536) = *(_DWORD *)(v39 + 36);
          }
          ++v7;
        }
        while ( v7 < *a1 );
      }
    }
    else
    {
      v20 = *(_QWORD *)(v9 + 24);
      v21 = *(_QWORD *)v9;
      if ( v20 && v20 <= 0xFFFFFFFFFFFFFFFDuLL && *(_UNKNOWN **)(v20 + 544) != &unk_140FC9F40 )
      {
        if ( (*(_BYTE *)(v9 + 33) & 1) != 0 )
          *(_DWORD *)(v20 + 116) |= 2u;
        *(_BYTE *)(v20 + 565) = 1;
        KiEnterDeferredReadyState(v20, a2, a3);
        *(_QWORD *)(v27 + 216) = *a5;
        *a5 = v27 + 216;
      }
      *(_BYTE *)(v9 + 32) &= ~1u;
      v22 = *(_BYTE *)(v9 + 32) & 0xFD;
      *(_QWORD *)(v9 + 16) = v12;
      v23 = (*(_DWORD *)(v12 + 120) & 2) != 0;
      *(_QWORD *)(v9 + 24) = v12;
      v24 = v22 ^ (2 * v23);
      v25 = *(_BYTE *)(v9 + 33);
      *(_BYTE *)(v9 + 32) = v24 & 0xC3 | 4;
      *(_BYTE *)(v9 + 33) = v25 ^ (a4 ^ v25) & 1;
      if ( *(_UNKNOWN **)(v12 + 544) != &unk_140FC9F40 )
        *(_DWORD *)(v12 + 536) = *(_DWORD *)(v21 + 36);
    }
  }
  else
  {
    if ( *a1 )
    {
      do
      {
        v15 = *(_QWORD *)&a1[40 * v7 + 16];
        v16 = &a1[40 * v7];
        v17 = *((_QWORD *)v16 + 5);
        if ( v15 == a3 )
        {
          if ( v17 && v17 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v17) )
          {
            if ( (v16[49] & 1) != 0 )
              *(_DWORD *)(v45 + 116) |= 2u;
            *(_BYTE *)(v45 + 565) = 1;
            KiInsertDeferredReadyList(a5, v45);
          }
          v16[48] &= ~1u;
          v40 = v16[48];
          *((_QWORD *)v16 + 4) = v12;
          v16[48] = (v40 & 0xFD ^ (2 * ((*(_DWORD *)(v12 + 120) & 2) != 0))) & 0xC3 | 4;
          v41 = v16[49];
          *((_QWORD *)v16 + 5) = v12;
          v16[49] = v41 ^ (a4 ^ v41) & 1;
          if ( !(unsigned __int8)KiIsPrcbThread(v12) )
            *(_DWORD *)(v12 + 536) = *(_DWORD *)(v15 + 36);
        }
        else
        {
          v18 = *(_QWORD *)(v15 + 24);
          if ( v17 && v17 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v17) )
          {
            if ( (v16[49] & 1) != 0 )
              *(_DWORD *)(v42 + 116) |= 2u;
            *(_BYTE *)(v42 + 565) = 1;
            KiInsertDeferredReadyList(a5, v42);
          }
          v16[48] |= 1u;
          v19 = v16[48];
          *((_QWORD *)v16 + 4) = v18;
          v16[48] = (v19 & 0xFD ^ (2 * ((*(_DWORD *)(v18 + 120) & 2) != 0))) & 0xC3 | 4;
          v16[49] &= ~1u;
          *((_QWORD *)v16 + 5) = v18;
          if ( !v18 || *(_UNKNOWN **)(v18 + 544) != &unk_140FC9F40 )
            *(_DWORD *)(v18 + 536) = *(_DWORD *)(v15 + 36);
        }
        ++v7;
      }
      while ( v7 < *a1 );
    }
    v6 = 1;
  }
  result = v6;
  *((_DWORD *)a1 + 1) = v14;
  return result;
}
