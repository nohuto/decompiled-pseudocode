/*
 * XREFs of sub_14001E1F0 @ 0x14001E1F0
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14001B960 @ 0x14001B960 (sub_14001B960.c)
 *     sub_14001C020 @ 0x14001C020 (sub_14001C020.c)
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 *     sub_14001DAE0 @ 0x14001DAE0 (sub_14001DAE0.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_14001F5FC @ 0x14001F5FC (sub_14001F5FC.c)
 *     sub_140029070 @ 0x140029070 (sub_140029070.c)
 *     sub_140029150 @ 0x140029150 (sub_140029150.c)
 *     sub_1400292A8 @ 0x1400292A8 (sub_1400292A8.c)
 *     StorPortSetDeviceQueueDepth @ 0x140029490 (StorPortSetDeviceQueueDepth.c)
 *     sub_140029648 @ 0x140029648 (sub_140029648.c)
 *     StorPortSynchronizeAccess @ 0x140029780 (StorPortSynchronizeAccess.c)
 *     sub_14002B350 @ 0x14002B350 (sub_14002B350.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_14005440C @ 0x14005440C (sub_14005440C.c)
 *     sub_14005A5C4 @ 0x14005A5C4 (sub_14005A5C4.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall sub_14001E1F0(__int64 a1)
{
  __int64 v2; // rdi
  KIRQL result; // al
  KIRQL v4; // si
  unsigned int v5; // ebx
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4369) )
  {
    v2 = *(_QWORD *)(a1 + 4352);
    result = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v2 + 24));
    v4 = result;
    if ( *(_DWORD *)(a1 + 4336) == 2 )
    {
      v5 = 1;
      if ( *(_DWORD *)(v2 + 4) > 1u )
      {
        do
          KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v2 + 48LL * v5++ + 24));
        while ( v5 < *(_DWORD *)(v2 + 4) );
        return v4;
      }
    }
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 848);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
    else
      return 0;
  }
  return result;
}
