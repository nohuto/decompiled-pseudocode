/*
 * XREFs of CrmStateMonitorPostResumeUsageCallback @ 0x18005DE60
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x180020310 (CrmLogStateMonitorStateSet.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorPostResumeUsageCheck @ 0x18005E004 (CrmStateMonitorPostResumeUsageCheck.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeUsageCallback(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  unsigned int *v6; // rdi
  unsigned int v7; // ebx
  BOOL v8; // ecx
  unsigned int *i; // rbx
  _DWORD Src[4]; // [rsp+20h] [rbp-49h] BYREF
  _DWORD v12[10]; // [rsp+30h] [rbp-39h] BYREF
  char v13[40]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v14; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+90h] [rbp+27h]

  v3 = *a3;
  v4 = 96LL;
  if ( a2 != 24 )
    v4 = 120LL;
  v6 = (unsigned int *)(a1 - v4);
  CempLockAcquireExclusive(a1 - v4 + 8);
  if ( a2 == 24 )
    v6[(v6[42]++ & 3) + 38] = v3;
  else
    v6[(v6[47]++ & 3) + 43] = v3;
  Src[0] = CrmStateMonitorPostResumeUsageCheck(v6);
  if ( Src[0] )
  {
    memset_0(v12, 0, 0x68uLL);
    v7 = CrmStateMonitorStateSizeGet(*v6);
    memcpy_0(v13, *((const void **)v6 + 5), v7);
    memcpy_0(v12, Src, v7);
    v8 = 1;
    if ( *v6 == 5 )
      v8 = v12[0] == 20 * (v12[0] / 0x14u);
    v15 = *((_QWORD *)v6 + 6);
    v14 = MEMORY[0x7FFE0008];
    if ( v8 )
      *((_QWORD *)v6 + 6) = MEMORY[0x7FFE0008];
    else
      v16 = 1;
    **((_DWORD **)v6 + 5) = Src[0];
    for ( i = (unsigned int *)*((_QWORD *)v6 + 3); i != v6 + 6; i = *(unsigned int **)i )
      (*((void (__fastcall **)(unsigned int *, _QWORD, _DWORD *))i - 1))(i - 2, *v6, Src);
    CrmLogStateMonitorStateSet((int *)v6, (__int64)v12);
  }
  v6[4] = 0;
  return RtlReleaseSRWLockExclusive(v6 + 2);
}
