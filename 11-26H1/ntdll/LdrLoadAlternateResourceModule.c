/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x1800E4F90
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     LdrpSetThreadPreferredLangList @ 0x180008130 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180009A70 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpGetRcConfig @ 0x18002DE20 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpCompareServiceChecksum @ 0x1800E539C (LdrpCompareServiceChecksum.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModule(__int64 a1, size_t *a2, __int64 *a3, int a4)
{
  int v7; // r14d
  __int64 v8; // r10
  __int64 v9; // rdx
  _DWORD *RcConfig; // rdi
  int AlternateResourceModule; // esi
  int v12; // eax
  int v13; // r15d
  unsigned __int16 v14; // bx
  unsigned int i; // ecx
  size_t *v16; // r8
  int v18; // eax
  unsigned int v19; // ecx
  size_t *v20; // rbx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  const wchar_t *v24; // rcx
  size_t v25; // rax
  __int64 v26; // rcx
  bool v27[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v28[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v29; // [rsp+38h] [rbp-C8h]
  int v30; // [rsp+3Ch] [rbp-C4h]
  unsigned int v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  size_t v34; // [rsp+58h] [rbp-A8h]
  size_t *v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  _WORD v38[64]; // [rsp+80h] [rbp-80h] BYREF

  v35 = a2;
  v32 = a1;
  v7 = 0;
  memset_thunk_772440563353939046(v38, 0, 0x80uLL);
  v8 = v32;
  v29 = 0;
  v9 = 0LL;
  v31 = 0;
  v33 = 0;
  RcConfig = 0LL;
  v34 = 0LL;
  AlternateResourceModule = -1073020927;
  v36 = 0LL;
  v37 = 0LL;
  if ( !v32 || !a2 )
    return 3221225485LL;
  v27[0] = 0;
  v12 = a4 & 0x1000000;
  v30 = a4 & 0x1000000;
LABEL_4:
  while ( 2 )
  {
    while ( 2 )
    {
      v13 = v7;
      if ( v12 )
      {
        v14 = -3346;
        goto LABEL_6;
      }
      while ( 1 )
      {
        v18 = v7++;
        if ( v18 )
          break;
        v14 = 0;
        v28[0] = 0;
        if ( LdrpSetThreadPreferredLangList() )
        {
          v19 = v29;
          if ( v29 >= *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2) )
            goto LABEL_22;
          GetLCIDFromLangListNodeWithLICCheck(v29, (__int64)NtCurrentTeb()->MergedPrefLanguages, v29, v28, v27);
          v14 = v28[0];
        }
        v19 = v29;
LABEL_22:
        if ( v14 )
        {
          if ( (a4 & 0x80u) == 0 && v27[0] )
          {
            if ( (RcConfig || (RcConfig = LdrpGetRcConfig(v32, v9, 0, 1)) != 0LL) && *RcConfig == -20054323 )
            {
              v19 = v29;
              if ( (RcConfig[5] & 0x100) != 0 )
                v14 = -4370;
            }
            else
            {
              v19 = v29;
            }
          }
          v7 = v13;
          v29 = v19 + 1;
          goto LABEL_25;
        }
LABEL_51:
        v13 = v7;
LABEL_35:
        v8 = v32;
      }
      if ( v18 != 1 )
        goto LABEL_11;
      v21 = LdrpGetRcConfig(v8, v9, 1, 1);
      RcConfig = v21;
      if ( !v21 || *v21 != -20054323 || (v21[6] & 2) == 0 || !v21[31] )
        goto LABEL_51;
      v22 = (unsigned int)v21[31];
      v23 = (_DWORD *)((char *)v21 + v22) == 0LL;
      v24 = (const wchar_t *)((char *)v21 + v22);
      *(_QWORD *)&v37 = 0LL;
      *((_QWORD *)&v37 + 1) = v24;
      if ( !v23 )
      {
        v25 = 2 * wcslen(v24);
        if ( v25 >= 0xFFFE )
          LOWORD(v25) = -4;
        LOWORD(v37) = v25;
        WORD1(v37) = v25 + 2;
      }
      if ( !RtlCultureNameToLCID((unsigned __int16 *)&v37, &v33) )
        goto LABEL_51;
      v14 = v33;
      v28[0] = v33;
      if ( (a4 & 0x80u) != 0 || (RcConfig[5] & 0x100) == 0 )
      {
LABEL_25:
        v12 = v30;
        v8 = v32;
        v9 = v31;
        goto LABEL_6;
      }
      GetLCIDFromLangListNodeWithLICCheck(v26, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v28, v27);
      v12 = v30;
      v8 = v32;
      v9 = v31;
      if ( v27[0] )
        v14 = -4370;
      else
        v14 = v28[0];
LABEL_6:
      v13 = v7;
      if ( v14 == 0xEEEE )
        continue;
      break;
    }
    for ( i = 0; i < (unsigned int)v9; ++i )
    {
      v12 = v30;
      if ( v38[i] == v14 )
        goto LABEL_4;
    }
    if ( (unsigned int)v9 >= 0x40
      || (v16 = v35,
          v31 = v9 + 1,
          v38[(unsigned int)v9] = v14,
          AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v8, v14, v16, a3, a4),
          (v12 = v30) != 0) )
    {
LABEL_11:
      if ( AlternateResourceModule < 0 && (a4 & 0x80u) != 0 && v34 )
      {
        *v35 = v34;
        if ( a3 )
          *a3 = v36;
        return 0;
      }
      return (unsigned int)AlternateResourceModule;
    }
    if ( AlternateResourceModule < 0 )
    {
      v8 = v32;
      v9 = v31;
      continue;
    }
    break;
  }
  if ( (a4 & 0x80u) != 0 )
  {
    v20 = v35;
    if ( !(unsigned __int8)LdrpCompareServiceChecksum(v32, *v35, 0LL) )
    {
      if ( !v34 )
      {
        v34 = *v20;
        if ( a3 )
          v36 = *a3;
        else
          v36 = 0LL;
      }
      AlternateResourceModule = -1073020927;
      goto LABEL_35;
    }
  }
  return (unsigned int)AlternateResourceModule;
}
