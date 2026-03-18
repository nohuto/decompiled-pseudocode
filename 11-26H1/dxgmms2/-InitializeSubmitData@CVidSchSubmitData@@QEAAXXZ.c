/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x14003233C
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140031F58 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140032428 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x14003244C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  PVOID v2; // rax
  DXGADAPTER *v3; // rcx
  int v4; // edx
  __int64 v5; // r8
  void *v6; // r9
  unsigned int v7; // eax
  DXGADAPTER *v8; // rcx
  unsigned __int8 IsDxgmms2; // al
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  int v13; // ecx

  v2 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(*((_QWORD *)this + 1) + 1424LL));
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL));
    if ( DXGADAPTER::IsDxgmms2(v3) )
      v7 = *(_DWORD *)(v5 + 2984) * (72 * v4 + 224) + 8 * (v4 + 78);
    else
      v7 = 1304;
    memset(v6, 0, v7);
    DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL));
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v8);
    *(_BYTE *)(v10 + 356) = IsDxgmms2;
    if ( IsDxgmms2 )
    {
      *(_DWORD *)(v10 + 604) = v12;
      *(_DWORD *)(v10 + 608) = v11;
      *(_DWORD *)(v10 + 612) = v12 * (72 * v11 + 224) + 24;
      v13 = v12 * (72 * v11 + 224) + 624;
      *(_DWORD *)(v10 + 552) = v13;
      *(_DWORD *)(v10 + 556) = v13 + 8 * v11;
    }
  }
}
