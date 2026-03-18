/*
 * XREFs of RestoreFromPurge @ 0x14011BAE8
 * Callers:
 *     ?RestoreFromPurge@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ @ 0x14011BAD0 (-RestoreFromPurge@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RestoreFromPurge(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = 0; (unsigned int)i < *(_DWORD *)(a1 + 136); result = i )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 128LL))(v3);
    ++i;
  }
  return result;
}
