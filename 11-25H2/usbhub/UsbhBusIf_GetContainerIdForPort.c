/*
 * XREFs of UsbhBusIf_GetContainerIdForPort @ 0x140057340
 * Callers:
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhBusIf_GetContainerIdForPort(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 (__fastcall *v10)(_QWORD, _QWORD, __int64); // rax

  v4 = a2;
  v6 = FdoExt(a1);
  Log(a1, 4, 1967604553, (__int64)(v6 + 1056), v4);
  if ( (*(_DWORD *)(v8 + 2560) & 1) == 0 )
    return 3221225485LL;
  v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v7 + 272);
  if ( v10 )
    return v10(*(_QWORD *)(v7 + 8), (unsigned __int16)v4, a3);
  else
    return 3221225474LL;
}
