/*
 * XREFs of HalpVpptTimerRegister @ 0x1405858FC
 * Callers:
 *     HalpTimerSelectRoles @ 0x14057A3A8 (HalpTimerSelectRoles.c)
 * Callees:
 *     ExtEnvInitializeSpinLock @ 0x14059A684 (ExtEnvInitializeSpinLock.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpVpptTimerRegister(_DWORD *a1, char a2)
{
  int v4; // edi
  int v5; // eax
  _DWORD v6[2]; // [rsp+20h] [rbp-69h] BYREF
  __int64 (__fastcall *v7)(__int64); // [rsp+28h] [rbp-61h]
  void (__fastcall *v8)(__int64); // [rsp+38h] [rbp-51h]
  __int64 (__fastcall *v9)(__int64 *, int, __int64); // [rsp+40h] [rbp-49h]
  void (__fastcall *v10)(__int64); // [rsp+48h] [rbp-41h]
  __int128 *v11; // [rsp+78h] [rbp-11h]
  int v12; // [rsp+80h] [rbp-9h]
  int v13; // [rsp+84h] [rbp-5h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  int v15; // [rsp+94h] [rbp+Bh]
  int v16; // [rsp+98h] [rbp+Fh]
  int v17; // [rsp+9Ch] [rbp+13h]
  int v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A4h] [rbp+1Bh]
  __int64 v20; // [rsp+A8h] [rbp+1Fh]
  __int128 v21; // [rsp+B0h] [rbp+27h] BYREF
  __int128 v22; // [rsp+C0h] [rbp+37h]
  __int128 v23; // [rsp+D0h] [rbp+47h]

  if ( !a1 )
    return 3221225485LL;
  if ( a2 && (a1[56] & 0x8000) == 0 )
    return 3221225659LL;
  if ( (a1[56] & 1) != 0 )
    return 3221225659LL;
  v4 = a1[56] & 0xB00;
  if ( !v4 )
    return 3221225659LL;
  if ( _InterlockedExchange(&HalpVpptRegistered, 1) )
    return 3221227288LL;
  *(_QWORD *)&HalpVpptPhysicalTimer = a1;
  HalpVpptPhysicalTimerTarget = -1;
  ExtEnvInitializeSpinLock(&HalpVpptLock);
  qword_140FBB768 = (__int64)&HalpVpptQueue;
  *(_QWORD *)&HalpVpptQueue = &HalpVpptQueue;
  memset_0(v6, 0, 0x90uLL);
  v6[0] = 1;
  v6[1] = 144;
  v7 = HalpVpptInitialize;
  v13 = 64;
  v9 = HalpVpptArmTimer;
  v12 = 48;
  v10 = HalpVpptStop;
  v8 = HalpVpptAcknowledgeInterrupt;
  v5 = a1[56] & 0x8000;
  v20 = 12LL;
  v14 = 10000000LL;
  v15 = v4 | v5 | 0x210031;
  v19 = a1[24];
  v18 = a1[23];
  v17 = a1[22];
  v16 = a1[21];
  v22 = 0LL;
  v11 = &v21;
  v21 = 0LL;
  LODWORD(v22) = -1;
  v23 = 0LL;
  return HalpTimerRegister(v6, 0LL);
}
