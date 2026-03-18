/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1400C71A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400BB7AC (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1400BDC4C (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x14019EE64 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(struct HDCOMPOSITIONCONNECTION__ *a1, void *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  int v5; // ebx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  DirectComposition::CConnection *v8; // rdi
  int BatchesFromFrame; // eax
  unsigned int v10; // edx
  unsigned __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]
  struct DirectComposition::CConnection *v14; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v15; // [rsp+70h] [rbp+18h]
  struct UCE_RDP_HEADER *v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = a3;
  v3 = a3;
  v5 = 0;
  v6 = 0LL;
  v13 = 0LL;
  v16 = 0LL;
  if ( a2 && a3 )
  {
    v12 = 0LL;
    RtlCopyFromUser(&v12, a2, 8uLL);
    v6 = v12;
    v13 = v12;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    v14 = 0LL;
    v5 = DirectComposition::CConnection::ReferenceHandle(a1, &v14);
    if ( v5 >= 0 )
    {
      if ( v6 )
      {
        v7 = v6;
        v8 = v14;
        BatchesFromFrame = DirectComposition::CConnection::GetBatchesFromFrame(v14, v7, &v16);
      }
      else
      {
        v8 = v14;
        BatchesFromFrame = DirectComposition::CConnection::GetBatches(v14, &v16);
      }
      v5 = BatchesFromFrame;
      DirectComposition::CConnection::Release(v8, v10);
    }
    KeLeaveCriticalRegion();
    if ( v5 >= 0 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_QWORD *)MmUserProbeAddress;
      *v3 = v16;
    }
  }
  return (unsigned int)v5;
}
