/*
 * XREFs of NVMeControllerInitPart2 @ 0x14000CC70
 * Callers:
 *     NVMeControllerPowerUp @ 0x1400075D0 (NVMeControllerPowerUp.c)
 *     NVMeHwInitialize @ 0x140012FB0 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x140013020 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerReinitialize @ 0x140024B08 (NVMeControllerReinitialize.c)
 * Callees:
 *     NVMeSetIoQueueCount @ 0x14000CEE0 (NVMeSetIoQueueCount.c)
 *     NVMeSetArbitration @ 0x14000D0E0 (NVMeSetArbitration.c)
 *     IoQueuesCreation @ 0x14000D1E0 (IoQueuesCreation.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x14000D680 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeInitHostMemoryBuffer @ 0x14000D7A0 (NVMeInitHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x14000DA40 (NVMeSetInterruptCoalescing.c)
 *     GetInterruptMessageInformation @ 0x140010A50 (GetInterruptMessageInformation.c)
 *     FillControllerRuntimeLog @ 0x1400124C4 (FillControllerRuntimeLog.c)
 *     InitializePerfOptions @ 0x1400147FC (InitializePerfOptions.c)
 *     IoQueuesCreationAsync @ 0x14001495C (IoQueuesCreationAsync.c)
 *     IoQueuesInitialize @ 0x140014D10 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x140015460 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x140015574 (IoSqToIoCqMapping.c)
 *     NVMeInitStreams @ 0x1400182D4 (NVMeInitStreams.c)
 *     NVMeBuildPollingConfiguration @ 0x1400241C8 (NVMeBuildPollingConfiguration.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

__int64 __fastcall NVMeControllerInitPart2(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  bool v3; // r14
  bool v4; // zf
  char v6; // di
  unsigned int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // rdx
  _OWORD v12[5]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v13; // [rsp+C0h] [rbp-48h]

  memset(v12, 0, sizeof(v12));
  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 56) & 0x1000000) == 0;
  v13 = 0LL;
  v6 = a2;
  v8 = 0;
  if ( !v4 )
    v3 = *(_DWORD *)(a1 + 212) == 0;
  if ( (_BYTE)a2 )
  {
    if ( !(unsigned __int8)GetInterruptMessageInformation() )
    {
      *(_DWORD *)(a1 + 28) = 11;
      goto LABEL_28;
    }
    NVMeBuildPollingConfiguration(a1, a3);
  }
  if ( v3 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 128) & 0x10) == 0 && (*(_DWORD *)(a1 + 24) & 0x2000) != 0 )
    *(_DWORD *)(a1 + 124) = 0xFFFF;
  LOBYTE(a2) = v6 == 0;
  v9 = NVMeSetIoQueueCount(a1, a2, a3);
  v8 = v9;
  if ( v9 || !*(_WORD *)(a1 + 982) && (!*(_WORD *)(a1 + 332) || !*(_WORD *)(a1 + 330)) )
  {
    *(_DWORD *)(a1 + 28) = 12;
    if ( v9 )
      goto LABEL_52;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
    NVMeSetInterruptCoalescing(a1, a3);
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
    NVMeSetArbitration(a1, a3);
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 332) && *(_WORD *)(a1 + 330) )
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x800000) == 0 && !(unsigned __int8)InitializePerfOptions(a1) )
      {
        *(_DWORD *)(a1 + 330) = 0;
        *(_DWORD *)(a1 + 28) = 21;
        goto LABEL_28;
      }
      if ( !(unsigned __int8)IoQueuesInitialize(a1) )
      {
        *(_DWORD *)(a1 + 28) = 13;
        goto LABEL_28;
      }
      IoSqToIoCqMapping(a1);
    }
    if ( *(_BYTE *)(a1 + 20) || !*(_WORD *)(a1 + 982) || (unsigned __int8)IoReservedQueuesInitialize(a1) )
      goto LABEL_13;
    *(_DWORD *)(a1 + 28) = 17;
LABEL_28:
    v8 = -1056964607;
    goto LABEL_52;
  }
LABEL_13:
  if ( !*(_WORD *)(a1 + 332) || !*(_WORD *)(a1 + 330) )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 128) & 4) == 0 && !a3 )
  {
    if ( !(unsigned __int8)IoQueuesCreationAsync(a1, 0LL) )
      goto LABEL_28;
LABEL_21:
    NVMeInitHostMemoryBuffer(a1);
    if ( v3 )
    {
LABEL_22:
      NVMeControllerGetFeaturesSupportedCacheCapabilities(a1);
      goto LABEL_23;
    }
LABEL_38:
    if ( (*(_BYTE *)(a1 + 3728) & 5) == 5 )
    {
      LOBYTE(v10) = -1;
      NVMeInitStreams(a1, v10);
    }
    goto LABEL_22;
  }
  v8 = IoQueuesCreation(a1, a3);
  if ( !v8 )
  {
    NVMeInitHostMemoryBuffer(a1);
    goto LABEL_38;
  }
LABEL_52:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    FillControllerRuntimeLog(a1, v12);
    StorPortNotification(4109LL, a1, 0LL);
  }
  if ( v8 )
  {
    ++*(_DWORD *)(a1 + 4204);
    return v8;
  }
LABEL_23:
  ++*(_DWORD *)(a1 + 4200);
  return v8;
}
