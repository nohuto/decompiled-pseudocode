/*
 * XREFs of ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x1800F13C4
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180059444 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??0Win32kInterop@@QEAA@XZ @ 0x1800F06CC (--0Win32kInterop@@QEAA@XZ.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800F210C (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::Create(
        struct IRawInputClient *a1,
        struct ISystemInputRouter *a2,
        struct Win32kInterop **a3)
{
  __int64 v6; // rdx
  Win32kInterop *v8; // rbx
  Win32kInterop *v9; // rax
  Win32kInterop *v10; // rbx
  int v11; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
  {
    v6 = 120LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a2 )
  {
    v6 = 121LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v6 = 122LL;
    goto LABEL_3;
  }
  v8 = Win32kInterop::s_pInterop;
  if ( !Win32kInterop::s_pInterop )
  {
    v9 = (Win32kInterop *)RefCountedObject::operator new(0x988uLL);
    v10 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, 0x988uLL);
      v8 = Win32kInterop::Win32kInterop(v10);
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x82,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)0x8007000ELL,
        v12);
    v11 = Win32kInterop::Initialize(v8, a1, a2);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x85,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v11,
        v12);
    Win32kInterop::s_pInterop = v8;
  }
  *a3 = v8;
  return 0LL;
}
