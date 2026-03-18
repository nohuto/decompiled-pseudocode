/*
 * XREFs of HmgQueryAltLock @ 0x140030250
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x14002F1A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgQueryAltLock(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 SessionState; // rax

  v1 = a1;
  SessionState = W32GetSessionState(a1);
  return *(unsigned int *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(SessionState + 88) + 8LL)
                                                                     + 96LL))(
                             *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 8LL),
                             (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000)
                         + 8);
}
