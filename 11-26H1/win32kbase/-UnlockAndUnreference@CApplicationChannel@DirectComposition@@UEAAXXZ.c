/*
 * XREFs of ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1400E54A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1400E5718 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x14012B8DC (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::UnlockAndUnreference(
        DirectComposition::CApplicationChannel *this)
{
  struct DirectComposition::CrossChannelVisualData *v1; // rdi
  char v3; // al
  struct _ERESOURCE *v4; // rdi
  struct _ERESOURCE *v5; // rdi
  struct _ERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rdi
  struct _ERESOURCE *v8; // rdi

  v1 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 53);
  if ( v1 )
  {
    v3 = *((_BYTE *)this + 264);
    if ( (v3 & 4) == 0 )
    {
      *((_BYTE *)this + 264) = v3 | 4;
      do
      {
        *((_QWORD *)this + 53) = 0LL;
        DirectComposition::CChannel::Unlock(this);
        DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
          *((struct DirectComposition::CConnection **)this + 5),
          v1);
        v4 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v4, 1u);
        v1 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 53);
      }
      while ( v1 );
      *((_BYTE *)this + 264) &= ~4u;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 4));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
    {
      v5 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v5, 1u);
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
      v6 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 16LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v6, 1u);
      if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
        *((_DWORD *)this + 6) = 4;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
    {
      v7 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v7, 1u);
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 56LL))(this);
      v8 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 16LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v8, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
        *((_DWORD *)this + 6) = 1;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *((_DWORD *)this + 6) == 1 );
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 24LL))(this);
}
