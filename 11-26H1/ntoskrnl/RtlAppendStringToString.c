/*
 * XREFs of RtlAppendStringToString @ 0x140B20220
 * Callers:
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x14085A834 (CmpInitBackupHive.c)
 *     MiFormFullImageName @ 0x140875224 (MiFormFullImageName.c)
 *     EmInitSystem @ 0x140D07BB4 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendStringToString(PSTRING Destination, const STRING *Source)
{
  int Length; // edi
  __int64 v4; // rcx

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  v4 = Destination->Length;
  if ( (int)v4 + Length <= (unsigned int)Destination->MaximumLength )
  {
    memmove(&Destination->Buffer[v4], Source->Buffer, Source->Length);
    Destination->Length += Length;
    return 0;
  }
  return -1073741789;
}
