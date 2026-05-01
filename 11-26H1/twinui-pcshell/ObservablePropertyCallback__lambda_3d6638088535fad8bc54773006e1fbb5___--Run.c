/*
 * XREFs of ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5___::Run @ 0x1804D3840
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804D3688 (-InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5___::Run(__int64 a1)
{
  SwitchItemThumbnailElement *v1; // rbx

  v1 = *(SwitchItemThumbnailElement **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( v1 )
  {
    (*(void (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)v1 + 8LL))(v1);
    SwitchItemThumbnailElement::InvalidateThumbnailVisual(v1);
    (*(void (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
