/*
 * XREFs of sub_140029830 @ 0x140029830
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 *     sub_14001F5FC @ 0x14001F5FC (sub_14001F5FC.c)
 *     sub_140029070 @ 0x140029070 (sub_140029070.c)
 *     sub_140029150 @ 0x140029150 (sub_140029150.c)
 *     sub_1400292A8 @ 0x1400292A8 (sub_1400292A8.c)
 *     StorPortSetDeviceQueueDepth @ 0x140029490 (StorPortSetDeviceQueueDepth.c)
 *     sub_140029648 @ 0x140029648 (sub_140029648.c)
 *     sub_140029740 @ 0x140029740 (sub_140029740.c)
 *     StorPortSynchronizeAccess @ 0x140029780 (StorPortSynchronizeAccess.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_14005440C @ 0x14005440C (sub_14005440C.c)
 *     sub_14005A5C4 @ 0x14005A5C4 (sub_14005A5C4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140029830(__int64 a1, KIRQL a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  PKINTERRUPT *v5; // r14
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4369) )
  {
    v3 = *(_QWORD *)(a1 + 4352);
    if ( *(_DWORD *)(a1 + 4336) == 2 )
    {
      v4 = *(_DWORD *)(v3 + 4) - 1;
      if ( *(_DWORD *)(v3 + 4) != 1 )
      {
        v5 = (PKINTERRUPT *)(v3 + 48LL * v4 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v5, *(_BYTE *)v3);
          v5 -= 6;
          --v4;
        }
        while ( v4 );
      }
    }
    KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24), a2);
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 848);
    if ( v6 )
      KeReleaseInterruptSpinLock(v6, a2);
  }
}
