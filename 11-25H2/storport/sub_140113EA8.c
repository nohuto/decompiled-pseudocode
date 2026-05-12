/*
 * XREFs of sub_140113EA8 @ 0x140113EA8
 * Callers:
 *     sub_1400FD098 @ 0x1400FD098 (sub_1400FD098.c)
 *     sub_140103A50 @ 0x140103A50 (sub_140103A50.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400DE06C @ 0x1400DE06C (sub_1400DE06C.c)
 *     sub_1400E65F4 @ 0x1400E65F4 (sub_1400E65F4.c)
 *     sub_1401016D0 @ 0x1401016D0 (sub_1401016D0.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 *     sub_140114444 @ 0x140114444 (sub_140114444.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140113EA8(__int64 a1, LONGLONG a2, __int64 a3, __int64 a4, int a5)
{
  PHYSICAL_ADDRESS *v6; // rdi
  __int64 v7; // rbp
  _BYTE *v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  unsigned int i; // ecx
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // ebx
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int16 v20; // r14
  unsigned __int16 v21; // ax
  char v22; // dl
  PHYSICAL_ADDRESS *v23; // rax
  __int64 v24; // r8
  void *v25; // rax
  char *v26; // r8
  __int64 v27; // r10
  char *v28; // rdx
  PHYSICAL_ADDRESS v29; // rcx
  PHYSICAL_ADDRESS v30; // rcx
  char v31; // al
  __int64 v32; // r10
  DWORD v34; // [rsp+40h] [rbp-48h]
  unsigned __int16 v37; // [rsp+A0h] [rbp+18h]

  v6 = 0LL;
  v7 = 0LL;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v8 = *(_BYTE **)(a3 + 64);
    v34 = *(_DWORD *)(a3 + 60);
    if ( sub_1401016D0(a1) && (*(_BYTE *)(v10 + 1) & 1) == 0 )
    {
      v13 = *(_DWORD *)(v9 + 56);
      v7 = a3;
      if ( v13 )
      {
        for ( i = 0; i < v13; ++i )
        {
          v15 = *(unsigned int *)(a3 + 4LL * i + 120);
          if ( (unsigned int)v15 >= 0x80 && (unsigned int)v15 < *(_DWORD *)(a3 + 16) )
          {
            v16 = a3 + v15;
            if ( *(_DWORD *)(a3 + v15) == 67 )
            {
              if ( !v16 )
                break;
              if ( v12 < 0x18 )
              {
                sub_140112680(a3, 21, 5, 36, 0);
                v17 = -1073741789;
                goto LABEL_31;
              }
              v18 = *(_QWORD *)(v11 + 16);
              HIBYTE(v37) = v8[2];
              LOBYTE(v37) = v8[3];
              v19 = *(_QWORD *)(v18 + 600);
              v20 = v37 >> 4;
              if ( !v19 || (v21 = *(unsigned __int8 *)(v19 + 3), !(_BYTE)v21) )
                v21 = 256;
              if ( v20 > v21 )
              {
                v22 = 21;
                goto LABEL_29;
              }
              v23 = (PHYSICAL_ADDRESS *)sub_1400143E0(
                                          64LL,
                                          40LL,
                                          1296982354LL,
                                          *(_QWORD *)(*(_QWORD *)(v18 + 128) + 8LL));
              v6 = v23;
              if ( !v23 )
              {
                v17 = -1073741801;
                goto LABEL_31;
              }
              v25 = sub_1400DE06C(*(_QWORD *)(a1 + 16), 16 * (unsigned int)v20, v24, v23 + 4);
              v6[3].QuadPart = (LONGLONG)v25;
              if ( !v25 )
              {
                v17 = -1073741801;
                goto LABEL_31;
              }
              v6->QuadPart = a2;
              v6[2].LowPart = v34;
              v6[1].QuadPart = (LONGLONG)v8;
              v6[2].HighPart = v20;
              if ( v20 )
              {
                v26 = v8 + 18;
                v27 = v20;
                do
                {
                  v28 = &v26[-18LL - (_QWORD)v8];
                  v29 = v6[3];
                  v28[v29.QuadPart + 15] = *(v26 - 10);
                  v28[v29.QuadPart + 14] = *(v26 - 9);
                  v28[v29.QuadPart + 13] = *(v26 - 8);
                  v28[v29.QuadPart + 12] = *(v26 - 7);
                  v28[v29.QuadPart + 11] = *(v26 - 6);
                  v28[v29.QuadPart + 10] = *(v26 - 5);
                  v28[v29.QuadPart + 9] = *(v26 - 4);
                  v28[v29.QuadPart + 8] = *(v26 - 3);
                  v30 = v6[3];
                  v28[v30.QuadPart + 7] = *(v26 - 2);
                  v28[v30.QuadPart + 6] = *(v26 - 1);
                  v31 = *v26;
                  v26 += 16;
                  v28[v30.QuadPart + 5] = v31;
                  v28[v30.QuadPart + 4] = *(v26 - 15);
                  --v27;
                }
                while ( v27 );
              }
              *(_DWORD *)(a3 + 20) = 10;
              *(PHYSICAL_ADDRESS *)(a3 + 64) = v6[3];
              *(_DWORD *)(a3 + 60) = 16 * v20;
              memset_0((void *)(v16 + 8), 0, 0x64uLL);
              sub_140114444(*(unsigned int *)(a1 + 56), v20, v16 + 16, 0LL);
              v17 = sub_1400E65F4(*(_QWORD *)(v32 + 16), a3, 0LL, v32, a5, (__int64)sub_1400F9A20, (__int64)v6);
              if ( v17 >= 0 )
                return (unsigned int)v17;
              goto LABEL_31;
            }
          }
        }
      }
    }
    v22 = 6;
LABEL_29:
    sub_140112680(a3, v22, 5, 36, 0);
    v17 = -1073741811;
  }
  else
  {
    v17 = -1073741637;
  }
LABEL_31:
  *(_DWORD *)(v7 + 20) = 0;
  if ( v6 )
  {
    *(PHYSICAL_ADDRESS *)(v7 + 64) = v6[1];
    *(_DWORD *)(v7 + 60) = v6[2].LowPart;
    ExFreePoolWithTag(v6, 0x4D4E6152u);
  }
  return (unsigned int)v17;
}
