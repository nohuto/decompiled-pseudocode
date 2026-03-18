/*
 * XREFs of ??$FindProperty@UPresentedContentOverlayInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentOverlayInfo@@@Z @ 0x1400A43B4
 * Callers:
 *     ?ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlayInfo@@@Z @ 0x140019E2C (-ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlay.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::FindProperty<PresentedContentOverlayInfo>(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  unsigned int v4; // ebx
  unsigned int i; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 12);
  *a2 = 0LL;
  for ( i = 0; i < v4; ++i )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 32LL * i;
    v9 = *(_QWORD *)(v8 + v7) - *(_QWORD *)&GUID_b7c9e47a_a946_41e2_95a6_04c2e08cfd1b.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + v7 + 8) - *(_QWORD *)GUID_b7c9e47a_a946_41e2_95a6_04c2e08cfd1b.Data4;
    if ( !v9 && *(_DWORD *)(v8 + v7 + 16) == 32 )
    {
      *a2 = v2;
      return;
    }
    v2 += *(unsigned int *)(v8 + v7 + 16);
  }
}
