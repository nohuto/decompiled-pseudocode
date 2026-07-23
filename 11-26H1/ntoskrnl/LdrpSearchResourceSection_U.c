/*
 * XREFs of LdrpSearchResourceSection_U @ 0x140A8DEE4
 * Callers:
 *     LdrpGetRcConfig @ 0x1403DF8BC (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1403DFC80 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrFindResourceDirectory_U @ 0x1408076D0 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x1408076F0 (LdrFindResourceEx_U.c)
 *     RtlLoadString @ 0x140807F90 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x140A8DE00 (LdrFindResource_U.c)
 *     RtlFindMessage @ 0x140A8DE20 (RtlFindMessage.c)
 * Callees:
 *     LdrIsResItemExist @ 0x1403DF838 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1403DFC80 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1404A5340 (LdrpCompareResourceNamesWithValidation.c)
 *     LdrpGetParentLangId @ 0x1404ED6B0 (LdrpGetParentLangId.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, ULONG a4, __int64 *a5)
{
  ULONG v5; // r14d
  int v6; // r15d
  __int64 *v7; // r13
  int v8; // eax
  unsigned __int16 v9; // r12
  PVOID v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // bl
  char v17; // r8
  char v18; // bl
  unsigned int *v19; // r14
  const wchar_t *v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned int v25; // ecx
  int v26; // r9d
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rbx
  unsigned int *v30; // rsi
  unsigned int *v31; // rax
  unsigned __int16 v32; // r15
  const wchar_t *v33; // r8
  bool v34; // cl
  int v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  NTSTATUS result; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int16 v43; // ax
  __int16 v44; // cx
  __int64 v45; // rax
  __int16 v46[2]; // [rsp+30h] [rbp-118h] BYREF
  bool v47; // [rsp+34h] [rbp-114h]
  bool v48; // [rsp+35h] [rbp-113h]
  char v49; // [rsp+36h] [rbp-112h]
  int v50; // [rsp+38h] [rbp-110h]
  char v51; // [rsp+3Ch] [rbp-10Ch]
  unsigned int v52; // [rsp+40h] [rbp-108h]
  char v53; // [rsp+44h] [rbp-104h] BYREF
  char v54[3]; // [rsp+45h] [rbp-103h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-100h]
  ULONG Size; // [rsp+4Ch] [rbp-FCh] BYREF
  int v57; // [rsp+50h] [rbp-F8h]
  ULONG v58; // [rsp+54h] [rbp-F4h]
  __int64 *v59; // [rsp+58h] [rbp-F0h]
  __int64 v60; // [rsp+60h] [rbp-E8h] BYREF
  void *v61; // [rsp+68h] [rbp-E0h]
  __int64 v62; // [rsp+70h] [rbp-D8h]
  bool v63; // [rsp+78h] [rbp-D0h]
  char v64; // [rsp+79h] [rbp-CFh]
  __int16 v65; // [rsp+7Ch] [rbp-CCh]
  int v66; // [rsp+80h] [rbp-C8h]
  __int64 v67; // [rsp+88h] [rbp-C0h]
  __int64 v68; // [rsp+90h] [rbp-B8h]
  __int64 v69; // [rsp+98h] [rbp-B0h]
  __int64 v70; // [rsp+A0h] [rbp-A8h]
  unsigned int v71; // [rsp+A8h] [rbp-A0h]
  unsigned int *v72; // [rsp+B0h] [rbp-98h]
  unsigned int *v73; // [rsp+B8h] [rbp-90h]
  unsigned int *v74; // [rsp+C0h] [rbp-88h]
  int v75; // [rsp+C8h] [rbp-80h]
  __int64 v76; // [rsp+D0h] [rbp-78h]
  __int64 *v77; // [rsp+D8h] [rbp-70h]
  __int64 *v78; // [rsp+E0h] [rbp-68h]
  _QWORD v79[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-50h]
  __int64 v81; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v58 = a4;
  v6 = a3;
  v71 = a3;
  v7 = a2;
  v61 = a1;
  v59 = a5;
  v60 = 0LL;
  v77 = a2;
  v48 = 0;
  v51 = 1;
  v49 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return -1073741583;
  v8 = 3;
  if ( a3 != 4 )
    v8 = a3;
  v55 = v8;
  v57 = v8;
  LOWORD(v52) = 0;
  v9 = 0;
  v46[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v10 = RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v69 = (__int64)v10;
  if ( !v10 )
    return -1073741687;
  v12 = (__int64)v10;
  v67 = (__int64)v10;
  v60 = 61166LL;
  v66 = 0;
  v13 = 0LL;
  v62 = 0LL;
  v70 = 0LL;
  v68 = 0LL;
  v76 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || v55 - 1 > 2 || PnPBootDriversInitialized != 1 )
    goto LABEL_19;
  if ( v55 == 3 )
    v14 = *((unsigned __int16 *)v7 + 8);
  else
    v14 = 0LL;
  v52 = v14;
  v65 = v14;
  v15 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v15 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v15, L"MUI") )
      goto LABEL_18;
    v14 = v52;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v14 & 0xF3FF) != 0 || (_WORD)v14 == 3072 )
  {
LABEL_18:
    v5 |= LdrIsResItemExist((__int64)v61, v7, v11);
    v58 = v5;
LABEL_19:
    v14 = v52;
    goto LABEL_20;
  }
  v5 |= 0x10u;
  v58 = v5;
LABEL_20:
  v16 = PnPBootDriversInitialized == 1 && (~v5 & 0xA0010) == 0xA0010;
  v47 = v16;
  if ( !PnPBootDriversInitialized || (v5 & 0x2000000) != 0 || (v5 & 0x40000) != 0 )
  {
    v17 = 0;
    v49 = 0;
  }
  else
  {
    v17 = v49;
  }
  if ( v16 || v17 )
  {
    v79[0] = *v7;
    v25 = v55;
    if ( v55 < 2 )
      v45 = 0LL;
    else
      v45 = v7[1];
    v79[1] = v45;
    if ( v6 == 4 )
      v81 = v7[3];
  }
  else
  {
LABEL_35:
    v25 = v55;
  }
  v26 = v57;
  if ( !v12 || (v27 = v57, v26 = v57 - 1, v57 = v26, v75 = v26, !v27) )
  {
    v28 = v68;
    goto LABEL_79;
  }
  if ( v26 )
    goto LABEL_39;
  if ( v17 )
  {
    result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5 | 0x1000000, v59);
    v50 = result;
    if ( result >= 0 )
      return result;
    v26 = v57;
  }
  if ( v26 )
  {
LABEL_39:
    v28 = v68;
  }
  else
  {
    v28 = v68;
    if ( v55 == 3 )
      v28 = v12;
    v68 = v28;
    v76 = v28;
  }
  if ( !v28 )
    goto LABEL_41;
  v14 = *((unsigned __int16 *)v77 + 8);
  v52 = v14;
  v65 = v14;
  v34 = (v14 & 0x3FF) == 0;
  v48 = v34;
  v63 = v34;
  while ( 2 )
  {
    v35 = v66;
    while ( 1 )
    {
      v36 = v35++;
      v66 = v35;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            v40 = v38 - 1;
            if ( !v40 )
            {
              if ( PsInstallUILanguageId == PsMachineUILanguageId )
                goto LABEL_114;
              if ( v16 )
              {
                v80 = (unsigned __int16)PsInstallUILanguageId;
                result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
                v50 = result;
                if ( result >= 0 )
                  return result;
              }
              v43 = PsInstallUILanguageId;
              goto LABEL_112;
            }
            v41 = v40 - 1;
            if ( v41 )
            {
              v42 = v41 - 1;
              if ( v42 )
              {
                if ( v42 != 1 )
                  goto LABEL_148;
                v5 |= 0x20u;
                v58 = v5;
              }
              else
              {
                v9 = 1033;
                v46[0] = 1033;
                if ( PsInstallUILanguageId == 1033 || PsDefaultSystemLocaleId == 1033 || PsMachineUILanguageId == 1033 )
                  goto LABEL_114;
                if ( v16 )
                {
                  v80 = 1033LL;
                  result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
                  v50 = result;
                  if ( result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              v9 = PsDefaultSystemLocaleId;
              v46[0] = PsDefaultSystemLocaleId;
              if ( (_WORD)PsDefaultSystemLocaleId == PsInstallUILanguageId
                || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
              {
LABEL_114:
                v9 = v60;
                v46[0] = v60;
                goto LABEL_65;
              }
              if ( v16 )
              {
                v80 = (unsigned __int16)PsDefaultSystemLocaleId;
                result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
                v50 = result;
                if ( result >= 0 )
                  return result;
              }
            }
          }
          else
          {
            if ( !v34 )
              goto LABEL_148;
            if ( v16 && PsMachineUILanguageId )
            {
              v80 = (unsigned __int16)PsMachineUILanguageId;
              result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
              v50 = result;
              if ( result >= 0 )
                return result;
              v43 = PsMachineUILanguageId;
LABEL_112:
              v9 = v43;
              v46[0] = v43;
              goto LABEL_65;
            }
            v44 = v60;
            if ( PsMachineUILanguageId )
              v44 = PsMachineUILanguageId;
            v9 = v44;
            v46[0] = v44;
          }
        }
        else
        {
          if ( v9 )
          {
            if ( (int)LdrpGetParentLangId(v9, v46) >= 0 )
            {
              v9 = v46[0];
            }
            else
            {
              v9 = 0;
              v46[0] = 0;
            }
          }
          if ( v16 )
          {
            if ( !v9 )
              goto LABEL_65;
            v80 = v9;
            result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
            v50 = result;
            if ( result >= 0 )
              return result;
          }
          if ( v9 )
            v66 = --v35;
        }
      }
      else
      {
        if ( v16 && (_WORD)v14 )
        {
          v80 = (unsigned __int16)v14;
          result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
          v50 = result;
          if ( result >= 0 )
            return result;
          v14 = v52;
        }
        v9 = v14;
        v46[0] = v14;
      }
LABEL_65:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v9 != v60 )
        break;
      v14 = v52;
      v34 = v48;
    }
    v60 = v9;
    v7 = &v60;
    v78 = &v60;
    v28 = v68;
    v12 = v68;
    v67 = v68;
    v26 = v57;
LABEL_41:
    v29 = *(unsigned __int16 *)(v12 + 12);
    LOWORD(Size) = v29;
    v30 = (unsigned int *)(v12 + 16);
    v73 = (unsigned int *)(v12 + 16);
    v22 = (unsigned __int16)v29;
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v30 += 2 * v29;
      v73 = v30;
      LOWORD(v29) = *(_WORD *)(v12 + 14);
      LOWORD(Size) = v29;
      v22 = (unsigned __int16)v29;
    }
    if ( !(_WORD)v22 )
    {
      v67 = 0LL;
      v51 = 0;
      v64 = 0;
      v16 = v47;
      v14 = v52;
      v25 = v55;
      goto LABEL_81;
    }
    if ( !v28 || (v5 & 0x20) == 0 )
    {
      v12 = 0LL;
      v67 = 0LL;
      v31 = &v30[2 * (unsigned __int16)v22 - 2];
      v74 = v31;
      while ( 1 )
      {
        if ( v30 > v31 )
          goto LABEL_33;
        v32 = (unsigned __int16)v29 >> 1;
        if ( !((unsigned __int16)v29 >> 1) )
        {
          if ( (_WORD)v29 )
          {
            v33 = (const wchar_t *)*v7;
            v54[0] = 0;
            v24 = v69;
            if ( !(unsigned int)LdrpCompareResourceNamesWithValidation(v22, v14, v33, v69, v30, v54) )
            {
              v23 = v30[1];
              if ( (int)v23 >= 0 )
              {
                v13 = v23 + v24;
                goto LABEL_52;
              }
LABEL_32:
              v12 = v24 + (v23 & 0xFFFFFFFF7FFFFFFFuLL);
              v67 = v12;
            }
          }
LABEL_33:
          v13 = v62;
          goto LABEL_34;
        }
        v72 = v30;
        v18 = v29 & 1;
        v19 = v18 ? &v30[2 * v32] : &v30[2 * v32 - 2];
        v72 = v19;
        v20 = (const wchar_t *)*v7;
        v53 = 0;
        v21 = LdrpCompareResourceNamesWithValidation(v22, v14, v20, v69, v19, &v53);
        if ( !v21 )
          break;
        if ( v21 < 0 )
        {
          v31 = v19 - 2;
          v74 = v19 - 2;
          if ( v18 )
            LOWORD(v29) = v32;
          else
            LOWORD(v29) = v32 - 1;
          LOWORD(Size) = v29;
        }
        else
        {
          v30 = v19 + 2;
          v73 = v19 + 2;
          LOWORD(v29) = v32;
          LOWORD(Size) = v32;
          v31 = v74;
        }
      }
      v23 = v19[1];
      if ( (v19[1] & 0x80000000) != 0 )
      {
        v24 = v69;
        goto LABEL_32;
      }
      v12 = 0LL;
      v67 = 0LL;
      v13 = v23 + v69;
LABEL_52:
      v62 = v13;
      v70 = v13;
LABEL_34:
      v78 = ++v7;
      v5 = v58;
      v6 = v71;
      v16 = v47;
      v14 = v52;
      v17 = v49;
      goto LABEL_35;
    }
    v12 = 0LL;
    v67 = 0LL;
    v60 = *v30;
    v13 = v69 + v30[1];
    v70 = v13;
    v16 = v47;
    v14 = v52;
    v25 = v55;
LABEL_79:
    if ( v13 && (v5 & 2) == 0 )
    {
      *v59 = v13;
      goto LABEL_94;
    }
    if ( !v12 || (v5 & 2) == 0 )
    {
LABEL_81:
      switch ( v25 - v26 )
      {
        case 1u:
          result = -1073741686;
          goto LABEL_95;
        case 2u:
          result = -1073741685;
          break;
        case 3u:
          result = -1073741308;
          v50 = -1073741308;
          if ( !v28 )
            return result;
          v62 = 0LL;
          v70 = 0LL;
          if ( v51 )
          {
            v34 = v48;
            continue;
          }
LABEL_148:
          result = -1073741308;
          break;
        default:
          result = -1073741811;
          goto LABEL_95;
      }
      v50 = result;
      return result;
    }
    break;
  }
  *v59 = v12;
LABEL_94:
  result = 0;
LABEL_95:
  v50 = result;
  return result;
}
