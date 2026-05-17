/*
 * XREFs of EtwEventSetInformation @ 0x180117E20
 * Callers:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 * Callees:
 *     EtwpTrackProviderBinary @ 0x180117EAC (EtwpTrackProviderBinary.c)
 */

__int64 __fastcall EtwEventSetInformation(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 2 )
    {
      if ( a3 && (unsigned int)(a4 - 3) <= 0xFFFC )
        return EtwpSetProviderTraits(a1, a3, a4);
      return 87LL;
    }
    if ( (_DWORD)a2 == 3 )
    {
      if ( a3 && a4 == 1 )
        return EtwpUseDescriptorType(a1, a3);
      return 87LL;
    }
    if ( (_DWORD)a2 != 4 )
      return 50LL;
  }
  if ( a4 )
    return 87LL;
  LOBYTE(a2) = (_DWORD)a2 == 4;
  return EtwpTrackProviderBinary(a1, a2);
}
