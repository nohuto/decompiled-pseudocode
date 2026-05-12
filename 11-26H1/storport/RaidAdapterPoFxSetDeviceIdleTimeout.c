/*
 * XREFs of RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140053B4C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorpAdapterInitializePoFxPower @ 0x14007C944 (StorpAdapterInitializePoFxPower.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidLogPower @ 0x14006CF04 (RaidLogPower.c)
 *     McTemplateK0quuuqqtt_EtwWriteTransfer @ 0x14007E7F4 (McTemplateK0quuuqqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidAdapterPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // r14
  int v10; // eax
  __int64 *i; // rdi
  int v12; // r8d
  __int64 v13; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-38h] BYREF

  v7 = a2;
  if ( (qword_140172448 & 0x100) != 0 )
    RaidLogPower(
      a1,
      53,
      a2,
      *(_DWORD *)(a1 + 5040),
      (a4 != 0 ? 3LL : 1LL) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 111) >> 1) & 4,
      *(unsigned int *)(a1 + 6092));
  v8 = -1;
  if ( a2 == -1 )
    v9 = -1LL;
  else
    v9 = 10000 * v7;
  if ( (*(_BYTE *)(a1 + 110) & 0x40) != 0 )
  {
    if ( a4 )
    {
      result = PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 5024), v9);
      v8 = a2;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 168);
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( *(_DWORD *)(a1 + 6092) == v10 && (*(_BYTE *)(a1 + 111) & 8) != 0 )
        v8 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      if ( *(_DWORD *)(a1 + 160) )
      {
        for ( i = *(__int64 **)(a1 + 144); i != (__int64 *)(a1 + 144); i = (__int64 *)*i )
        {
          if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 8)) )
          {
            if ( StorEtwLoggingEnabled )
            {
              if ( (byte_140173442 & 0x10) != 0 )
              {
                v13 = i[226];
                McTemplateK0quuuqqtt_EtwWriteTransfer(
                  (*(_DWORD *)(v13 + 32) >> 10) & 1,
                  *(_DWORD *)(v13 + 28),
                  v12,
                  *(_DWORD *)(*(i - 5) + 56),
                  *((_BYTE *)i + 40),
                  *((_BYTE *)i + 41),
                  *((_BYTE *)i + 42),
                  *(_DWORD *)(v13 + 28),
                  a2,
                  (*(_DWORD *)(v13 + 32) & 0x400) != 0,
                  (*(_DWORD *)(v13 + 32) & 0x800) != 0);
              }
            }
            *(_DWORD *)(i[226] + 28) = a2;
            PoFxSetDeviceIdleTimeout(*(_QWORD *)i[226], v9);
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[225]);
          }
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      result = PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 5024), 10000LL * v8);
      *(_DWORD *)(a1 + 6088) = a2;
    }
    *(_DWORD *)(a1 + 5040) = v8;
  }
  else
  {
    result = PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 5024), v9);
    *(_DWORD *)(a1 + 5040) = a2;
  }
  return result;
}
