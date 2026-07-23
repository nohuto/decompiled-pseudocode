/*
 * XREFs of IpmiLibAddSelErrorRecord @ 0x1407222DC
 * Callers:
 *     IopWheaSelLogError @ 0x1405CCA30 (IopWheaSelLogError.c)
 *     PnpLogBootFailuresSel @ 0x1405DCA20 (PnpLogBootFailuresSel.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x140534BC8 (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelRecord @ 0x140722368 (IpmiLibAddSelRecord.c)
 *     IpmiLibpAddSelRawData @ 0x140722400 (IpmiLibpAddSelRawData.c)
 */

__int64 __fastcall IpmiLibAddSelErrorRecord(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rcx
  int v7; // r8d
  __int16 v8; // r9
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-8h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = a1;
  LOWORD(v14) = 0;
  BYTE2(v14) = 0;
  if ( !IpmiHwContextInitialized((__int64)&WheapConfigTableLock.WaitListEntry.Blink) )
    return 3221225473LL;
  *(_QWORD *)&v12 = 13631488LL;
  HIDWORD(v12) = v7;
  *(_WORD *)((char *)&v12 + 7) = 311;
  BYTE9(v12) = 0;
  WORD5(v12) = v8;
  result = IpmiLibAddSelRecord(v6, &v12, &v14);
  if ( (int)result >= 0 )
  {
    if ( a4 )
    {
      LOBYTE(v10) = -64;
      return IpmiLibpAddSelRawData(v11, v10, a4, a5, v12, *((_QWORD *)&v12 + 1), v13);
    }
  }
  return result;
}
