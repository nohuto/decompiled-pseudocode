/*
 * XREFs of UsbhBusIf_GetContainerIdForPort @ 0x1400578A0
 * Callers:
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhBusIf_GetContainerIdForPort(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rax
  __int64 v7; // r11
  __int64 (__fastcall *v9)(_QWORD, _QWORD, __int64); // rax

  v4 = a2;
  v6 = FdoExt(a1);
  Log(a1, 4, 1967604553, (__int64)(v6 + 1056), v4);
  if ( (*(_DWORD *)(v7 + 2560) & 1) == 0 )
    return 3221225485LL;
  v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v7 + 4496);
  if ( v9 )
    return v9(*(_QWORD *)(v7 + 4232), (unsigned __int16)v4, a3);
  else
    return 3221225474LL;
}
