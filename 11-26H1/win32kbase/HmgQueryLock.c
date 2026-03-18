/*
 * XREFs of HmgQueryLock @ 0x1401EDD90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgQueryLock(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 SessionState; // rax

  v1 = a1;
  SessionState = W32GetSessionState(a1);
  return (unsigned int)*(__int16 *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(SessionState + 88)
                                                                                            + 8LL)
                                                                              + 96LL))(
                                      *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 8LL),
                                      (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000)
                                  + 12);
}
