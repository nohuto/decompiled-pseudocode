/*
 * XREFs of BiResolveLocateDevice @ 0x14089131C
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x140B635D4 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x140723B90 (ZwQueryAttributesFile.c)
 *     BiGetBcdDeviceType @ 0x140892204 (BiGetBcdDeviceType.c)
 *     BiGetLocateTarget @ 0x140892EA8 (BiGetLocateTarget.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiResolveLocateDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  WCHAR *v4; // rdi
  int AttributesFile; // ebx
  __int64 BcdDeviceType; // rax
  int LocateTarget; // eax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-49h] BYREF
  PCWSTR Source; // [rsp+28h] [rbp-41h] BYREF
  UNICODE_STRING Destination; // [rsp+30h] [rbp-39h] BYREF
  __int128 v15; // [rsp+40h] [rbp-29h] BYREF
  __int128 v16; // [rsp+50h] [rbp-19h]
  __int128 v17; // [rsp+60h] [rbp-9h]
  _OWORD v18[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+90h] [rbp+27h]

  v2 = *(unsigned int *)(a2 + 24);
  Source = 0LL;
  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  *(_QWORD *)&v17 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  DWORD2(v17) = 0;
  v16 = 0LL;
  v12[0] = 0;
  Destination = 0LL;
  if ( *(_DWORD *)(v2 + a2) != 2 )
  {
    AttributesFile = -1073741637;
    BcdDeviceType = BiGetBcdDeviceType();
    BiLogMessage(
      3LL,
      L"BiResolveLocateDevice: Parent device (%ws) is not partition. Status %x",
      BcdDeviceType,
      3221225659LL);
LABEL_11:
    BiLogMessage(3LL, L"BiResolveLocateDevice: Failed Status %x", (unsigned int)AttributesFile);
    goto LABEL_13;
  }
  LocateTarget = BiGetLocateTarget(a1, a2, &Source, v12);
  AttributesFile = LocateTarget;
  if ( LocateTarget < 0 )
  {
    BiLogMessage(2LL, L"BiResolveLocateDevice: Failed to get locate target %x", (unsigned int)LocateTarget);
    v4 = (WCHAR *)Source;
    goto LABEL_11;
  }
  v4 = (WCHAR *)Source;
  BiLogMessage(2LL, L"BiResolveLocateDevice: LOCATE=[%ws]", Source);
  v8 = v2 + a2;
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( v4[v10] );
  do
    ++v9;
  while ( *(_WORD *)(v8 + 2 * v9 + 20) );
  Destination.MaximumLength = 2 * (v10 + 1 + v9);
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x102uLL);
  if ( !Destination.Buffer )
  {
    AttributesFile = -1073741670;
    goto LABEL_11;
  }
  RtlAppendUnicodeToString(&Destination, (PCWSTR)(v8 + 20));
  RtlAppendUnicodeToString(&Destination, v4);
  LODWORD(v15) = 48;
  *(_QWORD *)&v16 = &Destination;
  *((_QWORD *)&v15 + 1) = 0LL;
  DWORD2(v16) = 576;
  v17 = 0LL;
  AttributesFile = ZwQueryAttributesFile((__int64)&v15, (__int64)v18);
  if ( AttributesFile < 0 )
    goto LABEL_11;
  BiLogMessage(2LL, L"BiResolveLocateDevice: Partition:%ws", v8 + 20);
LABEL_13:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x4B444342u);
  if ( v4 && v12[0] )
    ExFreePoolWithTag(v4, 0x4B444342u);
  return (unsigned int)AttributesFile;
}
