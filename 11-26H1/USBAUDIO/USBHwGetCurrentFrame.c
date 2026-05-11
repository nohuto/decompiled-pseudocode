/*
 * XREFs of USBHwGetCurrentFrame @ 0x1400021E0
 * Callers:
 *     USBType1AsyncEndpointStartPolling @ 0x14000DD48 (USBType1AsyncEndpointStartPolling.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall USBHwGetCurrentFrame(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 56LL);
  if ( !v4 )
    return 3221225659LL;
  result = (*(__int64 (__fastcall **)(_QWORD, int *))(v4 + 40))(*(_QWORD *)(v4 + 8), &v6);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v6;
  }
  return result;
}
