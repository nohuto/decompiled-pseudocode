/*
 * XREFs of ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x18001CBE4
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001B874 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180011920 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18001D2C8 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::Create(struct CTopLevelWindow3D **a1)
{
  CTopLevelWindow3D *v2; // rax
  struct CContainerVisualProxy **v3; // rax
  struct CTopLevelWindow3D *v4; // rbx
  int v5; // edi

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x6Eu, 0LL);
    return (unsigned int)v5;
  }
  v2 = (CTopLevelWindow3D *)DefaultHeap::AllocClear(0x268uLL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_8;
  }
  v3 = (struct CContainerVisualProxy **)CTopLevelWindow3D::CTopLevelWindow3D(v2);
  v4 = (struct CTopLevelWindow3D *)v3;
  if ( !v3 )
  {
LABEL_8:
    v5 = -2147024882;
    goto LABEL_9;
  }
  v5 = CTopLevelWindow3D::Initialize(v3);
  if ( v5 >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x6Eu, 0LL);
  *a1 = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v5;
}
