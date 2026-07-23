/*
 * XREFs of ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x1406E001C
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406DE7C0 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x14052B9D0 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406DF79C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetCompose_V7_ProcessV6Extension_Phase0(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int i; // r14d
  __int64 v6; // rcx
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // r12d
  unsigned int v11; // r12d
  unsigned __int16 v12; // ax
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+40h]
  __int64 v18; // [rsp+A8h] [rbp+58h]

  v2 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    v6 = a1 + *(unsigned int *)(a1 + 16);
    v17 = v6;
    if ( (*(_DWORD *)(v6 + 24LL * i) & 4) == 0 )
    {
      v7 = *(_DWORD *)(v6 + 24LL * i + 8);
      v8 = *(_QWORD *)(a2 + 8);
      v16 = 0LL;
      v9 = *(unsigned int *)(v6 + 24LL * i + 4);
      v10 = v7 >> 1;
      v15 = 0LL;
      *(_QWORD *)&v14 = a1 + v9;
      *((_QWORD *)&v14 + 1) = (unsigned __int16)v10;
      BYTE10(v14) = 1;
      WORD1(v15) = v10;
      if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v8, v8 + 92, (__int64)&v14) == 0xFFFF )
      {
        ++*(_WORD *)(a2 + 200);
        *(_DWORD *)(a2 + 204) += 20;
        *(_DWORD *)(a2 + 232) += 2 * (unsigned __int16)v10;
      }
      v11 = 0;
LABEL_9:
      if ( v11 >= *(_DWORD *)(v17 + 24LL * i + 20) )
        continue;
      v14 = 0LL;
      v18 = a1 + *(unsigned int *)(v17 + 24LL * i + 16);
      v16 = 0LL;
      v15 = 0LL;
      if ( !ApiSetpGetContractKeyInfo(
              (_QWORD *)(a1 + *(unsigned int *)(v18 + 20LL * v11 + 12)),
              *(_DWORD *)(v18 + 20LL * v11 + 16) >> 1,
              1,
              (__int64)&v14) )
        return (unsigned int)-1073741773;
      v12 = ApiSetpSearchForSectionIndex_V7(v8, v8 + 68, (__int64)&v14);
      if ( v12 == 0xFFFF )
      {
        ++*(_WORD *)(a2 + 188);
        *(_DWORD *)(a2 + 192) += 20;
        ++*(_WORD *)(a2 + 164);
        *(_DWORD *)(a2 + 168) += 20;
LABEL_14:
        if ( *(_DWORD *)(v18 + 20LL * v11 + 4) )
        {
          ++*(_WORD *)(a2 + 224);
          *(_DWORD *)(a2 + 228) += 16;
          v8 = *(_QWORD *)(a2 + 8);
        }
      }
      else if ( (*(_BYTE *)(*(unsigned int *)(v8 + 68)
                          + v8
                          + v12 * (unsigned __int64)*(unsigned __int8 *)(v8 + 76)
                          - *(unsigned __int16 *)(v8 + 18)
                          + 10) & 1) == 0 )
      {
        goto LABEL_14;
      }
      ++v11;
      goto LABEL_9;
    }
    ++*(_WORD *)(a2 + 212);
    *(_DWORD *)(a2 + 216) += 12;
  }
  return v2;
}
