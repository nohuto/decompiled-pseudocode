/*
 * XREFs of ??0CDWriteText@@AEAA@XZ @ 0x180089010
 * Callers:
 *     ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x180037D70 (-Create@CDWriteText@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x180027638 (--0CSpriteVisual@@QEAA@XZ.c)
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 */

CDWriteText *__fastcall CDWriteText::CDWriteText(CDWriteText *this)
{
  CSpriteVisual::CSpriteVisual(this);
  *((_QWORD *)this + 23) = &winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>::`vftable';
  CGraphicsResourceOwner::CGraphicsResourceOwner((CDWriteText *)((char *)this + 192));
  *(_QWORD *)this = &CDWriteText::`vftable'{for `CSpriteVisual'};
  *((_QWORD *)this + 23) = &CDWriteText::`vftable'{for `IText'};
  *((_QWORD *)this + 24) = &CDWriteText::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *(_OWORD *)((char *)this + 232) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 7LL;
  *((_WORD *)this + 116) = 0;
  *((_WORD *)this + 232) = 0;
  return this;
}
