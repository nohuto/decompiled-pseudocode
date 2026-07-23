/*
 * XREFs of IpmiLibAddSelRecord @ 0x140722368
 * Callers:
 *     IpmiLibAddSelBugcheckRecord @ 0x1407220C4 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140722200 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibAddSelErrorRecord @ 0x1407222DC (IpmiLibAddSelErrorRecord.c)
 *     IpmiLibpAddSelRawData @ 0x140722400 (IpmiLibpAddSelRawData.c)
 * Callees:
 *     IpmiLibRequestReceive @ 0x1407224CC (IpmiLibRequestReceive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IpmiLibAddSelRecord(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 v4; // xmm1
  int v5; // ecx
  char v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+21h] [rbp-2Fh]
  __int128 v9; // [rsp+25h] [rbp-2Bh]
  __int16 v10; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v11[5]; // [rsp+3Ah] [rbp-16h]

  v4 = *a2;
  v7 = BYTE1(WheapConfigTableLock.RelativeTimerBias);
  v8 = 1143472144;
  v10 = 7;
  v9 = v4;
  *(_DWORD *)&v11[1] = 0;
  v11[0] = -1;
  v5 = IpmiLibRequestReceive(a1, &v7, &v10);
  if ( v5 >= 0 )
  {
    if ( (unsigned __int16)v10 >= 2u )
    {
      *(_WORD *)a3 = *(_WORD *)v11;
      *(_BYTE *)(a3 + 2) = v11[2];
    }
    else
    {
      return (unsigned int)-1073741762;
    }
  }
  return (unsigned int)v5;
}
