/*
 * XREFs of PipHardwareConfigExists @ 0x140CC1AA4
 * Callers:
 *     PipHardwareConfigInit @ 0x140CC1BEC (PipHardwareConfigInit.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x140917E70 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKey @ 0x14091A194 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 */

char __fastcall PipHardwareConfigExists(void *a1, int a2)
{
  char v2; // bl
  int v3; // edi
  unsigned int v7; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v11[528]; // [rsp+58h] [rbp-B0h] BYREF

  v2 = 0;
  Handle[0] = 0LL;
  v3 = 0;
  LODWORD(v9) = 0;
  v8 = 0;
  do
  {
    v7 = 260;
    ++v3;
    if ( (int)PnpCtxRegEnumKey((__int64)a1, a1) < 0 )
      break;
    if ( (int)PnpCtxRegOpenKey(0LL, (__int64)a1, (__int64)v11, 0, 1u, (__int64)Handle) >= 0 )
    {
      v7 = 4;
      if ( PnpCtxRegQueryValue((__int64)a1, Handle[0], L"Id", &v8, &v9, &v7) >= 0
        && v8 == 4
        && v7 == 4
        && (_DWORD)v9 == a2 )
      {
        v2 = 1;
      }
      ZwClose(Handle[0]);
      Handle[0] = 0LL;
    }
  }
  while ( !v2 );
  return v2;
}
