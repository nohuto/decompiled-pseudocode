/*
 * XREFs of MiCachedPageFinish @ 0x14029FC60
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAllBatchPages @ 0x140298560 (MiUnlockAllBatchPages.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 */

__int64 __fastcall MiCachedPageFinish(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // r11
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r10
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rsi
  _QWORD *v21; // r14
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  _QWORD *v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rdx
  char v31; // bp
  __int64 v33; // [rsp+68h] [rbp+10h]
  __int64 v34; // [rsp+70h] [rbp+18h]
  _QWORD *v35; // [rsp+78h] [rbp+20h]

  v34 = a3;
  v3 = 0LL;
  v4 = a3;
  v33 = 0LL;
  if ( a3 )
  {
    v7 = (_QWORD *)(a1 + 648);
    v35 = (_QWORD *)(a1 + 648);
    do
    {
      v8 = 48LL * *v7;
      v9 = v8 - 0x220000000000LL;
      v10 = *(_QWORD *)(v8 - 0x220000000000LL + 8) | 0x8000000000000000uLL;
      v11 = *(_QWORD *)(v8 - 0x220000000000LL + 16);
      if ( qword_140E2D8C0 && (v11 & 0x10) == 0 )
        v11 &= qword_140E2D8C8;
      v12 = (v11 >> 12) & 0x3FFFFFFFFFFLL;
      if ( v12 )
        v13 = qword_140E37D10 - 8 + 8 * v12;
      else
        v13 = 0LL;
      v14 = a2[2];
      v15 = 0LL;
      v16 = a2[18];
      v17 = v14;
      if ( v14 == v13 )
        goto LABEL_13;
      do
      {
        v18 = *(unsigned int *)(v17 + 44);
        if ( v17 == v14 )
          v18 = (*(_QWORD *)(v17 + 8) + 8 * v18 - v16) >> 3;
        v17 = *(_QWORD *)(v17 + 16);
        v15 += v18;
      }
      while ( v17 != v13 );
      if ( v17 == v14 )
LABEL_13:
        v19 = (__int64)(v10 - v16) >> 3;
      else
        v19 = v15 + ((__int64)(v10 - *(_QWORD *)(v17 + 8)) >> 3);
      if ( (*(_BYTE *)(v9 + 35) & 0x10) != 0 )
      {
        *(_DWORD *)(v9 + 32) &= ~0x10000000u;
        MiDiscardTransitionPfnEx(v9, 0LL, v16, v15);
        v13 = 0LL;
      }
      else
      {
        v20 = a2[17] + 8 * v19;
        if ( (*(_QWORD *)v9 & 1) == 0 )
          *(_QWORD *)v9 |= 1uLL;
        v21 = (_QWORD *)(*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL);
        *(_DWORD *)(v9 + 32) = (*(_DWORD *)(v9 + 32) + 1) ^ (*(_DWORD *)(v9 + 32) ^ (*(_DWORD *)(v9 + 32) + 1)) & 0xFFFF0000;
        *(_DWORD *)(v9 + 32) = *(_DWORD *)(v9 + 32) & 0xFFF8FFFF | 0x60000;
        v22 = *(_DWORD *)(v9 + 32) & 0xC00000;
        v23 = (*(_DWORD *)(v9 + 16) >> 5) & 7;
        if ( v22 != 0x400000 )
        {
          if ( v22 )
          {
            if ( v22 == 0x800000 )
              v23 = (unsigned int)v23 | 0x18;
          }
          else
          {
            v23 = (unsigned int)v23 | 8;
          }
        }
        v24 = ((v8 / 48) & 0xFFFFFFFFFFLL) << 12;
        v25 = v24 | MmProtectToPteMask[v23] & 0xFFF0000000000E7FuLL | 0x21;
        if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v26 = v24 | MmProtectToPteMask[v23] & 0xFFF0000000000E7FuLL | 0x21;
        }
        else
        {
          if ( v20 >= 0xFFFFF6FB40000000uLL && v20 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            v25 = v20 == 0xFFFFF6FB7DBEDF68uLL
                ? v24 | MmProtectToPteMask[v23] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
                : v24 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v23] & 0x7FF0000000000E7FLL | 0x21;
            if ( (unsigned int)MiUserPdeOrAbove(v20) )
              v25 |= 4uLL;
          }
          v26 = v25 | 4;
          if ( (unsigned __int64)((__int64)(v20 << 25) >> 16) >= 0x7FFFFFFF0000LL )
            v26 = v25;
        }
        v7 = v35;
        v4 = v34;
        *v21 = v26 & 0xFAFFFFFFFFFFFEFFuLL ^ (BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) & 0x100 | 0xA00000000000000LL;
        v3 = v33;
        *(_QWORD *)(v9 + 24) = *(_QWORD *)(v9 + 24) & 0xC000000000000000uLL | 1;
      }
      v27 = 0;
      v28 = (_QWORD *)(a1 + 136);
      while ( v27 < *(_DWORD *)(a1 + 60) )
      {
        if ( *v28 == v9 )
        {
          *v28 = 0LL;
          v29 = --*(_DWORD *)(a1 + 56);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v29 )
            *(_DWORD *)(a1 + 60) = 0;
          break;
        }
        ++v28;
        ++v27;
      }
      if ( v13 )
      {
        v30 = v19 >> 3;
        v31 = v19 & 7;
        *(_BYTE *)(a2[11] + v30) |= 1 << v31;
        ++a2[12];
        *(_BYTE *)(a2[15] + v30) |= 1 << v31;
        ++a2[16];
        v33 = ++v3;
      }
      ++v7;
      --v4;
      v35 = v7;
      v34 = v4;
    }
    while ( v4 );
  }
  MiUnlockAllBatchPages(a1, 0LL);
  return v3;
}
