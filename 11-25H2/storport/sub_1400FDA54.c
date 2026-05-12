/*
 * XREFs of sub_1400FDA54 @ 0x1400FDA54
 * Callers:
 *     sub_14010A138 @ 0x14010A138 (sub_14010A138.c)
 * Callees:
 *     sub_140007B40 @ 0x140007B40 (sub_140007B40.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_1400D1B4C @ 0x1400D1B4C (sub_1400D1B4C.c)
 *     sub_140112294 @ 0x140112294 (sub_140112294.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 *     sub_1401138CC @ 0x1401138CC (sub_1401138CC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400FDA54(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // rbx
  _BYTE *v7; // rdi
  char v8; // r14
  unsigned int v9; // r15d
  unsigned int v10; // r10d
  unsigned int *v11; // r9
  __int64 v12; // rax
  _BYTE *v13; // r11
  char v14; // r14
  unsigned int v15; // r15d
  unsigned int v16; // r11d
  unsigned int *v17; // r10
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  char v20; // cl
  unsigned int v21; // edi
  int v22; // eax
  PVOID *v23; // r14
  char v24; // r9
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rdx
  unsigned int v28; // ecx

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v7 = (_BYTE *)(a2 + 72);
    LOBYTE(a2) = *(_BYTE *)(a2 + 10);
    goto LABEL_42;
  }
  v7 = 0LL;
  v8 = 0;
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v9 = *(_DWORD *)(a2 + 56);
    v10 = 0;
    if ( v9 )
    {
      v11 = (unsigned int *)(a2 + 120);
      do
      {
        v12 = *v11;
        v13 = v7;
        if ( (unsigned int)v12 >= 0x80 )
        {
          a3 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v12 < (unsigned int)a3 )
          {
            if ( *(_DWORD *)(v12 + a2) == 64 )
            {
              if ( v12 + 40 <= a3 )
              {
                if ( *(_BYTE *)(v12 + a2 + 10) )
                  v7 = (_BYTE *)(v12 + a2 + 24);
                break;
              }
            }
            else if ( *(_DWORD *)(v12 + a2) == 65 )
            {
              if ( v12 + 56 <= a3 )
              {
                v8 = 1;
                if ( !*(_BYTE *)(v12 + a2 + 10) )
                  break;
                v7 = (_BYTE *)(v12 + a2 + 24);
              }
            }
            else if ( *(_DWORD *)(v12 + a2) == 66 && v12 + 40 <= a3 )
            {
              v7 = (_BYTE *)(v12 + a2 + 32);
              if ( !*(_DWORD *)(v12 + a2 + 12) )
                v7 = v13;
              break;
            }
            if ( v8 )
              break;
          }
        }
        ++v10;
        ++v11;
      }
      while ( v10 < v9 );
    }
  }
  v14 = 0;
  if ( *(_DWORD *)(a2 + 20) )
  {
    LOBYTE(a2) = 0;
    goto LABEL_42;
  }
  v15 = *(_DWORD *)(a2 + 56);
  v16 = 0;
  LOBYTE(a2) = 0;
  if ( v15 )
  {
    v17 = (unsigned int *)(v5 + 120);
    do
    {
      v18 = *v17;
      if ( (unsigned int)v18 >= 0x80 )
      {
        v19 = *(unsigned int *)(v5 + 16);
        if ( (unsigned int)v18 < (unsigned int)v19 )
        {
          if ( *(_DWORD *)(v18 + v5) == 64 )
          {
            if ( v18 + 40 <= v19 )
            {
              LOBYTE(a2) = *(_BYTE *)(v18 + v5 + 10);
              break;
            }
          }
          else if ( *(_DWORD *)(v18 + v5) == 65 )
          {
            if ( v18 + 56 <= v19 )
            {
              LOBYTE(a2) = *(_BYTE *)(v18 + v5 + 10);
              v14 = 1;
            }
          }
          else if ( *(_DWORD *)(v18 + v5) == 66 && v18 + 40 <= v19 )
          {
            break;
          }
          if ( v14 )
            break;
        }
      }
      ++v16;
      ++v17;
    }
    while ( v16 < v15 );
  }
LABEL_42:
  if ( v7 && (unsigned __int8)a2 >= 6u )
  {
    v20 = *v7;
    if ( *v7 == 0xA2 || v20 == -75 )
      goto LABEL_54;
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 && *(_DWORD *)(a1 + 64) )
    {
      if ( v20 == -96 )
      {
        LOBYTE(a3) = 5;
        LOBYTE(a2) = 6;
        sub_140112680(v5, a2, a3, 32, 0);
        *(_QWORD *)(v4 + 56) = 0LL;
        return (unsigned int)-1073741808;
      }
      if ( v20 == 37 || v20 == -98 )
      {
        v22 = sub_1401138CC(a1, a2, v5, v7);
        v23 = (PVOID *)(a1 + 16);
        goto LABEL_65;
      }
LABEL_54:
      v23 = (PVOID *)(a1 + 16);
      v25 = sub_1401225EC(*(_QWORD *)(a1 + 16));
      v3 = v25;
      if ( !v25 )
      {
        v21 = -1073741670;
        *(_BYTE *)(v5 + 3) = sub_140007B40(-1073741670);
        return v21;
      }
      sub_140112294(a1, v5, v4, v25);
      LOBYTE(v26) = *(_BYTE *)(v5 + 3);
      if ( (v26 & 0x3F) != 0 )
      {
        v21 = sub_1400229C8(v26);
        if ( (v21 & 0x80000000) == 0 )
          goto LABEL_67;
        goto LABEL_66;
      }
      LOBYTE(v26) = *v7;
      if ( (unsigned __int8)(*v7 - 53) <= 0x2Au && (v27 = 0x60000002001LL, _bittest64(&v27, (unsigned int)(v26 - 53)))
        || (_BYTE)v26 == 0x91 )
      {
        v28 = *(_DWORD *)(*(_QWORD *)v3 + 4256LL) & 0xFFFFFFFE;
      }
      else
      {
        v28 = *(_DWORD *)(*(_QWORD *)v3 + 4256LL) | 1;
      }
      *(_DWORD *)(*(_QWORD *)v3 + 4256LL) = v28;
      *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 0x20u;
      *(_QWORD *)(*(_QWORD *)v3 + 4184LL) = v4;
      *(_QWORD *)(*(_QWORD *)v3 + 4192LL) = sub_1400FD3D0;
      *(_QWORD *)(*(_QWORD *)v3 + 4200LL) = v3;
      *(_QWORD *)(*(_QWORD *)v3 + 4216LL) = a1;
      sub_1400D1B4C(*((_DWORD **)*v23 + 16), v4);
      v22 = sub_140122670(*v23);
LABEL_65:
      v21 = v22;
      if ( v22 >= 0 )
        return v21;
LABEL_66:
      if ( !v3 )
        return v21;
LABEL_67:
      _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v3 + 4256LL), 3u);
      sub_140122C20(*v23, v3);
      return v21;
    }
    v24 = 37;
    LOBYTE(a2) = 8;
  }
  else
  {
    v24 = 32;
    LOBYTE(a2) = 6;
  }
  LOBYTE(a3) = 5;
  sub_140112680(v5, a2, a3, v24, 0);
  return 3221225488LL;
}
