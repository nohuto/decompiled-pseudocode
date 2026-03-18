/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1402441F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140145A50 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::ReleaseAllReferences(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rcx
  size_t v6; // r8
  _QWORD *v7; // rcx
  __int128 v8; // xmm0
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v2 = 0;
  if ( *((_QWORD *)this + 12) )
  {
    v5 = 0LL;
    do
    {
      v6 = *((_QWORD *)this + 13);
      v7 = (_QWORD *)(*((_QWORD *)this + 9) + v6 * v5);
      v8 = *(_OWORD *)v7;
      v11 = HIDWORD(v7[2]);
      Src = v8;
      v10 = 0;
      memmove(v7, &Src, v6);
      v5 = ++v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 12) );
  }
  DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(this, a2);
}
