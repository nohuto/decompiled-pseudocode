/*
 * XREFs of ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140145A50
 * Callers:
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14017DA88 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 *     ?Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1402440A0 (-Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationC.c)
 *     ?ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1402441F0 (-ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCAp.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x14024426C (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x140147020 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // r9
  size_t v8; // r8
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  size_t v11; // rcx
  struct DirectComposition::CResourceMarshaler *v12; // rdx
  bool v13; // zf
  struct DirectComposition::CResourceMarshaler *v14; // rsi
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]

  if ( !*((_BYTE *)this + 64) )
  {
    v4 = 0;
    *((_BYTE *)this + 64) = 1;
    v5 = 0;
    if ( *((_QWORD *)this + 12) )
    {
      v6 = 0LL;
      do
      {
        v7 = *((_QWORD *)this + 9);
        v8 = *((_QWORD *)this + 13);
        v9 = *(_OWORD *)(v6 * v8 + v7);
        v10 = *(_QWORD *)(v6 * v8 + v7 + 16);
        v16 = v10;
        Src = v9;
        if ( (_DWORD)v10 )
        {
          v11 = v8 * v4;
          v16 = v10;
          Src = v9;
          ++v4;
          memmove((void *)(v7 + v11), &Src, v8);
        }
        else
        {
          v12 = (struct DirectComposition::CResourceMarshaler *)Src;
          v13 = (*(_DWORD *)(Src + 64))-- == 1;
          if ( v13 )
            *((_QWORD *)v12 + 9) = 0LL;
          v14 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)&Src + 1);
          v13 = (*(_DWORD *)(*((_QWORD *)&Src + 1) + 64LL))-- == 1;
          if ( v13 )
            *((_QWORD *)v14 + 9) = 0LL;
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v14);
        }
        v6 = ++v5;
      }
      while ( (unsigned __int64)v5 < *((_QWORD *)this + 12) );
    }
    DirectComposition::CDCompDynamicArrayBase::Shrink(
      (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 72),
      *((_QWORD *)this + 12) - v4);
    *((_BYTE *)this + 64) = 0;
  }
}
