/*
 * XREFs of LdrResSearchResource @ 0x1409E5F50
 * Callers:
 *     PfSnGetAppVersion @ 0x1404CFF74 (PfSnGetAppVersion.c)
 *     PopValidateWinresume @ 0x1407D3AA4 (PopValidateWinresume.c)
 *     RtlLoadString @ 0x140807F90 (RtlLoadString.c)
 *     SeRegisterElamCertResources @ 0x1408156C0 (SeRegisterElamCertResources.c)
 *     AslpFileGetVersionBlock @ 0x140893EF8 (AslpFileGetVersionBlock.c)
 *     PopEtGetProcessVersionInfo @ 0x1409CA0AC (PopEtGetProcessVersionInfo.c)
 *     LdrResFindResourceDirectory @ 0x1409E51D0 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1409E5360 (LdrResFindResource.c)
 *     PspLocateInPEManifest @ 0x1409E5E24 (PspLocateInPEManifest.c)
 *     KeHwPolicyLocateResource @ 0x140CD0520 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x1403DDCD8 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DFDC0 (LdrLoadAlternateResourceModuleEx.c)
 *     DownLevelLangIDToLanguageName @ 0x1404E8A68 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1406DCFA4 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     LdrpResGetMappingSize @ 0x1409E6340 (LdrpResGetMappingSize.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 a1,
        const void *a2,
        unsigned int a3,
        int a4,
        unsigned int **a5,
        __int64 *a6,
        void *a7,
        __int64 a8)
{
  void *v10; // r14
  int v11; // ecx
  unsigned int v12; // edi
  bool v13; // zf
  unsigned int v14; // ebx
  __int64 result; // rax
  __int64 v16; // r9
  int v17; // esi
  __int64 v18; // r13
  void *v19; // r15
  int v20; // eax
  unsigned __int16 v21; // ax
  NTSTATUS v22; // eax
  __int64 v23; // r9
  ULONG64 v24; // [rsp+58h] [rbp-90h] BYREF
  PVOID ResourceDllBase; // [rsp+60h] [rbp-88h] BYREF
  unsigned int **v26; // [rsp+68h] [rbp-80h]
  __int64 v27; // [rsp+70h] [rbp-78h]
  void *v28; // [rsp+78h] [rbp-70h]
  const wchar_t *v29[2]; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+90h] [rbp-58h]

  v26 = a5;
  v28 = a7;
  v27 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return (unsigned int)-1073741811;
  if ( (a4 & 0xC00) != 0 )
    return (unsigned int)-1073741582;
  v11 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v11 = a4;
  v12 = v11 | 0x1000;
  if ( (v11 & 0x2000) != 0 )
    v12 = v11;
  if ( (v12 & 0xFFF00000) != 0 )
    return (unsigned int)-1073741582;
  if ( a3 < 3 && (v12 & 2) == 0 || a3 > 4 )
    return (unsigned int)-1073741583;
  if ( (v12 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_14;
  }
  if ( (v12 & 0x41) == 0 )
    return 3221225714LL;
LABEL_14:
  if ( (v12 & 0x100) != 0 )
  {
    v13 = (v12 & 0xE00) == 0;
  }
  else
  {
    v20 = v12 & 0xC00;
    if ( (v12 & 0x200) == 0 )
    {
      if ( v20 != 3072 )
        goto LABEL_17;
      return (unsigned int)-1073741582;
    }
    v13 = v20 == 0;
  }
  if ( !v13 )
    return (unsigned int)-1073741582;
LABEL_17:
  if ( (~v12 & 0x810) != 0 && (v12 & 0x8000) != 0 || (v12 & 0x1000) != 0 && (v12 & 0x2000) != 0 || (v12 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v24 = 0LL;
  if ( (v12 & 0x20000) != 0 )
  {
    if ( (v12 & 0x400) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v24 = *a6;
  }
  if ( (v12 & 0x80000) != 0 )
  {
    if ( (v12 & 0x300) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v24 = *a6;
  }
  memmove(v29, a2, 8LL * a3);
  v17 = 3;
  if ( a3 <= 3 )
    v17 = a3;
  if ( v17 == 3 )
  {
    if ( v30 >= 0x10000 )
    {
      if ( *(_WORD *)v30 )
      {
        v21 = DownLevelLanguageNameToLangID((const void *)v30, 2);
        LODWORD(ResourceDllBase) = v21;
      }
      else
      {
        v21 = 0;
        LODWORD(ResourceDllBase) = 0;
      }
      v30 = v21;
    }
    else if ( v30 && ((v30 & 0x3FF) == 0 || v30 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v30, 0LL, 0, 2)) )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( (v12 & 0x300) == 0 )
    goto LABEL_32;
  v10 = (void *)a1;
  if ( (v12 & 0x200) != 0 && (a1 & 1) == 0 )
    v10 = (void *)(a1 | 1);
  result = LdrpResGetMappingSize(v10, &v24, v12, v16);
  if ( (int)result >= 0 || (v12 & 0x1000) == 0 )
  {
LABEL_32:
    v18 = v27;
    v19 = v28;
    v14 = LdrpResSearchResourceMappedFile(v10, v24, v12, v29, v17, v26, a6, v28, v27);
    if ( v14 == -1073741686 && ((unsigned __int64)(v29[0] - 8) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
    {
      ResourceDllBase = 0LL;
      v22 = LdrLoadAlternateResourceModuleEx(v10, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u);
      if ( v22 >= 0 )
      {
        v24 = 0LL;
        if ( (int)LdrpResGetMappingSize(ResourceDllBase, &v24, v12, v23) >= 0 )
          return (unsigned int)LdrpResSearchResourceMappedFile(
                                 ResourceDllBase,
                                 v24,
                                 v12 | 0x1000000,
                                 v29,
                                 v17,
                                 v26,
                                 a6,
                                 v19,
                                 v18);
      }
    }
    return v14;
  }
  return result;
}
