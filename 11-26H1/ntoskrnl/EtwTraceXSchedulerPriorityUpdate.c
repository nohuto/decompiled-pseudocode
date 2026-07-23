/*
 * XREFs of EtwTraceXSchedulerPriorityUpdate @ 0x1403CA4C0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceXSchedulerPriorityUpdate(__int64 a1, char a2, char a3, char a4, char *a5)
{
  int v5; // r10d
  char v6; // al
  char v7; // al
  int v9; // [rsp+30h] [rbp-30h] BYREF
  char v10; // [rsp+34h] [rbp-2Ch]
  char v11; // [rsp+35h] [rbp-2Bh]
  char v12; // [rsp+36h] [rbp-2Ah]
  char v13; // [rsp+37h] [rbp-29h]
  int v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+3Ch] [rbp-24h]
  _QWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF

  v5 = 0;
  v9 = *(_DWORD *)(a1 + 1296);
  v10 = a2;
  v15 = 0;
  v12 = a5[2];
  v14 = *((_DWORD *)a5 + 1);
  v6 = *a5;
  v11 = a4;
  v13 = a3;
  if ( (v6 & 1) != 0 )
  {
    v5 = 1;
    v15 = 1;
  }
  if ( (v6 & 2) != 0 )
  {
    v5 |= 2u;
    v15 = v5;
  }
  if ( (v6 & 4) != 0 )
  {
    v5 |= 8u;
    v15 = v5;
  }
  if ( (v6 & 8) != 0 )
  {
    v5 |= 0x10u;
    v15 = v5;
  }
  if ( (v6 & 0x10) != 0 )
  {
    v5 |= 0x20u;
    v15 = v5;
  }
  v7 = a5[1];
  if ( (v7 & 1) != 0 )
  {
    v5 |= 0x100u;
    v15 = v5;
  }
  if ( (v7 & 2) != 0 )
    v15 = v5 | 0x200;
  v16[1] = 16LL;
  v16[0] = &v9;
  return EtwTraceKernelEvent((int)v16, 1, 0xA0000020, 3955, 5245442);
}
