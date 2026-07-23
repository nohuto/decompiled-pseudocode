/*
 * XREFs of IopGetOriginalServiceName @ 0x1407A19B4
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IopGetRootDeviceId @ 0x1407A1A44 (IopGetRootDeviceId.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     PipOpenServiceEnumKeys @ 0x140A114F8 (PipOpenServiceEnumKeys.c)
 */

__int64 __fastcall IopGetOriginalServiceName(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // ebx
  HANDLE Handle[3]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  Handle[0] = 0LL;
  result = PipOpenServiceEnumKeys(a1, 131097LL, Handle, 0LL, 0);
  if ( (int)result >= 0 )
  {
    v7 = PnpCtxRegQueryValue(v6, Handle[0], L"OriginalServiceName", &v9, a2, a3);
    if ( v7 >= 0 && (v9 != 1 || *a3 <= 2u) )
      v7 = -1073741762;
    ZwClose(Handle[0]);
    return (unsigned int)v7;
  }
  return result;
}
