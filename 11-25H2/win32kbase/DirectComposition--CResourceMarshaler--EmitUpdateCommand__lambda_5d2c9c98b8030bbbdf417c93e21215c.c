/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5d2c9c98b8030bbbdf417c93e21215cf___lambda_9a4a792e507a248f30b7fafb5b4b5849___ @ 0x1402367B4
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140198850 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x140100A6C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
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
  void *v11; // r11
  unsigned __int64 v12; // r14
  char *v13; // r10
  unsigned int v14; // r11d
  _DWORD *v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  void *v22; // [rsp+58h] [rbp+10h] BYREF

  v6 = a6;
  while ( 1 )
  {
    v11 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v22 = v11;
    if ( (unsigned __int64)v11 < 0x20 )
      break;
LABEL_5:
    v12 = a4 - *a3;
    if ( v12 >= ((unsigned __int64)v11 - 16) >> 4 )
      LODWORD(v12) = ((unsigned __int64)v11 - 16) >> 4;
    v22 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(16 * (v12 + 1)), &v22);
    v13 = (char *)v22;
    *(_DWORD *)v22 = 16 * (v12 + 1);
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 1) = 126;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a1 + 32);
    v14 = 0;
    v13[12] = *a3 != 0;
    if ( (_DWORD)v12 )
    {
      v15 = v13 + 24;
      do
      {
        v16 = *a3;
        ++v14;
        *a3 = v16 + 1;
        v16 *= 3LL;
        v17 = *(_QWORD *)(*(_QWORD *)v6 + 152LL);
        v18 = *(_DWORD *)(v17 + 8 * v16 + 8);
        v19 = *(_DWORD *)(v17 + 8 * v16 + 12);
        v20 = *(_DWORD *)(v17 + 8 * v16 + 16);
        *(v15 - 2) = *(_DWORD *)(*(_QWORD *)(v17 + 8 * v16) + 32LL);
        *(v15 - 1) = v18;
        *v15 = v19;
        v15[1] = v20;
        v15 += 4;
      }
      while ( v14 < (unsigned int)v12 );
    }
    if ( *a3 >= a4 )
      return 1;
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v22) )
  {
    v11 = v22;
    goto LABEL_5;
  }
  return 0;
}
