/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x1800DB8B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x18000AF40 (RtlpMuiRegCreateLanguageList.c)
 *     RtlOpenCurrentUser @ 0x18000B3E0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18000B81C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x18000CF80 (GetGlobalizationUserModelType.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18000CFC4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800DBADC (RtlpMuiRegGrowLanguageList.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 *a3)
{
  size_t v6; // rax
  int v7; // ebx
  __int64 v9; // r8
  __int64 LanguageList; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  HANDLE v18; // [rsp+30h] [rbp-50h] BYREF
  _WORD v19[2]; // [rsp+38h] [rbp-48h] BYREF
  int v20; // [rsp+3Ch] [rbp-44h]
  const wchar_t *v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v23; // [rsp+50h] [rbp-30h]
  _WORD *v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+68h] [rbp-18h]
  unsigned __int8 v27; // [rsp+A8h] [rbp+28h] BYREF
  __int16 v28; // [rsp+B8h] [rbp+38h] BYREF

  v18 = 0LL;
  Handle = 0LL;
  v27 = 0;
  v28 = 0;
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
    v23 = a1;
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
        v14 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v12, (__int64)&v18, &v16);
      }
      else
      {
        v14 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &v18);
      }
    }
    else
    {
      v14 = RtlOpenCurrentUser(0x2000000u, (__int64)&v18);
    }
    v7 = v14;
    if ( v14 < 0 )
      goto LABEL_8;
    v23 = v18;
  }
  v22 = 48LL;
  v24 = v19;
  v25 = 64LL;
  v26 = 0LL;
  v7 = NtOpenKey(&Handle, 131097LL, &v22);
  if ( v7 < 0 )
    goto LABEL_8;
  v7 = RtlpLoadPolicyLanguageSpec((__int64)Handle, a2, &v27, &v28);
  if ( v7 )
    goto LABEL_8;
  v9 = *a3;
  if ( *a3 )
  {
    if ( *(_WORD *)(v9 + 4) >= *(_WORD *)(v9 + 6) )
    {
      v15 = RtlpMuiRegGrowLanguageList(*a3);
      *a3 = v15;
      v9 = v15;
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
    *a3 = LanguageList;
    v9 = LanguageList;
    if ( !LanguageList )
    {
      v7 = -1073741801;
      goto LABEL_8;
    }
  }
  *(_WORD *)(*(_QWORD *)(v9 + 24) + 6LL * *(unsigned __int16 *)(v9 + 4)) = v27;
  *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v28;
LABEL_8:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v18 )
    NtClose(v18);
  return (unsigned int)v7;
}
