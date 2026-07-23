/*
 * XREFs of HalpDmaControllerInterruptRoutine @ 0x1404EC300
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpDmaControllerInterruptRoutine(__int64 a1, __int64 a2)
{
  char v3; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // zf
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h]

  v8 = 0;
  v9 = 0;
  v3 = 0;
  while ( (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 64), &v8) )
  {
    v3 = 1;
    v5 = *(_QWORD *)(a2 + 56);
    v6 = 160LL * v8;
    v7 = *(_QWORD *)(v6 + v5 + 8) == 0LL;
    *(_DWORD *)(v6 + v5 + 32) = v9;
    *(_BYTE *)(v6 + v5 + 6) = 1;
    if ( !v7 )
      KiInsertQueueDpc(v5 + 40 + v6, 0LL, 0LL, 0LL, 0);
  }
  return v3;
}
