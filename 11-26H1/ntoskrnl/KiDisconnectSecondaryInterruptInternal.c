/*
 * XREFs of KiDisconnectSecondaryInterruptInternal @ 0x140423208
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1402C3218 (KiInterruptDispatchCommon.c)
 *     KiProcessPendingDisconnect @ 0x1402C3D3C (KiProcessPendingDisconnect.c)
 *     KiDisconnectInterruptCommon @ 0x140423DC4 (KiDisconnectInterruptCommon.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiDisconnectSecondaryInterruptInternal(__int64 a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v3; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v5; // r10
  _QWORD *v6; // r9
  bool v7; // cf

  result = 3221225711LL;
  if ( *(_BYTE *)(a1 + 95) )
  {
    Flink = KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink;
    v3 = 3LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
    Blink = KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[3 * (unsigned int)(*(_DWORD *)(a1 + 88) - 256) + 2].Blink;
    if ( Blink == (struct _LIST_ENTRY *)a1 )
    {
      if ( Blink->Blink == (struct _LIST_ENTRY *)&Blink->Blink )
        KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[3 * (unsigned int)(*(_DWORD *)(a1 + 88) - 256) + 2].Blink = 0LL;
      else
        KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[3 * (unsigned int)(*(_DWORD *)(a1 + 88) - 256) + 2].Blink = (struct _LIST_ENTRY *)(*(_QWORD *)(a1 + 8) - 8LL);
    }
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v5 + 8) != a1 + 8 || (v6 = *(_QWORD **)(a1 + 16), *v6 != a1 + 8) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v7 = Flink[v3 + 2].Blink != 0LL;
    *(_BYTE *)(a1 + 95) = 0;
    return v7 ? 0x128 : 0;
  }
  return result;
}
