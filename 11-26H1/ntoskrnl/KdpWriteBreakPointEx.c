/*
 * XREFs of KdpWriteBreakPointEx @ 0x140C1B4E4
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KdpAddBreakpoint @ 0x140C1C5CC (KdpAddBreakpoint.c)
 *     KdpDeleteBreakpoint @ 0x140C1C76C (KdpDeleteBreakpoint.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpWriteBreakPointEx(_DWORD *a1, unsigned __int16 *a2)
{
  __int64 v2; // r14
  __int64 v5; // rdi
  __int64 v6; // r15
  int v7; // r12d
  __int64 v8; // r8
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-C8h] BYREF
  char v19; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[504]; // [rsp+58h] [rbp-A8h] BYREF

  v2 = (unsigned int)a1[4];
  v17 = 0;
  v18[0] = 56LL;
  v18[1] = a1;
  if ( (unsigned int)v2 > 0x20 || (v5 = 16LL * (unsigned int)v2, v6 = (unsigned int)v2, *a2 != v5) )
  {
    a1[2] = -1073741823;
    goto LABEL_19;
  }
  v7 = 16 * v2;
  KdpCopyMemoryChunks(*((_QWORD *)a2 + 1), (unsigned int)&v19, 16 * v2, 0, 4, (__int64)&v17);
  if ( v17 != v5 )
  {
    a1[2] = -1073741823;
LABEL_19:
    KdSendPacket(2LL, v18, a2, &KdpContext);
    return (unsigned int)a1[2];
  }
  a1[2] = 0;
  if ( (_DWORD)v2 )
  {
    v9 = v20;
    do
    {
      v10 = (unsigned int)*v9;
      if ( (_DWORD)v10 )
      {
        if ( !(unsigned __int8)KdpDeleteBreakpoint(v10) )
          a1[2] = -1073741823;
        *v9 = 0;
      }
      v9 += 4;
      --v2;
    }
    while ( v2 );
    v11 = v20;
    do
    {
      v12 = *((_QWORD *)v11 - 1);
      if ( v12 )
      {
        LOBYTE(v8) = 1;
        v13 = KdpAddBreakpoint(v12, 204LL, v8, 0LL, v15, v16);
        *v11 = v13;
        if ( !v13 )
          a1[2] = -1073741823;
      }
      v11 += 4;
      --v6;
    }
    while ( v6 );
  }
  KdpCopyMemoryChunks(*((_QWORD *)a2 + 1), (unsigned int)&v19, v7, 0, 5, (__int64)&v17);
  KdSendPacket(2LL, v18, a2, &KdpContext);
  return (unsigned int)a1[5];
}
