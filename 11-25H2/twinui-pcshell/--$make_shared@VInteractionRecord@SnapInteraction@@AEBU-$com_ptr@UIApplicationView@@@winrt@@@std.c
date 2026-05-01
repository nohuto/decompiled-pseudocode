/*
 * XREFs of ??$make_shared@VInteractionRecord@SnapInteraction@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@std@@YA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@0@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1801C5E60
 * Callers:
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180586688 (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<SnapInteraction::InteractionRecord,winrt::com_ptr<IApplicationView> const &>(
        _QWORD *a1,
        _QWORD *a2)
{
  char *v4; // rsi
  _QWORD *result; // rax

  v4 = (char *)operator new(0x40uLL);
  *(_OWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<SnapInteraction::InteractionRecord>::`vftable';
  *((_QWORD *)v4 + 2) = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v4 + 2);
  *((_WORD *)v4 + 12) = 0;
  v4[40] = 0;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_QWORD *)v4 + 7) = 0LL;
  result = a1;
  *a1 = v4 + 16;
  a1[1] = v4;
  return result;
}
