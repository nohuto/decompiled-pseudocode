/*
 * XREFs of PopConsoleLockPowerSettingCallback @ 0x1407CF8B0
 * Callers:
 *     <none>
 * Callees:
 *     PopApplyPolicy @ 0x1409BF988 (PopApplyPolicy.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopConsoleLockPowerSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *v14; // r9
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int128 v24; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v25; // [rsp+30h] [rbp-E8h]
  __int128 v26; // [rsp+40h] [rbp-D8h]
  __int128 v27; // [rsp+50h] [rbp-C8h]
  __int128 v28; // [rsp+60h] [rbp-B8h]
  __int128 v29; // [rsp+70h] [rbp-A8h]
  __int128 v30; // [rsp+80h] [rbp-98h]
  __int128 v31; // [rsp+90h] [rbp-88h]
  _OWORD v32[6]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v33; // [rsp+100h] [rbp-18h]

  PopAcquirePolicyLock(a1, a2);
  v8 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 16);
  v24 = *(_OWORD *)PpmIdlePolicyLock.WriteOperationCount;
  v9 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 32);
  v25 = v8;
  v10 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 48);
  v26 = v9;
  v11 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 64);
  v27 = v10;
  v12 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 80);
  v28 = v11;
  v13 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 96);
  v29 = v12;
  v30 = v13;
  v14 = v32;
  v31 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 112);
  v15 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 144);
  v32[0] = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 128);
  v16 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 160);
  v32[1] = v15;
  v17 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 176);
  v32[2] = v16;
  v18 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 192);
  v32[3] = v17;
  v19 = *(_OWORD *)(PpmIdlePolicyLock.WriteOperationCount + 208);
  v20 = *(_QWORD *)(PpmIdlePolicyLock.WriteOperationCount + 224);
  v32[4] = v18;
  v32[5] = v19;
  v33 = v20;
  v21 = *(_QWORD *)&GUID_LOCK_CONSOLE_ON_WAKE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LOCK_CONSOLE_ON_WAKE.Data1 == *a1 )
    v21 = *(_QWORD *)GUID_LOCK_CONSOLE_ON_WAKE.Data4 - a1[1];
  if ( !v21 && a3 == 4 && a2 )
  {
    LODWORD(v29) = *a2;
    LOBYTE(v21) = 1;
    v22 = ((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, __int64))PopApplyPolicy)(v21, 0LL, &v24, 232LL);
  }
  else
  {
    v22 = -1073741811;
  }
  PopReleasePolicyLock(
    v21,
    v6,
    v7,
    v14,
    v24,
    *((_QWORD *)&v24 + 1),
    v25,
    *((_QWORD *)&v25 + 1),
    v26,
    *((_QWORD *)&v26 + 1));
  return v22;
}
