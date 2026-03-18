/*
 * XREFs of ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18014C630
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x1800AD3DC (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x18014C700 (-ShouldNotify@CAnimation@@AEBA_NXZ.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18014C720 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimation::DetachFromChannel(CAnimation *this, struct CChannelContext *a2, bool a3)
{
  char *v3; // rsi
  _DWORD *v7; // rdi

  v3 = (char *)this + 72;
  if ( (struct CChannelContext *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 9) + 16LL))((char *)this + 72) == a2 )
  {
    v7 = (_DWORD *)((char *)this + 284);
    if ( CAnimation::ShouldNotify(this) )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 88LL))(
        *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
        *((unsigned int *)this + 72),
        (unsigned int)*v7);
    *v7 = 0;
  }
  CResource::DetachFromChannel(this, a2, a3);
  if ( !(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3) )
  {
    if ( *((_BYTE *)this + 299) )
      ReleaseInterface<CPolygon>((__int64 *)this + 16);
  }
}
