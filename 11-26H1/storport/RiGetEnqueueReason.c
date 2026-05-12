/*
 * XREFs of RiGetEnqueueReason @ 0x140023E10
 * Callers:
 *     RiNormalizeDeviceQueue @ 0x140022EC0 (RiNormalizeDeviceQueue.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RiPeekDeviceQueue @ 0x140023F80 (RiPeekDeviceQueue.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x14005AAB0 (RaUnitCheckForwardIoOutstanding.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RiGetEnqueueReason(__int64 a1, __int64 a2)
{
  char v5; // cl
  __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // rsi
  KIRQL v9; // bp
  __int64 v10; // r8
  __int16 v11; // cx
  _DWORD *v12; // rax
  _DWORD v13[3]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+3Ch] [rbp-4Ch]
  __int128 v15; // [rsp+4Ch] [rbp-3Ch]
  __int64 v16; // [rsp+5Ch] [rbp-2Ch]
  int v17; // [rsp+64h] [rbp-24h]

  if ( *(_DWORD *)(a1 + 28) || ((*(__int64 *)(a1 + 88) >> 2) & 0x3FFFFFFF) >= *(_DWORD *)(a1 + 4) )
    return 1LL;
  if ( *(_BYTE *)(a1 + 37) && (*(_BYTE *)(a2 + 22) & 4) == 0 )
    return 2LL;
  if ( *(_BYTE *)(a1 + 36) && (*(_BYTE *)(a2 + 22) & 2) == 0 )
    return 3LL;
  if ( *(int *)(a1 + 24) > 0 )
    return 4LL;
  if ( *(_BYTE *)(a1 + 38) )
    return 5LL;
  if ( *(_DWORD *)(a1 + 16) || (unsigned int)(*(_QWORD *)(a1 + 88) / 0x100000000LL) )
  {
    v7 = RiPeekDeviceQueue(a1);
    if ( a2 != v7 && (*(_BYTE *)(v7 + 22) & 1) != 0 && (*(_BYTE *)(a2 + 22) & 6) == 0 )
      return 6LL;
  }
  v5 = *(_BYTE *)(a2 + 22);
  if ( (v5 & 1) != 0 && (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF) != 0 )
    return 7LL;
  if ( *(_BYTE *)(a1 + 39) && (v5 & 8) == 0 )
    return 8LL;
  if ( (v5 & 0x10) != 0 )
    return 9LL;
  if ( (v5 & 0x40) != 0 )
    return 10LL;
  if ( (v5 & 1) == 0 )
    return 0LL;
  v6 = a1 - 720;
  if ( !*(_QWORD *)(v6 + 32) )
    return 0LL;
  v8 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( RaidIsUnitControlSupported(v6, 31) )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v6 + 32) + 24LL));
    *(_DWORD *)(*(_QWORD *)(v6 + 32) + 80LL) |= 0x100u;
    v10 = *(_QWORD *)(v6 + 32);
    if ( (*(_DWORD *)(v10 + 80) & 0x201) == 1 )
    {
      *(_DWORD *)(v10 + 80) |= 0x200u;
      KeSetCoalescableTimer(
        (PKTIMER)(*(_QWORD *)(v6 + 32) + 88LL),
        (LARGE_INTEGER)-20000000LL,
        0,
        0x12Cu,
        (PKDPC)(*(_QWORD *)(v6 + 32) + 152LL));
    }
    v13[0] = 56;
    v13[1] = 56;
    v13[2] = 2;
    if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline() )
    {
      LODWORD(v16) = 4;
      WORD6(v15) = 1;
      v11 = *(_WORD *)(*(_QWORD *)(v6 + 24) + 56LL);
      WORD2(v16) = *(_WORD *)(v6 + 104);
      BYTE6(v16) = *(_BYTE *)(v6 + 106);
      HIWORD(v15) = v11;
    }
    v12 = *(_DWORD **)(v6 + 24);
    if ( *v12 == 1094997074 )
    {
      v8 = v12 + 94;
    }
    else if ( *v12 == 1314275652 )
    {
      v8 = v12 + 42;
    }
    RaCallMiniportUnitControl(v8, 31LL, v13);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v6 + 32) + 24LL), v9);
  }
  *(_BYTE *)(a2 + 20) |= 4u;
  return (unsigned __int8)RaUnitCheckForwardIoOutstanding(v6) != 0 ? 7 : 0;
}
