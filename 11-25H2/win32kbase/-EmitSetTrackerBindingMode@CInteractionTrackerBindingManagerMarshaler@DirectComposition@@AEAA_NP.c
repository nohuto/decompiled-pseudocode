/*
 * XREFs of ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140134664
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140134560 (-EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVC.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140102DFC (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitSetTrackerBindingMode(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int i; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  int v8; // ebp
  char *v9; // rdx
  __int64 v10; // rax
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    v14 = 0LL;
    for ( i = 0; (unsigned __int64)i < *((_QWORD *)this + 12); ++i )
    {
      v5 = *((_QWORD *)this + 9);
      v6 = *((_QWORD *)this + 13) * i;
      v7 = *(_OWORD *)(v6 + v5);
      v13 = *(_QWORD *)(v6 + v5 + 16);
      v8 = v13;
      Src = v7;
      if ( (_DWORD)v13 != HIDWORD(v13) )
      {
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v14) )
          return 0;
        v9 = (char *)v14;
        HIDWORD(v13) = v8;
        *(_DWORD *)v14 = 24;
        *(_OWORD *)(v9 + 4) = 0LL;
        *((_DWORD *)v9 + 5) = 0;
        *((_DWORD *)v9 + 1) = 201;
        *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
        v10 = *((_QWORD *)&Src + 1);
        *((_DWORD *)v9 + 3) = *(_DWORD *)(Src + 32);
        *((_DWORD *)v9 + 4) = *(_DWORD *)(v10 + 32);
        *((_DWORD *)v9 + 5) = v8;
        memmove((void *)(*((_QWORD *)this + 9) + i * *((_QWORD *)this + 13)), &Src, *((_QWORD *)this + 13));
      }
    }
    DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(this, (*a2)[1]);
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  return 1;
}
