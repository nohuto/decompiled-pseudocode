/*
 * XREFs of ViFilterIsDeviceExcluded @ 0x140C42480
 * Callers:
 *     VfFilterAttach @ 0x140C41D90 (VfFilterAttach.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

_BOOL8 __fastcall ViFilterIsDeviceExcluded(__int64 a1)
{
  __int64 v2; // rcx
  const UNICODE_STRING *v3; // rbx

  if ( *(PDRIVER_OBJECT *)(a1 + 8) != VfFilterDriverObject )
  {
    if ( !HviIsAnyHypervisorPresent() )
      return 0LL;
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
    if ( !v2 )
      return 0LL;
    v3 = (const UNICODE_STRING *)(v2 + 88);
    if ( !RtlEqualUnicodeString(&VfVidName, (PCUNICODE_STRING)(v2 + 88), 1u)
      && !RtlEqualUnicodeString(&VfSynth3DvscName, v3, 1u) )
    {
      return RtlEqualUnicodeString(&VfSynth3DvspName, v3, 1u) != 0;
    }
  }
  return 1LL;
}
