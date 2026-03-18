/*
 * XREFs of Simulator_AsyncEvalObjectCallBack @ 0x14006C5E0
 * Callers:
 *     <none>
 * Callees:
 *     Simulator_Free_Arguments @ 0x14006C93C (Simulator_Free_Arguments.c)
 *     Simulator_TestNotifyRet @ 0x14006CD8C (Simulator_TestNotifyRet.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall Simulator_AsyncEvalObjectCallBack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v5)(__int64, _QWORD, __int64, __int64); // rdi
  __int64 v7; // r14
  unsigned int v9; // r15d
  int v10; // eax

  v5 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a4 + 48);
  v7 = *(_QWORD *)(a4 + 56);
  if ( *(_QWORD *)(a4 + 24) != a3 )
    __debugbreak();
  v9 = Simulator_TestNotifyRet((PVOID)a4);
  v10 = *(_DWORD *)(a4 + 4);
  if ( v10 == 1 || (unsigned int)(v10 - 2) <= 1 )
    Simulator_Free_Arguments(*(unsigned int *)(a4 + 32), *(_QWORD *)(a4 + 40));
  ExFreePoolWithTag((PVOID)a4, 0);
  if ( v5 )
    v5(a1, v9, a3, v7);
}
