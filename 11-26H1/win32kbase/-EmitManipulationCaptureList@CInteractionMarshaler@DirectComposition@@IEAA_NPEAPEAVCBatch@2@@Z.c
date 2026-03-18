/*
 * XREFs of ?EmitManipulationCaptureList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B2710
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B1E50 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitManipulationCaptureList(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v5; // edi
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r9
  char *v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 76) )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v5 = *((_DWORD *)this + 76);
      if ( !v5 )
        break;
      v6 = v5 - 1;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v12) )
        return 0;
      v9 = (char *)v12;
      *(_DWORD *)v12 = 28;
      *(_OWORD *)(v9 + 4) = 0LL;
      *(_QWORD *)(v9 + 20) = 0LL;
      *((_DWORD *)v9 + 1) = 107;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v9 + 3) = **(_DWORD **)(*((_QWORD *)this + 37) + 8LL * v6);
      *(_QWORD *)(v9 + 20) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 37) + 8LL * v6) + 8LL);
      GreDeleteFastMutex(*(char **)(*((_QWORD *)this + 37) + 8LL * v6), v7, (__int64)v9, v8);
      v10 = *((_DWORD *)this + 76) - 1;
      for ( *((_DWORD *)this + 76) = v10;
            v6 < *((_DWORD *)this + 76);
            *(_QWORD *)(*((_QWORD *)this + 37) + 8 * v11) = *(_QWORD *)(*((_QWORD *)this + 37) + 8LL * v6) )
      {
        v11 = v6++;
      }
    }
  }
  return 1;
}
