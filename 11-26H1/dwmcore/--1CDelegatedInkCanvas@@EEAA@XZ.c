/*
 * XREFs of ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x18026C57C
 * Callers:
 *     ??_GCDelegatedInkCanvas@@EEAAPEAXI@Z @ 0x18026C650 (--_GCDelegatedInkCanvas@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180050318 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x1801D66A8 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x18020B5F8 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z @ 0x18022835C (-GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDelegatedInkCanvas::~CDelegatedInkCanvas(CDelegatedInkCanvas *this)
{
  int InkCanvasInputHost; // eax
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInkCanvasInputHost *v6; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDelegatedInkCanvas::`vftable';
  CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL), this);
  if ( *((_QWORD *)this + 21) != *((_QWORD *)this + 22) )
  {
    v6 = 0LL;
    InkCanvasInputHost = CMit::GetInkCanvasInputHost(&v6);
    if ( InkCanvasInputHost < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
        (const char *)(unsigned int)InkCanvasInputHost,
        v4);
    v3 = (*(__int64 (__fastcall **)(struct IInkCanvasInputHost *, _QWORD))(*(_QWORD *)v6 + 32LL))(
           v6,
           *((_QWORD *)this + 21));
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1D,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
        (const char *)(unsigned int)v3,
        v4);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v6);
  }
  std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>((void **)this + 24);
  std::vector<unsigned char>::_Tidy((__int64)this + 168);
  CSuperWetSource::~CSuperWetSource(this);
}
