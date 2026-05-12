/*
 * XREFs of StorAdapterDeviceRegistryKeyProxy @ 0x140051AE8
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     PortRegistryReadDeviceKey @ 0x1401B5C34 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1401B90B4 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall StorAdapterDeviceRegistryKeyProxy(__int64 a1, char a2, __int64 a3)
{
  const char *v3; // rdi
  __int64 v5; // rcx
  void *KeyHandle; // r13
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v11; // rbx
  int *v12; // rsi
  NTSTATUS v13; // eax
  int v14; // ecx
  _QWORD *v15; // rcx
  int DeviceKey; // eax
  int v17; // ebx
  struct _STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  PCSZ SourceString; // [rsp+40h] [rbp-30h]
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-28h] BYREF
  struct _UNICODE_STRING v21; // [rsp+58h] [rbp-18h] BYREF
  int v22; // [rsp+B8h] [rbp+48h]
  int v23; // [rsp+C0h] [rbp+50h]
  int *v24; // [rsp+C8h] [rbp+58h] BYREF

  v3 = *(const char **)a3;
  SourceString = *(PCSZ *)(a3 + 8);
  v5 = *(_QWORD *)(a3 + 24);
  v23 = *(_DWORD *)(a3 + 16);
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v24 = 0LL;
  v22 = 0;
  v21 = 0LL;
  UnicodeString = 0LL;
  if ( a2 )
    KeyHandle = *(void **)(a3 + 32);
  else
    v22 = *(_DWORD *)(a3 + 32);
  v8 = 0LL;
  if ( !a2 )
    v8 = v5;
  v9 = v5 & -(__int64)(a2 != 0);
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  RaidpPortGetAdapter(a1, (int **)&DestinationString, &v24);
  v11 = *(_QWORD *)&DestinationString.Length;
  v12 = v24;
  if ( !*(_QWORD *)&DestinationString.Length && !v24 )
    return 3238002694LL;
  if ( v3
    && (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, v3),
        v13 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u),
        v13 < 0)
    || (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, SourceString),
        v13 = RtlAnsiStringToUnicodeString(&v21, &DestinationString, 1u),
        v13 < 0) )
  {
    v14 = v13;
  }
  else
  {
    v15 = (_QWORD *)(v11 + 32);
    if ( a2 )
    {
      if ( !v11 )
        v15 = v12 + 8;
      DeviceKey = PortRegistryReadDeviceKey(
                    *v15,
                    (unsigned __int64)&UnicodeString & -(__int64)(v3 != 0LL),
                    (int)&v21,
                    v23,
                    v9,
                    KeyHandle);
    }
    else
    {
      if ( !v11 )
        v15 = v12 + 8;
      DeviceKey = PortRegistryWriteDeviceKey(
                    *v15,
                    (unsigned __int64)&UnicodeString & -(__int64)(v3 != 0LL),
                    (unsigned int)&v21,
                    v23,
                    v8,
                    v22);
    }
    v17 = DeviceKey;
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    if ( v21.Buffer )
      RtlFreeUnicodeString(&v21);
    v14 = v17;
  }
  return RaidNtStatusToStorStatus(v14);
}
