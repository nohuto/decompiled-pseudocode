/*
 * XREFs of PpmEventIdleStateChange @ 0x1404D12CC
 * Callers:
 *     PoIdle @ 0x1402F6ED0 (PoIdle.c)
 *     PpmTracePerfIdleRundown @ 0x1404D11E0 (PpmTracePerfIdleRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventIdleStateChange(int a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 GroupSetMember; // [rsp+38h] [rbp-30h]
  _QWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF

  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
  {
    v3[0] = a1;
    v3[1] = a2;
    v5[1] = 16LL;
    GroupSetMember = KeGetCurrentPrcb()->GroupSetMember;
    v5[0] = v3;
    return EtwTraceKernelEvent((int)v5, 1, 0x80008000, 4661, 1538);
  }
  return result;
}
