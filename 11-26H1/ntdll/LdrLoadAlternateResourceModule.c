/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x1800E2E40
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetRcConfig @ 0x180018F20 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     LdrpSetThreadPreferredLangList @ 0x180053860 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpCompareServiceChecksum @ 0x1800E324C (LdrpCompareServiceChecksum.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModule(
        PVOID DllHandle,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  int v7; // r14d
  PVOID v8; // r10
  __int64 v9; // rdx
  _DWORD *RcConfig; // rdi
  int AlternateResourceModule; // esi
  ULONG v12; // eax
  int v13; // r15d
  LANGID v14; // bx
  unsigned int i; // ecx
  PVOID *v16; // r8
  int v18; // eax
  unsigned int v19; // ecx
  PVOID *v20; // rbx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  wchar_t *v24; // rcx
  size_t v25; // rax
  __int64 v26; // rcx
  bool v27[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v28[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v29; // [rsp+38h] [rbp-C8h]
  ULONG v30; // [rsp+3Ch] [rbp-C4h]
  unsigned int v31; // [rsp+40h] [rbp-C0h]
  PVOID DllHandlea; // [rsp+48h] [rbp-B8h]
  DWORD Lcid; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v34; // [rsp+58h] [rbp-A8h]
  PVOID *ResourceDllBasea; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v36; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING String; // [rsp+70h] [rbp-90h] BYREF
  _WORD v38[64]; // [rsp+80h] [rbp-80h] BYREF

  ResourceDllBasea = ResourceDllBase;
  DllHandlea = DllHandle;
  v7 = 0;
  memset_thunk_772440563353939046(v38, 0, 0x80uLL);
  v8 = DllHandlea;
  v29 = 0;
  v9 = 0LL;
  v31 = 0;
  Lcid = 0;
  RcConfig = 0LL;
  v34 = 0LL;
  AlternateResourceModule = -1073020927;
  v36 = 0LL;
  String = 0LL;
  if ( !DllHandlea || !ResourceDllBase )
    return -1073741811;
  v27[0] = 0;
  v12 = Flags & 0x1000000;
  v30 = Flags & 0x1000000;
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
          if ( (Flags & 0x80u) == 0 && v27[0] )
          {
            if ( (RcConfig || (RcConfig = LdrpGetRcConfig(DllHandlea, v9, 0, 1)) != 0LL) && *RcConfig == -20054323 )
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
        v8 = DllHandlea;
      }
      if ( v18 != 1 )
        goto LABEL_11;
      v21 = LdrpGetRcConfig(v8, v9, 1, 1);
      RcConfig = v21;
      if ( !v21 || *v21 != -20054323 || (v21[6] & 2) == 0 || !v21[31] )
        goto LABEL_51;
      v22 = (unsigned int)v21[31];
      v23 = (_DWORD *)((char *)v21 + v22) == 0LL;
      v24 = (wchar_t *)((char *)v21 + v22);
      *(_QWORD *)&String.Length = 0LL;
      String.Buffer = v24;
      if ( !v23 )
      {
        v25 = 2 * wcslen(v24);
        if ( v25 >= 0xFFFE )
          LOWORD(v25) = -4;
        String.Length = v25;
        String.MaximumLength = v25 + 2;
      }
      if ( !RtlCultureNameToLCID(&String, &Lcid) )
        goto LABEL_51;
      v14 = Lcid;
      v28[0] = Lcid;
      if ( (Flags & 0x80u) != 0 || (RcConfig[5] & 0x100) == 0 )
      {
LABEL_25:
        v12 = v30;
        v8 = DllHandlea;
        v9 = v31;
        goto LABEL_6;
      }
      GetLCIDFromLangListNodeWithLICCheck(v26, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v28, v27);
      v12 = v30;
      v8 = DllHandlea;
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
      || (v16 = ResourceDllBasea,
          v31 = v9 + 1,
          v38[(unsigned int)v9] = v14,
          AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v8, v14, v16, ResourceOffset, Flags),
          (v12 = v30) != 0) )
    {
LABEL_11:
      if ( AlternateResourceModule < 0 && (Flags & 0x80u) != 0 && v34 )
      {
        *ResourceDllBasea = v34;
        if ( ResourceOffset )
          *ResourceOffset = v36;
        return 0;
      }
      return AlternateResourceModule;
    }
    if ( AlternateResourceModule < 0 )
    {
      v8 = DllHandlea;
      v9 = v31;
      continue;
    }
    break;
  }
  if ( (Flags & 0x80u) != 0 )
  {
    v20 = ResourceDllBasea;
    if ( !(unsigned __int8)LdrpCompareServiceChecksum(DllHandlea, *ResourceDllBasea, 0LL) )
    {
      if ( !v34 )
      {
        v34 = *v20;
        if ( ResourceOffset )
          v36 = *ResourceOffset;
        else
          v36 = 0LL;
      }
      AlternateResourceModule = -1073020927;
      goto LABEL_35;
    }
  }
  return AlternateResourceModule;
}
