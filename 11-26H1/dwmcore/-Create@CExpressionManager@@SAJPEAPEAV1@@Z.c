/*
 * XREFs of ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1801A0B70
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1801A0C3C (--0CExpressionManager@@AEAA@XZ.c)
 *     ?PreInitClass@Time@@SAJXZ @ 0x1801A0E78 (-PreInitClass@Time@@SAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  unsigned int v2; // ebx
  CExpressionManager *v3; // rax
  CExpressionManager *v4; // rdi
  CExpressionManager *v5; // rax
  struct CExpressionManager *v6; // rdi
  bool v7; // zf
  int inited; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CExpressionManager *)DefaultHeap::AllocClear(0x270uLL);
  v4 = v3;
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v3, 0, 0x270uLL);
  v5 = CExpressionManager::CExpressionManager(v4);
  v6 = v5;
  if ( v5 )
  {
    CMILRefCountImpl::AddReference((CExpressionManager *)((char *)v5 + 8));
    v7 = byte_1803DEC98 == 0;
    *a1 = v6;
    if ( v7 )
    {
      byte_1803DEC98 = 1;
      inited = Time::PreInitClass();
      v2 = inited;
      if ( inited < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x20u, 0LL);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v2;
}
