/*
 * XREFs of ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1801A3000
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180059444 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18001EF68 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180055204 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMInputRouter::Create(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  DWMInputRouter *v6; // rax
  DWMInputRouter *v7; // rbx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 || !a3 )
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    return v8;
  }
  v6 = (DWMInputRouter *)RefCountedObject::operator new(0x278uLL);
  if ( v6 )
    v7 = DWMInputRouter::DWMInputRouter(v6, a1, a2);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x8007000ELL);
    return v8;
  }
  v9 = DWMInputRouter::Initialize(v7);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *a3 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x291,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v9);
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v7 + 16LL))(v7);
    return v10;
  }
}
