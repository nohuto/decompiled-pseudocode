/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x14000FFA4
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000FDD0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x140010A10 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x14007F680 (RaidAdapterSendPowerToMiniportWorkItemRoutine.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  char v5; // al
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int64, _DWORD *); // rax
  int v8; // eax
  _DWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rax
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
  _DWORD v31[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v32; // [rsp+28h] [rbp-20h]
  int v33; // [rsp+30h] [rbp-18h]
  int v34; // [rsp+34h] [rbp-14h]

  v4 = -1073741637;
  if ( !KsrPowerDownOptimizationEnabled )
    goto LABEL_2;
  v10 = *(_DWORD **)(*(_QWORD *)(a1 + 8) + 64LL);
  if ( *v10 != 1431193940 )
  {
    if ( *v10 != 1094997074 )
      goto LABEL_2;
    if ( StorKsrPowerDown )
      goto LABEL_13;
    v11 = v10[1551];
    goto LABEL_12;
  }
  if ( !StorKsrPowerDown )
  {
    v11 = v10[905];
LABEL_12:
    if ( (v11 & 1) == 0 )
      goto LABEL_2;
  }
LABEL_13:
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v12 + 32) == 5
    && *(_DWORD *)(v12 + 24) == 4
    && (unsigned __int8)RaidIsAdapterControlSupported(a1 + 376, 26LL) )
  {
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 376);
  }
LABEL_2:
  if ( (*(_DWORD *)(a1 + 624) & 0x20) == 0 )
  {
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
    if ( (int)RaCallMiniportAdapterControl(v29) < 0 )
    {
      v5 = 0;
      goto LABEL_4;
    }
    *(_DWORD *)(a1 + 624) |= 0x20u;
  }
  v5 = *(_BYTE *)(a1 + 674);
LABEL_4:
  if ( v5 )
  {
    v6 = *(_QWORD *)(a2 + 184);
    v32 = 0LL;
    v31[0] = 1;
    v31[1] = 24;
    v33 = *(_DWORD *)(v6 + 32);
    v34 = *(_DWORD *)(v6 + 24);
    v7 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)(a1 + 608) + 120LL);
    if ( v7 )
    {
      v8 = v7(*(_QWORD *)(a1 + 616) + 16LL, 6LL, v31);
      if ( v8 )
      {
        v4 = -1073741823;
        if ( v8 == 2 )
          return (unsigned int)-2147483631;
      }
      else
      {
        return 0;
      }
    }
  }
  return v4;
}
