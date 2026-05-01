/*
 * XREFs of McGenEventTracingUnregister2 @ 0x1802C51AC
 * Callers:
 *     AutoUnregisterMicrosoft_Windows_Deplorch @ 0x1802C51A0 (AutoUnregisterMicrosoft_Windows_Deplorch.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 McGenEventTracingUnregister2()
{
  ULONG v0; // ebx

  if ( !McGenTracingSupportInit || !Microsoft_Windows_Deplorch_Context )
    return 0LL;
  if ( McGenPreVista )
  {
    v0 = UnregisterTraceGuids(Microsoft_Windows_Deplorch_Context);
    dword_1808D5F70 = 0;
    byte_1808D5F78 = 0;
    qword_1808D5F58 = 0LL;
    if ( word_1808D5F7A )
      memset_0(off_1808D5F80, 0, 4LL * (((unsigned __int16)word_1808D5F7A - 1) / 32 + 1));
  }
  else
  {
    v0 = ((__int64 (*)(void))PfnEventUnregister)();
  }
  Microsoft_Windows_Deplorch_Context = 0LL;
  return v0;
}
