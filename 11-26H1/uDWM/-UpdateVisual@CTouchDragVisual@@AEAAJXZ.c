/*
 * XREFs of ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800CCA88
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800CCBC0 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180089BD0 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z.c)
 *     ?UpdateSprite@CTouchDragVisual@@AEAAJAEBUTrailPoint@1@K@Z @ 0x1800CC9B0 (-UpdateSprite@CTouchDragVisual@@AEAAJAEBUTrailPoint@1@K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTouchDragVisual::UpdateVisual(CTouchDragVisual *this)
{
  CBitmapSource *v2; // rbx
  int CompSurface; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  DWORD TickCount; // ebp
  __int64 v8; // rbx
  __int64 v9; // rsi
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionSurface *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 422) )
  {
    v12 = 0LL;
    v2 = (CBitmapSource *)*((_QWORD *)this + 50);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)&v12);
    CompSurface = CBitmapSource::GetCompSurface(v2, &v12);
    v4 = CompSurface;
    if ( CompSurface < 0 )
    {
      v5 = 217LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
        (const char *)(unsigned int)CompSurface);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v12);
      return v4;
    }
    CompSurface = (*(__int64 (__fastcall **)(_QWORD, struct Windows::UI::Composition::ICompositionSurface *))(**((_QWORD **)this + 51) + 104LL))(
                    *((_QWORD *)this + 51),
                    v12);
    v4 = CompSurface;
    if ( CompSurface < 0 )
    {
      v5 = 218LL;
      goto LABEL_6;
    }
    *((_BYTE *)this + 422) = 1;
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v12);
  }
  TickCount = GetTickCount();
  v8 = *((_QWORD *)this + 42);
  v9 = v8 + *((_QWORD *)this + 43);
  while ( v8 != v9 )
  {
    updated = CTouchDragVisual::UpdateSprite(
                (CTouchDragVisual *)(v8 & (*((_QWORD *)this + 41) - 1LL)),
                *(const struct CTouchDragVisual::TrailPoint **)(*((_QWORD *)this + 40)
                                                              + 8 * (v8 & (*((_QWORD *)this + 41) - 1LL))),
                TickCount);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE4,
        (int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
        (const char *)(unsigned int)updated);
    ++v8;
  }
  return 0LL;
}
