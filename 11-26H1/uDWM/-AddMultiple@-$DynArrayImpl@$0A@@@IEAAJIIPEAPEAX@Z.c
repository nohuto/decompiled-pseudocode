/*
 * XREFs of ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x180058614
 * Callers:
 *     ??$TryAppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x18005850C (--$TryAppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@Uta.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArrayImpl<0>::AddMultiple(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // ebx

  v6 = DynArrayImpl<0>::Grow(a1, a2, a3, a4, 0LL);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x11Au, 0LL);
  else
    *(_DWORD *)(a1 + 24) += a3;
  return v7;
}
