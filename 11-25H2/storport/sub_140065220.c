/*
 * XREFs of sub_140065220 @ 0x140065220
 * Callers:
 *     <none>
 * Callees:
 *     sub_140033D74 @ 0x140033D74 (sub_140033D74.c)
 *     sub_140039148 @ 0x140039148 (sub_140039148.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140065220(_QWORD *a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *v2; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v3; // rbx
  void (__fastcall *v4)(_QWORD); // rax

  v2 = (PEX_RUNDOWN_REF_CACHE_AWARE *)sub_140039148(*(_BYTE **)(*a1 - 16LL));
  v3 = v2;
  if ( v2 && *(_DWORD *)v2 == 1094997074 && (int)sub_140033D74((__int64)v2) >= 0 )
  {
    v4 = (void (__fastcall *)(_QWORD))a1[1];
    if ( v4 )
      v4(*a1);
    ExReleaseRundownProtectionCacheAware(v3[42]);
  }
}
