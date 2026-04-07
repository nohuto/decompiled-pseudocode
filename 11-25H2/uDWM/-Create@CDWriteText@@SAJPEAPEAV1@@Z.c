/*
 * XREFs of ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x1800392C4
 * Callers:
 *     ?CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180038ED0 (-CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180038F98 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDWriteText@@AEAA@XZ @ 0x180039470 (--0CDWriteText@@AEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWriteText::Create(struct CDWriteText **a1)
{
  CDWriteText *v2; // rax
  CDWriteText *v3; // rbx
  CDWriteText *v4; // rax
  struct CDWriteText *v5; // rbx
  int v6; // edi

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 8u, 0LL);
    return (unsigned int)v6;
  }
  v2 = (CDWriteText *)DefaultHeap::AllocClear(0x1B0uLL);
  v3 = v2;
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_11;
  }
  memset_0(v2, 0, 0x1B0uLL);
  v4 = CDWriteText::CDWriteText(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_11:
    v6 = -2147024882;
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(CDWriteText *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v6 >= 0 )
  {
    *a1 = v5;
    return 0;
  }
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 8u, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
