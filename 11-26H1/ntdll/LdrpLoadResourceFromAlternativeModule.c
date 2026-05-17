/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x18002DF70
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpGetParentLangId @ 0x180002608 (LdrpGetParentLangId.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     LdrpSetThreadPreferredLangList @ 0x180008130 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180009A70 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetFromMUIMemCache @ 0x18002DC20 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetRcConfig @ 0x18002DE20 (LdrpGetRcConfig.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpFindMessageInAlternateModule @ 0x1800320E0 (LdrpFindMessageInAlternateModule.c)
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     LdrpIsReparsePoint @ 0x1800C5E78 (LdrpIsReparsePoint.c)
 *     LdrpMUIEtwOutput @ 0x180113278 (LdrpMUIEtwOutput.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int64 *a5)
{
  char v5; // r11
  __int64 v6; // r10
  __int64 v8; // rdi
  unsigned int MessageInAlternateModule; // esi
  unsigned __int16 v10; // r15
  unsigned int v11; // r14d
  _DWORD *v12; // r9
  __int64 v13; // r8
  int v14; // ebx
  int v15; // r12d
  unsigned int i; // eax
  __int64 v17; // rax
  int AlternateResourceModule; // eax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdi
  _DWORD *v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rbx
  __int64 v25; // rbx
  _DWORD *v26; // rax
  __int64 v27; // rcx
  int v28; // ecx
  unsigned __int16 v29; // ax
  unsigned __int16 *MergedPrefLanguages; // rcx
  int v32; // ecx
  int ParentLangId; // eax
  __int64 v34; // rax
  size_t v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdi
  __int64 v38; // rcx
  int v39; // r9d
  unsigned __int64 *v40; // rdi
  unsigned int v41; // eax
  char v42; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v43[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v44; // [rsp+38h] [rbp-C8h]
  bool v45[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  int v46; // [rsp+3Ch] [rbp-C4h]
  char v47; // [rsp+40h] [rbp-C0h]
  __int64 v48; // [rsp+48h] [rbp-B8h]
  _DWORD *RcConfig; // [rsp+50h] [rbp-B0h]
  unsigned int v50; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  int v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+6Ch] [rbp-94h]
  char v54[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 *v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v59; // [rsp+98h] [rbp-68h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v61[20]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = 0;
  v55 = a5;
  v6 = a1;
  v48 = a1;
  v57 = a2;
  v53 = a3;
  v51 = 0LL;
  v43[0] = 0;
  v8 = a2;
  v47 = 0;
  MessageInAlternateModule = -1073020927;
  v56 = 0LL;
  v10 = 0;
  v46 = 0;
  LODWORD(a2) = 0;
  v50 = 0;
  v11 = 0;
  RcConfig = 0LL;
  v12 = 0LL;
  v52 = 0;
  v42 = 0;
  v60 = 0LL;
  if ( a3 - 3 > 1 )
    return (unsigned int)-1073741583;
  v13 = *(unsigned __int16 *)(v8 + 16);
  v44 = *(_WORD *)(v8 + 16);
  v45[0] = 0;
  while ( 1 )
  {
LABEL_3:
    while ( 1 )
    {
      v14 = a2;
      v15 = a4 & 0x1000000;
      if ( (a4 & 0x1000000) != 0 )
        break;
      v28 = a2;
      a2 = (unsigned int)(a2 + 1);
      v46 = a2;
      if ( v28 == 2 )
      {
        v43[0] = 0;
        if ( !LdrpSetThreadPreferredLangList()
          || (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
              v50 >= MergedPrefLanguages[2])
          || (GetLCIDFromLangListNodeWithLICCheck(
                (__int64)MergedPrefLanguages,
                (__int64)NtCurrentTeb()->MergedPrefLanguages,
                v50,
                v43,
                v45),
              (v10 = v43[0]) == 0) )
        {
          v10 = -4370;
          v43[0] = -4370;
          goto LABEL_26;
        }
        if ( v45[0] && (a4 & 0x100000) != 0 )
        {
          v10 = -4370;
          v43[0] = -4370;
        }
        ++v50;
        LODWORD(a2) = v14;
        v46 = v14;
        goto LABEL_43;
      }
      if ( !v28 )
      {
        if ( (v13 & 0xF3FF) != 0 || (_WORD)v13 == 3072 )
          v29 = v13;
        else
          v29 = -4370;
        v10 = v29;
        v43[0] = v29;
        goto LABEL_45;
      }
      v32 = v28 - 1;
      if ( v32 )
      {
        if ( v32 == 2 )
        {
          if ( (v12 || (RcConfig = LdrpGetRcConfig(v6, a2, 0, 1), (v12 = RcConfig) != 0LL))
            && *v12 == -20054323
            && (v12[6] & 2) != 0
            && (v34 = (unsigned int)v12[31], (_DWORD)v34) )
          {
            *(_QWORD *)&v60 = 0LL;
            *((_QWORD *)&v60 + 1) = (char *)v12 + v34;
            if ( (_DWORD *)((char *)v12 + v34) )
            {
              v35 = 2 * wcslen((const wchar_t *)((char *)v12 + v34));
              if ( v35 >= 0xFFFE )
                LOWORD(v35) = -4;
              LOWORD(v60) = v35;
              WORD1(v60) = v35 + 2;
            }
            if ( !RtlCultureNameToLCID((unsigned __int16 *)&v60, &v52) )
            {
              v12 = RcConfig;
              MessageInAlternateModule = -1073020923;
              goto LABEL_82;
            }
            v10 = v52;
            v43[0] = v52;
            if ( (a4 & 0x100000) != 0 )
            {
              GetLCIDFromLangListNodeWithLICCheck(v36, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v43, v45);
              LODWORD(a2) = v46;
              v6 = v48;
              if ( !v45[0] )
              {
                v10 = v43[0];
                goto LABEL_44;
              }
              v10 = -4370;
              v43[0] = -4370;
LABEL_27:
              v12 = RcConfig;
              v13 = v44;
              v5 = v42;
            }
            else
            {
              LODWORD(a2) = v46;
LABEL_43:
              v6 = v48;
LABEL_44:
              v13 = v44;
              v12 = RcConfig;
              v5 = v42;
LABEL_45:
              if ( v10 != 0xEEEE )
                goto LABEL_5;
            }
          }
          else
          {
LABEL_82:
            LODWORD(a2) = v46;
            v6 = v48;
            v10 = -4370;
            v13 = v44;
            v5 = v42;
            v43[0] = -4370;
          }
        }
        else
        {
          if ( v5 || v47 || (int)LdrpIsReparsePoint(v6, a2, v13, v12) < 0 )
            return MessageInAlternateModule;
          v6 = v48;
          a4 |= 0x400000u;
          v13 = v44;
          v12 = RcConfig;
          v5 = 1;
          LODWORD(a2) = 0;
          v46 = 0;
          v11 = 0;
          v50 = 0;
          v42 = 1;
        }
      }
      else
      {
        if ( v10 == 0xEEEE )
          goto LABEL_49;
        if ( (a4 & 4) != 0 )
        {
          v10 = -4370;
          v43[0] = -4370;
          LODWORD(a2) = -2;
          v46 = -2;
        }
        else
        {
          if ( (v13 & 0x3FF) != 0 )
          {
            ParentLangId = LdrpGetParentLangId(v10, v43);
            v6 = v48;
            v13 = v44;
            v12 = RcConfig;
            v5 = v42;
            if ( ParentLangId >= 0 )
            {
              v10 = v43[0];
              if ( v43[0] )
              {
                LODWORD(a2) = v14;
                v46 = v14;
                goto LABEL_45;
              }
            }
            LODWORD(a2) = -2;
            v46 = -2;
          }
LABEL_49:
          v10 = -4370;
          v43[0] = -4370;
        }
      }
    }
    v10 = -3346;
    v43[0] = -3346;
LABEL_5:
    for ( i = 0; i < v11; ++i )
    {
      if ( *((_WORD *)&v61[4] + i) == v10 )
        goto LABEL_3;
    }
    if ( v11 >= 0x40 )
      return MessageInAlternateModule;
    v17 = v11++;
    *((_WORD *)&v61[4] + v17) = v10;
    v56 = 0LL;
    AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v6, v10, (unsigned int)&v51, (unsigned int)&v56, a4);
    MessageInAlternateModule = AlternateResourceModule;
    if ( AlternateResourceModule < 0 )
    {
      if ( AlternateResourceModule == -1073741772 || AlternateResourceModule == -1073741766 )
        MessageInAlternateModule = -1073020927;
      if ( v15 )
        return MessageInAlternateModule;
      goto LABEL_26;
    }
    v19 = v51;
    *(_QWORD *)(v8 + 16) = v10;
    v47 = 1;
    v20 = LdrpSearchResourceSection_U(v19, v8, 3, 33554480, (__int64)v55);
    MessageInAlternateModule = v20;
    if ( (a4 & 0x40) != 0 )
    {
      if ( v20 < 0 )
        goto LABEL_11;
      v39 = *(_DWORD *)(v8 + 24);
      v40 = v55;
      MessageInAlternateModule = LdrpFindMessageInAlternateModule(v51, *v55, 0, v39, 0);
      if ( (MessageInAlternateModule & 0x80000000) != 0 )
      {
        *v40 = 0LL;
LABEL_11:
        v21 = v51;
        v58 = 0LL;
        v22 = LdrpGetFromMUIMemCache(v48, 0, 0LL, 8);
        v59 = v22;
        v24 = v22;
        if ( v22 != (_DWORD *)-1LL )
        {
          if ( v22 )
            goto LABEL_108;
          v25 = v48;
          v61[0] = L"MUI";
          v61[1] = 1LL;
          v61[2] = 0LL;
          if ( (int)LdrpSearchResourceSection_U(v48, (unsigned int)v61, 3, 33554480, (__int64)&v58) < 0
            || (int)LdrpAccessResourceDataNoMultipleLanguage(v25, v58, &v59, v54) < 0
            || (v24 = v59, *v59 != -20054323) )
          {
            v24 = 0LL;
          }
          if ( v24 )
          {
LABEL_108:
            v26 = LdrpGetRcConfig(v21, v23, 0, 0);
            if ( v26 )
            {
              if ( *v24 != -20054323 || *v26 != -20054323 )
                return MessageInAlternateModule;
              v27 = *(_QWORD *)(v24 + 7) - *(_QWORD *)(v26 + 7);
              if ( !v27 )
                v27 = *(_QWORD *)(v24 + 9) - *(_QWORD *)(v26 + 9);
              if ( !v27 )
                return MessageInAlternateModule;
            }
          }
        }
        if ( v15 )
          return MessageInAlternateModule;
        v8 = v57;
LABEL_26:
        LODWORD(a2) = v46;
        v6 = v48;
        goto LABEL_27;
      }
    }
    else if ( v20 < 0 )
    {
      goto LABEL_11;
    }
    v37 = v51;
    if ( *v55 > v51 && (!v56 || *v55 < v51 + v56) )
      break;
    *v55 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(85LL, 2LL, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    if ( v15 )
      return MessageInAlternateModule;
    LODWORD(a2) = v46;
    v6 = v48;
    v8 = v57;
    v13 = v44;
    v12 = RcConfig;
    v5 = v42;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v37 = v51;
    v38 = (__int64)NtCurrentPeb()->SharedData + 555;
  }
  else
  {
    v38 = 2147353477LL;
  }
  if ( (*(_BYTE *)v38 & 2) != 0 )
  {
    if ( (a4 & 0x40) != 0 )
    {
      v41 = 9;
    }
    else
    {
      v41 = 3;
      if ( (a4 & 1) != 0 )
        v41 = 5;
    }
    LdrpMUIEtwOutput(v37, v57, v53, v41);
  }
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v48;
  return MessageInAlternateModule;
}
