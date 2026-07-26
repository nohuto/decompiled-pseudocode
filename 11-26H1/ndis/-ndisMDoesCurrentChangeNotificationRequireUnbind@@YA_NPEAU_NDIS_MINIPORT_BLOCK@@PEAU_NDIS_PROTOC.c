/*
 * XREFs of ?ndisMDoesCurrentChangeNotificationRequireUnbind@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140162660
 * Callers:
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140137EA0 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMDoesCurrentChangeNotificationRequireUnbind(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2)
{
  unsigned int InterlockedFlags; // eax
  unsigned int v3; // ett
  unsigned int v4; // eax
  unsigned int v5; // ett

  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v3 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v3 != InterlockedFlags );
  if ( (InterlockedFlags & 0x20) != 0 && (a2->Flags & 2) == 0 )
    return 1;
  _m_prefetchw(&a1->InterlockedFlags);
  v4 = a1->InterlockedFlags;
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)&a1->InterlockedFlags, v4, v4);
  }
  while ( v5 != v4 );
  return (v4 & 0x40) != 0 && (a2->Flags & 4) == 0;
}
