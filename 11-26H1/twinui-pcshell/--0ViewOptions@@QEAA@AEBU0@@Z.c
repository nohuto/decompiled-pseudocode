/*
 * XREFs of ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x180026E24
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800278A0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1801D9C30 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 *     _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::_lambda_5c8612707d1ce1f8a03bb177e1540ce1_ @ 0x180288FFC (_lambda_5c8612707d1ce1f8a03bb177e1540ce1_--_lambda_5c8612707d1ce1f8a03bb177e1540ce1_.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18047BB10 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Buy_raw@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1802856B0 (-_Buy_raw@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@.c)
 *     ??1?$_Tidy_guard@V?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@@std@@QEAA@XZ @ 0x18046893C (--1-$_Tidy_guard@V-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std.c)
 */

ViewOptions *__fastcall ViewOptions::ViewOptions(ViewOptions *this, const struct ViewOptions *a2)
{
  ViewOptions *v2; // r15
  unsigned __int64 v5; // rdx
  void *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  ViewOptions *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = this;
  v2 = this + 8;
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)a2 + 3);
  this[1] = *((ViewOptions *)a2 + 1);
  this[2] = *((ViewOptions *)a2 + 2);
  this[3] = *((ViewOptions *)a2 + 3);
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v5 = (__int64)(*((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4)) >> 4;
  if ( v5 )
  {
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    std::vector<Windows::Foundation::Rect>::_Buy_raw(this + 8);
    v7 = (void *)*((_QWORD *)a2 + 4);
    v8 = *((_QWORD *)a2 + 5);
    v9 = *(_QWORD *)v2;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(v7);
    v10 = 0LL;
    *((_QWORD *)v2 + 1) = v9 + ((v8 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF0uLL);
    std::_Tidy_guard<std::vector<Windows::Foundation::Rect>>::~_Tidy_guard<std::vector<Windows::Foundation::Rect>>(&v10);
  }
  return this;
}
