/*
 * XREFs of ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18007962C
 * Callers:
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x180079040 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x180079110 (-AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18022DED0 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18007AFB8 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLegacySurfaceManager::ReleaseCaptureBitsResponse(CLegacySurfaceManager *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 26);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 220) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
      *((_BYTE *)this + 220) = 0;
    }
    CResponseItem::QueueResponse(*((CResponseItem **)this + 26));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 8LL))(*((_QWORD *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
    *((_DWORD *)this + 54) = 0;
    return 1;
  }
  return v2;
}
