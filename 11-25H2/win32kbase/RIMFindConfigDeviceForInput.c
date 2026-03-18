/*
 * XREFs of RIMFindConfigDeviceForInput @ 0x1401E0400
 * Callers:
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400B2938 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400B2DEC (RIMConfigurePointerDevice.c)
 * Callees:
 *     RIMIsParentCommon @ 0x14012AAD0 (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMFindConfigDeviceForInput(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // edi
  __int64 i; // rbx

  v4 = 0;
  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2334);
  *a4 = 0LL;
  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (*(_DWORD *)(i + 168) & 0x400) == 0
      && *(_DWORD *)(i + 48) == 3
      && (unsigned int)RIMIsParentCommon(
                         a3,
                         i,
                         a2,
                         *(_WORD *)(*(_QWORD *)(i + 440) + 110LL),
                         *(_WORD *)(*(_QWORD *)(i + 440) + 112LL)) )
    {
      v4 = 1;
      *a4 = i;
      return v4;
    }
  }
  return v4;
}
