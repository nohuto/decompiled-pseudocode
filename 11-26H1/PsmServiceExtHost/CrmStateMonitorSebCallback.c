/*
 * XREFs of CrmStateMonitorSebCallback @ 0x18005E140
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x180020310 (CrmLogStateMonitorStateSet.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorSebCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, _QWORD *a5)
{
  unsigned int v6; // ebx
  BOOL v7; // ecx
  _OWORD *v8; // rax
  unsigned int *i; // rbx
  __int128 Src; // [rsp+20h] [rbp-69h] BYREF
  __int128 v12; // [rsp+30h] [rbp-59h]
  _DWORD v13[10]; // [rsp+40h] [rbp-49h] BYREF
  char v14[40]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  int v17; // [rsp+A0h] [rbp+17h]

  *(_QWORD *)&Src = 1LL;
  v12 = 0LL;
  *((_QWORD *)&Src + 1) = *a5;
  CempLockAcquireExclusive((__int64)(a4 + 2));
  memset_0(v13, 0, 0x68uLL);
  v6 = CrmStateMonitorStateSizeGet(*a4);
  memcpy_0(v14, *((const void **)a4 + 5), v6);
  memcpy_0(v13, &Src, v6);
  v7 = 1;
  if ( *a4 == 5 )
    v7 = v13[0] == 20 * (v13[0] / 0x14u);
  v16 = *((_QWORD *)a4 + 6);
  v15 = MEMORY[0x7FFE0008];
  if ( v7 )
    *((_QWORD *)a4 + 6) = MEMORY[0x7FFE0008];
  else
    v17 = 1;
  v8 = (_OWORD *)*((_QWORD *)a4 + 5);
  *v8 = Src;
  v8[1] = v12;
  for ( i = (unsigned int *)*((_QWORD *)a4 + 3); i != a4 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, __int128 *))i - 1))(i - 2, *a4, &Src);
  a4[4] = 0;
  RtlReleaseSRWLockExclusive(a4 + 2);
  CrmLogStateMonitorStateSet((int *)a4, (__int64)v13);
  return 0LL;
}
