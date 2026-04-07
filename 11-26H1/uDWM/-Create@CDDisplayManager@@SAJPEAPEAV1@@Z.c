/*
 * XREFs of ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x180074B28
 * Callers:
 *     ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x180074B04 (-EnsureDDisplayManager@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 *     ?Initialize@CDDisplayManager@@AEAAJXZ @ 0x180062808 (-Initialize@CDDisplayManager@@AEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDDisplayManager::Create(struct CDDisplayManager **a1)
{
  CBaseObject *v2; // rax
  CBaseObject *v3; // rdi
  CBaseObject *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CBaseObject *)DefaultHeap::AllocClear(0x18uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  CBaseObject::CBaseObject(v2);
  *(_QWORD *)v3 = &CDDisplayManager::`vftable';
  *((_QWORD *)v3 + 2) = 0LL;
  v4 = v3;
  v5 = CDDisplayManager::Initialize(v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x10u, 0LL);
  }
  else
  {
    v4 = 0LL;
    *a1 = v3;
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return v6;
}
