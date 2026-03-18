/*
 * XREFs of ?EmitUpdateCommands@CGenericMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140247C00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c56a99c9c86b31f4a51bb80df791015e___ @ 0x140247AD4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c56a99c9c86b31f4a51bb80df791015.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c60b5cde057043c942c8baa7b280339a___ @ 0x140247B58 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c60b5cde057043c942c8baa7b280339.c)
 */

char __fastcall DirectComposition::CGenericMarshaler::EmitUpdateCommands(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 *v2; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rsi
  char v7; // dl
  void *v8; // rax
  char updated; // al
  void *v10; // rax
  _DWORD *v12; // r15
  char *v13; // rcx
  __int64 v14; // r15
  _QWORD *v15; // rcx
  char *v16; // rcx
  void *v17; // [rsp+50h] [rbp+30h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 7);
  v5 = &v2[*((_QWORD *)this + 8)];
  while ( v2 != v5 )
  {
    v6 = *v2;
    if ( !*(_BYTE *)(*v2 + 5) )
      goto LABEL_28;
    v7 = *(_BYTE *)(v6 + 4);
    if ( !v7 )
    {
      v17 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v17) )
        return 0;
      v16 = (char *)v17;
      *(_DWORD *)v17 = 28;
      *(_OWORD *)(v16 + 4) = 0LL;
      *(_QWORD *)(v16 + 20) = 0LL;
      *((_DWORD *)v16 + 1) = 258;
      *((_DWORD *)v16 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v16 + 3) = *(_DWORD *)v6;
      *(_QWORD *)(v16 + 20) = *(_QWORD *)(v6 + 8);
      goto LABEL_27;
    }
    switch ( *(_BYTE *)(v6 + 4) )
    {
      case 1:
        v14 = 0LL;
        v17 = 0LL;
        if ( v7 == 1 )
          v14 = v6;
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v17) )
          return 0;
        v15 = v17;
        *(_DWORD *)v17 = 16;
        v15[1] = 0LL;
        *((_DWORD *)v15 + 1) = 179;
        *((_DWORD *)v15 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v15 + 3) = *(_DWORD *)(v14 + 8);
        break;
      case 2:
        v12 = 0LL;
        v17 = 0LL;
        if ( v7 == 2 )
          v12 = (_DWORD *)v6;
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v17) )
          return 0;
        v13 = (char *)v17;
        *(_DWORD *)v17 = 20;
        *(_OWORD *)(v13 + 4) = 0LL;
        *((_DWORD *)v13 + 1) = 256;
        *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v13 + 3) = *v12;
        *((_DWORD *)v13 + 4) = v12[2];
        break;
      case 3:
        v10 = 0LL;
        if ( v7 == 3 )
          v10 = (void *)*v2;
        v17 = v10;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c56a99c9c86b31f4a51bb80df791015e___(
                    (__int64)this,
                    a2,
                    (_DWORD **)&v17);
LABEL_15:
        if ( !updated )
          return 0;
        break;
      case 4:
        v8 = 0LL;
        if ( v7 == 4 )
          v8 = (void *)*v2;
        v17 = v8;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c60b5cde057043c942c8baa7b280339a___(
                    (__int64)this,
                    a2,
                    (__int64)&v17);
        goto LABEL_15;
    }
LABEL_27:
    *(_BYTE *)(v6 + 5) = 0;
LABEL_28:
    ++v2;
  }
  return 1;
}
