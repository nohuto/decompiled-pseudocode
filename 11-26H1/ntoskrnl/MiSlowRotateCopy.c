/*
 * XREFs of MiSlowRotateCopy @ 0x1406FC1B4
 * Callers:
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AEFA48 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiGetPteMappingSet @ 0x140448100 (MiGetPteMappingSet.c)
 *     MiReturnPteMappingSet @ 0x14044E8C0 (MiReturnPteMappingSet.c)
 *     MiInitializeSlowPte @ 0x1406FC144 (MiInitializeSlowPte.c)
 *     KeCopyPageNoOverride @ 0x140735430 (KeCopyPageNoOverride.c)
 */

unsigned __int8 __fastcall MiSlowRotateCopy(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r13
  unsigned __int64 v4; // r12
  unsigned int v5; // r15d
  int v6; // r14d
  int v7; // edx
  unsigned __int8 result; // al
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  unsigned __int64 *v11; // rdi
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v13; // [rsp+30h] [rbp-38h]

  v3 = (unsigned __int64 *)(a2 + 48);
  v4 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v12 = 0LL;
  v13 = 0LL;
  v5 = 1;
  v6 = 4;
  v7 = *(_DWORD *)(a3 + 48) & 0x300;
  result = v7 == 768;
  if ( (*(_DWORD *)(a3 + 48) & 0xE0) != 0 && v7 == 768 )
  {
    v6 = 28;
    v5 = 2;
  }
  else if ( v7 == 256 )
  {
    v6 = 12;
    v5 = 0;
  }
  if ( v4 )
  {
    v9 = a1 - (_QWORD)v3;
    do
    {
      MiGetPteMappingSet(1, 2LL, (__int64)&v12);
      v10 = v13;
      v11 = v13 + 1;
      MiInitializeSlowPte(v13, *v3, v6);
      MiInitializeSlowPte(v11, *(unsigned __int64 *)((char *)v3 + v9 + 48), v6);
      KeCopyPageNoOverride((__int64)((_QWORD)v11 << 25) >> 16, (__int64)((_QWORD)v10 << 25) >> 16, v5);
      *v10 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      result = (unsigned __int8)MiReturnPteMappingSet((__int64)&v12);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
