/*
 * XREFs of PostThreadEvent @ 0x14021BF58
 * Callers:
 *     NtMITPostThreadEventMessage @ 0x1401E1340 (NtMITPostThreadEventMessage.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall PostThreadEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64, __int64, _QWORD, __int64, __int64); // rax
  bool result; // al
  _BYTE v12[8]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12, a2, a3);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9)
                                                                                                  + 48)
                                                                                      + 4360LL);
  if ( v10 )
    LODWORD(v10) = v10(30LL, a1, a2, a3, a4, a5);
  result = (_DWORD)v10 != 0;
  if ( v12[0] )
    --*(_DWORD *)(v13 + 28);
  return result;
}
