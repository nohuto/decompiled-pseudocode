/*
 * XREFs of VfIrqlPluginEntry @ 0x14064BAF0
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ViIrqlInit @ 0x140C425D4 (ViIrqlInit.c)
 */

__int64 __fastcall VfIrqlPluginEntry(__int16 *a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+20h] [rbp-E0h] BYREF
  int v4; // [rsp+28h] [rbp-D8h]
  __int64 v5; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v6)(); // [rsp+38h] [rbp-C8h]
  const char *v7; // [rsp+40h] [rbp-C0h]
  int v8; // [rsp+48h] [rbp-B8h]
  __int64 v9; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall *v10)(); // [rsp+58h] [rbp-A8h]
  const char *v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+68h] [rbp-98h]
  __int64 v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  const char *v15; // [rsp+80h] [rbp-80h]
  int v16; // [rsp+88h] [rbp-78h]
  __int64 v17; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v18)(); // [rsp+98h] [rbp-68h]
  const char *v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v21)(); // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  const char *v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+C8h] [rbp-38h]
  __int64 v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  const char *v27; // [rsp+E0h] [rbp-20h]
  int v28; // [rsp+E8h] [rbp-18h]
  __int64 v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  const char *v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  __int64 v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  const char *v35; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+128h] [rbp+28h]
  __int64 v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  const char *v39; // [rsp+140h] [rbp+40h]
  int v40; // [rsp+148h] [rbp+48h]
  __int64 v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  const char *v43; // [rsp+160h] [rbp+60h]
  int v44; // [rsp+168h] [rbp+68h]
  __int64 v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  const char *v47; // [rsp+180h] [rbp+80h]
  int v48; // [rsp+188h] [rbp+88h]
  __int64 v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  const char *v51; // [rsp+1A0h] [rbp+A0h]
  int v52; // [rsp+1A8h] [rbp+A8h]
  __int64 v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]

  if ( a1 )
    VfTrimControl = *a1;
  if ( (VfOptionFlags & 4) != 0 )
    HIBYTE(VfTrimControl) = 1;
  MmVerifierTrimAtPowerTransition = HIBYTE(VfTrimControl) == 0;
  if ( !(_BYTE)VfTrimControl )
  {
    if ( (VfOptionFlags & 4) != 0 || ViVerifyAllDrivers || (LOBYTE(VfTrimControl) = 10, KernelVerifier) )
      LOBYTE(VfTrimControl) = 5;
  }
  v4 = 424;
  qword_140F08568 = (__int64)ViIrqlPluginUnload;
  v5 = 0LL;
  v8 = 382;
  v6 = ViIrqlExAcquireFastMutex_Exit;
  v9 = 0LL;
  v7 = "ExTryToAcquireFastMutex";
  v10 = ViIrqlExTryToAcquireFastMutex_Exit;
  v11 = "KeAcquireInStackQueuedSpinLock";
  v12 = 298;
  v15 = "KeEnterCriticalRegion";
  v18 = ViIrqlKeEnterCriticalRegion_Exit;
  v19 = "KeLeaveCriticalRegion";
  v21 = ViIrqlKeLeaveCriticalRegion_Entry;
  v23 = "KeReleaseQueuedSpinLock";
  v27 = "KeTryToAcquireQueuedSpinLock";
  v31 = "KeAcquireSpinLockRaiseToDpc";
  v35 = "KeReleaseSpinLock";
  v39 = "KeAcquireInStackQueuedSpinLockRaiseToSynch";
  v43 = "KeAcquireQueuedSpinLockRaiseToSynch";
  v47 = "KeTryToAcquireQueuedSpinLockRaiseToSynch";
  v51 = "KeSynchronizeExecution";
  v13 = 0LL;
  v14 = 0LL;
  v16 = 286;
  v17 = 0LL;
  v20 = 274;
  v22 = 0LL;
  v24 = 259;
  v25 = 0LL;
  v26 = 0LL;
  v28 = 244;
  v29 = 0LL;
  v30 = 0LL;
  v32 = 291;
  v33 = 0LL;
  v34 = 0LL;
  v36 = 258;
  v37 = 0LL;
  v38 = 0LL;
  v40 = 295;
  v41 = 0LL;
  v42 = 0LL;
  v44 = 293;
  v45 = 0LL;
  v46 = 0LL;
  v48 = 243;
  v49 = 0LL;
  v50 = 0LL;
  v52 = 246;
  v53 = 0LL;
  v54 = 0LL;
  v1 = DifRegisterPlugin(&v3, 13LL, 1LL, &ViIrqlPluginSetting, "ExAcquireFastMutex");
  if ( v1 >= 0 )
    ViIrqlInit();
  return (unsigned int)v1;
}
