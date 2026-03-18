/*
 * XREFs of PspCallThreadNotifyRoutines @ 0x1409EB6AC
 * Callers:
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PspInitializeThunkContext @ 0x1409EB378 (PspInitializeThunkContext.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140435D80 (ExDereferenceCallBackBlock.c)
 *     KeCallbackValidationEpilogue @ 0x1404E07B8 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E921C (KeCallbackValidationPrologue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PspCallThreadNotifyRoutines(_QWORD *a1, signed __int64 a2, char a3)
{
  __int64 v3; // r12
  signed __int64 *v5; // rdi
  __int64 v6; // rsi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbp
  int v9; // eax
  ULONG_PTR v10; // rbx
  signed __int64 *p_PropagateBoostsEntry; // rdi
  __int64 v12; // rsi
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rbp
  ULONG_PTR Count; // rbx
  signed __int64 *v16; // rdi
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
        p_PropagateBoostsEntry = (signed __int64 *)&NormalizationListLock.PropagateBoostsEntry;
        v12 = 64LL;
        do
        {
          v13 = ExReferenceCallBackBlock(p_PropagateBoostsEntry, a2);
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
            ExDereferenceCallBackBlock(p_PropagateBoostsEntry, v14);
          }
          ++p_PropagateBoostsEntry;
          --v12;
        }
        while ( v12 );
      }
    }
    else if ( (PspNotifyEnableMask & 8) != 0 )
    {
      v5 = (signed __int64 *)&NormalizationListLock.PropagateBoostsEntry;
      v6 = 64LL;
      do
      {
        v7 = ExReferenceCallBackBlock(v5, a2);
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
          ExDereferenceCallBackBlock(v5, v8);
        }
        ++v5;
        --v6;
      }
      while ( v6 );
    }
  }
  else if ( (PspNotifyEnableMask & 0x10) != 0 || (PspNotifyEnableMask & 8) != 0 )
  {
    v16 = (signed __int64 *)&NormalizationListLock.PropagateBoostsEntry;
    v17 = 64LL;
    do
    {
      v18 = ExReferenceCallBackBlock(v16, a2);
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
        ExDereferenceCallBackBlock(v16, v19);
      }
      ++v16;
      --v17;
    }
    while ( v17 );
  }
}
