/*
 * XREFs of ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x18005D110
 * Callers:
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180020E50 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18005D040 (-CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x18005D1EC (--0CButton@@IEAA@XZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x18005D290 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

__int64 __fastcall CButton::Create(struct CButton **a1)
{
  CButton *v2; // rax
  CButton *v3; // rbx
  CButton *v4; // rax
  struct CButton *v5; // rdi
  int v6; // ebx

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xEu, 0LL);
    return (unsigned int)v6;
  }
  v2 = (CButton *)DefaultHeap::AllocClear(0x130uLL);
  v3 = v2;
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_9;
  }
  memset_0(v2, 0, 0x130uLL);
  v4 = CButton::CButton(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_9:
    v6 = -2147024882;
    goto LABEL_10;
  }
  v6 = CButton::Initialize(v4);
  if ( v6 >= 0 )
  {
    *a1 = v5;
    return 0;
  }
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xEu, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
