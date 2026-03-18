/*
 * XREFs of NtGetWriteWatch @ 0x140A8DAE0
 * Callers:
 *     DifNtGetWriteWatchWrapper @ 0x140679980 (DifNtGetWriteWatchWrapper.c)
 * Callees:
 *     MiWalkPtesForWriteWatchState @ 0x1403178F8 (MiWalkPtesForWriteWatchState.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiGetWriteWatchFinish @ 0x140A8DBB8 (MiGetWriteWatchFinish.c)
 *     MiPrepareWriteWatchPacket @ 0x140A8DCD0 (MiPrepareWriteWatchPacket.c)
 */

__int64 __fastcall NtGetWriteWatch(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rdx
  int v12; // ebx
  _QWORD v14[3]; // [rsp+20h] [rbp-E0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h]
  __int64 v16; // [rsp+40h] [rbp-C0h]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h]

  memset_0(v14, 0, 0x8C8uLL);
  v14[2] = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v14[0] = a5;
  v14[1] = a6;
  v18 = a7;
  v12 = MiPrepareWriteWatchPacket(v14);
  if ( v12 >= 0 )
    MiWalkPtesForWriteWatchState((__int64)v14, v11);
  MiGetWriteWatchFinish(v14, (unsigned int)v12);
  return (unsigned int)v12;
}
