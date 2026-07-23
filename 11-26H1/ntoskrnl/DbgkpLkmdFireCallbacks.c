/*
 * XREFs of DbgkpLkmdFireCallbacks @ 0x14078E198
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14078DBB8 (DbgkCaptureLiveDump.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DbgkpLkmdFireCallbacks(__int64 a1, signed __int64 a2, __int64 a3)
{
  char v3; // si
  int v5; // r15d
  int SessionId; // ebx
  _KPROCESS **p_Process; // rdi
  __int64 v9; // r14
  struct _EX_RUNDOWN_REF *v10; // rbp
  int v11; // eax
  __int64 v12; // rdx

  v3 = 1;
  v5 = a2;
  if ( (a2 & 1) != 0 )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( SessionId != (unsigned int)PsGetSessionIdEx(a3) || SessionId == -1 )
      v3 = 0;
  }
  p_Process = &stru_140E3EAA8.SavedApcState.Process;
  v9 = 8LL;
  do
  {
    v10 = ExReferenceCallBackBlock((signed __int64 *)p_Process, a2);
    if ( v10 )
    {
      v11 = *((_DWORD *)p_Process + 2);
      if ( (v11 & v5) != 0 && ((v11 & 4) == 0 || v3) )
      {
        guard_dispatch_icall_no_overrides(a1 + 0x4000, a2);
        if ( (int)guard_dispatch_icall_no_overrides(
                    (__int64)DbgkpLkmdSnapData,
                    (__int64)DbgkpLkmdIsMemoryBlockPresentFromCallback) < 0 )
          guard_dispatch_icall_no_overrides(a1 + 0x4000, v12);
      }
      ExDereferenceCallBackBlock((signed __int64 *)p_Process, v10);
    }
    p_Process += 2;
    --v9;
  }
  while ( v9 );
}
