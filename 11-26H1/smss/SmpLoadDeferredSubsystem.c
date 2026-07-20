/*
 * XREFs of SmpLoadDeferredSubsystem @ 0x1400168F0
 * Callers:
 *     <none>
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpExecuteCommand @ 0x1400030A0 (SmpExecuteCommand.c)
 *     SmpGetMuSessionIdFromClientContext @ 0x140009500 (SmpGetMuSessionIdFromClientContext.c)
 */

__int64 __fastcall SmpLoadDeferredSubsystem(__int64 a1, int *a2)
{
  int MuSessionIdFromClientContext; // esi
  int v5; // eax
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // r8
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  String1.Length = *(_WORD *)(a1 + 48);
  String1.MaximumLength = String1.Length;
  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  String1.Buffer = (PWSTR)(a1 + 52);
  v10 = 0LL;
  MuSessionIdFromClientContext = SmpGetMuSessionIdFromClientContext((__int64)a2, &v10);
  if ( v10 )
  {
    v5 = *a2;
    v6 = SmpSubSystemsToDefer;
    v7 = &SmpSubSystemsRequired;
    if ( (v5 & 8) != 0 )
      v6 = SmpSubSystemsRequired;
    else
      v7 = &SmpSubSystemsToDefer;
    while ( (__int64 *)v6 != v7 )
    {
      if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v6 + 16), 1u) )
        return SmpExecuteCommand(v6 + 32, MuSessionIdFromClientContext, v8, 72, 0LL);
      v6 = *(_QWORD *)v6;
    }
    return 3221225524LL;
  }
  else
  {
    SmpLogFailureString((__int64)"SmpLoadDeferredSubsystem", 0x286Au, (__int64)String1.Buffer, 0xC0000001);
    return 3221225473LL;
  }
}
