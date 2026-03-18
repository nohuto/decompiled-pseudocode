/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1400EDC78
 * Callers:
 *     RIMRegOpenLocalMachineKey @ 0x1400EDB8C (RIMRegOpenLocalMachineKey.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1400EDD70 (RIMPopulateExtendedMouseDeviceProperties.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1400ED974 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  unsigned __int64 Length; // r8
  USHORT MaximumLength; // ax
  PWSTR Buffer; // rax
  unsigned __int64 v6; // rbx
  NTSTATUS result; // eax
  size_t v8; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || (unsigned __int16)Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !a1->Buffer && ((_WORD)Length || MaximumLength) )
  {
    return -1073741811;
  }
  Buffer = a1->Buffer;
  pcchNewDestLength = 0LL;
  v6 = Length >> 1;
  result = RtlWideCharArrayCopyStringWorker(
             &Buffer[v6],
             ((unsigned __int64)a1->MaximumLength >> 1) - v6,
             &pcchNewDestLength,
             a2,
             v8);
  a1->Length = 2 * (pcchNewDestLength + v6);
  return result;
}
