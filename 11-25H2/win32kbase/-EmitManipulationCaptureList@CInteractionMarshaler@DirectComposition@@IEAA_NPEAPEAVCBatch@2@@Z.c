/*
 * XREFs of ?EmitManipulationCaptureList@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140056DE0
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140056B10 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitManipulationCaptureList(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v5; // edi
  unsigned int v6; // edi
  char *v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 76) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v5 = *((_DWORD *)this + 76);
      if ( !v5 )
        break;
      v6 = v5 - 1;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v10) )
        return 0;
      v7 = (char *)v10;
      *(_DWORD *)v10 = 28;
      *(_OWORD *)(v7 + 4) = 0LL;
      *(_QWORD *)(v7 + 20) = 0LL;
      *((_DWORD *)v7 + 1) = 170;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = **(_DWORD **)(*((_QWORD *)this + 37) + 8LL * v6);
      *(_QWORD *)(v7 + 20) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 37) + 8LL * v6) + 8LL);
      GreDeleteFastMutex(*(char **)(*((_QWORD *)this + 37) + 8LL * v6));
      v8 = *((_DWORD *)this + 76) - 1;
      for ( *((_DWORD *)this + 76) = v8;
            v6 < *((_DWORD *)this + 76);
            *(_QWORD *)(*((_QWORD *)this + 37) + 8 * v9) = *(_QWORD *)(*((_QWORD *)this + 37) + 8LL * v6) )
      {
        v9 = v6++;
      }
    }
  }
  return 1;
}
