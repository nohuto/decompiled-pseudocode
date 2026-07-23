/*
 * XREFs of PipHardwareConfigGetLastUseTime @ 0x140B4EBFC
 * Callers:
 *     PnpGetStableSystemBootTime @ 0x140B4EB80 (PnpGetStableSystemBootTime.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     PipHardwareConfigOpenKey @ 0x140B6C880 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigGetLastUseTime(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0;
  Handle = 0LL;
  if ( a2 )
  {
    v3 = PipHardwareConfigOpenKey(a1, 131097LL, &Handle);
    if ( v3 >= 0 )
    {
      LODWORD(v6) = 8;
      v3 = PnpCtxRegQueryValue(v4, Handle, L"LastUse", &v7, a2, (unsigned int *)&v6);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
