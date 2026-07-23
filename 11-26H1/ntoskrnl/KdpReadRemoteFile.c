/*
 * XREFs of KdpReadRemoteFile @ 0x140C19AD0
 * Callers:
 *     KdpPullRemoteFile @ 0x140C198F8 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 */

__int64 __fastcall KdpReadRemoteFile(int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  int v9; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r12
  unsigned int v14; // [rsp+30h] [rbp-71h] BYREF
  _DWORD v15[2]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD *v16; // [rsp+40h] [rbp-61h]
  __int128 v17; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v18[3]; // [rsp+60h] [rbp-41h] BYREF
  int v19; // [rsp+78h] [rbp-29h]

  v5 = (unsigned int)(a1 - 1);
  memset_0(v18, 0, 0x40uLL);
  v9 = 0;
  if ( (unsigned int)v5 >= 0x10 )
    return 3221225485LL;
  v13 = KdEnterDebugger(0LL, 0LL);
  if ( KdpRemoteFiles[v5] )
  {
    while ( a4 )
    {
      v18[1] = KdpRemoteFiles[v5];
      v17 = 0LL;
      v15[1] = 0;
      v14 = 0;
      v18[0] = 13361LL;
      v18[2] = a2;
      if ( a4 <= (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
        v19 = a4;
      else
        v19 = KdTransportMaxPacketSize - 64;
      v15[0] = 4194368;
      v16 = v18;
      KdSendPacket(11LL, v15, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        HIDWORD(v18[0]) = -1073740972;
        break;
      }
      WORD1(v17) = v19;
      *((_QWORD *)&v17 + 1) = a3;
      if ( !(unsigned int)KdReceivePacket(11LL, v15, &v17, &v14, &KdpContext) )
      {
        if ( v18[0] < 0 )
          break;
        v12 = v14;
        v9 += v14;
        a3 += v14;
        a2 += v14;
        a4 -= v14;
      }
    }
    *a5 = v9;
  }
  else
  {
    HIDWORD(v18[0]) = -1073741811;
  }
  LOBYTE(v12) = v13;
  KdExitDebugger(v12, v11);
  return HIDWORD(v18[0]);
}
