/*
 * XREFs of StorPortRegistryWrite @ 0x14007C320
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     PortBuildRegKeyName @ 0x1400380DC (PortBuildRegKeyName.c)
 *     StorpPortRegistryValidate @ 0x14005C428 (StorpPortRegistryValidate.c)
 *     PortMiniportRegistryWrite @ 0x14012F8F0 (PortMiniportRegistryWrite.c)
 */

bool __fastcall StorPortRegistryWrite(
        PVOID VirtualAddress,
        PCSZ SourceString,
        int a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  bool v10; // di
  int *v11; // rbx
  int *v12; // rax
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // edx
  int *v18; // r8
  int *v20; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+28h] [rbp-38h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v20 = 0LL;
  Destination = 0LL;
  UnicodeString = 0LL;
  v10 = 0;
  if ( KeGetCurrentIrql() || !MmIsAddressValid(VirtualAddress) )
    return 0;
  RaidpPortGetAdapter((__int64)VirtualAddress, (int **)&DestinationString, &v20);
  if ( *(_QWORD *)&DestinationString.Length )
  {
    v11 = (int *)(*(_QWORD *)&DestinationString.Length + 2072LL);
    v12 = (int *)(*(_QWORD *)&DestinationString.Length + 16LL);
  }
  else
  {
    if ( !v20 )
      return 0;
    v11 = v20 + 230;
    v12 = v20 + 4;
  }
  v13 = *(_QWORD *)v12;
  if ( !StorpPortRegistryValidate((__int64)v11, a5, (unsigned int *)&a6) )
    return 0;
  v17 = v14 - v11[8];
  v18 = (int *)(v15 + 56);
  v11[11] = a6;
  v11[13] = v17;
  if ( !v15 )
    v18 = (int *)(v16 + 56);
  if ( PortBuildRegKeyName((PCUNICODE_STRING)(v13 + 40), &Destination, *v18, a3) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitAnsiString(&DestinationString, SourceString);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      v10 = (int)PortMiniportRegistryWrite(&Destination, &UnicodeString, a4, v11) >= 0;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v10;
}
