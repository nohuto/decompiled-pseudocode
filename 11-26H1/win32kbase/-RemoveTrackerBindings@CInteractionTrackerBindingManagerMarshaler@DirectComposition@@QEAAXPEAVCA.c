/*
 * XREFs of ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x14024426C
 * Callers:
 *     ?ReleaseAllReferences@CInteractionTrackerBaseMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x14022AD30 (-ReleaseAllReferences@CInteractionTrackerBaseMarshaler@DirectComposition@@MEAAXPEAVCApplicationC.c)
 * Callees:
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140145A50 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::RemoveTrackerBindings(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  size_t v8; // r8
  _QWORD *v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  if ( !*((_BYTE *)this + 64) )
  {
    v6 = 0;
    if ( *((_QWORD *)this + 12) )
    {
      v7 = 0LL;
      do
      {
        v8 = *((_QWORD *)this + 13);
        v9 = (_QWORD *)(*((_QWORD *)this + 9) + v8 * v7);
        v10 = *(_OWORD *)v9;
        v11 = *v9;
        v13 = v9[2];
        Src = v10;
        if ( *(_DWORD *)(v11 + 32) == a3 || *(_DWORD *)(*((_QWORD *)&Src + 1) + 32LL) == a3 )
        {
          LODWORD(v13) = 0;
          memmove(v9, &Src, v8);
        }
        v7 = ++v6;
      }
      while ( (unsigned __int64)v6 < *((_QWORD *)this + 12) );
    }
    DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(this, a2);
  }
}
