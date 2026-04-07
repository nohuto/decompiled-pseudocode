/*
 * XREFs of ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180062DDC
 * Callers:
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180033E4C (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800212F0 (--0CVisual@@IEAA@XZ.c)
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x180062EC0 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CVisual::CreateFromSharedHandle(void *a1, struct CVisual **a2)
{
  CVisual *v4; // rax
  int v5; // ebx
  CVisual *v6; // rax
  struct CVisual *v7; // rdi
  unsigned int v9; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    *a2 = 0LL;
    v4 = (CVisual *)DefaultHeap::AllocClear(0x88uLL);
    if ( !v4 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v6 = CVisual::CVisual(v4);
    v7 = v6;
    if ( v6 )
    {
      v5 = CVisual::InitializeFromSharedHandle(v6, a1);
      if ( v5 >= 0 )
      {
        *a2 = v7;
        return (unsigned int)v5;
      }
      v9 = 47;
    }
    else
    {
      v5 = -2147024882;
      v9 = 45;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v9, 0LL);
    if ( v7 )
      CBaseObject::Release(v7);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x27u, 0LL);
  }
  return (unsigned int)v5;
}
