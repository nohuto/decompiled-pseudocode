/*
 * XREFs of ??1CBackdropVisualImage@@UEAA@XZ @ 0x1801AF2EC
 * Callers:
 *     ??_GCBackdropVisualImage@@UEAAPEAXI@Z @ 0x1801AF2A0 (--_GCBackdropVisualImage@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?empty@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x1800186A0 (-empty@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QE.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x18008FFE0 (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800900E0 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??1?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801AF40C (--1-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CBackdropVisualImage::~CBackdropVisualImage(CBackdropVisualImage *this)
{
  char *v2; // rsi
  const char *v3; // r9
  void **v4; // rbx
  void **v5; // rax
  __int64 *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v8; // [rsp+30h] [rbp+8h] BYREF
  char *v9; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CBackdropVisualImage::`vftable'{for `CResource'};
  v2 = (char *)this + 1704;
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapResource'};
  *((_QWORD *)this + 10) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  if ( !detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::empty((_QWORD *)this + 213) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\BackdropVisualImage.h",
      v3);
  v4 = (void **)DwmDbg::DbgString::DbgString(&v8, word_1802F327A);
  v5 = (void **)DwmDbg::DbgString::DbgString(&v9, "BVI-Destroy");
  CBackdropVisualImage::LogEtwEvent((__int64)this, v5, v4);
  v6 = (__int64 *)*((_QWORD *)this + 219);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v6, *((__int64 **)this + 220));
    std::_Deallocate<16>(
      *((void **)this + 219),
      (*((_QWORD *)this + 221) - *((_QWORD *)this + 219)) & 0xFFFFFFFFFFFFFFC0uLL);
    *((_QWORD *)this + 219) = 0LL;
    *((_QWORD *)this + 220) = 0LL;
    *((_QWORD *)this + 221) = 0LL;
  }
  detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::~vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>(v2);
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64 *)this + 202);
  CCachedVisualImage::~CCachedVisualImage(this);
}
