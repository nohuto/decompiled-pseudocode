/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180044AC8
 * Callers:
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800D2654 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180046224 (--$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 *v8; // r15
  __int64 v9; // r14
  __int64 *i; // rdi
  _QWORD *result; // rax

  if ( a3 != a4 )
  {
    v7 = std::_Move_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(a4, *(_QWORD *)(a1 + 8));
    v8 = *(__int64 **)(a1 + 8);
    v9 = v7;
    for ( i = (__int64 *)v7; i != v8; ++i )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(i);
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
