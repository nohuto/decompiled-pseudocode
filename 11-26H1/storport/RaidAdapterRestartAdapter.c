/*
 * XREFs of RaidAdapterRestartAdapter @ 0x1400113C8
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x140010118 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterRestartAdapter(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // al
  KIRQL v4; // bp
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // r14
  unsigned int v9; // ebx
  struct _KINTERRUPT *v10; // rcx
  PKINTERRUPT *v12; // rdi
  __int64 v13; // rcx
  _DWORD *v14; // r9
  __int64 v15; // rcx
  _DWORD *v16; // r9
  __int64 v17; // rcx
  _DWORD *v18; // r9
  __int64 v19; // rcx
  _DWORD *v20; // r9
  __int64 v21; // rcx
  _DWORD *v22; // r9
  __int64 v23; // rcx
  _DWORD *v24; // r9
  __int64 v25; // rcx
  _DWORD *v26; // r9
  __int64 v27; // rcx
  _DWORD *v28; // r9
  __int64 v29; // rcx
  _DWORD *v30; // r9

  v1 = a1 + 376;
  if ( (*(_DWORD *)(a1 + 624) & 0x20) != 0 )
    goto LABEL_2;
  *(_QWORD *)(a1 + 668) = 0LL;
  *(_QWORD *)(a1 + 676) = 0LL;
  *(_QWORD *)(a1 + 684) = 0LL;
  *(_QWORD *)(a1 + 692) = 0LL;
  *(_DWORD *)(a1 + 664) = 19;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(a1 + 376, 2LL) )
    *v14 = 20;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v13, 3LL) )
    *v16 = 21;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v15, 5LL) )
    *v18 = 22;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v17, 6LL) )
    *v20 = 23;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v19, 7LL) )
    *v22 = 24;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v21, 8LL) )
    *v24 = 25;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v23, 9LL) )
    *v26 = 26;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v25, 10LL) )
    *v28 = 27;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v27, 12LL) )
    *v30 = 28;
  if ( (int)RaCallMiniportAdapterControl(v29) >= 0 )
  {
    *(_DWORD *)(v1 + 248) |= 0x20u;
LABEL_2:
    v3 = *(_BYTE *)(v1 + 296);
    goto LABEL_3;
  }
  v3 = 0;
LABEL_3:
  if ( v3 )
    RaCallMiniportAdapterControl(v1);
  v4 = RaidAdapterAcquireInterruptLock(a1);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 608) + 120LL);
  if ( v5 )
  {
    v6 = v5(*(_QWORD *)(a1 + 616) + 16LL, 2LL);
    if ( v6 )
    {
      v7 = -1073741823;
      if ( v6 == 2 )
        v7 = -2147483631;
    }
    else
    {
      v7 = 0;
      *(_BYTE *)(a1 + 104) |= 1u;
    }
  }
  else
  {
    v7 = -1073741637;
  }
  if ( *(_BYTE *)(a1 + 4433) )
  {
    v8 = *(_QWORD *)(a1 + 4416);
    if ( *(_DWORD *)(a1 + 4400) == 2 )
    {
      v9 = *(_DWORD *)(v8 + 4) - 1;
      if ( *(_DWORD *)(v8 + 4) != 1 )
      {
        v12 = (PKINTERRUPT *)(v8 + 48LL * v9 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v12, *(_BYTE *)v8);
          v12 -= 6;
          --v9;
        }
        while ( v9 );
      }
    }
    v10 = *(struct _KINTERRUPT **)(v8 + 24);
  }
  else
  {
    v10 = *(struct _KINTERRUPT **)(a1 + 864);
    if ( !v10 )
      return v7;
  }
  KeReleaseInterruptSpinLock(v10, v4);
  return v7;
}
