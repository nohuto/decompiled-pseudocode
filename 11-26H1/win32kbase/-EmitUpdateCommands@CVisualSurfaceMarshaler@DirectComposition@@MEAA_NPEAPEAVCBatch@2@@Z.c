/*
 * XREFs of ?EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14023FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?NotifyCommitMustBeLastForFrame@CApplicationChannel@DirectComposition@@QEAAX_N@Z @ 0x14014E288 (-NotifyCommitMustBeLastForFrame@CApplicationChannel@DirectComposition@@QEAAX_N@Z.c)
 */

char __fastcall DirectComposition::CVisualSurfaceMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  char v7; // si
  char *v8; // rcx
  char v9; // al
  char *v10; // rcx
  char *v11; // rcx
  _QWORD *v12; // rcx
  int v13; // r15d
  _QWORD *v14; // rcx
  void *v16; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x40) != 0 )
  {
    v16 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
      return 0;
    v5 = v16;
    *(_DWORD *)v16 = 16;
    v5[1] = 0LL;
    *((_DWORD *)v5 + 1) = 329;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    v6 = *((_QWORD *)this + 7);
    if ( v6 )
      LODWORD(v6) = *(_DWORD *)(v6 + 32);
    *((_DWORD *)v5 + 3) = v6;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = 1;
  if ( (v2 & 0x80u) != 0 )
  {
    v16 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v16) )
    {
      v9 = 0;
      goto LABEL_10;
    }
    v8 = (char *)v16;
    *(_DWORD *)v16 = 20;
    *(_OWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 1) = 327;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v8 + 12) = *((_QWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  v9 = 1;
LABEL_10:
  if ( !v9 )
    return 0;
  if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
  {
    v16 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v16) )
      return 0;
    v10 = (char *)v16;
    *(_DWORD *)v16 = 20;
    *(_OWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 1) = 328;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v10 + 12) = *((_QWORD *)this + 9);
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  if ( (*((_DWORD *)this + 4) & 0x200) != 0 )
  {
    v16 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v16) )
      return 0;
    v11 = (char *)v16;
    *(_DWORD *)v16 = 20;
    *(_OWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 1) = 326;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v11 + 12) = *((_QWORD *)this + 10);
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
  {
    v16 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
      return 0;
    v12 = v16;
    *(_DWORD *)v16 = 16;
    v12[1] = 0LL;
    *((_DWORD *)v12 + 1) = 330;
    *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v12 + 3) = *((_DWORD *)this + 22);
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    return v7;
  v13 = *((_DWORD *)this + 23);
  v16 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v16) )
    return 0;
  v14 = v16;
  *(_DWORD *)v16 = 16;
  v14[1] = 0LL;
  *((_DWORD *)v14 + 1) = 325;
  *((_DWORD *)v14 + 2) = *((_DWORD *)this + 8);
  *((_BYTE *)v14 + 12) = v13 != 2;
  *((_DWORD *)this + 4) &= ~0x800u;
  if ( v13 != 2 )
    DirectComposition::CApplicationChannel::NotifyCommitMustBeLastForFrame((*a2)[1], *((_DWORD *)this + 23) == 1);
  return v7;
}
