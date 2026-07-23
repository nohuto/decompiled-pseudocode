/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x180019070
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetFromMUIMemCache @ 0x180018D20 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetRcConfig @ 0x180018F20 (LdrpGetRcConfig.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001CA40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpFindMessageInAlternateModule @ 0x18001D240 (LdrpFindMessageInAlternateModule.c)
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     LdrpGetParentLangId @ 0x18004DD38 (LdrpGetParentLangId.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     LdrpSetThreadPreferredLangList @ 0x180053860 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpIsReparsePoint @ 0x1800C3638 (LdrpIsReparsePoint.c)
 *     LdrpMUIEtwOutput @ 0x180112D28 (LdrpMUIEtwOutput.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(PVOID BaseOfImage, __int64 a2, DWORD a3, ULONG a4, __int64 a5)
{
  char v5; // r11
  PVOID v6; // r10
  __int64 v8; // rdi
  unsigned int MessageInAlternateModule; // esi
  LANGID v10; // r15
  unsigned int v11; // r14d
  _DWORD *v12; // r9
  __int64 v13; // r8
  int v14; // ebx
  int v15; // r12d
  unsigned int i; // eax
  __int64 v17; // rax
  NTSTATUS v18; // eax
  PVOID v19; // rcx
  int v20; // eax
  PVOID v21; // rdi
  _DWORD *v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rbx
  PVOID v25; // rbx
  _DWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int16 v29; // ax
  unsigned __int16 *MergedPrefLanguages; // rcx
  int v32; // ecx
  int ParentLangId; // eax
  __int64 v34; // rax
  size_t v35; // rax
  int v36; // ecx
  PVOID v37; // rdi
  __int64 v38; // rcx
  int v39; // r9d
  _QWORD *v40; // rdi
  char v41; // [rsp+30h] [rbp-D0h]
  _WORD v42[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v43; // [rsp+38h] [rbp-C8h]
  _BYTE v44[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  int v45; // [rsp+3Ch] [rbp-C4h]
  char v46; // [rsp+40h] [rbp-C0h]
  PVOID DllHandle; // [rsp+48h] [rbp-B8h]
  _DWORD *RcConfig; // [rsp+50h] [rbp-B0h]
  unsigned int v49; // [rsp+58h] [rbp-A8h]
  PVOID ResourceDllBase; // [rsp+60h] [rbp-A0h] BYREF
  DWORD Lcid[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  ULONG_PTR ResourceOffset; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v56; // [rsp+98h] [rbp-68h]
  _UNICODE_STRING String; // [rsp+A0h] [rbp-60h] BYREF
  const wchar_t *v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  __int64 v60; // [rsp+C0h] [rbp-40h]
  _WORD v61[64]; // [rsp+D0h] [rbp-30h]

  v5 = 0;
  v52 = a5;
  v6 = BaseOfImage;
  DllHandle = BaseOfImage;
  v54 = a2;
  Lcid[1] = a3;
  ResourceDllBase = 0LL;
  v42[0] = 0;
  v8 = a2;
  v46 = 0;
  MessageInAlternateModule = -1073020927;
  ResourceOffset = 0LL;
  v10 = 0;
  v45 = 0;
  LODWORD(a2) = 0;
  v49 = 0;
  v11 = 0;
  RcConfig = 0LL;
  v12 = 0LL;
  Lcid[0] = 0;
  v41 = 0;
  String = 0LL;
  if ( a3 - 3 > 1 )
    return (unsigned int)-1073741583;
  v13 = *(unsigned __int16 *)(v8 + 16);
  v43 = *(_WORD *)(v8 + 16);
  v44[0] = 0;
  while ( 1 )
  {
LABEL_3:
    while ( 1 )
    {
      v14 = a2;
      v15 = a4 & 0x1000000;
      if ( (a4 & 0x1000000) != 0 )
        break;
      v28 = (unsigned int)a2;
      a2 = (unsigned int)(a2 + 1);
      v45 = a2;
      if ( (_DWORD)v28 == 2 )
      {
        v42[0] = 0;
        if ( !(unsigned __int8)LdrpSetThreadPreferredLangList(v28, a2, v13, v12)
          || (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
              v49 >= MergedPrefLanguages[2])
          || (GetLCIDFromLangListNodeWithLICCheck(
                (_DWORD)MergedPrefLanguages,
                NtCurrentTeb()->MergedPrefLanguages,
                v49,
                (unsigned int)v42,
                (__int64)v44),
              (v10 = v42[0]) == 0) )
        {
          v10 = -4370;
          v42[0] = -4370;
          goto LABEL_26;
        }
        if ( v44[0] && (a4 & 0x100000) != 0 )
        {
          v10 = -4370;
          v42[0] = -4370;
        }
        ++v49;
        LODWORD(a2) = v14;
        v45 = v14;
        goto LABEL_43;
      }
      if ( !(_DWORD)v28 )
      {
        if ( (v13 & 0xF3FF) != 0 || (_WORD)v13 == 3072 )
          v29 = v13;
        else
          v29 = -4370;
        v10 = v29;
        v42[0] = v29;
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
            *(_QWORD *)&String.Length = 0LL;
            String.Buffer = (wchar_t *)((char *)v12 + v34);
            if ( (_DWORD *)((char *)v12 + v34) )
            {
              v35 = 2 * wcslen((const wchar_t *)((char *)v12 + v34));
              if ( v35 >= 0xFFFE )
                LOWORD(v35) = -4;
              String.Length = v35;
              String.MaximumLength = v35 + 2;
            }
            if ( !RtlCultureNameToLCID(&String, Lcid) )
            {
              v12 = RcConfig;
              MessageInAlternateModule = -1073020923;
              goto LABEL_82;
            }
            v10 = Lcid[0];
            v42[0] = Lcid[0];
            if ( (a4 & 0x100000) != 0 )
            {
              GetLCIDFromLangListNodeWithLICCheck(
                v36,
                NtCurrentTeb()->MergedPrefLanguages,
                0,
                (unsigned int)v42,
                (__int64)v44);
              LODWORD(a2) = v45;
              v6 = DllHandle;
              if ( !v44[0] )
              {
                v10 = v42[0];
                goto LABEL_44;
              }
              v10 = -4370;
              v42[0] = -4370;
LABEL_27:
              v12 = RcConfig;
              v13 = v43;
              v5 = v41;
            }
            else
            {
              LODWORD(a2) = v45;
LABEL_43:
              v6 = DllHandle;
LABEL_44:
              v13 = v43;
              v12 = RcConfig;
              v5 = v41;
LABEL_45:
              if ( v10 != 0xEEEE )
                goto LABEL_5;
            }
          }
          else
          {
LABEL_82:
            LODWORD(a2) = v45;
            v6 = DllHandle;
            v10 = -4370;
            v13 = v43;
            v5 = v41;
            v42[0] = -4370;
          }
        }
        else
        {
          if ( v5 || v46 || (int)LdrpIsReparsePoint(v6, a2, v13, v12) < 0 )
            return MessageInAlternateModule;
          v6 = DllHandle;
          a4 |= 0x400000u;
          v13 = v43;
          v12 = RcConfig;
          v5 = 1;
          LODWORD(a2) = 0;
          v45 = 0;
          v11 = 0;
          v49 = 0;
          v41 = 1;
        }
      }
      else
      {
        if ( v10 == 0xEEEE )
          goto LABEL_49;
        if ( (a4 & 4) != 0 )
        {
          v10 = -4370;
          v42[0] = -4370;
          LODWORD(a2) = -2;
          v45 = -2;
        }
        else
        {
          if ( (v13 & 0x3FF) != 0 )
          {
            ParentLangId = LdrpGetParentLangId(v10, v42, v13, v12);
            v6 = DllHandle;
            v13 = v43;
            v12 = RcConfig;
            v5 = v41;
            if ( ParentLangId >= 0 )
            {
              v10 = v42[0];
              if ( v42[0] )
              {
                LODWORD(a2) = v14;
                v45 = v14;
                goto LABEL_45;
              }
            }
            LODWORD(a2) = -2;
            v45 = -2;
          }
LABEL_49:
          v10 = -4370;
          v42[0] = -4370;
        }
      }
    }
    v10 = -3346;
    v42[0] = -3346;
LABEL_5:
    for ( i = 0; i < v11; ++i )
    {
      if ( v61[i] == v10 )
        goto LABEL_3;
    }
    if ( v11 >= 0x40 )
      return MessageInAlternateModule;
    v17 = v11++;
    v61[v17] = v10;
    ResourceOffset = 0LL;
    v18 = LdrLoadAlternateResourceModuleEx(v6, v10, &ResourceDllBase, &ResourceOffset, a4);
    MessageInAlternateModule = v18;
    if ( v18 < 0 )
    {
      if ( v18 == -1073741772 || v18 == -1073741766 )
        MessageInAlternateModule = -1073020927;
      if ( v15 )
        return MessageInAlternateModule;
      goto LABEL_26;
    }
    v19 = ResourceDllBase;
    *(_QWORD *)(v8 + 16) = v10;
    v46 = 1;
    v20 = LdrpSearchResourceSection_U(v19, v52);
    MessageInAlternateModule = v20;
    if ( (a4 & 0x40) != 0 )
    {
      if ( v20 < 0 )
        goto LABEL_11;
      v39 = *(_DWORD *)(v8 + 24);
      v40 = (_QWORD *)v52;
      MessageInAlternateModule = LdrpFindMessageInAlternateModule((_DWORD)ResourceDllBase, *(_QWORD *)v52, 0, v39, 0);
      if ( (MessageInAlternateModule & 0x80000000) != 0 )
      {
        *v40 = 0LL;
LABEL_11:
        v21 = ResourceDllBase;
        v55 = 0LL;
        v22 = LdrpGetFromMUIMemCache((unsigned __int64)DllHandle, 0, 0LL, 8);
        v56 = v22;
        v24 = v22;
        if ( v22 != (_DWORD *)-1LL )
        {
          if ( v22 )
            goto LABEL_104;
          v25 = DllHandle;
          v58 = L"MUI";
          v59 = 1LL;
          v60 = 0LL;
          if ( (int)LdrpSearchResourceSection_U(DllHandle, (__int64)&v55) < 0
            || (int)LdrpAccessResourceDataNoMultipleLanguage(v25) < 0
            || (v24 = v56, *v56 != -20054323) )
          {
            v24 = 0LL;
          }
          if ( v24 )
          {
LABEL_104:
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
        v8 = v54;
LABEL_26:
        LODWORD(a2) = v45;
        v6 = DllHandle;
        goto LABEL_27;
      }
    }
    else if ( v20 < 0 )
    {
      goto LABEL_11;
    }
    v37 = ResourceDllBase;
    if ( *(_QWORD *)v52 > (unsigned __int64)ResourceDllBase
      && (!ResourceOffset || *(_QWORD *)v52 < (unsigned __int64)ResourceDllBase + ResourceOffset) )
    {
      break;
    }
    *(_QWORD *)v52 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    if ( v15 )
      return MessageInAlternateModule;
    LODWORD(a2) = v45;
    v6 = DllHandle;
    v8 = v54;
    v13 = v43;
    v12 = RcConfig;
    v5 = v41;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v37 = ResourceDllBase;
    v38 = (__int64)NtCurrentPeb()->SharedData + 555;
  }
  else
  {
    v38 = 2147353477LL;
  }
  if ( (*(_BYTE *)v38 & 2) != 0 )
    LdrpMUIEtwOutput(v37);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
  return MessageInAlternateModule;
}
