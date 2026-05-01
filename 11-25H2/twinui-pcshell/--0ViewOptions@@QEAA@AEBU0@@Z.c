/*
 * XREFs of ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x1800A7428
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800A7510 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1801E4BB0 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 *     _lambda_6609ff0ab640c01183d8a2076431907a_::_lambda_6609ff0ab640c01183d8a2076431907a_ @ 0x180291474 (_lambda_6609ff0ab640c01183d8a2076431907a_--_lambda_6609ff0ab640c01183d8a2076431907a_.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18046D950 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Buy_raw@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1802C3180 (-_Buy_raw@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@.c)
 *     ??1?$_Tidy_guard@V?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@@std@@QEAA@XZ @ 0x18045C5A0 (--1-$_Tidy_guard@V-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

ViewOptions *__fastcall ViewOptions::ViewOptions(ViewOptions *this, const struct ViewOptions *a2)
{
  ViewOptions *v2; // r14
  unsigned __int64 v5; // rdx
  const void *v7; // rdx
  char *v8; // rdi
  size_t v9; // rbx
  ViewOptions *v10; // [rsp+30h] [rbp+8h] BYREF

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
    v7 = (const void *)*((_QWORD *)a2 + 4);
    v8 = *(char **)v2;
    v9 = *((_QWORD *)a2 + 5) - (_QWORD)v7;
    memmove_0(*(void **)v2, v7, v9);
    v10 = 0LL;
    *((_QWORD *)v2 + 1) = &v8[v9 & 0xFFFFFFFFFFFFFFF0uLL];
    std::_Tidy_guard<std::vector<Windows::Foundation::Rect>>::~_Tidy_guard<std::vector<Windows::Foundation::Rect>>(&v10);
  }
  return this;
}
