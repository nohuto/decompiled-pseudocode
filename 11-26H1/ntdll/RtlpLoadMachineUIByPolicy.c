/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x1800EBF50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x18000AF40 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18000CFC4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800DBADC (RtlpMuiRegGrowLanguageList.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(HANDLE a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  size_t v5; // rax
  int v6; // ebx
  __int64 v7; // r8
  __int64 LanguageList; // rax
  HANDLE Handle; // [rsp+20h] [rbp-50h] BYREF
  __int128 v11; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+58h] [rbp-18h]
  unsigned __int8 v14; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v15; // [rsp+B8h] [rbp+48h] BYREF

  Handle = 0LL;
  v14 = 0;
  v4 = a2;
  v15 = 0;
  v11 = 0LL;
  if ( a2 && a3 )
  {
    if ( a1 )
      goto LABEL_8;
    *((_QWORD *)&v11 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
    v5 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    v12[0] = 48LL;
    v12[3] = 64LL;
    v12[1] = 0LL;
    if ( v5 >= 0xFFFE )
      LOWORD(v5) = -4;
    LOWORD(v11) = v5;
    WORD1(v11) = v5 + 2;
    v12[2] = &v11;
    v13 = 0LL;
    v6 = NtOpenKey(&Handle, 131097LL, v12);
    if ( v6 >= 0 )
    {
      a1 = Handle;
      a2 = v4;
LABEL_8:
      v6 = RtlpLoadPolicyLanguageSpec((__int64)a1, a2, &v14, &v15);
      if ( v6 )
        goto LABEL_15;
      v7 = *a3;
      if ( *a3 )
      {
        if ( *(_WORD *)(v7 + 4) < *(_WORD *)(v7 + 6) )
        {
LABEL_14:
          *(_WORD *)(*(_QWORD *)(v7 + 24) + 6LL * *(unsigned __int16 *)(v7 + 4)) = v14;
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v15;
          goto LABEL_15;
        }
        LanguageList = RtlpMuiRegGrowLanguageList(*a3);
      }
      else
      {
        LanguageList = RtlpMuiRegCreateLanguageList(1, 1, v4);
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
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v6;
}
