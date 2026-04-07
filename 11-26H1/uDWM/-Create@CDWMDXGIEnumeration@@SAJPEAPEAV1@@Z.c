/*
 * XREFs of ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x180057018
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056DE8 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDWMDXGIEnumeration@@AEAA@XZ @ 0x180057120 (--0CDWMDXGIEnumeration@@AEAA@XZ.c)
 *     ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x1800573C8 (-InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::Create(struct CDWMDXGIEnumeration **a1)
{
  CDWMDXGIEnumeration *v2; // rax
  CDWMDXGIEnumeration *v3; // rax
  CDWMDXGIEnumeration *v4; // rbx
  int inited; // edi
  unsigned int v7; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CDWMDXGIEnumeration *)DefaultHeap::AllocClear(0x58uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v3 = CDWMDXGIEnumeration::CDWMDXGIEnumeration(v2);
  v4 = v3;
  if ( v3 )
  {
    (**(void (__fastcall ***)(CDWMDXGIEnumeration *))v3)(v3);
    inited = CDWMDXGIEnumeration::InitDXGI(v4);
    if ( inited >= 0 )
    {
      *a1 = v4;
      return (unsigned int)inited;
    }
    v7 = 59;
  }
  else
  {
    inited = -2147024882;
    v7 = 55;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F6008, 1LL, inited, v7, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(CDWMDXGIEnumeration *))(*(_QWORD *)v4 + 8LL))(v4);
  return (unsigned int)inited;
}
