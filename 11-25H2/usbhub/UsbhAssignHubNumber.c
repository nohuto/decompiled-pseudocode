/*
 * XREFs of UsbhAssignHubNumber @ 0x14004F638
 * Callers:
 *     UsbhAddDevice @ 0x14004F060 (UsbhAddDevice.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

LONG __fastcall UsbhAssignHubNumber(__int64 a1)
{
  _DWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v1 = FdoExt(a1);
  v1[344] = USBD_AllocateHubNumber();
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v2 = (_QWORD *)qword_14006F548;
  v3 = v1 + 1288;
  if ( *(__int64 **)qword_14006F548 != &qword_14006F540 )
    __fastfail(3u);
  *v3 = &qword_14006F540;
  v3[1] = v2;
  *v2 = v3;
  qword_14006F548 = (__int64)v3;
  return KeSetEvent(&Event, 0, 0);
}
