/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x140AEFD20
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140396C50 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPdcNotifyMediaBufferingUpdate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E677D8;
  if ( qword_140E677D8 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
