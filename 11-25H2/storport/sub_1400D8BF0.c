/*
 * XREFs of sub_1400D8BF0 @ 0x1400D8BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140053BCC @ 0x140053BCC (sub_140053BCC.c)
 *     sub_1400CA35C @ 0x1400CA35C (sub_1400CA35C.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_1400D8BF0(_QWORD *a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *v2; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v3; // rbx
  void (__fastcall *v4)(_QWORD); // rax

  v2 = (PEX_RUNDOWN_REF_CACHE_AWARE *)sub_140053BCC(*(_BYTE **)(*a1 - 16LL));
  v3 = v2;
  if ( v2 && *(_DWORD *)v2 == 1314275652 && (int)sub_1400CA35C((__int64)v2) >= 0 )
  {
    v4 = (void (__fastcall *)(_QWORD))a1[1];
    if ( v4 )
      v4(*a1);
    ExReleaseRundownProtectionCacheAware(v3[19]);
  }
}
