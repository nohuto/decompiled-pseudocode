/*
 * XREFs of IopCsqCancelRoutine @ 0x1404D6580
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopCsqCancelRoutine(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  v3 = *(_QWORD *)(a2 + 144);
  if ( *(_DWORD *)v3 == 1 )
  {
    v5 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)v3 - 2);
    if ( (unsigned int)result > 1 )
      return result;
    v5 = *(_QWORD *)(a2 + 144);
  }
  *(_QWORD *)(v5 + 56) = 0LL;
  guard_dispatch_icall_no_overrides(v5, &v7);
  guard_dispatch_icall_no_overrides(v5, a2);
  if ( v3 != v5 )
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(a2 + 144) = 0LL;
  }
  LOBYTE(v6) = v7;
  guard_dispatch_icall_no_overrides(v5, v6);
  return guard_dispatch_icall_no_overrides(v5, a2);
}
