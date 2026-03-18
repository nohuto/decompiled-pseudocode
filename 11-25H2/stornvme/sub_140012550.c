/*
 * XREFs of sub_140012550 @ 0x140012550
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 *     sub_1400078E0 @ 0x1400078E0 (sub_1400078E0.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_14000D060 @ 0x14000D060 (sub_14000D060.c)
 *     sub_140018090 @ 0x140018090 (sub_140018090.c)
 *     sub_14002510C @ 0x14002510C (sub_14002510C.c)
 *     sub_1400316E0 @ 0x1400316E0 (sub_1400316E0.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int16 __fastcall sub_140012550(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // cl
  bool v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rax
  char v10; // r9
  __int64 v11; // rsi
  _BYTE *v12; // rsi
  __int64 v13; // r8
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rsi
  unsigned int v19; // r14d
  int v20; // ecx
  char v21; // al
  __int64 v22; // r9
  __int16 v23; // cx
  int v25; // [rsp+20h] [rbp-C8h]
  const wchar_t *v26; // [rsp+28h] [rbp-C0h]
  __int64 v27; // [rsp+30h] [rbp-B8h]
  int v28; // [rsp+38h] [rbp-B0h]
  int v29; // [rsp+40h] [rbp-A8h]
  __int64 v30; // [rsp+48h] [rbp-A0h]
  const wchar_t *v31; // [rsp+50h] [rbp-98h]
  __int64 v32; // [rsp+58h] [rbp-90h]
  const wchar_t *v33; // [rsp+60h] [rbp-88h]
  __int64 v34; // [rsp+68h] [rbp-80h]
  const wchar_t *v35; // [rsp+70h] [rbp-78h]
  __int64 v36; // [rsp+78h] [rbp-70h]
  const wchar_t *v37; // [rsp+80h] [rbp-68h]
  __int64 v38; // [rsp+88h] [rbp-60h]
  __int128 v39; // [rsp+90h] [rbp-58h]
  __int128 v40; // [rsp+A0h] [rbp-48h] BYREF

  v5 = *(_BYTE *)(a2 + 2);
  v6 = 1;
  if ( v5 == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  v8 = 4096LL;
  v9 = v7 & 0xFFF;
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - v9 + 4096;
  v39 = 0uLL;
  if ( !a3 || (v10 = *(_BYTE *)(a2 + 3), v10 == 14) || (LODWORD(v9) = *(_DWORD *)(a1 + 24), (v9 & 0xE) != 0) )
  {
    *(_BYTE *)(v7 + 4225) |= 8u;
    return v9;
  }
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
  {
    if ( v5 == 40 )
      v11 = *(_QWORD *)(a2 + 104);
    else
      v11 = *(_QWORD *)(a2 + 56);
    if ( (v11 & 0xFFF) != 0 )
      v11 = v11 - (v11 & 0xFFF) + 4096;
    v12 = *(_BYTE **)(v11 + 4200);
  }
  else if ( a2 == a1 + 1016 )
  {
    v12 = (_BYTE *)(a1 + 1008);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 1392);
    if ( v13 && (v14 = 0, *(_WORD *)(a1 + 1552)) )
    {
      while ( 1 )
      {
        v12 = (_BYTE *)(v13 + ((unsigned __int64)v14 << 7));
        if ( (_BYTE *)a2 == v12 + 8 )
          break;
        if ( ++v14 >= *(unsigned __int16 *)(a1 + 1552) )
          goto LABEL_22;
      }
    }
    else
    {
LABEL_22:
      v15 = *(_QWORD *)(a1 + 1400);
      if ( v15 && (v16 = 0, *(_WORD *)(a1 + 1554)) )
      {
        while ( 1 )
        {
          v12 = (_BYTE *)(v15 + ((unsigned __int64)v16 << 7));
          if ( (_BYTE *)a2 == v12 + 8 )
            break;
          if ( ++v16 >= *(unsigned __int16 *)(a1 + 1554) )
            goto LABEL_26;
        }
      }
      else
      {
LABEL_26:
        v17 = 0;
        while ( 1 )
        {
          v18 = a1 + ((unsigned __int64)v17 << 7);
          if ( a2 == v18 + 1144 )
            break;
          if ( ++v17 >= 2 )
          {
            v12 = 0LL;
            goto LABEL_31;
          }
        }
        v12 = (_BYTE *)(v18 + 1136);
      }
    }
  }
LABEL_31:
  if ( v10 == 1 )
  {
    v19 = 0;
    v20 = *(_DWORD *)a3 >> 8;
    LODWORD(v9) = *(_DWORD *)a3 & 7;
    switch ( (_DWORD)v9 )
    {
      case 0:
        v19 = 64;
        if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
        {
          v38 = (unsigned int)(v9 + 64);
          v37 = L"LogPageSize";
          v36 = *(unsigned __int8 *)(a3 + 2);
          v35 = L"LogPageId";
          v34 = (unsigned __int8)v20;
          v33 = L"EventInfo";
          v32 = *(_DWORD *)a3 & 7;
          v31 = L"EventType";
          v30 = 0LL;
          v29 = 0;
          v28 = 3;
          v27 = 32LL;
          v26 = L"NVMe Async Event-Error Status";
          v25 = 9;
          StorPortExtendedFunction((unsigned int)(v9 + 86), a1, 0LL, (unsigned int)(v9 + 1));
        }
        v21 = *(_BYTE *)(a3 + 1);
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            *((_QWORD *)&v39 + 1) = 2LL;
            sub_140018090(a1, 0LL, 0LL, 0LL);
          }
          else
          {
            if ( v21 != 2 )
            {
              if ( v21 != 3 )
              {
                if ( v21 == 4 )
                {
                  *(_QWORD *)&v39 = 128LL;
                }
                else
                {
                  if ( v21 == 5 )
                    v8 = 256LL;
                  *(_QWORD *)&v39 = v8;
                }
                goto LABEL_52;
              }
              if ( sub_14000D060(a1) )
              {
                if ( *(_QWORD *)(a1 + 3928) )
                {
                  sub_14002510C(a1, sub_140028860, 0LL);
                  *(_QWORD *)&v39 = 64LL;
                  goto LABEL_52;
                }
                sub_140018090(a1, 0LL, 0LL, 0LL);
              }
              *(_QWORD *)&v39 = 64LL;
              goto LABEL_52;
            }
            *(_QWORD *)&v39 = 32LL;
          }
        }
        else
        {
          *((_QWORD *)&v39 + 1) = 1LL;
        }
LABEL_52:
        v40 = v39;
        ((void (__fastcall *)(__int64, __int128 *, _QWORD, _QWORD, int, const wchar_t *, __int64, int, int, __int64, const wchar_t *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD, _QWORD))sub_1400316E0)(
          a1,
          &v40,
          0LL,
          0LL,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          *((_QWORD *)&v39 + 1));
        goto LABEL_94;
      case 1:
        v19 = 512;
        if ( (*(_BYTE *)(a1 + 21) & 2) == 0 )
          goto LABEL_94;
        goto LABEL_92;
      case 2:
        switch ( (_BYTE)v20 )
        {
          case 0:
            _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 2u);
            if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 1u) )
            {
              _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u);
              v19 = 4096;
            }
            if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
              LOWORD(v9) = StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
            if ( !v19 )
              goto LABEL_101;
            goto LABEL_94;
          case 1:
            v19 = 512;
            if ( (*(_BYTE *)(a1 + 21) & 2) == 0 )
              goto LABEL_94;
            goto LABEL_92;
          case 2:
            v19 = 512;
            if ( (*(_BYTE *)(a1 + 21) & 2) == 0 )
              goto LABEL_94;
            goto LABEL_92;
          case 0xEF:
            v19 = 4096;
            if ( (*(_BYTE *)(a1 + 21) & 2) == 0 )
              goto LABEL_94;
LABEL_92:
            v22 = 1LL;
            goto LABEL_93;
        }
        break;
      case 6:
        if ( (_BYTE)v20 )
        {
          LOWORD(v9) = v20 - 1;
          if ( (unsigned __int8)(v20 - 1) > 1u )
            break;
          v19 = 512;
          if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
            goto LABEL_94;
          v22 = 0LL;
        }
        else
        {
          v19 = 64;
          if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
            goto LABEL_94;
          v22 = 0LL;
        }
LABEL_93:
        StorPortExtendedFunction(86LL, a1, 0LL, v22);
        goto LABEL_94;
      case 7:
        if ( *(_QWORD *)(a1 + 3928) && (_BYTE)v20 == 1 )
        {
          if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
            StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
          LOWORD(v9) = sub_14002510C(a1, sub_140028860, 0LL);
          break;
        }
        if ( (*(_DWORD *)(a1 + 12) & 4) != 0 && (_BYTE)v20 == 0xFE && *(_BYTE *)(a3 + 2) == 0xD0 )
        {
          v19 = 4096;
          if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
            StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
          goto LABEL_94;
        }
        v19 = 512;
        if ( (*(_BYTE *)(a1 + 21) & 2) == 0 )
        {
LABEL_94:
          LOWORD(v9) = sub_140006100(a1, v19);
          break;
        }
        goto LABEL_92;
    }
LABEL_101:
    if ( v12 )
    {
      LODWORD(v9) = *(_DWORD *)(a1 + 24);
      if ( (v9 & 0x10) == 0 )
      {
        *v12 = 0;
        LOWORD(v9) = sub_1400078E0(a1, (__int64)v12);
      }
    }
    return v9;
  }
  v23 = *(_WORD *)(v7 + 4218);
  *(_BYTE *)(v7 + 4225) |= 8u;
  LOWORD(v9) = v23 & 0xE00;
  if ( (v23 & 0xE00) == 0x200 )
  {
    LOWORD(v9) = v23 & 0x1FE;
    v6 = (v23 & 0x1FE) != 10;
  }
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    LOWORD(v9) = StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
  if ( v6 )
    goto LABEL_101;
  return v9;
}
