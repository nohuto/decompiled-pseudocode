/*
 * XREFs of ??0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x1800578F4
 * Callers:
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18005780C (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CDWMDXGIAdapter *__fastcall CDWMDXGIAdapter::CDWMDXGIAdapter(CDWMDXGIAdapter *this, int a2, struct IDXGIAdapter *a3)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CDWMDXGIAdapter::`vftable';
  *((_DWORD *)this + 4) = a2;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = 0LL;
  ((void (__fastcall *)(struct IDXGIAdapter *))a3->lpVtbl->AddRef)(a3);
  return this;
}
