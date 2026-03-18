/*
 * XREFs of ?EmitUpdateCommands@CChannelMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x14002481C
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400227BC (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401981B0 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CChannelMarshaler::EmitUpdateCommands(
        DirectComposition::CChannelMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  _DWORD *v7; // rax
  char *v8; // rcx
  char *v9; // rcx
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  char *v13; // rcx
  _DWORD *v14; // rax
  void *v15; // [rsp+40h] [rbp+20h] BYREF

  v2 = *(_DWORD *)this;
  v3 = 0;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v15) )
      return v3;
    v8 = (char *)v15;
    *(_DWORD *)v15 = 12;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 1) = 430;
    v8[8] = *((_BYTE *)this + 4);
    *(_DWORD *)this &= ~1u;
    v2 = *(_DWORD *)this;
  }
  if ( (v2 & 2) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v15) )
      return v3;
    v13 = (char *)v15;
    *(_DWORD *)v15 = 12;
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 1) = 431;
    v13[8] = *((_BYTE *)this + 5);
    *(_DWORD *)this &= ~2u;
    v2 = *(_DWORD *)this;
  }
  if ( (v2 & 4) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v15) )
      return v3;
    v9 = (char *)v15;
    *(_DWORD *)v15 = 12;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 1) = 432;
    v9[8] = *((_BYTE *)this + 6);
    *(_DWORD *)this &= ~4u;
    v2 = *(_DWORD *)this;
  }
  if ( (v2 & 8) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 8uLL, &v15) )
      return v3;
    v10 = v15;
    *(_QWORD *)v15 = 8LL;
    v10[1] = 433;
    *(_DWORD *)this &= ~8u;
    v2 = *(_DWORD *)this;
  }
  if ( (v2 & 0x10) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 8uLL, &v15) )
      return v3;
    v14 = v15;
    *(_QWORD *)v15 = 8LL;
    v14[1] = 434;
    *(_DWORD *)this &= ~0x10u;
    v2 = *(_DWORD *)this;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 8uLL, &v15) )
      return v3;
    v11 = v15;
    *(_QWORD *)v15 = 8LL;
    v11[1] = 435;
    *(_DWORD *)this &= ~0x20u;
    v2 = *(_DWORD *)this;
  }
  if ( (v2 & 0x40) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 8uLL, &v15) )
      return v3;
    v7 = v15;
    *(_QWORD *)v15 = 8LL;
    v7[1] = 436;
    *(_DWORD *)this &= ~0x40u;
    v2 = *(_DWORD *)this;
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 8uLL, &v15) )
      return v3;
    v12 = v15;
    *(_QWORD *)v15 = 8LL;
    v12[1] = 437;
    *(_DWORD *)this &= ~0x80u;
  }
  return 1;
}
