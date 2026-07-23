/*
 * XREFs of _PnpObjectListCallback @ 0x1408A36E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpObjectListCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v7; // edi
  unsigned int v8; // eax

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v7 = v4 + 1;
  if ( !*(_QWORD *)a4 || (unsigned __int8)guard_dispatch_icall_no_overrides(a1, (__int64)a3) )
  {
    *(_DWORD *)(a4 + 28) += v7;
    v8 = *(_DWORD *)(a4 + 24);
    if ( v8 > v7 )
    {
      RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 16), v8, a3, 0LL, 0LL, 0x900u);
      *(_QWORD *)(a4 + 16) += 2LL * v7;
      *(_DWORD *)(a4 + 24) -= v7;
    }
  }
  return 0LL;
}
