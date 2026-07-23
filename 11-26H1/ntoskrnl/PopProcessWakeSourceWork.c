/*
 * XREFs of PopProcessWakeSourceWork @ 0x140C0F390
 * Callers:
 *     PopProcessDeviceWakeSource @ 0x140BFF7FC (PopProcessDeviceWakeSource.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     PopNewWakeSource @ 0x14077877C (PopNewWakeSource.c)
 *     PopWakeSourceIsChild @ 0x1407D29E0 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x1407D2A50 (PopWakeSourceIsParent.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     PopWakeSourceGetDeviceProperty @ 0x140B3FB28 (PopWakeSourceGetDeviceProperty.c)
 *     PopFreeWakeSource @ 0x140B47FEC (PopFreeWakeSource.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopProcessWakeSourceWork(struct _DEVICE_OBJECT *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v3; // rbp
  __int64 DeviceNode; // rdi
  unsigned int v8; // r15d
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 Pool2; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  GuidString = 0LL;
  if ( a1 )
    DeviceNode = (__int64)a1->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  v8 = *(_DWORD *)(DeviceNode + 152);
  v9 = *(_QWORD **)(PopCurrentWakeInfo + 24);
  do
  {
    while ( 1 )
    {
      do
      {
        if ( v9 == (_QWORD *)(PopCurrentWakeInfo + 24) )
          goto LABEL_13;
        v10 = v9;
        v9 = (_QWORD *)*v9;
      }
      while ( *((_DWORD *)v10 + 4) );
      if ( *((_DWORD *)v10 + 18) <= v8 )
        break;
      if ( PopWakeSourceIsParent((const wchar_t **)DeviceNode, (__int64)(v10 + 3)) )
      {
        v11 = -1073741823;
LABEL_17:
        v13 = 0LL;
        goto LABEL_18;
      }
    }
  }
  while ( *((_DWORD *)v10 + 18) >= v8 || !PopWakeSourceIsChild(DeviceNode, (__int64)(v10 + 3)) );
  v3 = v10;
LABEL_13:
  v12 = PopNewWakeSource(0);
  v13 = v12;
  if ( !v12 )
  {
    v11 = -1073741670;
LABEL_18:
    v3 = 0LL;
    goto LABEL_20;
  }
  *(_DWORD *)(v12 + 72) = v8;
  Pool2 = ExAllocatePool2(0x100uLL);
  *(_QWORD *)(v13 + 32) = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741670;
    PopFreeWakeSource((_DWORD *)v13);
    goto LABEL_17;
  }
  *(_WORD *)(v13 + 26) = *(_WORD *)(DeviceNode + 40);
  RtlCopyUnicodeString((PUNICODE_STRING)(v13 + 24), (PCUNICODE_STRING)(DeviceNode + 40));
  PopWakeSourceGetDeviceProperty(v13 + 40, DevicePropertyFriendlyName, a1);
  PopWakeSourceGetDeviceProperty(v13 + 56, DevicePropertyDeviceDescription, a1);
  PopWakeSourceGetDeviceProperty(v13 + 96, DevicePropertyClassName, a1);
  PopWakeSourceGetDeviceProperty((__int64)&GuidString, DevicePropertyClassGuid, a1);
  RtlGUIDFromString(&GuidString, (GUID *)(v13 + 76));
  v11 = 0;
LABEL_20:
  Buffer = GuidString.Buffer;
  *a2 = v13;
  *a3 = v3;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x206D654Du);
  return v11;
}
