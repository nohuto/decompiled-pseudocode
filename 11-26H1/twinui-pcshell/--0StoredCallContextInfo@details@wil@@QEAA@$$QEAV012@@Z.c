/*
 * XREFs of ??0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z @ 0x1800AE938
 * Callers:
 *     ??0?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1800AE810 (--0-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z @ 0x180328874 (--0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::StoredCallContextInfo::StoredCallContextInfo(__int64 a1, __int64 a2)
{
  void **v2; // rsi
  bool v5; // zf
  char v6; // al
  __int64 result; // rax
  void *v8; // rbx
  HANDLE ProcessHeap; // rax

  v2 = (void **)(a1 + 16);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  v5 = *(_BYTE *)(a1 + 24) == 0;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  if ( !v5 )
  {
    v8 = *v2;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
    *(_BYTE *)(a1 + 24) = 0;
  }
  *v2 = 0LL;
  *v2 = *(void **)(a2 + 16);
  v6 = *(_BYTE *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = v6;
  result = a1;
  *(_BYTE *)(a2 + 24) = 0;
  return result;
}
