/*
 * XREFs of ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18005780C
 * Callers:
 *     ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x1800573C8 (-InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x1800578F4 (--0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z.c)
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x18005795C (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDWMDXGIAdapter::Create(struct IDXGIAdapter *a1, unsigned int a2, struct CDWMDXGIAdapter **a3)
{
  CDWMDXGIAdapter *v6; // rax
  CDWMDXGIAdapter *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v6 = (CDWMDXGIAdapter *)operator new(0x180uLL);
  if ( v6 )
    v7 = CDWMDXGIAdapter::CDWMDXGIAdapter(v6, a2, a1);
  else
    v7 = 0LL;
  if ( v7 )
  {
    (**(void (__fastcall ***)(CDWMDXGIAdapter *))v7)(v7);
    v8 = CDWMDXGIAdapter::Initialize(v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x58u, 0LL);
    }
    else
    {
      *a3 = v7;
      (**(void (__fastcall ***)(CDWMDXGIAdapter *))v7)(v7);
    }
    (*(void (__fastcall **)(CDWMDXGIAdapter *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x54u, 0LL);
  }
  return v9;
}
