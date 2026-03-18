/*
 * XREFs of PostThreadEvent @ 0x140216A38
 * Callers:
 *     NtMITPostThreadEventMessage @ 0x1401BB050 (NtMITPostThreadEventMessage.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140039698 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

char __fastcall PostThreadEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  void (__fastcall *v11)(__int64, __int64, __int64, _QWORD, __int64, __int64); // rax
  char v12; // r8
  _BYTE v14[24]; // [rsp+40h] [rbp-18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  v11 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                                   v10,
                                                                                                   v9)
                                                                                               + 48)
                                                                                   + 4808LL);
  if ( v11 )
    v11(30LL, a1, a2, a3, a4, a5);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  return v12;
}
