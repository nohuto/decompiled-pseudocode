/*
 * XREFs of KdpRestoreBreakPointEx @ 0x140C1AB6C
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KdpDeleteBreakpoint @ 0x140C1C76C (KdpDeleteBreakpoint.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpRestoreBreakPointEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // r8d
  unsigned int v5; // edx
  unsigned int v6; // edi
  unsigned int *v7; // rsi
  int v9; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v11[128]; // [rsp+50h] [rbp-A8h] BYREF

  v2 = *(_DWORD *)(a1 + 16);
  v9 = 0;
  v10[0] = 56LL;
  v10[1] = a1;
  if ( *a2 == 4LL * v2
    && (KdpCopyMemoryChunks(*((_QWORD *)a2 + 1), (unsigned int)v11, 4 * v2, 0, 4, (__int64)&v9),
        v5 = *(_DWORD *)(a1 + 16),
        v9 == 4LL * v5) )
  {
    v6 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    v7 = (unsigned int *)v11;
    if ( v5 )
    {
      do
      {
        if ( !(unsigned __int8)KdpDeleteBreakpoint(*v7) )
          *(_DWORD *)(a1 + 8) = -1073741823;
        ++v6;
        ++v7;
      }
      while ( v6 < *(_DWORD *)(a1 + 16) );
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, v10, a2, &KdpContext);
}
