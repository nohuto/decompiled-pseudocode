/*
 * XREFs of ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800711C0
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800702C0 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBatchOptimizer::AppendEntryToLayer(
        CBatchOptimizer *this,
        int a2,
        _OWORD *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v8; // rsi
  char *v9; // rbx
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  char *v12; // rbx
  void (__fastcall ***v13)(_QWORD); // rdi
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  int *v22; // rdi
  __int64 v23; // rcx
  void (__fastcall ***v24)(_QWORD); // rdx
  __int64 v25; // r15
  int v26; // r8d
  __int64 i; // rdx

  v8 = a2;
  v9 = (char *)this + 520 * *((int *)this + a2 + 12);
  v10 = *a5;
  v11 = v9 + 100;
  if ( *a5 )
  {
    if ( *v11 )
    {
      *a5 = 0LL;
      v19 = *((_QWORD *)v9 + 14);
      *((_QWORD *)v9 + 14) = v10;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    }
    else if ( !*((_QWORD *)v9 + 14) )
    {
      if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL))(v10) & 0x10000) != 0 )
      {
        v20 = *a5;
        *a5 = 0LL;
        v21 = *((_QWORD *)v9 + 14);
        *((_QWORD *)v9 + 14) = v20;
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      }
      else
      {
        if ( !(_DWORD)v8 )
          goto LABEL_17;
        if ( !*((_DWORD *)this + 130 * *((int *)this + v8 + 11) + 26) )
          *((_BYTE *)this + 4240) = 1;
      }
    }
  }
  if ( !(_DWORD)v8 || *v11 != 20 )
  {
LABEL_17:
    if ( *((_DWORD *)v9 + 24) != 20 )
      goto LABEL_18;
  }
  v12 = (char *)this + 520 * *((int *)this + v8 + 12);
  if ( *((_DWORD *)v12 + 25) )
    *((_DWORD *)v12 + 26) = 1;
  if ( (_DWORD)v8 )
  {
    CBatchOptimizer::FlushBottomLayer(this);
    v22 = (int *)((char *)this + 48);
    v23 = 520LL * *((int *)this + 12);
    *(_OWORD *)((char *)this + v23 + 80) = *((_OWORD *)v12 + 5);
    v24 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v12 + 14);
    v25 = *(_QWORD *)((char *)this + v23 + 112);
    *(_QWORD *)((char *)this + v23 + 112) = v24;
    if ( v24 )
      (**v24)(v24);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    v26 = *v22;
    for ( i = 0LL; i != v8; ++i )
    {
      *v22 = v22[1];
      ++v22;
    }
    *((_DWORD *)this + v8 + 12) = v26;
  }
  else
  {
    v13 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v12 + 14);
    CBatchOptimizer::FlushBottomLayer(this);
    v14 = *((_QWORD *)v12 + 14);
    *((_QWORD *)v12 + 14) = v13;
    if ( v13 )
      (**v13)(v13);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
LABEL_18:
  v15 = *((int *)this + v8 + 12);
  v16 = *a4;
  *a4 = 0LL;
  result = (__int64)this + 520 * v15;
  v18 = *(unsigned int *)(result + 96);
  *(_DWORD *)(result + 96) = v18 + 1;
  *(_QWORD *)(result + 8 * v18 + 120) = v16;
  if ( (_DWORD)v8 )
    *(_OWORD *)(result + 16LL * *(unsigned int *)(result + 100) + 280) = *a3;
  ++*(_DWORD *)(result + 100);
  return result;
}
