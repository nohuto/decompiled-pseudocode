/*
 * XREFs of SetAppImeCompatFlags @ 0x140256310
 * Callers:
 *     SetAppCompatFlags @ 0x1402B3320 (SetAppCompatFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SetAppImeCompatFlags(__int64 a1, const UNICODE_STRING *a2)
{
  unsigned int v2; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 i; // rbx
  int v13; // edi
  const UNICODE_STRING *v14; // r14
  __int64 UserSessionState; // rax
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  DWORD DefaultLocaleId; // [rsp+44h] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  PCUNICODE_STRING String1[3]; // [rsp+58h] [rbp-A8h]
  WCHAR SourceString[80]; // [rsp+70h] [rbp-90h] BYREF

  Value = 0;
  DefaultLocaleId = 0;
  v2 = 0;
  String1[1] = 0LL;
  DestinationString = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( (unsigned int)FastGetProfileStringW(
                       0LL,
                       (*(_DWORD *)(v6 + 12) & 0x80u) != 0 ? 44 : 30,
                       a2->Buffer,
                       0LL,
                       SourceString,
                       80,
                       0) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  ZwQueryDefaultLocale(0, &DefaultLocaleId);
  if ( (unsigned __int16)((DefaultLocaleId & 0x3FF) - 17) > 1u || *(_WORD *)(a1 + 672) > 0x30Au )
  {
    v8 = Value & 0xC00000;
    *(_DWORD *)(*(_QWORD *)(a1 + 464) + 760LL) = v8;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 464);
    *(_DWORD *)(v8 + 760) = Value;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v8, v7) + 68424) )
    return 0LL;
  String1[0] = a2;
  for ( i = 0LL; i < 1; ++i )
  {
    if ( v2 )
      break;
    v13 = 0;
    if ( *(int *)(W32GetUserSessionState(v10, v9) + 68432) > 0 )
    {
      v14 = String1[i];
      while ( 1 )
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        if ( !RtlCompareUnicodeString(v14, (PCUNICODE_STRING)(*(_QWORD *)(UserSessionState + 68424) + 16LL * v13), 1u) )
          break;
        if ( ++v13 >= *(_DWORD *)(W32GetUserSessionState(v10, v9) + 68432) )
          goto LABEL_19;
      }
      v2 = 1;
    }
LABEL_19:
    ;
  }
  return v2;
}
