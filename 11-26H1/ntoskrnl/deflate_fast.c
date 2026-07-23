/*
 * XREFs of deflate_fast @ 0x14062ADC0
 * Callers:
 *     <none>
 * Callees:
 *     fill_window @ 0x14062C1F4 (fill_window.c)
 *     flush_pending @ 0x14062C544 (flush_pending.c)
 *     longest_match @ 0x14062C688 (longest_match.c)
 *     _tr_flush_block @ 0x140638E50 (_tr_flush_block.c)
 */

__int64 __fastcall deflate_fast(__int64 *a1, int a2)
{
  __int64 v2; // rdi
  _DWORD *v3; // r14
  _DWORD *v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int16 v18; // r9
  __int64 v19; // r8
  char v20; // ch
  unsigned __int16 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // ecx
  BOOL v24; // r11d
  unsigned int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int16 v31; // dx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v37; // r10
  __int64 v38; // rdx
  int v39; // ecx
  int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned int v43; // eax
  int v44; // r10d
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v49; // r8d
  int v50; // eax
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx

  v2 = 0LL;
  v3 = (_DWORD *)a1 + 57;
  v6 = (_DWORD *)a1 + 57;
  while ( 1 )
  {
    v7 = *((_DWORD *)a1 + 59);
    if ( v7 < 0x106 )
    {
      fill_window(a1);
      v7 = *((_DWORD *)a1 + 59);
      if ( v7 < 0x106 && !a2 )
        return 0LL;
      v6 = v3;
      if ( !v7 )
        break;
    }
    if ( v7 >= 3 )
    {
      v8 = *(unsigned __int16 *)v6;
      v9 = a1[20];
      if ( HIDWORD(RtlpBootStatHandleLock.StackLimit) )
      {
        v10 = *(_DWORD *)(v8 + v9) & 0xFFFFFF;
        if ( *((int *)a1 + 63) < 6 )
          v10 = *(_DWORD *)(v8 + v9);
        v11 = *((_DWORD *)a1 + 51) & _mm_crc32_u32(0, v10);
        v12 = a1[23];
        v13 = *(_WORD *)(v12 + 2 * v11);
        *(_WORD *)(v12 + 2 * v11) = v8;
        *(_WORD *)(a1[22] + 2LL * ((unsigned int)v8 & *((_DWORD *)a1 + 39))) = v13;
      }
      else
      {
        v14 = (unsigned int)v8 & *((_DWORD *)a1 + 39);
        v15 = a1[22];
        v16 = *((_DWORD *)a1 + 51) & ((unsigned int)*(unsigned __int8 *)(v8 + v9 + 2) ^ (*((_DWORD *)a1 + 48) << *((_DWORD *)a1 + 52)));
        v17 = a1[23];
        *((_DWORD *)a1 + 48) = v16;
        *(_WORD *)(v15 + 2 * v14) = *(_WORD *)(v17 + 2 * v16);
        v13 = *(_WORD *)(a1[22] + 2LL * ((unsigned int)v8 & *((_DWORD *)a1 + 39)));
        *(_WORD *)(a1[23] + 2LL * *((unsigned int *)a1 + 48)) = v8;
      }
      if ( v13 && *v6 - (unsigned int)v13 <= *((_DWORD *)a1 + 37) - 262 )
        *((_DWORD *)a1 + 54) = longest_match(a1);
    }
    if ( *((_DWORD *)a1 + 54) < 3u )
    {
      v41 = 2LL;
      v42 = *(unsigned __int8 *)((unsigned int)*v6 + a1[20]);
      do
      {
        *(_BYTE *)(*((unsigned int *)a1 + 1489) + a1[743]) = 0;
        v43 = *((_DWORD *)a1 + 1489) + 1;
        *((_DWORD *)a1 + 1489) = v43;
        --v41;
      }
      while ( v41 );
      *(_BYTE *)(v43 + a1[743]) = v42;
      ++*((_DWORD *)a1 + 1489);
      ++*((_WORD *)a1 + 2 * v42 + 134);
      v44 = *((_DWORD *)a1 + 57);
      --*((_DWORD *)a1 + 59);
      LODWORD(v37) = v44 + 1;
      v24 = *((_DWORD *)a1 + 1489) == *((_DWORD *)a1 + 1490);
    }
    else
    {
      v18 = *(_WORD *)v6 - *((_WORD *)a1 + 116);
      v19 = (unsigned __int8)(*((_BYTE *)a1 + 216) - 3);
      *(_BYTE *)(*((unsigned int *)a1 + 1489) + a1[743]) = v18;
      v20 = HIBYTE(v18);
      ++*((_DWORD *)a1 + 1489);
      v21 = v18 - 1;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = v20;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a1 + 1489))++ + a1[743]) = v19;
      ++*((_WORD *)a1 + 2 * *((unsigned __int8 *)length_code + v19) + 648);
      if ( v21 >= 0x100u )
        v22 = (v21 >> 7) + 256;
      else
        v22 = v21;
      ++*((_WORD *)a1 + 2 * *((unsigned __int8 *)dist_code + v22) + 1280);
      v23 = *((_DWORD *)a1 + 54);
      v24 = *((_DWORD *)a1 + 1489) == *((_DWORD *)a1 + 1490);
      v25 = *((_DWORD *)a1 + 59) - v23;
      *((_DWORD *)a1 + 59) = v25;
      if ( v23 > *((_DWORD *)a1 + 62) || v25 < 3 )
      {
        v37 = v23 + *((_DWORD *)a1 + 57);
        *((_DWORD *)a1 + 54) = 0;
        *((_DWORD *)a1 + 57) = v37;
        if ( !*((_DWORD *)a1 + 1498) )
        {
          v38 = a1[20];
          v39 = *((_DWORD *)a1 + 52);
          v40 = *(unsigned __int8 *)(v37 + v38);
          *((_DWORD *)a1 + 48) = v40;
          *((_DWORD *)a1 + 48) = *((_DWORD *)a1 + 51) & (*(unsigned __int8 *)((unsigned int)(v37 + 1) + v38) ^ (v40 << v39));
        }
        goto LABEL_35;
      }
      *((_DWORD *)a1 + 54) = v23 - 1;
      do
      {
        ++*((_DWORD *)a1 + 57);
        v26 = *((unsigned __int16 *)a1 + 114);
        v27 = a1[20];
        if ( HIDWORD(RtlpBootStatHandleLock.StackLimit) )
        {
          v28 = *(_DWORD *)(v26 + v27) & 0xFFFFFF;
          if ( *((int *)a1 + 63) < 6 )
            v28 = *(_DWORD *)(v26 + v27);
          v29 = *((_DWORD *)a1 + 51) & _mm_crc32_u32(0, v28);
          v30 = a1[23];
          v31 = *(_WORD *)(v30 + 2 * v29);
          *(_WORD *)(v30 + 2 * v29) = v26;
          *(_WORD *)(a1[22] + 2LL * ((unsigned int)v26 & *((_DWORD *)a1 + 39))) = v31;
        }
        else
        {
          v32 = a1[22];
          v33 = *((_DWORD *)a1 + 51) & ((unsigned int)*(unsigned __int8 *)(v26 + v27 + 2) ^ (*((_DWORD *)a1 + 48) << *((_DWORD *)a1 + 52)));
          v34 = a1[23];
          v35 = (unsigned int)v26 & *((_DWORD *)a1 + 39);
          *((_DWORD *)a1 + 48) = v33;
          *(_WORD *)(v32 + 2 * v35) = *(_WORD *)(v34 + 2 * v33);
          *(_WORD *)(a1[23] + 2LL * *((unsigned int *)a1 + 48)) = v26;
        }
      }
      while ( (*((_DWORD *)a1 + 54))-- != 1 );
      LODWORD(v37) = *((_DWORD *)a1 + 57) + 1;
    }
    *((_DWORD *)a1 + 57) = v37;
