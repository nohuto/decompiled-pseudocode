/*
 * XREFs of IpmiLibpKcsHandleError @ 0x14072263C
 * Callers:
 *     IpmiLibpKcsBmcTransact @ 0x140722594 (IpmiLibpKcsBmcTransact.c)
 * Callees:
 *     IpmiLibReadOneByte @ 0x140722044 (IpmiLibReadOneByte.c)
 *     IpmiLibWriteOneByte @ 0x140722080 (IpmiLibWriteOneByte.c)
 *     IpmiLibpKcsSpinRegister @ 0x140722B9C (IpmiLibpKcsSpinRegister.c)
 *     IpmiLibpHandleErrorInterrupt @ 0x140722D68 (IpmiLibpHandleErrorInterrupt.c)
 */

__int64 __fastcall IpmiLibpKcsHandleError(__int64 a1, __int64 a2)
{
  unsigned __int8 i; // di
  __int64 v4; // rcx
  int v5; // eax
  int v6; // r9d
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r9d
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  char v15; // [rsp+40h] [rbp+18h] BYREF

  v14 = a1;
  v15 = 0;
  LOBYTE(v14) = 0;
  for ( i = 0; i <= 0xAu; ++i )
  {
    if ( (unsigned int)IpmiLibpKcsSpinRegister(a1, a2, 2LL) )
      goto LABEL_20;
    HIDWORD(WheapConfigTableLock.Timer.Dpc) = 4;
    IpmiLibWriteOneByte(a1, 1u, 0x60u);
    v5 = IpmiLibpHandleErrorInterrupt(v4, a2, &v14, &v15);
    v6 = 0;
    if ( v5 != -1073741822 )
      v6 = v5;
    if ( v6 )
      goto LABEL_20;
    HIDWORD(WheapConfigTableLock.Timer.Dpc) = 5;
    IpmiLibWriteOneByte(a1, 0, 0);
    v8 = IpmiLibpHandleErrorInterrupt(v7, a2, &v14, &v15);
    v9 = 0;
    if ( v8 != -1073741822 )
      v9 = v8;
    if ( v9 || (a1 = (unsigned int)(unsigned __int8)v14 - 1, (unsigned __int8)v14 == 1) )
    {
LABEL_20:
      IpmiLibWriteOneByte(a1, 1u, 0x60u);
      return v12;
    }
    if ( (unsigned __int8)v14 != 255 )
    {
      if ( (WheapConfigTableLock.Timer.Header.Type & 1) == 0 )
        IpmiLibReadOneByte(a1, 0);
      IpmiLibWriteOneByte(a1, 0, 0x68u);
      HIDWORD(WheapConfigTableLock.Timer.Dpc) = 6;
      v11 = IpmiLibpHandleErrorInterrupt(v10, a2, &v14, &v15);
      v12 = 0;
      if ( v11 != -1073741822 )
        v12 = v11;
      if ( v12 )
        goto LABEL_20;
      a1 = (unsigned int)(unsigned __int8)v14 - 1;
      if ( (unsigned __int8)v14 == 1 )
        goto LABEL_20;
      if ( (unsigned __int8)v14 != 255 )
        return v12;
    }
  }
  return 0;
}
