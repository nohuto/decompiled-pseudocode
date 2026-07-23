/*
 * XREFs of ExpWnfComposeValueName @ 0x1409C78CC
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x14084D268 (ExpWnfDeletePermanentStateData.c)
 *     ExpWnfDeletePermanentName @ 0x1409C36F4 (ExpWnfDeletePermanentName.c)
 *     ExpWnfWriteStateData @ 0x1409C7434 (ExpWnfWriteStateData.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     ExpWnfPopulateStateData @ 0x1409CB9C8 (ExpWnfPopulateStateData.c)
 *     ExpWnfRegisterPermanentName @ 0x1409CBBBC (ExpWnfRegisterPermanentName.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlInt64ToUnicodeString @ 0x14097B1A0 (RtlInt64ToUnicodeString.c)
 */

int __fastcall ExpWnfComposeValueName(__int64 a1, UNICODE_STRING *a2)
{
  wchar_t *v3; // rax
  unsigned int v4; // r9d
  unsigned int v5; // edi
  __int64 v6; // r8
  wchar_t *Buffer; // rdx
  bool v8; // zf
  __int64 v9; // rcx
  ULONGLONG Value; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  Value = 0LL;
  v12 = a1 ^ 0x41C64E6DA3BC0074LL;
  RtlCopyVolatileMemory(&Value, &v12, 8uLL);
  LODWORD(v3) = RtlInt64ToUnicodeString(Value, 0x10u, a2);
  v4 = a2->Length >> 1;
  v5 = 16 - v4;
  a2->Length = 32;
  if ( v4 )
  {
    v6 = v4;
    do
    {
      Buffer = a2->Buffer;
      --v6;
      v8 = v4-- == 1;
      LODWORD(v3) = Buffer[v6];
      Buffer[v4 + v5] = (unsigned __int16)v3;
    }
    while ( !v8 );
  }
  if ( v5 )
  {
    v9 = v5;
    do
    {
      v3 = a2->Buffer;
      v3[--v9] = 48;
      --v5;
    }
    while ( v5 );
  }
  return (int)v3;
}
