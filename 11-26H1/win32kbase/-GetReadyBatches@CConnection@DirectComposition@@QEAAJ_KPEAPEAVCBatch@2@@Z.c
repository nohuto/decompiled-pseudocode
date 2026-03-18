/*
 * XREFs of ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1401077B4
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1401B2890 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1401BD9F8 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1401078A4 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetReadyBatches(
        DirectComposition::CConnection *this,
        unsigned __int64 a2,
        struct DirectComposition::CBatch **a3)
{
  unsigned int v3; // ebx
  PSLIST_ENTRY v7; // rdx
  struct DirectComposition::CBatch *v8; // rcx
  __int64 v9; // rax
  struct _SLIST_ENTRY *Next; // r9
  _QWORD *p_Next; // r8
  _QWORD *v12; // rcx
  _QWORD *v14; // rdx
  struct DirectComposition::CBatch *v15; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v7 = ExpInterlockedFlushSList((PSLIST_HEADER)this + 6);
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        v9 = *((_QWORD *)&v7[1].Next + 1);
        Next = v7->Next;
        if ( v9 )
        {
          p_Next = *(_QWORD **)(v9 + 24);
          *(_QWORD *)(v9 + 24) = 0LL;
          v7->Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v7[1].Next + 1);
          *((_QWORD *)&v7[1].Next + 1) = 0LL;
        }
        else
        {
          p_Next = &v7->Next;
        }
        *p_Next = v8;
        v8 = (struct DirectComposition::CBatch *)v7;
        v7 = Next;
      }
      while ( Next );
    }
    *a3 = v8;
    v12 = (_QWORD *)*((_QWORD *)this + 17);
    if ( v12 )
    {
      do
      {
        v14 = v12;
        *(_BYTE *)(v12[1] + 49LL) = 0;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
      v15 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = 0LL;
      *v14 = *a3;
      *a3 = v15;
    }
    DirectComposition::CConnection::KeepOrDeferBatches(this, a2, a3);
  }
  return v3;
}
