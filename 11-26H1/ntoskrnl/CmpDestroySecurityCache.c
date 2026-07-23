/*
 * XREFs of CmpDestroySecurityCache @ 0x1408BFF6C
 * Callers:
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409C9150 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmpDestroySecurityCache(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdx

  result = *(unsigned int *)(a1 + 1880);
  v2 = 0;
  if ( (_DWORD)result )
  {
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1896) + 16LL * v2 + 8);
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_QWORD *)(v5 + 8) != v4 + 8 || (v6 = *(_QWORD **)(v4 + 16), *v6 != v4 + 8) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      guard_dispatch_icall_no_overrides(v4, (unsigned int)(*(_DWORD *)(v4 + 24) + 32));
      result = *(unsigned int *)(a1 + 1880);
      ++v2;
    }
    while ( v2 < (unsigned int)result );
    if ( (_DWORD)result )
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 1896), (unsigned int)(16 * *(_DWORD *)(a1 + 1884)));
  }
  *(_QWORD *)(a1 + 1896) = 0LL;
  *(_QWORD *)(a1 + 1880) = 0LL;
  return result;
}
