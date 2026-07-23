/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x140AB6238
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x140806800 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140AB60E8 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x140B63510 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  HANDLE Flink; // rcx
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Flink = CurrentServerSiloGlobals[76].Flink;
  Handle = Flink;
  if ( Flink )
  {
LABEL_2:
    *a1 = Flink;
    return 0LL;
  }
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
  if ( (int)result >= 0 )
  {
    Flink = Handle;
    if ( !RtlpDisableIFEOCaching )
    {
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)&CurrentServerSiloGlobals[76],
             (signed __int64)Handle,
             0LL) )
      {
        ZwClose(Flink);
        Flink = CurrentServerSiloGlobals[76].Flink;
      }
    }
    goto LABEL_2;
  }
  return result;
}
