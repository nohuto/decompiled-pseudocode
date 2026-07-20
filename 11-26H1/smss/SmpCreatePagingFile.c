/*
 * XREFs of SmpCreatePagingFile @ 0x14000F9C0
 * Callers:
 *     SmpEnableSwapOnPagingFiles @ 0x14000BDFC (SmpEnableSwapOnPagingFiles.c)
 *     SmpCreatePagefileOnVolume @ 0x14000F6B8 (SmpCreatePagefileOnVolume.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D2D4 (SmpFreeSavedRegistryEntry.c)
 */

__int64 __fastcall SmpCreatePagingFile(
        UNICODE_STRING *String2,
        union _LARGE_INTEGER a2,
        union _LARGE_INTEGER a3,
        ULONG a4)
{
  NTSTATUS v5; // eax
  PWSTR Buffer; // rdi
  unsigned int v7; // ebp
  struct _UNICODE_STRING *v8; // rbx
  LONG v9; // eax
  __int64 *v10; // r14
  union _LARGE_INTEGER v12; // [rsp+58h] [rbp+10h] BYREF
  union _LARGE_INTEGER v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a2;
  v12 = a3;
  v5 = NtCreatePagingFile(String2, &v13, &v12, a4);
  Buffer = 0LL;
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( String2 )
      Buffer = String2->Buffer;
    SmpLogFailureString((__int64)"SmpCreatePagingFile", 0x7FEu, (__int64)Buffer, v5);
  }
  else
  {
    v8 = (struct _UNICODE_STRING *)SmpExistingPageFilesList;
    if ( (__int64 *)SmpExistingPageFilesList != &SmpExistingPageFilesList )
    {
      do
      {
        v9 = RtlCompareUnicodeString(v8 + 1, String2, 1u);
        v10 = *(__int64 **)&v8->Length;
        if ( !v9 )
          SmpFreeSavedRegistryEntry(v8);
        v8 = (struct _UNICODE_STRING *)v10;
      }
      while ( v10 != &SmpExistingPageFilesList );
    }
  }
  return v7;
}
