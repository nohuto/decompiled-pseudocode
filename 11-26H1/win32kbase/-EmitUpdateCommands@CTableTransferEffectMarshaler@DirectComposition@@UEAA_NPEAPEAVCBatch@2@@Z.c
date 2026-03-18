/*
 * XREFs of ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140233080
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230B00 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CMarshaledArray@M$0GBHEEDEE@$0CMB@$0CMC@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234538 (-Marshal@-$CMarshaledArray@M$0GBHEEDEE@$0CMB@$0CMC@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2.c)
 *     ?Marshal@?$CMarshaledArray@M$0GBHEEDEE@$0CMD@$0CME@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234564 (-Marshal@-$CMarshaledArray@M$0GBHEEDEE@$0CMD@$0CME@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2.c)
 *     ?Marshal@?$CMarshaledArray@M$0GBHEEDEE@$0CMF@$0CMG@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234590 (-Marshal@-$CMarshaledArray@M$0GBHEEDEE@$0CMF@$0CMG@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2.c)
 *     ?Marshal@?$CMarshaledArray@M$0GBHEEDEE@$0CMH@$0CMI@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402345BC (-Marshal@-$CMarshaledArray@M$0GBHEEDEE@$0CMH@$0CMI@$0A@@DirectComposition@@QEAA_NPEAPEAVCBatch@2.c)
 */

char __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  int v5; // eax
  _QWORD *v6; // rcx
  char *v7; // r14
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  int v10; // eax
  char *v11; // r12
  _QWORD *v12; // rcx
  char *v13; // r15
  _QWORD *v14; // rcx
  void *v16; // [rsp+60h] [rbp+40h] BYREF

  v4 = 0;
  if ( DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x400) != 0 )
    {
      v16 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
        return v4;
      v6 = v16;
      v7 = (char *)this + 32;
      *(_DWORD *)v16 = 16;
      v6[1] = 0LL;
      *((_DWORD *)v6 + 1) = 700;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *((_BYTE *)v6 + 12) = *((_BYTE *)this + 256);
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    else
    {
      v7 = (char *)this + 32;
    }
    if ( (v5 & 0x800) != 0 )
    {
      v16 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
        return v4;
      v8 = v16;
      *(_DWORD *)v16 = 16;
      v8[1] = 0LL;
      *((_DWORD *)v8 + 1) = 701;
      *((_DWORD *)v8 + 2) = *(_DWORD *)v7;
      *((_BYTE *)v8 + 12) = *((_BYTE *)this + 257);
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x1000) != 0 )
    {
      v16 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
        return v4;
      v9 = v16;
      *(_DWORD *)v16 = 16;
      v9[1] = 0LL;
      *((_DWORD *)v9 + 1) = 702;
      v10 = *(_DWORD *)v7;
      v7 = (char *)this + 32;
      *((_DWORD *)v9 + 2) = v10;
      *((_BYTE *)v9 + 12) = *((_BYTE *)this + 258);
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v11 = v7;
    if ( (v5 & 0x2000) != 0 )
    {
      v16 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
        return v4;
      v12 = v16;
      v11 = (char *)this + 32;
      *(_DWORD *)v16 = 16;
      v12[1] = 0LL;
      *((_DWORD *)v12 + 1) = 703;
      *((_DWORD *)v12 + 2) = *(_DWORD *)v7;
      *((_BYTE *)v12 + 12) = *((_BYTE *)this + 259);
      *((_DWORD *)this + 4) &= ~0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    v13 = v7;
    if ( (v5 & 0x4000) != 0 )
    {
      v16 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
        return v4;
      v14 = v16;
      v13 = v11;
      *(_DWORD *)v16 = 16;
      v14[1] = 0LL;
      *((_DWORD *)v14 + 1) = 704;
      *((_DWORD *)v14 + 2) = *(_DWORD *)v7;
      *((_BYTE *)v14 + 12) = *((_BYTE *)this + 260);
      *((_DWORD *)this + 4) &= ~0x4000u;
    }
    if ( (unsigned __int8)DirectComposition::CMarshaledArray<float,1635009348,705,706,0>::Marshal(
                            (char *)this + 264,
                            a2,
                            *(unsigned int *)v7)
      && (unsigned __int8)DirectComposition::CMarshaledArray<float,1635009348,707,708,0>::Marshal(
                            (char *)this + 288,
                            a2,
                            *(unsigned int *)v13)
      && (unsigned __int8)DirectComposition::CMarshaledArray<float,1635009348,709,710,0>::Marshal(
                            (char *)this + 312,
                            a2,
                            *(unsigned int *)v13)
      && (unsigned __int8)DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::Marshal(
                            (char *)this + 336,
                            a2,
                            *(unsigned int *)v13) )
    {
      return 1;
    }
  }
  return v4;
}
