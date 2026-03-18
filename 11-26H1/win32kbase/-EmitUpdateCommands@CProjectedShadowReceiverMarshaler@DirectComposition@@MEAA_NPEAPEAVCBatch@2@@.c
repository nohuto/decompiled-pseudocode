/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowReceiverMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1402462A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEA20 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  void *v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x100) != 0 )
    {
      v13 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
        return v4;
      v6 = v13;
      *(_DWORD *)v13 = 16;
      v6[1] = 0LL;
      *((_DWORD *)v6 + 1) = 218;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      v7 = *((_QWORD *)this + 9);
      if ( v7 )
        v8 = *(_DWORD *)(v7 + 32);
      else
        v8 = 0;
      *((_DWORD *)v6 + 3) = v8;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x200) != 0 )
    {
      v13 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
        return v4;
      v9 = v13;
      *(_DWORD *)v13 = 16;
      v9[1] = 0LL;
      *((_DWORD *)v9 + 1) = 217;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v9 + 3) = *((_DWORD *)this + 20);
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x400) == 0 )
    {
LABEL_16:
      LOBYTE(v4) = 1;
      return v4;
    }
    v13 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
    {
      v10 = v13;
      *(_DWORD *)v13 = 16;
      v10[1] = 0LL;
      *((_DWORD *)v10 + 1) = 219;
      *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
      v11 = *((_QWORD *)this + 11);
      if ( v11 )
        v4 = *(_DWORD *)(v11 + 32);
      *((_DWORD *)v10 + 3) = v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      goto LABEL_16;
    }
  }
  return v4;
}
