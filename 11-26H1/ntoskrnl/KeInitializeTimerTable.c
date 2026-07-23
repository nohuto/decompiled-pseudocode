/*
 * XREFs of KeInitializeTimerTable @ 0x140B26EB8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KiInitializeTimer2Data @ 0x1405FA8FC (KiInitializeTimer2Data.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KiInitializeForceIdle @ 0x140B26FF4 (KiInitializeForceIdle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall KeInitializeTimerTable(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdi
  void *Pool2; // rdx
  __int64 v9; // rcx

  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( KiSerializeTimerExpiration != 1 )
        KiSerializeTimerExpiration = 0;
    }
    else
    {
      KiSerializeTimerExpiration = (unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2) != 0;
    }
    KiInitializeTimer2Data();
  }
  if ( !KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208) + 1] )
  {
    v7 = 0x4000LL;
    if ( *(_BYTE *)(a1 + 208) )
    {
      if ( KiSerializeTimerExpiration )
      {
        Pool2 = 0LL;
      }
      else
      {
        Pool2 = (void *)ExAllocatePool2(0x48uLL);
        if ( !Pool2 )
          return 3221225626LL;
      }
    }
    else
    {
      Pool2 = &KiPendingTimersMask0;
      if ( KiSerializeTimerExpiration )
        v7 = 32LL;
    }
    v9 = 2LL * *(unsigned __int8 *)(a1 + 208);
    KiPendingTimerBitmaps[v9] = 8 * v7;
    KiPendingTimerBitmaps[v9 + 1] = (__int64)Pool2;
  }
  *(_DWORD *)(a1 + 14528) = MEMORY[0xFFFFF78000000320];
  KeInitializeDpc((PRKDPC)(a1 + 33776), (PKDEFERRED_ROUTINE)KiTimerExpirationDpc, 0LL);
  if ( !*(_QWORD *)(a1 + 33832) )
    *(_WORD *)(a1 + 33778) = *(_DWORD *)(a1 + 36) + 2048;
  v3 = a1 + 17160;
  v4 = 2LL;
  do
  {
    v5 = 256LL;
    do
    {
      *(_QWORD *)(v3 - 8) = 0LL;
      *(_QWORD *)(v3 + 8) = v3;
      *(_QWORD *)v3 = v3;
      *(_DWORD *)(v3 + 20) = -1;
      *(_DWORD *)(v3 + 16) = 0;
      v3 += 32LL;
      --v5;
    }
    while ( v5 );
    --v4;
  }
  while ( v4 );
  KiInitializeForceIdle(a1);
  return 0LL;
}
