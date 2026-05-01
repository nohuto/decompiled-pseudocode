/*
 * XREFs of ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180186CA0
 * Callers:
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805AA5E4 (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1805AA920 (-WindowSnapStateChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4WINDOW_.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SnapInteraction::InteractionTracker::FindRecord(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // r10
  __int64 *v6; // rax
  char v7; // al
  __int64 v8; // rax

  v3 = *(__int64 **)(a1 + 88);
  v4 = v3;
  v5 = (__int64 *)v3[1];
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      v6 = v5 + 2;
      if ( (unsigned __int64)v5[4] >= *a3 )
      {
        v6 = v5;
        v4 = v5;
      }
      v5 = (__int64 *)*v6;
    }
    while ( !*(_BYTE *)(*v6 + 25) );
  }
  if ( *((_BYTE *)v4 + 25) || *a3 < (unsigned __int64)v4[4] )
  {
    v4 = v3;
  }
  else if ( v4 != v3 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 0;
LABEL_11:
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v7 )
  {
    v8 = v4[6];
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    *a2 = v4[5];
    a2[1] = v4[6];
  }
  return a2;
}
