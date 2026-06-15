/*
 * XREFs of ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@@std@@V_lambda_4042cd1935b59274f50ceca509455ce6_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@@0@V10@V10@V_lambda_4042cd1935b59274f50ceca509455ce6_@@@Z @ 0x18011A6E4
 * Callers:
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x18011A900 (-DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800502B0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

_QWORD *__fastcall std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry>>>,_lambda_4042cd1935b59274f50ceca509455ce6_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rdi
  bool v8; // zf
  __int64 j; // rsi
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 16LL )
  {
    if ( *(_QWORD *)i == **(_QWORD **)a4 )
    {
      **(_BYTE **)(a4 + 8) = 1;
      v8 = (*(_DWORD *)(i + 8))-- == 1;
      if ( v8 )
        break;
    }
  }
  if ( i != a3 )
  {
    for ( j = i + 16; j != a3; j += 16LL )
    {
      if ( *(_QWORD *)j == **(_QWORD **)a4 )
      {
        **(_BYTE **)(a4 + 8) = 1;
        v8 = (*(_DWORD *)(j + 8))-- == 1;
        if ( v8 )
          continue;
      }
      if ( *(_QWORD *)i != *(_QWORD *)j )
        ATL::AtlComPtrAssign((struct IUnknown **)i, *(struct IUnknown **)j);
      *(_DWORD *)(i + 8) = *(_DWORD *)(j + 8);
      i += 16LL;
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
