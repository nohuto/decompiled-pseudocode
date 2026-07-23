/*
 * XREFs of SshpAddBlockerDataToCache @ 0x140ADCE98
 * Callers:
 *     SshNotifySystemSessionChange @ 0x140ADC854 (SshNotifySystemSessionChange.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall SshpAddBlockerDataToCache(ULONG *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  ULONG *v5; // rdx
  void *v6; // rcx

  v3 = 8LL * a1[1];
  *(_QWORD *)&a1[v3 + 4] = a2;
  *(_QWORD *)&a1[v3 + 2] = a3;
  v5 = &a1[v3 + 6];
  *(_OWORD *)v5 = 0LL;
  if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 16), (__int64)v5) < 0 )
  {
    v6 = *(void **)&a1[v3 + 8];
    if ( v6 )
      CmpFreeTransientPoolWithTag(v6, *a1);
  }
  else
  {
    ++a1[1];
  }
}
