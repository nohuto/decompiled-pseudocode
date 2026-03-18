/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x140033220
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1402B6190 (DxgkSubmitPresentToHwQueue.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  PVOID v2; // rax
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // ecx

  v2 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(*((_QWORD *)this + 1) + 1424LL));
  *(_QWORD *)this = v2;
  if ( !v2 )
    return;
  v3 = 1;
  v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( *(int *)(v4 + 2776) < 0x2000 )
  {
    v5 = 1;
    if ( !*(_BYTE *)(v4 + 3076) )
    {
      v6 = 1304;
      goto LABEL_5;
    }
  }
  else
  {
    v5 = *(_DWORD *)(v4 + 296);
  }
  v6 = *(_DWORD *)(v4 + 2984) * (72 * v5 + 224) + 8 * (v5 + 78);
LABEL_5:
  memset(v2, 0, v6);
  v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  v8 = *(_QWORD *)this;
  v9 = *(_DWORD *)(v7 + 2984);
  if ( *(int *)(v7 + 2776) < 0x2000 )
  {
    if ( !*(_BYTE *)(v7 + 3076) )
    {
      *(_BYTE *)(v8 + 356) = 0;
      return;
    }
  }
  else
  {
    v3 = *(_DWORD *)(v7 + 296);
  }
  *(_BYTE *)(v8 + 356) = 1;
  *(_DWORD *)(v8 + 604) = v9;
  *(_DWORD *)(v8 + 608) = v3;
  *(_DWORD *)(v8 + 612) = v9 * (72 * v3 + 224) + 24;
  v10 = v9 * (72 * v3 + 224) + 624;
  *(_DWORD *)(v8 + 552) = v10;
  *(_DWORD *)(v8 + 556) = v10 + 8 * v3;
}
