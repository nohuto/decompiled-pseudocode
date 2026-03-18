/*
 * XREFs of ?EmitInjections@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140161D54
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140161CC0 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitInjections(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rdx
  _OWORD **v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // r8
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 34) )
  {
    v13 = 0LL;
    while ( *((_DWORD *)this + 34) )
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x8CuLL, &v13) )
        return 0;
      v7 = (char *)v13;
      *(_DWORD *)v13 = 140;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 1) = 167;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      v8 = (_OWORD **)*((_QWORD *)this + 16);
      v9 = *v8;
      *(_OWORD *)(v7 + 12) = **v8;
      *(_OWORD *)(v7 + 28) = v9[1];
      *(_OWORD *)(v7 + 44) = v9[2];
      *(_OWORD *)(v7 + 60) = v9[3];
      *(_OWORD *)(v7 + 76) = v9[4];
      *(_OWORD *)(v7 + 92) = v9[5];
      *(_OWORD *)(v7 + 108) = v9[6];
      *(_OWORD *)(v7 + 124) = v9[7];
      GreDeleteFastMutex(**((char ***)this + 16), (__int64)v7, v5, v6);
      v10 = 0LL;
      if ( (*((_DWORD *)this + 34))-- != 1 )
      {
        do
        {
          v12 = (unsigned int)(v10 + 1);
          *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v10) = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v12);
          v10 = v12;
        }
        while ( (unsigned int)v12 < *((_DWORD *)this + 34) );
      }
    }
  }
  return 1;
}
