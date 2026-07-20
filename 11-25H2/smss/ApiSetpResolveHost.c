/*
 * XREFs of ApiSetpResolveHost @ 0x14001990C
 * Callers:
 *     ApiSetResolveToHost @ 0x140008B40 (ApiSetResolveToHost.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x140019CFC (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x140019EA4 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x140019F68 (ApiSetpSearchForSectionIndex_V7.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
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
  unsigned __int16 *v7; // r14
  char v9; // r12
  unsigned __int16 v10; // ax
  __int64 v11; // r11
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int16 v15; // cx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int16 v18; // r8
  char v19; // al
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // r10
  unsigned __int16 v22; // ax
  int v23; // edx
  unsigned __int64 v24; // rdi
  __int64 v25; // r8
  unsigned __int16 v26; // cx
  __int64 v27; // rcx
  unsigned __int16 v28; // ax
  int v29; // r8d
  unsigned __int64 v30; // rdx
  __int64 v31; // r9
  unsigned __int16 v32; // cx
  __int64 v33; // r11
  __int64 v34; // rdx
  __int16 v35; // ax
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v40; // [rsp+30h] [rbp-50h] BYREF
  __int128 v41; // [rsp+38h] [rbp-48h] BYREF
  __int128 v42; // [rsp+48h] [rbp-38h]
  char *v43; // [rsp+58h] [rbp-28h]
  __int64 v44; // [rsp+60h] [rbp-20h] BYREF
  int v45; // [rsp+68h] [rbp-18h]

  v7 = a2;
  v43 = a6;
  *(_OWORD *)a7 = 0LL;
  v9 = 0;
  v41 = 0LL;
  v42 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, (unsigned __int16)a3, a3, &v41) )
    goto LABEL_44;
  switch ( HIDWORD(v41) )
  {
    case 1:
      v28 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v41);
      if ( v28 != 0xFFFF )
      {
        v29 = 0;
        v30 = a1
            + v28 * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
            - *(unsigned __int16 *)(a1 + 18)
            + *(unsigned int *)(a1 + 44);
        if ( WORD1(v42) )
        {
          v31 = WORD1(v42);
          do
          {
            v32 = *v7 + 32;
            if ( (unsigned __int16)(*v7 - 65) > 0x19u )
              v32 = *v7;
            ++v7;
            v29 = v32 + *(unsigned __int8 *)(a1 + 55) * v29;
            --v31;
          }
          while ( v31 );
        }
        if ( *(_DWORD *)v30 == v29 )
        {
          v18 = *(_WORD *)(v30 + 8);
          v19 = *(_BYTE *)(v30 + 10);
          v20 = *(_WORD *)(v30 + 4);
          v21 = *(_WORD *)(v30 + 6);
          goto LABEL_38;
        }
      }
      break;
    case 2:
      v22 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v41);
      if ( v22 != 0xFFFF )
      {
        v23 = 0;
        v24 = a1
            + v22 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64)
            - *(unsigned __int16 *)(a1 + 18)
            + *(unsigned int *)(a1 + 56);
        if ( WORD1(v42) )
        {
          v25 = WORD1(v42);
          do
          {
            v26 = *v7 + 32;
            if ( (unsigned __int16)(*v7 - 65) > 0x19u )
              v26 = *v7;
            ++v7;
            v23 = v26 + *(unsigned __int8 *)(a1 + 67) * v23;
            --v25;
          }
          while ( v25 );
        }
        if ( *(_DWORD *)v24 == v23 )
        {
          if ( (*(_BYTE *)(v24 + 6) & 4) == 0
            || (v27 = *(unsigned int *)(v24 + 8), !(_DWORD)v27)
            || (v40 = 0LL, v44 = 0LL, v45 = 0, !(unsigned int)RtlQueryFeatureConfiguration(v27, 0LL, &v40, &v44))
            && v40
            && (_DWORD)v44 == *(_DWORD *)(v24 + 8)
            && (BYTE4(v44) & 0x30) == 0x20 )
          {
            v16 = *(unsigned int *)(a1 + 44)
                + *(unsigned __int16 *)(v24 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
                - *(unsigned __int16 *)(a1 + 18);
            goto LABEL_15;
          }
        }
      }
      break;
    case 3:
      v10 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v41);
      if ( v10 != 0xFFFF )
      {
        v11 = *(unsigned __int16 *)(a1 + 18);
        v12 = 0;
        v13 = a1 + *(unsigned int *)(a1 + 68) + v10 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - v11;
        if ( WORD1(v42) )
        {
          v14 = WORD1(v42);
          do
          {
            v15 = *v7 + 32;
            if ( (unsigned __int16)(*v7 - 65) > 0x19u )
              v15 = *v7;
            ++v7;
            v12 = v15 + *(unsigned __int8 *)(a1 + 79) * v12;
            --v14;
          }
          while ( v14 );
        }
        if ( *(_DWORD *)v13 == v12
          && ((*(_BYTE *)(v13 + 10) & 4) == 0 || (unsigned int)WORD4(v42) <= *(unsigned __int8 *)(v13 + 9)) )
        {
          v16 = *(unsigned int *)(a1 + 44)
              + *(unsigned __int16 *)(v13 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
              - v11;
LABEL_15:
          v17 = a1 + v16;
          v18 = *(_WORD *)(v17 + 8);
          v19 = *(_BYTE *)(v17 + 10);
          v20 = *(_WORD *)(v17 + 4);
          v21 = *(_WORD *)(v17 + 6);
LABEL_38:
          v9 = 1;
          if ( (v19 & 2) != 0 )
          {
            v33 = *(unsigned __int16 *)(a1 + 18);
            v34 = *(unsigned int *)(a1 + 92) + v20 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100) - v33;
            if ( *(_BYTE *)(v34 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
            {
              *(_QWORD *)(a7 + 8) = a1
                                  + *(unsigned int *)(a1 + 36)
                                  + (unsigned __int64)*(unsigned int *)(v34 + a1 + 4)
                                  - v33;
              v35 = 2 * *(_WORD *)(v34 + a1 + 8);
              *(_WORD *)a7 = v35;
              *(_WORD *)(a7 + 2) = v35;
              if ( a5 )
              {
                if ( v18 )
                {
                  v36 = ApiSetpSearchForHostOverrideIndex_V7(a1, v21, v18, *(_QWORD *)(a5 + 8), *(_WORD *)a5 >> 1);
                  if ( v36 != 0xFFFF )
                  {
                    v37 = *(unsigned __int16 *)(a1 + 18);
                    v38 = *(unsigned int *)(a1 + 104) + v36 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v37;
                    *(_QWORD *)(a7 + 8) = a1
                                        + *(unsigned int *)(a1 + 36)
                                        + (unsigned __int64)*(unsigned int *)(v38 + a1 + 8)
                                        - v37;
                    *(_WORD *)(a7 + 2) = 2 * *(_WORD *)(v38 + a1 + 14);
                    *(_WORD *)a7 = 2 * *(_WORD *)(v38 + a1 + 14);
                  }
                }
              }
            }
          }
        }
      }
      break;
  }
LABEL_44:
  *v43 = v9;
  return 0LL;
}
