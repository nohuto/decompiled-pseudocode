/*
 * XREFs of sub_1400E05A4 @ 0x1400E05A4
 * Callers:
 *     sub_1400E5FA4 @ 0x1400E5FA4 (sub_1400E5FA4.c)
 *     sub_1400E63C4 @ 0x1400E63C4 (sub_1400E63C4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14006E15C @ 0x14006E15C (sub_14006E15C.c)
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 *     sub_14006E934 @ 0x14006E934 (sub_14006E934.c)
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 */

void __fastcall sub_1400E05A4(_QWORD *a1, char a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  __int64 v6; // rbx
  char *v7; // rdi
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // eax
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  __int16 v20; // cx
  const wchar_t *v21; // r9

  v2 = a1[12];
  v4 = a1[16];
  v6 = sub_14007B110((__int64)a1, 0);
  if ( v6 )
  {
    v7 = (char *)sub_1400143E0(64LL, 2076LL, 1380147538LL, *(_QWORD *)(v4 + 8));
    if ( v7 )
    {
      if ( *(_BYTE *)(v6 + 2) == 40 && (v8 = *(_DWORD *)(v6 + 56)) != 0 )
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = *(unsigned int *)(v6 + 4LL * v9 + 120);
          if ( (unsigned int)v10 >= 0x80 && (unsigned int)v10 < *(_DWORD *)(v6 + 16) )
          {
            v11 = v6 + v10;
            if ( *(_DWORD *)(v6 + v10) == 67 )
              break;
          }
          if ( ++v9 >= v8 )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        v11 = 0LL;
      }
      v12 = *(_DWORD *)(v11 + 56);
      *(_BYTE *)(v11 + 16) = 33;
      *(_BYTE *)(v11 + 80) = 1;
      *(_WORD *)(v11 + 106) = 0;
      *(_DWORD *)(v11 + 56) = v12 & 0xFFFFFFF0 | (a2 == 0);
      *(_DWORD *)v7 = 2076;
      *((_QWORD *)v7 + 1) = 1LL;
      *((_DWORD *)v7 + 4) = 65538;
      *((_WORD *)v7 + 11) = 95;
      if ( (int)sub_14006E36C(1, v7 + 24) >= 0 )
      {
        sub_14006E934((__int64)(v7 + 536));
        v7[1024] = *(_BYTE *)(*(_QWORD *)(v2 + 24) + 4LL);
        v7[1025] = *(_BYTE *)(*(_QWORD *)(v2 + 24) + 8LL);
        if ( (int)sub_14006E36C(0, v7 + 1280) >= 0 )
        {
          v13 = v7 + 1536;
          v14 = 2LL;
          v15 = (_OWORD *)(*(_QWORD *)(v2 + 24) + 72LL);
          do
          {
            *v13 = *v15;
            v13[1] = v15[1];
            v13[2] = v15[2];
            v13[3] = v15[3];
            v13[4] = v15[4];
            v13[5] = v15[5];
            v13[6] = v15[6];
            v13 += 8;
            v16 = v15[7];
            v15 += 8;
            *(v13 - 1) = v16;
            --v14;
          }
          while ( v14 );
          *((_DWORD *)v7 + 512) = 1052;
          *((_WORD *)v7 + 1026) = 1;
          *((_DWORD *)v7 + 514) = 1048577;
          if ( (int)sub_14006E15C(v7 + 2060) >= 0 )
          {
            *(_QWORD *)(v6 + 64) = v7;
            *(_DWORD *)(v6 + 60) = 2076;
            *(_DWORD *)(v6 + 24) = 128;
            *(_WORD *)(v11 + 82) = 2;
            v19 = sub_1400E4050(a1[89], v6, v17, v18, 1, 0LL, 0LL, 0);
            if ( v19 < 0
              || *(_BYTE *)(v6 + 3) != 1
              || (v20 = *(_WORD *)(v11 + 86), (v20 & 0xE00) != 0)
              || (v20 & 0x1FE) != 0 )
            {
              v21 = L"Host registration failed";
              if ( !a2 )
                v21 = L"Host deregistration failed";
              sub_1400A870C(
                (__int64)a1,
                1,
                3,
                (__int64)v21,
                L"Status",
                v19,
                L"SrbStatus",
                *(_BYTE *)(v6 + 3),
                L"SCT",
                ((unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 9) & 7,
                L"SC",
                (unsigned __int64)*(unsigned __int16 *)(v11 + 86) >> 1,
                L"Register",
                a2 != 0,
                (void *)&dword_140149108,
                0,
                (void *)&dword_140149108,
                0,
                (void *)&dword_140149108,
                0);
            }
          }
        }
      }
      ExFreePoolWithTag(v7, 0x52436152u);
    }
    ExFreePoolWithTag((PVOID)v6, 0x72536152u);
  }
}