LABEL_35:
    if ( v24 )
    {
      v45 = *((_DWORD *)a1 + 53);
      v46 = v45 < 0 ? 0LL : a1[20] + (unsigned int)v45;
      tr_flush_block(a1, v46, (unsigned int)(v37 - v45), 0LL);
      v47 = *a1;
      *((_DWORD *)a1 + 53) = *((_DWORD *)a1 + 57);
      flush_pending(v47);
      if ( !*(_DWORD *)(*a1 + 24) )
        return 0LL;
    }
  }
  v49 = *((_DWORD *)a1 + 57);
  v50 = 2;
  if ( v49 < 2 )
    v50 = *((_DWORD *)a1 + 57);
  *((_DWORD *)a1 + 1494) = v50;
  if ( a2 == 4 )
  {
    v51 = *((_DWORD *)a1 + 53);
    if ( v51 >= 0 )
      v2 = a1[20] + (unsigned int)v51;
    tr_flush_block(a1, v2, v49 - v51, 1LL);
    v52 = *a1;
    *((_DWORD *)a1 + 53) = *((_DWORD *)a1 + 57);
    flush_pending(v52);
    return (unsigned int)(*(_DWORD *)(*a1 + 24) != 0) + 2;
  }
  else
  {
    if ( *((_DWORD *)a1 + 1489) )
    {
      v53 = *((_DWORD *)a1 + 53);
      v54 = v53 < 0 ? 0LL : a1[20] + (unsigned int)v53;
      tr_flush_block(a1, v54, v49 - v53, 0LL);
      v55 = *a1;
      *((_DWORD *)a1 + 53) = *((_DWORD *)a1 + 57);
      flush_pending(v55);
      if ( !*(_DWORD *)(*a1 + 24) )
        return 0LL;
    }
    return 1LL;
  }
}
