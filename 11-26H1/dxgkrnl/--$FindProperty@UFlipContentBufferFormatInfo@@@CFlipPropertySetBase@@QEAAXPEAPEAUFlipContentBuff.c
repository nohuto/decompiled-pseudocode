/*
 * XREFs of ??$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBufferFormatInfo@@@Z @ 0x14004C2B8
 * Callers:
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140023164 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x140024EA8 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(__int64 a1, _QWORD *a2)
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
    v9 = *(_QWORD *)(v8 + v7) - *(_QWORD *)&GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + v7 + 8) - *(_QWORD *)GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data4;
    if ( !v9 && *(_DWORD *)(v8 + v7 + 16) == 8 )
    {
      *a2 = v2;
      return;
    }
    v2 += *(unsigned int *)(v8 + v7 + 16);
  }
}
