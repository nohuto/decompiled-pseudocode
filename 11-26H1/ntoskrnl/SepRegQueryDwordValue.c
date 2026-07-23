/*
 * XREFs of SepRegQueryDwordValue @ 0x140AB4114
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     SepRegOpenKey @ 0x140AB4194 (SepRegOpenKey.c)
 *     SepRegQueryValue @ 0x140AB421C (SepRegQueryValue.c)
 */

__int64 __fastcall SepRegQueryDwordValue(__int64 a1, __int64 a2, void *a3)
{
  int Value; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  Value = SepRegOpenKey(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa", 0x201u, &Handle);
  if ( Value >= 0 )
  {
    Value = SepRegQueryValue(Handle, a3);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
