/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x140AECD10
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140394ED0 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPdcNotifyMediaBufferingUpdate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E67578;
  if ( qword_140E67578 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
