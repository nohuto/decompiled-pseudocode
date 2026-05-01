/*
 * XREFs of ??4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x18001FAEC
 * Callers:
 *     ??0?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18001AFD8 (--0-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??4?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x18012E8F0 (--4-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::StoredCallContextInfo::operator=(__int64 a1, __int64 a2)
{
  bool v2; // zf
  void **v3; // rsi
  char v6; // al
  __int64 result; // rax
  void *v8; // rbx
  HANDLE ProcessHeap; // rax

  v2 = *(_BYTE *)(a1 + 24) == 0;
  v3 = (void **)(a1 + 16);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  if ( !v2 )
  {
    v8 = *v3;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
    *(_BYTE *)(a1 + 24) = 0;
  }
  *v3 = 0LL;
  *v3 = *(void **)(a2 + 16);
  v6 = *(_BYTE *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = v6;
  result = a1;
  *(_BYTE *)(a2 + 24) = 0;
  return result;
}
