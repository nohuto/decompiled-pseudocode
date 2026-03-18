/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5d2c9c98b8030bbbdf417c93e21215cf___lambda_9a4a792e507a248f30b7fafb5b4b5849___ @ 0x1402402C0
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140120690 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1400B0798 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5d2c9c98b8030bbbdf417c93e21215cf___lambda_9a4a792e507a248f30b7fafb5b4b5849___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  void *v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  _QWORD *v14; // r11
  unsigned int v15; // ebx
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  void *v23; // [rsp+58h] [rbp+10h] BYREF

  v6 = a6;
  while ( 1 )
  {
    v11 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v23 = v11;
    if ( (unsigned __int64)v11 < 0x20 )
      break;
LABEL_5:
    v23 = 0LL;
    v12 = ((unsigned __int64)v11 - 16) >> 4;
    v13 = a4 - *a3;
    if ( v13 >= v12 )
      LODWORD(v13) = v12;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(16 * (v13 + 1)), &v23);
    v14 = v23;
    *(_DWORD *)v23 = 16 * (v13 + 1);
    v14[1] = 0LL;
    *((_DWORD *)v14 + 1) = 87;
    *((_DWORD *)v14 + 2) = *(_DWORD *)(a1 + 32);
    v15 = 0;
    *((_BYTE *)v14 + 12) = *a3 != 0;
    if ( (_DWORD)v13 )
    {
      v16 = 0LL;
      do
      {
        v17 = *a3;
        v16 += 2LL;
        ++v15;
        *a3 = v17 + 1;
        v17 *= 3LL;
        v18 = *(_QWORD *)(*(_QWORD *)v6 + 160LL);
        v19 = *(_DWORD *)(v18 + 8 * v17 + 8);
        v20 = *(_DWORD *)(v18 + 8 * v17 + 12);
        v21 = *(_DWORD *)(v18 + 8 * v17 + 16);
        LODWORD(v14[v16]) = *(_DWORD *)(*(_QWORD *)(v18 + 8 * v17) + 32LL);
        HIDWORD(v14[v16]) = v19;
        LODWORD(v14[v16 + 1]) = v20;
        HIDWORD(v14[v16 + 1]) = v21;
      }
      while ( v15 < (unsigned int)v13 );
    }
    if ( *a3 >= a4 )
      return 1;
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v23) )
  {
    v11 = v23;
    goto LABEL_5;
  }
  return 0;
}
