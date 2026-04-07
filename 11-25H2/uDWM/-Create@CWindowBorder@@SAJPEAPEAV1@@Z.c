/*
 * XREFs of ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180010DD0
 * Callers:
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180010A80 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006CE4C (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18006D390 (-CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E03BC (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ??0CWindowBorder@@IEAA@XZ @ 0x180010F4C (--0CWindowBorder@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

__int64 __fastcall CWindowBorder::Create(struct CWindowBorder **a1)
{
  CWindowBorder *v2; // rax
  CWindowBorder *v3; // rbx
  CContainerVisual *v4; // rax
  struct CWindowBorder *v5; // rdi
  int v6; // ebx

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x15u, 0LL);
    return (unsigned int)v6;
  }
  v2 = (CWindowBorder *)DefaultHeap::AllocClear(0x130uLL);
  v3 = v2;
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_9;
  }
  memset_0(v2, 0, 0x130uLL);
  v4 = CWindowBorder::CWindowBorder(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_9:
    v6 = -2147024882;
    goto LABEL_10;
  }
  v6 = CContainerVisual::Initialize(v4);
  if ( v6 >= 0 )
  {
    *a1 = v5;
    return 0;
  }
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x15u, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
