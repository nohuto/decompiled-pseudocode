/*
 * XREFs of MmVirtualAccessFault @ 0x140AD3530
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x140822998 (VmpAccessFaultBatchResolve.c)
 *     PspIumResolveVirtualFault @ 0x140AD33B4 (PspIumResolveVirtualFault.c)
 * Callees:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiInitializeFaultVaListCore @ 0x1404616F0 (MiInitializeFaultVaListCore.c)
 *     MiDelayFaultingThread @ 0x1404FED04 (MiDelayFaultingThread.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MmVirtualAccessFault(signed __int64 *a1, _BYTE *a2, __int16 a3)
{
  int v6; // r8d
  ULONG_PTR v7; // r10
  ULONG_PTR v8; // r11
  int v9; // edx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  _BYTE v14[40]; // [rsp+28h] [rbp-29h] BYREF
  _BYTE *v15; // [rsp+50h] [rbp-1h]
  __int64 v16; // [rsp+58h] [rbp+7h]
  int v17; // [rsp+60h] [rbp+Fh]

  memset_0(v14, 0, 0x78uLL);
  memset_0(a2, 0, 8 * ((unsigned __int64)a1[1] >> 12));
  MiInitializeFaultVaListCore((__int64)v14, (__int64)a1, 1LL, 5);
  v15 = a2;
  v16 = 0LL;
  v9 = v6 & (v7 >> 1) | (v7 >> 3) & 2;
  v17 = v9;
  if ( (a3 & 0x200) != 0 )
  {
    v9 |= 0x200u;
    v17 = v9;
  }
  if ( (a3 & 8) != 0 )
  {
    v9 |= 4u;
    v17 = v9;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v9 |= 8u;
    v17 = v9;
  }
  if ( (a3 & 0x20) != 0 )
  {
    v9 |= 0x10u;
    v17 = v9;
  }
  if ( (a3 & 0x40) != 0 )
  {
    v9 |= 0x20u;
    v17 = v9;
  }
  if ( (a3 & 0x80u) != 0 )
  {
    v9 |= 0x80u;
    v17 = v9;
  }
  v10 = a3 & 0x100;
  if ( v10 )
    v17 = v9 | 0x100;
  v11 = MmAccessFault(v7, *a1, v6, v8);
  v12 = 0;
  if ( (v17 & 0x100) == 0 )
    v12 = v11;
  if ( v12 < 0 )
    return (unsigned int)v12;
  if ( (a2[7] & 1) != 0 && !v10 )
    return 3221225688LL;
  if ( (v17 & 0x40) != 0 )
    MiDelayFaultingThread(0xAu);
  return 0LL;
}
