/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x1801634D0
 * Callers:
 *     RtlpGetCurrentProcessorNumberUninitialized @ 0x180100440 (RtlpGetCurrentProcessorNumberUninitialized.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlGetCurrentProcessorNumber(__int64 _RCX)
{
  unsigned __int64 result; // rax
  unsigned __int64 Mask; // rdx
  char v3; // zf
  unsigned __int32 v4; // eax

  if ( RtlpGetCurrentProcessorNumberHow == 1 )
  {
    __asm { rdpid   rcx }
    goto LABEL_5;
  }
  if ( RtlpGetCurrentProcessorNumberHow == 2 )
  {
    __asm { rdtscp }
LABEL_5:
    result = (unsigned __int8)_RCX;
    Mask = NtCurrentTeb()->PrimaryGroupAffinity.Mask;
    if ( _bittest64((const __int64 *)&Mask, (unsigned __int8)_RCX) )
      return result;
    return RtlpGetCurrentProcessorNumberRemappingRequired(result, Mask);
  }
  if ( RtlpGetCurrentProcessorNumberHow != 3 )
    return RtlpGetCurrentProcessorNumberUninitialized();
  v4 = __segmentlimit(0x53u);
  if ( !v3 )
    return ZwGetCurrentProcessorNumber();
  result = v4 >> 14;
  Mask = NtCurrentTeb()->PrimaryGroupAffinity.Mask;
  if ( !_bittest64((const __int64 *)&Mask, result) )
    return RtlpGetCurrentProcessorNumberRemappingRequired(result, Mask);
  return result;
}
