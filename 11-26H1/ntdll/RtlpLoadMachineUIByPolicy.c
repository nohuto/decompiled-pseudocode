/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x1800EB120
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180056670 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800586F4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800D89BC (RtlpMuiRegGrowLanguageList.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(HANDLE a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  size_t v5; // rax
  int v6; // ebx
  __int64 v7; // r8
  __int64 LanguageList; // rax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  __int128 v11; // [rsp+28h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int8 v13; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v14; // [rsp+B8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  v13 = 0;
  v4 = a2;
  v14 = 0;
  v11 = 0LL;
  if ( a2 && a3 )
  {
    if ( a1 )
      goto LABEL_8;
    *((_QWORD *)&v11 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
    v5 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    ObjectAttributes.RootDirectory = 0LL;
    if ( v5 >= 0xFFFE )
      LOWORD(v5) = -4;
    LOWORD(v11) = v5;
    WORD1(v11) = v5 + 2;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v6 >= 0 )
    {
      a1 = KeyHandle;
      a2 = v4;
LABEL_8:
      v6 = RtlpLoadPolicyLanguageSpec(a1, a2, &v13, &v14);
      if ( v6 )
        goto LABEL_15;
      v7 = *a3;
      if ( *a3 )
      {
        if ( *(_WORD *)(v7 + 4) < *(_WORD *)(v7 + 6) )
        {
LABEL_14:
          *(_WORD *)(*(_QWORD *)(v7 + 24) + 6LL * *(unsigned __int16 *)(v7 + 4)) = v13;
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v14;
          goto LABEL_15;
        }
        LanguageList = RtlpMuiRegGrowLanguageList(*a3);
      }
      else
      {
        LanguageList = (__int64)RtlpMuiRegCreateLanguageList(1, 1, v4);
      }
      *a3 = LanguageList;
      v7 = LanguageList;
      if ( !LanguageList )
      {
        v6 = -1073741801;
        goto LABEL_15;
      }
      goto LABEL_14;
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_15:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v6;
}
