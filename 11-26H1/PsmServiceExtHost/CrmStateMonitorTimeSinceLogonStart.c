/*
 * XREFs of CrmStateMonitorTimeSinceLogonStart @ 0x1800775B4
 * Callers:
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceLogonStart(__int64 a1)
{
  _DWORD *v1; // r9
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // r9
  void *v6; // r10
  int v7; // edi
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  *v1 = 0;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  v7 = TpAllocTimer(a1 + 72, CrmStateMonitorTimeSinceLogonCallback, a1, 0LL);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 64) = 30LL;
    v10 = -300000000LL;
    TpSetTimer(v8, &v10, 0LL, 0LL);
  }
  return (unsigned int)v7;
}
