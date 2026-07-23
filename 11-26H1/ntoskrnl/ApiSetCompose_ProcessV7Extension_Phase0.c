/*
 * XREFs of ApiSetCompose_ProcessV7Extension_Phase0 @ 0x1406DE9D8
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406DE7C0 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x14052B9D0 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406DF79C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetCompose_ProcessV7Extension_Phase0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int i; // ecx
  __int64 v6; // r12
  __int64 *v7; // r14
  __int64 v8; // rsi
  unsigned __int16 v9; // ax
  char v10; // al
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  bool j; // cf
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-30h]
  __int128 v20; // [rsp+28h] [rbp-28h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h]
  __int64 v22; // [rsp+48h] [rbp-8h]
  unsigned int v23; // [rsp+90h] [rbp+40h]
  unsigned int v24; // [rsp+A0h] [rbp+50h]
  __int64 v25; // [rsp+A8h] [rbp+58h]

  v2 = 0;
  if ( *(_WORD *)(a1 + 16) )
  {
    ++*(_WORD *)(a2 + 212);
    *(_DWORD *)(a2 + 216) += 12;
  }
  for ( i = 0; ; i = v24 + 1 )
  {
    v24 = i;
    if ( i >= *(unsigned __int16 *)(a1 + 18) )
      break;
    v22 = 0LL;
    v20 = 0LL;
    v6 = 5LL * i;
    v19 = v6;
    v25 = a1 + *(unsigned int *)(a1 + 12);
    v21 = 0LL;
    if ( !ApiSetpGetContractKeyInfo(
            (_QWORD *)(a1 + *(unsigned int *)(v25 + 20LL * i)),
            *(_WORD *)(v25 + 20LL * i + 8),
            0,
            (__int64)&v20)
      || (unsigned int)(HIDWORD(v20) - 2) > 1 )
    {
      return (unsigned int)-1073741773;
    }
    v7 = (__int64 *)(a2 + 8);
    v8 = *(_QWORD *)(a2 + 8);
    if ( HIDWORD(v20) == 2 )
    {
      v9 = ApiSetpSearchForSectionIndex_V7(v8, v8 + 56, &v20);
      if ( v9 == 0xFFFF )
      {
        ++*(_WORD *)(a2 + 176);
        v10 = 0;
        *(_DWORD *)(a2 + 180) += 20;
        ++*(_WORD *)(a2 + 164);
        *(_DWORD *)(a2 + 168) += 20;
      }
      else
      {
        v10 = *(_BYTE *)(*(unsigned int *)(v8 + 56)
                       + v8
                       + v9 * (unsigned __int64)*(unsigned __int8 *)(v8 + 64)
                       - *(unsigned __int16 *)(v8 + 18)
                       + 6) & 1;
      }
      v7 = (__int64 *)(a2 + 8);
LABEL_15:
      if ( v10 )
        continue;
      goto LABEL_16;
    }
    v11 = ApiSetpSearchForSectionIndex_V7(v8, v8 + 68, &v20);
    if ( v11 != 0xFFFF )
    {
      v10 = *(_BYTE *)(*(unsigned int *)(v8 + 68)
                     + v8
                     + v11 * (unsigned __int64)*(unsigned __int8 *)(v8 + 76)
                     - *(unsigned __int16 *)(v8 + 18)
                     + 10) & 1;
      goto LABEL_15;
    }
    ++*(_WORD *)(a2 + 188);
    *(_DWORD *)(a2 + 192) += 20;
    ++*(_WORD *)(a2 + 164);
    *(_DWORD *)(a2 + 168) += 20;
LABEL_16:
    v12 = v25;
    v13 = 0;
    for ( j = *(_WORD *)(v25 + 4 * v6 + 10) != 0; ; j = v23 + 1 < *(unsigned __int16 *)(v25 + 4 * v19 + 10) )
    {
      v23 = v13;
      if ( !j )
        break;
      v15 = *(unsigned int *)(v12 + 4 * v6 + 4);
      v20 = 0LL;
      BYTE10(v20) = 1;
      v21 = 0LL;
      v22 = 0LL;
      v16 = a1 + 16LL * v13;
      v17 = a1 + *(unsigned int *)(v15 + v16);
      WORD4(v20) = *(_WORD *)(v15 + v16 + 8);
      WORD1(v21) = WORD4(v20);
      *(_QWORD *)&v20 = v17;
      if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v8, v8 + 92, &v20) == 0xFFFF && !*(_WORD *)(v15 + v16 + 12) )
      {
        ++*(_WORD *)(a2 + 200);
        *(_DWORD *)(a2 + 204) += 20;
        *(_DWORD *)(a2 + 232) += 2 * *(unsigned __int16 *)(v15 + v16 + 8);
        *(_WORD *)(v15 + v16 + 12) |= 1u;
        v8 = *v7;
      }
      if ( *(_WORD *)(v15 + v16 + 10) )
      {
        ++*(_WORD *)(a2 + 224);
        *(_DWORD *)(a2 + 228) += 16;
      }
      v6 = v19;
      v12 = v25;
      v13 = v23 + 1;
    }
  }
  return v2;
}
