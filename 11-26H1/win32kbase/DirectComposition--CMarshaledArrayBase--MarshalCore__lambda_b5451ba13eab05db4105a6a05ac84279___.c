/*
 * XREFs of DirectComposition::CMarshaledArrayBase::MarshalCore__lambda_b5451ba13eab05db4105a6a05ac84279___ @ 0x1401455A4
 * Callers:
 *     ?ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z @ 0x140145564 (-ValueTypeMarshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IW4MILCMD@@1_K@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1400B0798 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

bool __fastcall DirectComposition::CMarshaledArrayBase::MarshalCore__lambda_b5451ba13eab05db4105a6a05ac84279___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        int a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rsi
  __int64 v9; // r10
  unsigned __int64 v12; // rbp
  _QWORD *v13; // r15
  unsigned __int64 v14; // rax
  void *v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  char *v18; // rcx
  int v19; // eax
  void *v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+70h] [rbp+18h]
  int v22; // [rsp+78h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v7 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 != v7 )
  {
    v12 = a6;
    v13 = a7;
    do
    {
      v14 = v12 + 12;
      v15 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v20 = v15;
      if ( v9 == -1 )
        v14 = 12LL;
      if ( (unsigned __int64)v15 < v14 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v20) )
          return *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 8);
        v7 = *(_QWORD *)(a1 + 8);
        v15 = v20;
      }
      v16 = *(_QWORD *)(a1 + 16);
      if ( v16 == -1 )
      {
        *(_QWORD *)(a1 + 16) = 0LL;
        v16 = 0LL;
      }
      v20 = 0LL;
      v17 = v7 - v16;
      if ( v17 >= ((unsigned __int64)v15 - 12) / v12 )
        LODWORD(v17) = ((unsigned __int64)v15 - 12) / v12;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(v12 * v17 + 12), &v20);
      v18 = (char *)v20;
      *(_DWORD *)v20 = v12 * v17 + 12;
      *(_QWORD *)(v18 + 4) = 0LL;
      v19 = v22;
      if ( *(_QWORD *)(a1 + 16) )
        v19 = a5;
      *((_DWORD *)v18 + 1) = v19;
      *((_DWORD *)v18 + 2) = v21;
      if ( (_DWORD)v17 )
      {
        memmove(
          v18 + 12,
          (const void *)(*(_QWORD *)*v13 + v13[1] * *(_QWORD *)(*v13 + 16LL)),
          (unsigned int)(v12 * v17));
        *(_QWORD *)(a1 + 16) += (unsigned int)v17;
      }
      v7 = *(_QWORD *)(a1 + 8);
      v9 = *(_QWORD *)(a1 + 16);
    }
    while ( v9 != v7 );
  }
  return *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 8);
}
