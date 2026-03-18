/*
 * XREFs of NVMeIceInitPart2 @ 0x140031A48
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x140013020 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 *     NVMeIceAddressIsExclusionRange @ 0x140031514 (NVMeIceAddressIsExclusionRange.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

__int64 __fastcall NVMeIceInitPart2(__int64 a1)
{
  bool v1; // zf
  unsigned int v3; // edi
  unsigned int i; // esi
  unsigned int v5; // eax
  unsigned __int16 v6; // si
  _QWORD *v7; // rdx
  __int64 v8; // r8
  unsigned __int16 v9; // cx
  int v10; // r14d
  unsigned int v11; // r15d
  unsigned __int16 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int16 v16; // r11
  unsigned int v17; // edi
  __int64 v18; // r10
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  unsigned int v36; // eax
  _OWORD v38[2]; // [rsp+38h] [rbp-28h] BYREF

  v1 = (*(_DWORD *)(a1 + 4064) & 0x10000) == 0;
  memset(v38, 0, sizeof(v38));
  if ( !v1 && (*(_BYTE *)(a1 + 4344) & 6) == 6 )
  {
    v3 = NVMeIceConfigureExclusionAddress(
           a1,
           *(_QWORD *)(a1 + 552),
           *(unsigned __int16 *)(a1 + 322) * *(unsigned __int16 *)(a1 + 324),
           0,
           1,
           1);
    if ( v3 )
      return v3;
    v3 = NVMeIceConfigureExclusionAddress(
           a1,
           *(_QWORD *)(a1 + 344),
           *(unsigned __int16 *)(a1 + 320) * *(unsigned __int16 *)(a1 + 324),
           1,
           0,
           1);
    if ( v3 )
      return v3;
    for ( i = 0; !(unsigned int)StorPortExtendedFunction(13LL, a1, i, v38); ++i )
    {
      if ( !NVMeIceAddressIsExclusionRange(a1, *((unsigned __int64 *)&v38[0] + 1)) )
      {
        v3 = NVMeIceConfigureExclusionAddress(a1, *((__int64 *)&v38[0] + 1), 4LL, 1, 1, 1);
        if ( v3 )
          return v3;
      }
    }
    v5 = *(_DWORD *)(a1 + 224);
    v6 = 0;
    if ( v5 )
    {
      v7 = (_QWORD *)(a1 + 1672);
      v8 = v5;
      do
      {
        v1 = *v7 == 0LL;
        v9 = v6 + 1;
        ++v7;
        if ( v1 )
          v9 = v6;
        v6 = v9;
        --v8;
      }
      while ( v8 );
      if ( v9 )
      {
        v10 = 24 * (*(unsigned __int16 *)(a1 + 330) + 2 + *(unsigned __int16 *)(a1 + 332));
        v11 = v10 + 16 + 4 * v9;
        v3 = StorPortExtendedFunction(0LL, a1, v11, 1701672526LL);
        if ( v3 )
          return v3;
        v12 = 0;
        v13 = 0;
        MEMORY[0] = 1;
        MEMORY[4] = v11;
        MEMORY[0xA] = 16;
        MEMORY[0xE] = v11 - v10;
        if ( *(_DWORD *)(a1 + 224) )
        {
          do
          {
            v14 = *(_QWORD *)(a1 + 8LL * v13 + 1672);
            if ( v14 )
            {
              v15 = v12++;
              *(_WORD *)(4 * v15 + 0x10) = *(_WORD *)(v14 + 16);
              *(_WORD *)(4 * v15 + 0x12) = *(_WORD *)(*(_QWORD *)(a1 + 8LL * v13 + 1672) + 52LL);
            }
            ++v13;
          }
          while ( v13 < *(_DWORD *)(a1 + 224) );
          if ( v12 == v6 )
          {
            v16 = 2;
            v17 = 0;
            MEMORY[8] = v6;
            v18 = MEMORY[0xE];
            *(_WORD *)MEMORY[0xE] = 0;
            v19 = *(unsigned __int16 *)(a1 + 324);
            v20 = *(unsigned __int16 *)(a1 + 320);
            *(_DWORD *)(v18 + 8) = 1;
            *(_DWORD *)(v18 + 4) = v19 * v20;
            *(_QWORD *)(v18 + 16) = *(_QWORD *)(a1 + 344);
            *(_WORD *)(v18 + 24) = 0;
            v21 = *(unsigned __int16 *)(a1 + 322) * *(unsigned __int16 *)(a1 + 324);
            *(_DWORD *)(v18 + 32) = 2;
            *(_DWORD *)(v18 + 28) = v21;
            for ( *(_QWORD *)(v18 + 40) = *(_QWORD *)(a1 + 552);
                  v17 < *(unsigned __int16 *)(a1 + 332);
                  *(_QWORD *)(v18 + 8 * v26 + 16) = *(_QWORD *)(v24 + v22 + 8) )
            {
              v22 = *(_QWORD *)(a1 + 944);
              v23 = v17++;
              v24 = 392 * v23;
              v25 = v16++;
              v26 = 3 * v25;
              *(_WORD *)(v18 + 8 * v26) = *(_WORD *)(v24 + v22 + 168);
              v27 = *(unsigned __int16 *)(a1 + 326) * *(unsigned __int16 *)(a1 + 322);
              *(_DWORD *)(v18 + 8 * v26 + 8) = 4;
              *(_DWORD *)(v18 + 8 * v26 + 4) = v27;
            }
            LOWORD(v28) = *(_WORD *)(a1 + 330);
            v29 = 0;
            if ( (_WORD)v28 )
            {
              do
              {
                v30 = *(_QWORD *)(a1 + 936);
                v31 = v29++;
                v32 = 208 * v31;
                v33 = v16++;
                v34 = 3 * v33;
                *(_WORD *)(v18 + 8 * v34) = *(_WORD *)(v32 + v30 + 48);
                v35 = *(unsigned __int16 *)(a1 + 320) * *(unsigned __int16 *)(a1 + 326);
                *(_DWORD *)(v18 + 8 * v34 + 8) = 3;
                *(_DWORD *)(v18 + 8 * v34 + 4) = v35;
                *(_QWORD *)(v18 + 8 * v34 + 16) = *(_QWORD *)(v32 + v30 + 8);
                v28 = *(unsigned __int16 *)(a1 + 330);
              }
              while ( v29 < v28 );
            }
            if ( v16 == *(unsigned __int16 *)(a1 + 332) + 2 + (unsigned __int16)v28 )
            {
              MEMORY[0xC] = v16;
              v36 = StorPortExtendedFunction(142LL, a1, *(unsigned int *)(a1 + 4336), *(unsigned int *)(a1 + 4340));
              v3 = v36;
              if ( v36 )
              {
                if ( v36 == -1056964606 )
                  return 0;
              }
              else
              {
                *(_DWORD *)(a1 + 4344) |= 8u;
              }
              return v3;
            }
          }
        }
      }
    }
    return (unsigned int)-1056964602;
  }
  return 0LL;
}
