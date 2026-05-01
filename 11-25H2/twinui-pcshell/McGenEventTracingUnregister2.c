/*
 * XREFs of McGenEventTracingUnregister2 @ 0x1802CEA24
 * Callers:
 *     AutoUnregisterMicrosoft_Windows_Deplorch @ 0x1802D1720 (AutoUnregisterMicrosoft_Windows_Deplorch.c)
 * Callees:
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 McGenEventTracingUnregister2()
{
  ULONG v0; // ebx

  if ( !McGenTracingSupportInit || !Microsoft_Windows_Deplorch_Context )
    return 0LL;
  if ( McGenPreVista )
  {
    v0 = UnregisterTraceGuids(Microsoft_Windows_Deplorch_Context);
    dword_180895EB0 = 0;
    byte_180895EB8 = 0;
    qword_180895E98 = 0LL;
    if ( word_180895EBA )
      memset_0(off_180895EC0, 0, 4LL * (((unsigned __int16)word_180895EBA - 1) / 32 + 1));
  }
  else
  {
    v0 = ((__int64 (*)(void))PfnEventUnregister)();
  }
  Microsoft_Windows_Deplorch_Context = 0LL;
  return v0;
}
