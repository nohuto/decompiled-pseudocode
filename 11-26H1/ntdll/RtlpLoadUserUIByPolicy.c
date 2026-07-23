/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x1800D8790
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180056670 (RtlpMuiRegCreateLanguageList.c)
 *     RtlOpenCurrentUser @ 0x180056B10 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x1800586B0 (GetGlobalizationUserModelType.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800586F4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800D89BC (RtlpMuiRegGrowLanguageList.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 *a3)
{
  size_t v6; // rax
  int v7; // ebx
  _WORD *v9; // r8
  _WORD *LanguageList; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-60h] BYREF
  HANDLE KeyHandle; // [rsp+28h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  _WORD v19[2]; // [rsp+38h] [rbp-48h] BYREF
  int v20; // [rsp+3Ch] [rbp-44h]
  const wchar_t *v21; // [rsp+40h] [rbp-40h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 v23; // [rsp+A8h] [rbp+28h] BYREF
  __int16 v24; // [rsp+B8h] [rbp+38h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  v23 = 0;
  v24 = 0;
  if ( !a2 || !a3 )
    return 3221225485LL;
  v20 = 0;
  v21 = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
  v6 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
  if ( v6 >= 0xFFFE )
    LOWORD(v6) = -4;
  v19[0] = v6;
  v19[1] = v6 + 2;
  if ( a1 )
  {
    ObjectAttributes.RootDirectory = a1;
  }
  else
  {
    v11 = GetGlobalizationUserModelType() - 1;
    if ( v11 )
    {
      v13 = v11 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
        {
          v7 = -1073741595;
          goto LABEL_8;
        }
        v16 = 0;
        v14 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v12, &Handle, &v16);
      }
      else
      {
        v14 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &Handle);
      }
    }
    else
    {
      v14 = RtlOpenCurrentUser(0x2000000u, &Handle);
    }
    v7 = v14;
    if ( v14 < 0 )
      goto LABEL_8;
    ObjectAttributes.RootDirectory = Handle;
  }
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 < 0 )
    goto LABEL_8;
  v7 = RtlpLoadPolicyLanguageSpec(KeyHandle, a2, &v23, &v24);
  if ( v7 )
    goto LABEL_8;
  v9 = (_WORD *)*a3;
  if ( *a3 )
  {
    if ( v9[2] >= v9[3] )
    {
      v15 = RtlpMuiRegGrowLanguageList(*a3);
      *a3 = v15;
      v9 = (_WORD *)v15;
      if ( !v15 )
      {
        v7 = -1073741801;
        goto LABEL_8;
      }
    }
  }
  else
  {
    LanguageList = RtlpMuiRegCreateLanguageList(1, 0, a2);
    *a3 = (__int64)LanguageList;
    v9 = LanguageList;
    if ( !LanguageList )
    {
      v7 = -1073741801;
      goto LABEL_8;
    }
  }
  *(_WORD *)(*((_QWORD *)v9 + 3) + 6LL * (unsigned __int16)v9[2]) = v23;
  *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v24;
LABEL_8:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v7;
}
