/*
 * XREFs of ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140161F20
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140161CC0 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitEdgyConfiguration(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // ebx
  bool v3; // zf
  char v5; // bp
  _DWORD *v7; // rsi
  char *v8; // rcx
  __int64 v9; // rax
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (*((_DWORD *)this + 4) & 0x200) == 0;
  v5 = 1;
  v10 = 0LL;
  if ( !v3 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x94uLL, &v10) )
    {
      v7 = v10;
      v8 = (char *)v10 + 8;
      *(_DWORD *)v10 = 148;
      memset(v8, 0, 0x8CuLL);
      v7[1] = 169;
      v7[2] = *((_DWORD *)this + 8);
      v9 = *((_QWORD *)this + 35);
      if ( v9 )
        v2 = *(_DWORD *)(v9 + 32);
      v7[3] = v2;
      memmove(v7 + 5, (char *)this + 152, *((unsigned int *)this + 37));
      v7[4] = *((_DWORD *)this + 37);
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
