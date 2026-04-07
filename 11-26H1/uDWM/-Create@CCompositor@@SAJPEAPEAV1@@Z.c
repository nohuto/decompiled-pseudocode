/*
 * XREFs of ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180058C04
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CCompositor@@IEAA@XZ @ 0x180058CE8 (--0CCompositor@@IEAA@XZ.c)
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x180058D2C (-Initialize@CCompositor@@IEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCompositor::Create(struct CCompositor **a1)
{
  CCompositor *v2; // rax
  CCompositor *v3; // rax
  struct CCompositor *v4; // rsi
  CCompositor *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = (CCompositor *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v3 = CCompositor::CCompositor(v2);
  v4 = v3;
  v5 = v3;
  if ( v3 )
  {
    v6 = CCompositor::Initialize(v3);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      v5 = 0LL;
      *a1 = v4;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x20u, 0LL);
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1Eu, 0LL);
  }
  if ( v5 )
    (*(void (__fastcall **)(CCompositor *))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
