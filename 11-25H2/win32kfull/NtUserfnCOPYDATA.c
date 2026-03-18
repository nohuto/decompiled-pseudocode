/*
 * XREFs of NtUserfnCOPYDATA @ 0x1401A9A50
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnCOPYDATA(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  __int64 v10; // rdx
  __int64 v11; // r10
  volatile void *v12; // rcx
  __int64 UserSessionState; // rax
  SIZE_T Length[2]; // [rsp+38h] [rbp-20h] BYREF
  volatile void *Address; // [rsp+48h] [rbp-10h]

  v8 = a2;
  *(_OWORD *)Length = 0LL;
  Address = 0LL;
  PtiCurrent(a1, a2);
  v11 = 0LL;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    *(_OWORD *)Length = *(_OWORD *)a4;
    Address = *(volatile void **)(a4 + 16);
    v12 = Address;
    if ( Address )
      ProbeForRead(Address, LODWORD(Length[1]), 1u);
    UserSessionState = W32GetUserSessionState(v12, v10);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, SIZE_T *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 70920))(
             a1,
             v8,
             a3,
             Length,
             a5);
  }
  return v11;
}
