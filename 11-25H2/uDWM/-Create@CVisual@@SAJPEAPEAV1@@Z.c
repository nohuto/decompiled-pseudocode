/*
 * XREFs of ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800E14C0
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x1800E1420 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18000872C (--0CVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::Create(struct CVisual **a1)
{
  int v2; // edi
  CVisual *v3; // rax
  CVisual *v4; // rax
  struct CVisual *v5; // rbx

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x22u, 0LL);
    return (unsigned int)v2;
  }
  v3 = (CVisual *)DefaultHeap::AllocClear(0x90uLL);
  if ( v3 )
  {
    v4 = CVisual::CVisual(v3);
    v5 = v4;
    if ( v4 )
    {
      v2 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v5;
        return 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v2 = -2147024882;
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x22u, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v2;
}
