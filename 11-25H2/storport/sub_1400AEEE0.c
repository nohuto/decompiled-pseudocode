/*
 * XREFs of sub_1400AEEE0 @ 0x1400AEEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B1F4C @ 0x1400B1F4C (sub_1400B1F4C.c)
 *     sub_1400B2118 @ 0x1400B2118 (sub_1400B2118.c)
 */

void __fastcall sub_1400AEEE0(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  char *DeviceExtension; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 137) == 1 )
  {
    v4 = *((_QWORD *)DeviceExtension + 234);
    if ( (!v4 || !*(_DWORD *)(v4 + 16)) && *((_DWORD *)DeviceExtension + 858) == 17 )
    {
      sub_1400B1F4C(
        DeviceObject->DeviceExtension,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\NVMeLogPages\\Common");
      LOBYTE(v5) = 1;
      sub_1400B2118(
        DeviceExtension,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\NVMeLogPages",
        v5,
        0LL);
    }
  }
  v6 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v7 = *(_DWORD *)(v6 + *((_QWORD *)DeviceExtension + 5));
  while ( (v7 & 1) == 0 )
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + *((_QWORD *)DeviceExtension + 5)), v7 - 2, v7);
    if ( v8 == v7 )
      goto LABEL_12;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
LABEL_12:
  IoFreeWorkItem(Context);
}
