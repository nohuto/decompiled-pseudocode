/*
 * XREFs of ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180055040
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180059444 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18001ED5C (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x180055110 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WaitForDebuggerIfRegistryKeyIsSet @ 0x180097344 (WaitForDebuggerIfRegistryKeyIsSet.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AABCC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::Create(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  MPCInputRouter *v6; // rax
  const char *v7; // r9
  MPCInputRouter *v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  WaitForDebuggerIfRegistryKeyIsSet();
  if ( !a1 || !a3 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x73,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)0x80070057LL,
      v11);
  v6 = (MPCInputRouter *)RefCountedObject::operator new(0x348uLL);
  if ( v6 )
    v8 = MPCInputRouter::MPCInputRouter(v6, a1, a2);
  else
    v8 = 0LL;
  if ( !v8 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x7B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      v7);
  v9 = MPCInputRouter::Initialize(v8);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v9,
      v11);
  *a3 = v8;
  return 0LL;
}
