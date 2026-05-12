/*
 * XREFs of sub_14012FF7C @ 0x14012FF7C
 * Callers:
 *     sub_14012FCD0 @ 0x14012FCD0 (sub_14012FCD0.c)
 * Callees:
 *     sub_14008BAE8 @ 0x14008BAE8 (sub_14008BAE8.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400C9458 @ 0x1400C9458 (sub_1400C9458.c)
 *     sub_1400F320C @ 0x1400F320C (sub_1400F320C.c)
 *     sub_140130658 @ 0x140130658 (sub_140130658.c)
 */

__int64 __fastcall sub_14012FF7C(__int64 a1)
{
  __int64 v1; // rax
  char v3; // r14
  unsigned int v4; // r13d
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v6; // r15
  signed __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // r12
  bool v12; // zf
  __int64 v13; // r8
  __int64 v14; // rdx
  char v15; // al
  signed __int64 v16; // rbx
  int v17; // r9d
  unsigned int v18; // ecx
  unsigned __int64 v19; // r13
  unsigned int v20; // esi
  unsigned int v21; // r13d
  __int64 v22; // rdx
  char v23; // al
  int v24; // r9d
  unsigned int v25; // ecx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r14
  unsigned int *v29; // rsi
  _DWORD *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // r14
  unsigned int *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  signed __int32 v37[8]; // [rsp+0h] [rbp-F8h] BYREF
  wchar_t *v38; // [rsp+30h] [rbp-C8h]
  __int64 v39; // [rsp+38h] [rbp-C0h]
  wchar_t *v40; // [rsp+40h] [rbp-B8h]
  __int64 v41; // [rsp+48h] [rbp-B0h]
  wchar_t *v42; // [rsp+50h] [rbp-A8h]
  __int64 v43; // [rsp+58h] [rbp-A0h]
  wchar_t *v44; // [rsp+60h] [rbp-98h]
  __int64 v45; // [rsp+68h] [rbp-90h]
  wchar_t *v46; // [rsp+70h] [rbp-88h]
  __int64 v47; // [rsp+78h] [rbp-80h]
  wchar_t *v48; // [rsp+80h] [rbp-78h]
  __int64 v49; // [rsp+88h] [rbp-70h]
  int *v50; // [rsp+90h] [rbp-68h]
  __int64 v51; // [rsp+98h] [rbp-60h]
  int v52; // [rsp+A0h] [rbp-58h]
  __int64 v53; // [rsp+A8h] [rbp-50h]
  unsigned int v54; // [rsp+100h] [rbp+8h]
  unsigned int v55; // [rsp+108h] [rbp+10h]
  unsigned int v56; // [rsp+108h] [rbp+10h]
  unsigned int v57; // [rsp+110h] [rbp+18h]
  unsigned int v58; // [rsp+118h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 128);
  v54 = 0;
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 1092);
  v52 = *(_DWORD *)(v1 + 376) & 2;
  v57 = v4;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v6 = *(_QWORD *)(a1 + 712);
  v7 = UnbiasedInterruptTime;
  if ( !v6 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 712);
  v10 = *(_DWORD *)(v6 + 124);
  v11 = (*(_DWORD *)(*(_QWORD *)(a1 + 128) + 1092LL) & 1) == 0 ? 0x989680 : 0;
  v12 = (*(_BYTE *)(*(_QWORD *)(v6 + 88) + 136LL) & 2) == 0;
  v53 = v11;
  if ( v12 )
    --v10;
  if ( sub_1400C9458(a1, v9) )
  {
    v13 = 0LL;
    v55 = 0;
    if ( v10 )
    {
      v14 = 0LL;
      do
      {
        if ( (*(_BYTE *)(v14 + *(_QWORD *)(v6 + 32) + 60) & 1) != 0
          && (*(_BYTE *)(v14 + *(_QWORD *)(v6 + 32) + 60) & 0x10) == 0
          && (*(_BYTE *)(v14 + *(_QWORD *)(v6 + 32) + 60) & 0x40) == 0
          && (*(_BYTE *)(v14 + *(_QWORD *)(v6 + 32) + 61) & 2) == 0 )
        {
          v15 = v3;
          if ( !v3 )
            v15 = 1;
          v3 = v15;
          _InterlockedOr(v37, 0);
          v16 = *(_QWORD *)(v14 + *(_QWORD *)(v6 + 32) + 64);
          if ( v16 < v7 )
          {
            v17 = *(unsigned __int16 *)(v14 + *(_QWORD *)(v6 + 32) + 58);
            v18 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1092LL);
            if ( v17 == v18 )
            {
              v18 = v4;
            }
            else
            {
              v11 = 10000000LL;
              if ( (_WORD)v17 )
                v18 = *(unsigned __int16 *)(v14 + *(_QWORD *)(v6 + 32) + 58);
              if ( (v18 & 1) != 0 )
                v11 = 0LL;
            }
            v19 = 10000000LL * v18;
            if ( v11 + v7 - v16 >= v19 )
            {
              v26 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 1272) + 40LL) + 240LL);
              ++*v26;
              if ( (*(_BYTE *)(a1 + 1344) & 0x20) != 0 )
              {
                v27 = *(_QWORD *)(v6 + 32);
                v28 = (unsigned __int64)(unsigned int)v13 << 7;
                v29 = *(unsigned int **)(*(_QWORD *)(v6 + 24) + 16LL * *(unsigned __int16 *)(v27 + v28 + 56));
                sub_1400F320C(
                  a1,
                  3,
                  v29[1] | ((unsigned __int64)*v29 << 32),
                  v29[11] | ((unsigned __int64)v29[10] << 32),
                  *(_QWORD *)(v27 + v28 + 24),
                  *(unsigned __int8 *)(v27 + v28 + 60));
                sub_140130658(a1, v29, 0LL, v28 + *(_QWORD *)(v6 + 32));
                v13 = v55;
              }
LABEL_55:
              if ( (*(_BYTE *)(a1 + 136) & 2) != 0 && (dword_140168408 & 1) != 0 )
                sub_14008BAE8(1, v6, *(_QWORD *)(v6 + 32) + (v13 << 7));
LABEL_58:
              v34 = *(_QWORD *)(a1 + 1272);
              v51 = 0LL;
              v54 = 3;
              v35 = *(_QWORD *)(v34 + 40);
              v50 = (int *)&dword_140149108;
              LOBYTE(v49) = v19;
              v48 = L"TimeoutIn100NS";
              LOBYTE(v47) = v11;
              v46 = L"CommandTimeoutBias";
              LOBYTE(v45) = v16;
              v44 = L"CmdTimestamp";
              LOBYTE(v43) = v7;
              v42 = L"CurrentTimestamp";
              LOBYTE(v41) = 0;
              v40 = L"NamespaceCountToReset";
              LOBYTE(v39) = 0;
              v38 = L"ResetNamespace";
              *(_DWORD *)(v35 + 232) = 0;
              sub_1400A870C(
                a1,
                1,
                3,
                (__int64)L"Controller command timeout",
                L"ResetController",
                1,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47,
                v48,
                v49,
                v50,
                v51);
              return v54;
            }
            v11 = v53;
            v4 = v57;
          }
        }
        v13 = (unsigned int)(v13 + 1);
        v14 += 128LL;
        v55 = v13;
      }
      while ( (unsigned int)v13 < v10 );
    }
  }
  if ( *(_QWORD *)(a1 + 728) )
  {
    v20 = 0;
    if ( *(_WORD *)(a1 + 22) )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 728) + 192LL * v20;
        v21 = *(_DWORD *)(v6 + 124);
        if ( (*(_BYTE *)(*(_QWORD *)(v6 + 88) + 136LL) & 2) == 0 )
          --v21;
        v58 = v21;
        if ( sub_1400C9458(a1, v6) )
        {
          v13 = 0LL;
          v56 = 0;
          if ( v21 )
          {
            v22 = 0LL;
            do
            {
              if ( (*(_BYTE *)(v22 + *(_QWORD *)(v6 + 32) + 60) & 1) != 0
                && (*(_BYTE *)(v22 + *(_QWORD *)(v6 + 32) + 60) & 0x10) == 0
                && (*(_BYTE *)(v22 + *(_QWORD *)(v6 + 32) + 60) & 0x40) == 0
                && (*(_BYTE *)(v22 + *(_QWORD *)(v6 + 32) + 61) & 2) == 0 )
              {
                v23 = v3;
                if ( !v3 )
                  v23 = 1;
                v3 = v23;
                _InterlockedOr(v37, 0);
                v16 = *(_QWORD *)(v22 + *(_QWORD *)(v6 + 32) + 64);
                if ( v16 < v7 )
                {
                  v24 = *(unsigned __int16 *)(v22 + *(_QWORD *)(v6 + 32) + 58);
                  v25 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1092LL);
                  if ( v24 == v25 )
                  {
                    v25 = v57;
                  }
                  else
                  {
                    v11 = 10000000LL;
                    if ( (_WORD)v24 )
                      v25 = *(unsigned __int16 *)(v22 + *(_QWORD *)(v6 + 32) + 58);
                    if ( (v25 & 1) != 0 )
                      v11 = 0LL;
                  }
                  v19 = 10000000LL * v25;
                  if ( v11 + v7 - v16 >= v19 )
                  {
                    v30 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 1272) + 40LL) + 240LL);
                    ++*v30;
                    if ( (*(_BYTE *)(a1 + 1344) & 0x20) != 0 )
                    {
                      v31 = *(_QWORD *)(v6 + 32);
                      v32 = (unsigned __int64)(unsigned int)v13 << 7;
                      v33 = *(unsigned int **)(*(_QWORD *)(v6 + 24) + 16LL * *(unsigned __int16 *)(v31 + v32 + 56));
                      sub_1400F320C(
                        a1,
                        4,
                        v33[1] | ((unsigned __int64)*v33 << 32),
                        v33[11] | ((unsigned __int64)v33[10] << 32),
                        *(_QWORD *)(v31 + v32 + 24),
                        ((unsigned __int64)*(unsigned __int8 *)(v31 + v32 + 60) << 16) | *(unsigned __int16 *)(v6 + 136));
                      sub_140130658(a1, v33, *(unsigned __int16 *)(v6 + 136), v32 + *(_QWORD *)(v6 + 32));
                      v13 = v56;
                    }
                    if ( v52 || (*(_BYTE *)(a1 + 136) & 2) != 0 )
                      goto LABEL_55;
                    goto LABEL_58;
                  }
                  v21 = v58;
                }
              }
              v11 = v53;
              v13 = (unsigned int)(v13 + 1);
              v22 += 128LL;
              v56 = v13;
            }
            while ( (unsigned int)v13 < v21 );
          }
        }
        if ( ++v20 >= *(unsigned __int16 *)(a1 + 22) )
          break;
        v11 = v53;
      }
    }
  }
  if ( v3 )
    return v54;
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1272) + 40LL) + 232LL);
  v36 = *(_QWORD *)(*(_QWORD *)(a1 + 1272) + 40LL);
  if ( *(_DWORD *)(v36 + 232) < *(_DWORD *)(v36 + 196) )
    return v54;
  result = 1LL;
  *(_DWORD *)(v36 + 232) = 0;
  return result;
}
