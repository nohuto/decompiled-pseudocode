/*
 * XREFs of ?Destroy@CBatchCommand@@AEAAXXZ @ 0x1800C2580
 * Callers:
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x1800C24BC (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800C24F0 (--1-$out_param_t@V-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@@de.c)
 *     ??1?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ @ 0x1800C2540 (--1-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchCommand::Destroy(CBatchCommand *this)
{
  int v2; // ecx
  char *v3; // rsi
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  HANDLE ProcessHeap; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)this;
  if ( v2 )
  {
    if ( v2 == 4 )
    {
      v3 = (char *)*((_QWORD *)this + 12);
      v4 = (_DWORD *)((char *)this + 104);
      if ( (char *)this + 104 != v3 )
      {
        if ( v3 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v3);
        }
        *((_QWORD *)this + 12) = v4;
        *v4 = 0;
      }
      v5 = *((_QWORD *)this + 1);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      v7 = v2 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 1);
          return;
        }
        v9 = v8 - 1;
        if ( v9 && v9 != 2 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 1);
    }
  }
}
