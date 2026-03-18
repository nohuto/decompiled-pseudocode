/*
 * XREFs of ?EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140139FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Marshal@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0BNA@$0BNB@$00@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234640 (-Marshal@-$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0BNA@$0BNB@$00@DirectComposition@@QEAA_NPEAPEAV.c)
 */

char __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::EmitUpdateCommands(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  char *v6; // rcx
  _QWORD *v8; // rcx
  char *v9; // rcx
  _QWORD *v10; // rcx
  void *v11; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CMarshaledArray<tagRECT,1684489028,464,465,1>::Marshal((DirectComposition::CGdiSpriteBitmapMarshaler *)((char *)this + 56)) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x40) != 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
        return v4;
      v8 = v11;
      *(_DWORD *)v11 = 16;
      v8[1] = 0LL;
      *((_DWORD *)v8 + 1) = 466;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v8 + 3) = *((_DWORD *)this + 20);
      *((_DWORD *)this + 4) &= ~0x40u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x80u) != 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
        return v4;
      v10 = v11;
      *(_DWORD *)v11 = 16;
      v10[1] = 0LL;
      *((_DWORD *)v10 + 1) = 467;
      *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
      *((_BYTE *)v10 + 12) = *((_BYTE *)this + 84);
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x100) != 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v11) )
        return v4;
      v9 = (char *)v11;
      *(_DWORD *)v11 = 20;
      *(_OWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 1) = 468;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v9 + 12) = *((_QWORD *)this + 11);
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x200) == 0 )
      return 1;
    v11 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v11) )
    {
      v6 = (char *)v11;
      *(_DWORD *)v11 = 28;
      *(_OWORD *)(v6 + 4) = 0LL;
      *(_QWORD *)(v6 + 20) = 0LL;
      *((_DWORD *)v6 + 1) = 469;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v6 + 12) = *((_OWORD *)this + 6);
      *((_DWORD *)this + 4) &= ~0x200u;
      return 1;
    }
  }
  return v4;
}
