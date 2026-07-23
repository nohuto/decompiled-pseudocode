/*
 * XREFs of KiDisconnectSecondaryInterruptInternal @ 0x1404302F8
 * Callers:
 *     KiInterruptDispatchCommon @ 0x14030DED8 (KiInterruptDispatchCommon.c)
 *     KiProcessPendingDisconnect @ 0x14030E9FC (KiProcessPendingDisconnect.c)
 *     KiDisconnectInterruptCommon @ 0x140430EB4 (KiDisconnectInterruptCommon.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiDisconnectSecondaryInterruptInternal(__int64 a1)
{
  __int64 result; // rax
  _ULARGE_INTEGER DueTime; // r8
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r10
  _QWORD *v6; // r9
  bool v7; // cf

  result = 3221225711LL;
  if ( *(_BYTE *)(a1 + 95) )
  {
    DueTime = KiDpcCorralLock.Timer.DueTime;
    v3 = 6LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
    v4 = *(_QWORD *)(KiDpcCorralLock.Timer.DueTime.QuadPart + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256) + 40);
    if ( v4 == a1 )
    {
      if ( *(_QWORD *)(v4 + 8) == v4 + 8 )
        *(_QWORD *)(KiDpcCorralLock.Timer.DueTime.QuadPart + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256) + 40) = 0LL;
      else
        *(_QWORD *)(KiDpcCorralLock.Timer.DueTime.QuadPart + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256) + 40) = *(_QWORD *)(a1 + 8) - 8LL;
    }
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v5 + 8) != a1 + 8 || (v6 = *(_QWORD **)(a1 + 16), *v6 != a1 + 8) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v7 = *(_QWORD *)(DueTime.QuadPart + 8 * v3 + 40) != 0LL;
    *(_BYTE *)(a1 + 95) = 0;
    return v7 ? 0x128 : 0;
  }
  return result;
}
