/*
 * XREFs of RIMValidateAllCollectionUsages @ 0x1401E4CBC
 * Callers:
 *     RIMIsParallelDevice @ 0x14013F814 (RIMIsParallelDevice.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMIsValueCapsEqual @ 0x1401557F8 (RIMIsValueCapsEqual.c)
 *     RIMIsButtonCapsEqual @ 0x14015A360 (RIMIsButtonCapsEqual.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1401E493C (RIMRetrieveAllLinkIndexUsages.c)
 */

__int64 __fastcall RIMValidateAllCollectionUsages(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        USHORT a5,
        struct _HIDP_PREPARSED_DATA *a6)
{
  unsigned int v6; // ebx
  USHORT v12[2]; // [rsp+30h] [rbp-20h] BYREF
  USHORT v13; // [rsp+34h] [rbp-1Ch] BYREF
  int v14; // [rsp+38h] [rbp-18h]
  PVOID Buffer; // [rsp+40h] [rbp-10h] BYREF
  PVOID v16; // [rsp+48h] [rbp-8h] BYREF

  v6 = 0;
  Buffer = 0LL;
  v12[0] = 0;
  v16 = 0LL;
  v13 = 0;
  if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(a5, a6, v12, (char **)&Buffer, &v13, (char **)&v16) == 1114112 )
  {
    if ( !v12[0] )
    {
      v14 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1832);
    }
    if ( !Buffer )
    {
      v14 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1833);
    }
    if ( !v13 )
    {
      v14 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1834);
    }
    if ( !v16 )
    {
      v14 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1835);
    }
    if ( v12[0] == a2
      && (unsigned int)RIMIsValueCapsEqual(a1, (__int64)Buffer, a2)
      && v13 == a4
      && (unsigned int)RIMIsButtonCapsEqual(a3, (__int64)v16, a4) )
    {
      v6 = 1;
    }
    GreDeleteFastMutex((char *)Buffer);
    GreDeleteFastMutex((char *)v16);
  }
  return v6;
}
