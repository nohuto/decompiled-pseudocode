/*
 * XREFs of sub_14000A3E4 @ 0x14000A3E4
 * Callers:
 *     sub_140009D88 @ 0x140009D88 (sub_140009D88.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_1400750D4 @ 0x1400750D4 (sub_1400750D4.c)
 * Callees:
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140065DF0 @ 0x140065DF0 (sub_140065DF0.c)
 *     sub_140076D88 @ 0x140076D88 (sub_140076D88.c)
 */

__int64 __fastcall sub_14000A3E4(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v8; // r15
  __int64 *i; // r14
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-38h] BYREF

  v4 = 0;
  v5 = a2;
  if ( byte_1401688BD && (qword_140168458 & 0x100) != 0 )
    sub_140065DF0(
      a1,
      53,
      a2,
      *(_DWORD *)(a1 + 4976),
      (a4 != 0 ? 3LL : 1LL) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 111) >> 1) & 4,
      *(unsigned int *)(a1 + 6028));
  if ( (_DWORD)v5 == -1 )
    v8 = -1LL;
  else
    v8 = 10000 * v5;
  if ( (*(_BYTE *)(a1 + 110) & 0x40) == 0 || a4 )
  {
    result = PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 4960), v8);
    *(_DWORD *)(a1 + 4976) = v5;
  }
  else
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( byte_1401688BD && (*(_DWORD *)(a1 + 6028) != *(_DWORD *)(a1 + 168) || (*(_BYTE *)(a1 + 111) & 8) == 0) )
      v4 = -1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    if ( *(_DWORD *)(a1 + 160) )
    {
      for ( i = *(__int64 **)(a1 + 144); i != (__int64 *)(a1 + 144); i = (__int64 *)*i )
      {
        if ( (unsigned __int8)sub_140021280(i - 8) )
        {
          if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
          {
            v11 = i[226];
            sub_140076D88(
              (*(_DWORD *)(v11 + 32) >> 10) & 1,
              *(_DWORD *)(v11 + 28),
              v10,
              *(_DWORD *)(*(i - 5) + 56),
              *((_BYTE *)i + 40),
              *((_BYTE *)i + 41),
              *((_BYTE *)i + 42),
              *(_DWORD *)(v11 + 28),
              v5,
              (*(_DWORD *)(v11 + 32) & 0x400) != 0,
              (*(_DWORD *)(v11 + 32) & 0x800) != 0);
          }
          *(_DWORD *)(i[226] + 28) = v5;
          PoFxSetDeviceIdleTimeout(*(_QWORD *)i[226], v8);
          ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[225]);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v12 = **(_QWORD **)(a1 + 4960);
    if ( byte_1401688BD )
    {
      result = PoFxSetDeviceIdleTimeout(v12, 10000LL * v4);
    }
    else
    {
      result = PoFxSetDeviceIdleTimeout(v12, -1LL);
      v4 = -1;
    }
    *(_DWORD *)(a1 + 4976) = v4;
    *(_DWORD *)(a1 + 6024) = v5;
  }
  return result;
}
