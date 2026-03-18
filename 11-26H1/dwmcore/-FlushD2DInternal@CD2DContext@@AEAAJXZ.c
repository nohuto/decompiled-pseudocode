/*
 * XREFs of ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x18010263C
 * Callers:
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A6F0 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x1801025E0 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::FlushD2DInternal(CD2DContext *this)
{
  unsigned int v1; // edi
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 429) && *((_BYTE *)this + 430) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 25) + 336LL))(
           *((_QWORD *)this + 25),
           0LL,
           0LL);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x601u, 0LL);
    *((_BYTE *)this + 430) = 0;
  }
  return v1;
}
