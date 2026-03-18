/*
 * XREFs of UsbhBusIf_SetContainerIdForPort @ 0x1400579B8
 * Callers:
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhBusIf_SetContainerIdForPort(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rax
  __int64 v7; // r11
  void (__fastcall *v8)(_QWORD, _QWORD, __int64); // rax

  v4 = a2;
  v6 = FdoExt(a1);
  Log(a1, 4, 1968390985, (__int64)(v6 + 1056), v4);
  if ( (*(_DWORD *)(v7 + 2560) & 1) != 0 )
  {
    v8 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))(v7 + 4504);
    if ( v8 )
      v8(*(_QWORD *)(v7 + 4232), (unsigned __int16)v4, a3);
  }
}
