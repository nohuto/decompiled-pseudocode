/*
 * XREFs of PspCallThreadNotifyRoutines @ 0x1409E7E7C
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     PspInitializeThunkContext @ 0x1409E7B48 (PspInitializeThunkContext.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PspCallThreadNotifyRoutines(_QWORD *a1, signed __int64 a2, char a3)
{
  __int64 v3; // r12
  _RTL_RUN_ONCE *v5; // rdi
  __int64 v6; // rsi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbp
  int v9; // eax
  ULONG_PTR v10; // rbx
  _RTL_RUN_ONCE *v11; // rdi
  __int64 v12; // rsi
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rbp
  ULONG_PTR Count; // rbx
  _RTL_RUN_ONCE *v16; // rdi
  __int64 v17; // rsi
  struct _EX_RUNDOWN_REF *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rbp
  ULONG_PTR v20; // rbx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[206];
  v21 = 0LL;
  if ( (_BYTE)a2 )
  {
    if ( a3 )
    {
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v11 = &PspCreateThreadNotifyRoutine;
        v12 = 64LL;
        do
        {
          v13 = ExReferenceCallBackBlock((signed __int64 *)v11, a2);
          v14 = v13;
          if ( v13 )
          {
            if ( (v13[2].Count & 1) != 0 )
            {
              Count = v13[1].Count;
              KeCallbackValidationPrologue((__int64)&v21);
              guard_dispatch_icall_no_overrides(*(_QWORD *)(a1[68] + 464LL), a1[162]);
              KeCallbackValidationEpilogue((__int64)&v21, Count, 0x107u);
            }
            ExDereferenceCallBackBlock((signed __int64 *)v11, v14);
          }
          ++v11;
          --v12;
        }
        while ( v12 );
      }
    }
    else if ( (PspNotifyEnableMask & 8) != 0 )
    {
      v5 = &PspCreateThreadNotifyRoutine;
      v6 = 64LL;
      do
      {
        v7 = ExReferenceCallBackBlock((signed __int64 *)v5, a2);
        v8 = v7;
        if ( v7 )
        {
          v9 = v7[2].Count;
          if ( (v9 & 1) == 0 && (!v3 || (v9 & 2) != 0) )
          {
            v10 = v8[1].Count;
            KeCallbackValidationPrologue((__int64)&v21);
            guard_dispatch_icall_no_overrides(*(_QWORD *)(a1[68] + 464LL), a1[162]);
            KeCallbackValidationEpilogue((__int64)&v21, v10, 0x108u);
          }
          ExDereferenceCallBackBlock((signed __int64 *)v5, v8);
        }
        ++v5;
        --v6;
      }
      while ( v6 );
    }
  }
  else if ( (PspNotifyEnableMask & 0x10) != 0 || (PspNotifyEnableMask & 8) != 0 )
  {
    v16 = &PspCreateThreadNotifyRoutine;
    v17 = 64LL;
    do
    {
      v18 = ExReferenceCallBackBlock((signed __int64 *)v16, a2);
      v19 = v18;
      if ( v18 )
      {
        if ( !v3 || (v18[2].Count & 2) != 0 )
        {
          v20 = v18[1].Count;
          KeCallbackValidationPrologue((__int64)&v21);
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1[68] + 464LL), a1[162]);
          KeCallbackValidationEpilogue((__int64)&v21, v20, 0x106u);
        }
        ExDereferenceCallBackBlock((signed __int64 *)v16, v19);
      }
      ++v16;
      --v17;
    }
    while ( v17 );
  }
}
