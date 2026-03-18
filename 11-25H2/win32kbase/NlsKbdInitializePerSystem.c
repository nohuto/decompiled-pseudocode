/*
 * XREFs of NlsKbdInitializePerSystem @ 0x14014EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsSetKeyStateToggle@@YAXE@Z @ 0x14014F214 (-NlsSetKeyStateToggle@@YAXE@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall NlsKbdInitializePerSystem(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  wchar_t **v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v19; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v22; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING v23; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String2; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v25; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v26; // [rsp+B0h] [rbp-50h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-8h]
  int v29; // [rsp+100h] [rbp+0h]
  const wchar_t *v30; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v31; // [rsp+110h] [rbp+10h]
  int v32; // [rsp+118h] [rbp+18h]
  struct _UNICODE_STRING *v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  __int64 v35; // [rsp+130h] [rbp+30h]
  int v36; // [rsp+138h] [rbp+38h]
  const wchar_t *v37; // [rsp+140h] [rbp+40h]
  UNICODE_STRING *v38; // [rsp+148h] [rbp+48h]
  int v39; // [rsp+150h] [rbp+50h]
  struct _UNICODE_STRING *v40; // [rsp+158h] [rbp+58h]
  int v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  int v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]

  DestinationString = 0LL;
  String2 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  String1 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( *(_BYTE *)(W32GetUserSessionState(a1, a2) + 12824) == 3 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    v3 = &gapulCvt_VK_84;
    *(_QWORD *)(UserSessionState + 13976) = &gapulCvt_VK_84;
  }
  if ( *(_BYTE *)(W32GetUserSessionState(v3, v2) + 12824) == 7
    && *(_BYTE *)(W32GetUserSessionState(v6, v5) + 12825) == 3 )
  {
    *(_QWORD *)(W32GetUserSessionState(v8, v7) + 13976) = &gapulCvt_VK_IBM02;
  }
  NlsSetKeyStateToggle(0xF0u);
  NlsSetKeyStateToggle(0xF3u);
  NlsSetKeyStateToggle(0xF6u);
  NlsSetKeyStateToggle(0xFBu);
  RtlInitUnicodeString(&DestinationString, L"end");
  RtlInitUnicodeString(&String2, L"help");
  RtlInitUnicodeString(&v22, L"yes");
  RtlInitUnicodeString(&v25, L"no");
  RtlInitUnicodeString(&v23, L"home");
  RtlInitUnicodeString(&v26, L"clear");
  RtlInitUnicodeString(&String1, 0LL);
  RtlInitUnicodeString(&v19, 0LL);
  RtlInitUnicodeString(&v20, 0LL);
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultLength = 0;
  v28 = 0LL;
  v34 = 0;
  v35 = 0LL;
  v41 = 0;
  v42 = 0LL;
  v43 = 0;
  v44 = 0LL;
  QueryTable.Name = L"helpkey";
  QueryTable.EntryContext = &String1;
  QueryTable.DefaultData = &DestinationString;
  v30 = L"KanaHelpKey";
  v31 = &v19;
  v33 = &v22;
  v37 = L"clrkey";
  v38 = &v20;
  QueryTable.Flags = 32;
  QueryTable.DefaultType = 16777217;
  v29 = 32;
  v32 = 16777217;
  v36 = 32;
  v39 = 16777217;
  v40 = &v23;
  if ( RtlQueryRegistryValues(3u, L"WOW\\keyboard", &QueryTable, 0LL, 0LL) >= 0 )
  {
    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
      v11 = W32GetUserSessionState(v10, v9);
      *(_BYTE *)(v11 + 14333) &= ~2u;
    }
    if ( RtlEqualUnicodeString(&v19, &v25, 1u) )
    {
      v14 = W32GetUserSessionState(v13, v12);
      *(_BYTE *)(v14 + 14333) &= ~1u;
    }
    if ( RtlEqualUnicodeString(&v20, &v26, 1u) )
    {
      v17 = W32GetUserSessionState(v16, v15);
      *(_BYTE *)(v17 + 14333) &= ~4u;
    }
    ExFreePoolWithTag(String1.Buffer, 0);
    ExFreePoolWithTag(v19.Buffer, 0);
    ExFreePoolWithTag(v20.Buffer, 0);
  }
}
