/*
 * XREFs of ApiSetpResolveHost @ 0x14023F598
 * Callers:
 *     ApiSetResolveToHost @ 0x14010FD2C (ApiSetResolveToHost.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x14023F8C8 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14023FA70 (ApiSetpSearchForSectionIndex_V7.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ApiSetpResolveHost(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7)
{
  unsigned __int16 *v7; // rsi
  char v9; // r12
  unsigned __int16 v10; // ax
  int v11; // r9d
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r10
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // cx
  unsigned __int64 v17; // rcx
  char v18; // al
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // ax
  int v21; // r8d
  unsigned __int64 v22; // rdi
  __int64 v23; // r9
  unsigned __int16 v24; // dx
  unsigned __int16 v25; // cx
  __int64 v26; // rcx
  unsigned __int16 v27; // ax
  int v28; // r9d
  unsigned __int64 v29; // r8
  __int64 v30; // r10
  unsigned __int16 v31; // dx
  unsigned __int16 v32; // cx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int16 v35; // ax
  __int64 v37; // [rsp+20h] [rbp-40h] BYREF
  __int128 v38; // [rsp+28h] [rbp-38h] BYREF
  __int128 v39; // [rsp+38h] [rbp-28h]
  __int64 v40; // [rsp+48h] [rbp-18h] BYREF
  int v41; // [rsp+50h] [rbp-10h]

  v7 = a2;
  *(_OWORD *)a7 = 0LL;
  v9 = 0;
  v38 = 0LL;
  v39 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, (unsigned __int16)a3, a3, &v38) )
    goto LABEL_41;
  switch ( HIDWORD(v38) )
  {
    case 1:
      v27 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v38);
      if ( v27 != 0xFFFF )
      {
        v28 = 0;
        v29 = a1
            + v27 * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
            - *(unsigned __int16 *)(a1 + 18)
            + *(unsigned int *)(a1 + 44);
        if ( WORD1(v39) )
        {
          v30 = WORD1(v39);
          do
          {
            v31 = *v7++;
            v32 = v31 + 32;
            if ( (unsigned __int16)(v31 - 65) > 0x19u )
              v32 = v31;
            v28 = v32 + *(unsigned __int8 *)(a1 + 55) * v28;
            --v30;
          }
          while ( v30 );
        }
        if ( *(_DWORD *)v29 == v28 )
        {
          v18 = *(_BYTE *)(v29 + 10);
          v19 = *(_WORD *)(v29 + 4);
          goto LABEL_38;
        }
      }
      break;
    case 2:
      v20 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v38);
      if ( v20 != 0xFFFF )
      {
        v21 = 0;
        v22 = a1
            + v20 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64)
            - *(unsigned __int16 *)(a1 + 18)
            + *(unsigned int *)(a1 + 56);
        if ( WORD1(v39) )
        {
          v23 = WORD1(v39);
          do
          {
            v24 = *v7++;
            v25 = v24 + 32;
            if ( (unsigned __int16)(v24 - 65) > 0x19u )
              v25 = v24;
            v21 = v25 + *(unsigned __int8 *)(a1 + 67) * v21;
            --v23;
          }
          while ( v23 );
        }
        if ( *(_DWORD *)v22 == v21 )
        {
          if ( (*(_BYTE *)(v22 + 6) & 4) == 0
            || (v26 = *(unsigned int *)(v22 + 8), !(_DWORD)v26)
            || (v37 = 0LL, v40 = 0LL, v41 = 0, !(unsigned int)RtlQueryFeatureConfiguration(v26, 0LL, &v37, &v40))
            && v37
            && (_DWORD)v40 == *(_DWORD *)(v22 + 8)
            && (BYTE4(v40) & 0x30) == 0x20 )
          {
            v17 = *(unsigned int *)(a1 + 44)
                + *(unsigned __int16 *)(v22 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
                - *(unsigned __int16 *)(a1 + 18);
            goto LABEL_15;
          }
        }
      }
      break;
    case 3:
      v10 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v38);
      if ( v10 != 0xFFFF )
      {
        v11 = 0;
        v12 = *(unsigned __int16 *)(a1 + 18);
        v13 = a1 + *(unsigned int *)(a1 + 68) + v10 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - v12;
        if ( WORD1(v39) )
        {
          v14 = WORD1(v39);
          do
          {
            v15 = *v7++;
            v16 = v15 + 32;
            if ( (unsigned __int16)(v15 - 65) > 0x19u )
              v16 = v15;
            v11 = v16 + *(unsigned __int8 *)(a1 + 79) * v11;
            --v14;
          }
          while ( v14 );
        }
        if ( *(_DWORD *)v13 == v11
          && ((*(_BYTE *)(v13 + 10) & 4) == 0 || (unsigned int)WORD4(v39) <= *(unsigned __int8 *)(v13 + 9)) )
        {
          v17 = *(unsigned int *)(a1 + 44)
              + *(unsigned __int16 *)(v13 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
              - v12;
LABEL_15:
          v18 = *(_BYTE *)(v17 + a1 + 10);
          v19 = *(_WORD *)(v17 + a1 + 4);
LABEL_38:
          v9 = 1;
          if ( (v18 & 2) != 0 )
          {
            v33 = *(unsigned __int16 *)(a1 + 18);
            v34 = *(unsigned int *)(a1 + 92) + v19 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100) - v33;
            if ( *(_BYTE *)(v34 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
            {
              *(_QWORD *)(a7 + 8) = a1
                                  + *(unsigned int *)(v34 + a1 + 4)
                                  + (unsigned __int64)*(unsigned int *)(a1 + 36)
                                  - v33;
              v35 = 2 * *(_WORD *)(v34 + a1 + 8);
              *(_WORD *)a7 = v35;
              *(_WORD *)(a7 + 2) = v35;
            }
          }
        }
      }
      break;
  }
LABEL_41:
  *a6 = v9;
  return 0LL;
}
