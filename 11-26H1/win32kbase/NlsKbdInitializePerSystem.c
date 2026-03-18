/*
 * XREFs of NlsKbdInitializePerSystem @ 0x14018D320
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsSetKeyStateToggle@@YAXE@Z @ 0x14018D690 (-NlsSetKeyStateToggle@@YAXE@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall NlsKbdInitializePerSystem(int a1, int a2, int a3)
{
  int v3; // edx
  wchar_t **v4; // rcx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v26; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v27; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v29; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING v30; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String2; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v32; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v33; // [rsp+B0h] [rbp-50h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+100h] [rbp+0h]
  const wchar_t *v37; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v38; // [rsp+110h] [rbp+10h]
  int v39; // [rsp+118h] [rbp+18h]
  struct _UNICODE_STRING *v40; // [rsp+120h] [rbp+20h]
  int v41; // [rsp+128h] [rbp+28h]
  __int64 v42; // [rsp+130h] [rbp+30h]
  int v43; // [rsp+138h] [rbp+38h]
  const wchar_t *v44; // [rsp+140h] [rbp+40h]
  UNICODE_STRING *v45; // [rsp+148h] [rbp+48h]
  int v46; // [rsp+150h] [rbp+50h]
  struct _UNICODE_STRING *v47; // [rsp+158h] [rbp+58h]
  int v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  int v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]

  DestinationString = 0LL;
  String2 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  String1 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( *(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 12824) == 3 )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)v4, v3, v5);
    v4 = &gapulCvt_VK_84;
    *(_QWORD *)(UserSessionState + 13968) = &gapulCvt_VK_84;
  }
  if ( *(_BYTE *)(W32GetUserSessionState((_DWORD)v4, v3, v5) + 12824) == 7
    && *(_BYTE *)(W32GetUserSessionState(v8, v7, v9) + 12825) == 3 )
  {
    *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 13968) = &gapulCvt_VK_IBM02;
  }
  NlsSetKeyStateToggle(0xF0u);
  NlsSetKeyStateToggle(0xF3u);
  NlsSetKeyStateToggle(0xF6u);
  NlsSetKeyStateToggle(0xFBu);
  RtlInitUnicodeString(&DestinationString, L"end");
  RtlInitUnicodeString(&String2, L"help");
  RtlInitUnicodeString(&v29, L"yes");
  RtlInitUnicodeString(&v32, L"no");
  RtlInitUnicodeString(&v30, L"home");
  RtlInitUnicodeString(&v33, L"clear");
  RtlInitUnicodeString(&String1, 0LL);
  RtlInitUnicodeString(&v26, 0LL);
  RtlInitUnicodeString(&v27, 0LL);
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 32;
  QueryTable.DefaultType = 16777217;
  QueryTable.Name = L"helpkey";
  v36 = 32;
  QueryTable.EntryContext = &String1;
  v39 = 16777217;
  QueryTable.DefaultData = &DestinationString;
  v37 = L"KanaHelpKey";
  v38 = &v26;
  v40 = &v29;
  v44 = L"clrkey";
  v45 = &v27;
  v43 = 32;
  v46 = 16777217;
  v47 = &v30;
  QueryTable.DefaultLength = 0;
  v35 = 0LL;
  v41 = 0;
  v42 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v50 = 0;
  v51 = 0LL;
  if ( RtlQueryRegistryValues(3u, L"WOW\\keyboard", &QueryTable, 0LL, 0LL) >= 0 )
  {
    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
      v16 = W32GetUserSessionState(v14, v13, v15);
      *(_BYTE *)(v16 + 14325) &= ~2u;
    }
    if ( RtlEqualUnicodeString(&v26, &v32, 1u) )
    {
      v20 = W32GetUserSessionState(v18, v17, v19);
      *(_BYTE *)(v20 + 14325) &= ~1u;
    }
    if ( RtlEqualUnicodeString(&v27, &v33, 1u) )
    {
      v24 = W32GetUserSessionState(v22, v21, v23);
      *(_BYTE *)(v24 + 14325) &= ~4u;
    }
    ExFreePoolWithTag(String1.Buffer, 0);
    ExFreePoolWithTag(v26.Buffer, 0);
    ExFreePoolWithTag(v27.Buffer, 0);
  }
}
