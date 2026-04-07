/*
 * XREFs of ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180068A74
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CCompositor@@IEAA@XZ @ 0x180068B4C (--0CCompositor@@IEAA@XZ.c)
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x180068B90 (-Initialize@CCompositor@@IEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCompositor::Create(struct CCompositor **a1)
{
  CCompositor *v2; // rax
  CCompositor *v3; // rdi
  CCompositor *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi

  *a1 = 0LL;
  v2 = (CCompositor *)DefaultHeap::AllocClear(0x30uLL);
  if ( v2 )
    v3 = CCompositor::CCompositor(v2);
  else
    v3 = 0LL;
  v4 = v3;
  if ( v3 )
  {
    v5 = CCompositor::Initialize(v3);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      v4 = 0LL;
      *a1 = v3;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x20u, 0LL);
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1Eu, 0LL);
  }
  if ( v4 )
    (*(void (__fastcall **)(CCompositor *))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
