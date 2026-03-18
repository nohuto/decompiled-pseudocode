/*
 * XREFs of ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1401D1884
 * Callers:
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisRgnTrackerProp::MarkDirty(CVisRgnTrackerProp *this, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int128 v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( !*((_BYTE *)this + 73) )
  {
    v2 = (unsigned __int64)this + 24;
    *((_BYTE *)this + 73) = 1;
    v3 = -(__int128)(unsigned __int64)this;
    v4 = (_QWORD *)(v2 & *((_QWORD *)&v3 + 1));
    v5 = W32GetUserSessionState(v3, a2) + 19704;
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
      __fastfail(3u);
    *v4 = v6;
    v4[1] = v5;
    *(_QWORD *)(v6 + 8) = v4;
    *(_QWORD *)v5 = v4;
  }
}
