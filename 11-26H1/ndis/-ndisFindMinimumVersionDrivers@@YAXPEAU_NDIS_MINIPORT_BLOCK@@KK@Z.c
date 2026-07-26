/*
 * XREFs of ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x14016BDE0
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140157F60 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFindMinimumVersionDrivers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r10
  _NDIS_FILTER_BLOCK *LowestFilter; // r11
  unsigned int InterlockedFlags; // eax
  unsigned int v8; // ett
  unsigned __int8 MajorNdisVersion; // dl
  int v10; // esi
  char v11; // r8
  unsigned __int8 MinorNdisVersion; // r9
  unsigned __int8 v13; // r10
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  unsigned __int8 v15; // r9
  _NDIS_FILTER_DRIVER_BLOCK *v16; // rax
  unsigned __int8 v17; // dl
  _NDIS_OPEN_BLOCK *i; // r9
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  unsigned __int8 v20; // r11
  _NDIS_PROTOCOL_BLOCK *v21; // rax
  unsigned __int8 v22; // al

  DriverHandle = a1->DriverHandle;
  LowestFilter = a1->LowestFilter;
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v8 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v8 != InterlockedFlags );
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  v10 = InterlockedFlags & 0x400;
  v11 = 0;
  if ( MajorNdisVersion >= 6u )
  {
    a1->MinimumNdisMajorVersion = MajorNdisVersion;
    MinorNdisVersion = DriverHandle->MinorNdisVersion;
  }
  else
  {
    a1->MinimumNdisMajorVersion = 6;
    MajorNdisVersion = 6;
    MinorNdisVersion = 0;
  }
  a1->MinimumNdisMinorVersion = MinorNdisVersion;
  v13 = MajorNdisVersion;
  if ( a2 && (a2 < MajorNdisVersion || a2 == MajorNdisVersion && a3 < MinorNdisVersion) )
  {
    v13 = a2;
    a1->MinimumNdisMajorVersion = a2;
    a1->MinimumNdisMinorVersion = a3;
  }
  for ( ; LowestFilter; LowestFilter = LowestFilter->HigherFilter )
  {
    FilterDriver = LowestFilter->FilterDriver;
    v15 = FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion;
    if ( (v15 > 6u || v15 == 6 && FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion >= 0x59u)
      && (FilterDriver->DefaultFilterCharacteristics.Flags & 8) != 0 )
    {
      v11 = 1;
    }
    if ( v15 < v13 )
    {
      a1->MinimumNdisMajorVersion = v15;
      v13 = v15;
      a1->MinimumNdisMinorVersion = LowestFilter->FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion;
    }
    v16 = LowestFilter->FilterDriver;
    if ( v16->DefaultFilterCharacteristics.MajorNdisVersion == v13 )
    {
      v17 = v16->DefaultFilterCharacteristics.MinorNdisVersion;
      if ( v17 < a1->MinimumNdisMinorVersion )
        a1->MinimumNdisMinorVersion = v17;
    }
  }
  for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
  {
    ProtocolHandle = i->ProtocolHandle;
    v20 = ProtocolHandle->MajorNdisVersion;
    if ( (v20 > 6u || v20 == 6 && ProtocolHandle->MinorNdisVersion >= 0x59u) && (ProtocolHandle->Flags & 8) != 0 )
      v11 = 1;
    if ( v20 < v13 )
    {
      a1->MinimumNdisMajorVersion = v20;
      v13 = v20;
      a1->MinimumNdisMinorVersion = i->ProtocolHandle->MinorNdisVersion;
    }
    v21 = i->ProtocolHandle;
    if ( v21->MajorNdisVersion == v13 )
    {
      v22 = v21->MinorNdisVersion;
      if ( v22 < a1->MinimumNdisMinorVersion )
        a1->MinimumNdisMinorVersion = v22;
    }
  }
  if ( v11 )
  {
    if ( !v10 )
      _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x400u);
  }
  else if ( v10 )
  {
    _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, 0xFFFFFBFF);
  }
}
