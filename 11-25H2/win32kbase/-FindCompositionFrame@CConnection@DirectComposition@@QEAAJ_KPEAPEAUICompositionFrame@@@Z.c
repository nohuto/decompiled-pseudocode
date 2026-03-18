/*
 * XREFs of ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAUICompositionFrame@@@Z @ 0x1400C7DAC
 * Callers:
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400BF130 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400C0490 (NtDCompositionGetFrameSurfaceUpdates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::FindCompositionFrame(
        DirectComposition::CConnection *this,
        __int64 a2,
        struct ICompositionFrame **a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)this + 24);
  result = 3221226021LL;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64, struct ICompositionFrame **))(*(_QWORD *)v3 + 32LL))(v3, a2, a3);
  return result;
}
