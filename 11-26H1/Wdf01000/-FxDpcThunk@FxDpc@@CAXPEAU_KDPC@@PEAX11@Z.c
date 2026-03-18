/*
 * XREFs of ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1400602A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxDpc::FxDpcThunk(
        _KDPC *Dpc,
        unsigned __int64 DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  __int64 v5; // rdx
  void (__fastcall **v6)(unsigned __int64); // rdi
  void (__fastcall *v7)(unsigned __int64, __int64, __int64, __int64, char); // rax
  _QWORD *v8; // r14
  __int64 v9; // rcx
  _WORD *v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(DeferredContext + 16);
  if ( *(_BYTE *)(v5 + 348) )
    *(_QWORD *)((unsigned int)(unk_1400C9080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C9070) = v5;
  v6 = (void (__fastcall **)(unsigned __int64))(DeferredContext + 208);
  if ( *(_QWORD *)(DeferredContext + 208) )
  {
    v7 = *(void (__fastcall **)(unsigned __int64, __int64, __int64, __int64, char))(unk_1400C90A8 + 8LL);
    if ( v7 )
      v7(DeferredContext + 208, 8LL, 2164260864LL, 3938LL, 2);
    v8 = (_QWORD *)(DeferredContext + 192);
    v9 = *(_QWORD *)(DeferredContext + 192);
    v10 = (_WORD *)(DeferredContext + 10);
    v11 = DeferredContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( v9 )
    {
      v13 = 0;
      (*(void (__fastcall **)(__int64, char *, void *, void *))(*(_QWORD *)v9 + 16LL))(
        v9,
        &v13,
        SystemArgument1,
        SystemArgument2);
      if ( !*v10 )
        v11 = 0LL;
      (*v6)(v11);
      LOBYTE(v12) = v13;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 24LL))(*v8, v12);
    }
    else
    {
      if ( !*v10 )
        v11 = 0LL;
      ((void (__fastcall *)(unsigned __int64, __int64, void *, void *))*v6)(v11, v5, SystemArgument1, SystemArgument2);
    }
  }
}
