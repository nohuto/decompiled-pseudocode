/*
 * XREFs of sub_14007FA50 @ 0x14007FA50
 * Callers:
 *     sub_140075D90 @ 0x140075D90 (sub_140075D90.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14007FE20 @ 0x14007FE20 (sub_14007FE20.c)
 *     sub_14007FE98 @ 0x14007FE98 (sub_14007FE98.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 */

__int64 __fastcall sub_14007FA50(__int64 *a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  int v4; // esi
  int v5; // edx
  int v6; // r8d
  unsigned int v7; // r9d
  __int64 v8; // r8
  unsigned int v9; // r11d
  unsigned __int64 v10; // rdi
  _DWORD *v11; // r10
  _DWORD *v12; // rdx
  int v14; // [rsp+20h] [rbp-E0h]
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v17[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = 0;
  v2 = 0;
  if ( (unsigned __int64)(a1[1] - *a1) >= 0xC )
  {
    v4 = 0;
    do
    {
      memset(v17, 0, sizeof(v17));
      v15 = 4096;
      v16 = 0;
      v1 = sub_14007FE20((unsigned int)&unk_1400CBBA0, v5, v6, (unsigned int)&v16, (__int64)v17, (__int64)&v15);
      if ( !v1 )
      {
        v7 = v15;
        if ( v15 != 12 * (v15 / 0xCuLL) )
        {
          v7 = 0;
          v15 = 0;
        }
        v8 = *a1;
        v9 = v7 / 0xC;
        v10 = *a1 + 12 * ((a1[1] - *a1) / 0xCuLL);
        while ( 1 )
        {
          v12 = v17;
          if ( v8 == v10 )
            break;
          v11 = &v17[3 * v9];
          while ( v12 != v11 )
          {
            if ( *v12 == *(_DWORD *)v8 && *((_WORD *)v12 + 2) == *(_WORD *)(v8 + 4) )
            {
              v12[2] += *(_DWORD *)(v8 + 8);
              v7 = v15;
              goto LABEL_15;
            }
            v12 += 3;
          }
          if ( (unsigned __int64)v7 + 12 <= 0x1000 )
          {
            v7 += 12;
            *(_QWORD *)v11 = *(_QWORD *)v8;
            ++v9;
            v11[2] = *(_DWORD *)(v8 + 8);
            v15 = v7;
          }
LABEL_15:
          v8 += 12LL;
        }
        v2 = sub_14007FE98((unsigned int)&unk_1400CBBA0, (unsigned int)v17, v7, v7, v14, v16, 1);
      }
      ++v4;
    }
    while ( v2 == -1073741823 && v4 < 100 && !v1 );
  }
  if ( !v1 )
    return v2;
  return v1;
}
