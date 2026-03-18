/*
 * XREFs of ?EmitSettings@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140161E60
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140161CC0 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitSettings(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  _QWORD *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v6) )
    {
      v4 = v6;
      *(_DWORD *)v6 = 32;
      v4[1] = 0LL;
      v4[2] = 0LL;
      v4[3] = 0LL;
      *((_DWORD *)v4 + 1) = 170;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 26);
      *((_BYTE *)v4 + 16) = *((_BYTE *)this + 108) & 1;
      *((_BYTE *)v4 + 17) = (*((_BYTE *)this + 108) & 2) != 0;
      *((_BYTE *)v4 + 18) = (*((_BYTE *)this + 108) & 4) != 0;
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 28);
      *((_DWORD *)v4 + 6) = *((_DWORD *)this + 29);
      *((_DWORD *)v4 + 7) = *((_DWORD *)this + 30);
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
