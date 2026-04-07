/*
 * XREFs of ?Create@CNineGridImagePrimitive@@SAJPEAPEAV1@@Z @ 0x1800BCDB0
 * Callers:
 *     ?ClonePrimitive@CNineGridImagePrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z @ 0x1800BCB70 (-ClonePrimitive@CNineGridImagePrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CNineGridImagePrimitive@@IEAA@XZ @ 0x18008A0AC (--0CNineGridImagePrimitive@@IEAA@XZ.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridImagePrimitive::Create(struct CNineGridImagePrimitive **a1)
{
  int v2; // edi
  CNineGridImagePrimitive *v3; // rax
  CNineGridImagePrimitive *v4; // rbx
  CNineGridImagePrimitive *v5; // rax
  struct CNineGridImagePrimitive *v6; // rbx

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x89u, 0LL);
    return (unsigned int)v2;
  }
  v3 = (CNineGridImagePrimitive *)DefaultHeap::AllocClear(0x48uLL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x48uLL);
    v5 = CNineGridImagePrimitive::CNineGridImagePrimitive(v4);
    v6 = v5;
    if ( v5 )
    {
      v2 = (*(__int64 (__fastcall **)(CNineGridImagePrimitive *))(*(_QWORD *)v5 + 24LL))(v5);
      if ( v2 >= 0 )
      {
        *a1 = v6;
        return 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v2 = -2147024882;
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x89u, 0LL);
  *a1 = 0LL;
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v2;
}
