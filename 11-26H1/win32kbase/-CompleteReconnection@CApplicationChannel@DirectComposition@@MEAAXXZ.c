/*
 * XREFs of ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x14022AAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400B4CB8 (-OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x14012B8DC (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?EnumerateObjects@CInternalResourceTable@DirectComposition@@QEAAPEAVCResourceMarshaler@2@PEA_K@Z @ 0x14013C82C (-EnumerateObjects@CInternalResourceTable@DirectComposition@@QEAAPEAVCResourceMarshaler@2@PEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteReconnection(
        DirectComposition::CApplicationChannel *this)
{
  DirectComposition::CInternalResourceTable *i; // rcx
  unsigned int v3; // r8d
  __int64 v4; // rcx
  _QWORD *j; // rcx
  struct DirectComposition::CResourceMarshaler *v6; // rax
  struct DirectComposition::CResourceMarshaler *v7; // rdi
  char v8; // di
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( *((_BYTE *)this + 60) )
    *((_DWORD *)this + 14) |= 1u;
  if ( *((_BYTE *)this + 61) )
    *((_DWORD *)this + 14) |= 2u;
  if ( *((_BYTE *)this + 62) )
    *((_DWORD *)this + 14) |= 4u;
  for ( i = (DirectComposition::CApplicationChannel *)((char *)this + 120);
        ;
        i = (DirectComposition::CApplicationChannel *)((char *)this + 120) )
  {
    v6 = DirectComposition::CInternalResourceTable::EnumerateObjects(i, &v10);
    v7 = v6;
    if ( !v6 )
      break;
    if ( DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v6 + 9), 133) )
      v4 = 448LL;
    else
      v4 = DirectComposition::CResourceMarshaler::IsDerivedResourceType(v3, 23) != 0 ? 464LL : 432LL;
    *((_QWORD *)v7 + 1) = *(_QWORD *)((char *)this + v4);
    *(_QWORD *)((char *)this + v4) = v7;
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v7 + 72LL))(v7) )
      *((_DWORD *)v7 + 4) |= 2u;
    for ( j = (_QWORD *)*((_QWORD *)v7 + 5); j; j = (_QWORD *)j[4] )
    {
      *j = *((_QWORD *)this + 62);
      *((_QWORD *)this + 62) = j;
    }
  }
  if ( *((_QWORD *)this + 337) )
    *((_BYTE *)this + 265) |= 1u;
  if ( *((_QWORD *)this + 338) )
    *((_BYTE *)this + 265) |= 2u;
  if ( *((_QWORD *)this + 340) )
    *((_BYTE *)this + 264) |= 0x80u;
  DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
  {
    DirectComposition::CApplicationChannel::OpenChannel((struct _EPROCESS ***)this);
    v8 = 1;
  }
  else
  {
    *((_DWORD *)this + 6) = 3;
    v8 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    if ( (*((_BYTE *)this + 264) & 1) == 0 )
    {
      v9 = *((_QWORD *)this + 22);
      if ( !v9 || !*(_QWORD *)(v9 + 40) )
        DirectComposition::CApplicationChannel::Commit(this, 0LL, 0, 0, 0LL, 0LL, 0LL, 0);
    }
  }
}
