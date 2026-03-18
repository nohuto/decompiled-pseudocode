/*
 * XREFs of RIMValidateAllCollectionUsages @ 0x14020569C
 * Callers:
 *     RIMIsParallelDevice @ 0x1401703D8 (RIMIsParallelDevice.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1401706F8 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMIsValueCapsEqual @ 0x1401927D4 (RIMIsValueCapsEqual.c)
 *     RIMIsButtonCapsEqual @ 0x1401991AC (RIMIsButtonCapsEqual.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  USHORT v18[2]; // [rsp+30h] [rbp-20h] BYREF
  USHORT v19; // [rsp+34h] [rbp-1Ch] BYREF
  int v20; // [rsp+38h] [rbp-18h]
  PVOID Buffer; // [rsp+40h] [rbp-10h] BYREF
  PVOID v22; // [rsp+48h] [rbp-8h] BYREF

  v6 = 0;
  Buffer = 0LL;
  v18[0] = 0;
  v22 = 0LL;
  v19 = 0;
  if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(a5, a6, v18, (char **)&Buffer, &v19, (char **)&v22) == 1114112 )
  {
    if ( !v18[0] )
    {
      v20 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1832);
    }
    if ( !Buffer )
    {
      v20 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1833);
    }
    if ( !v19 )
    {
      v20 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1834);
    }
    if ( !v22 )
    {
      v20 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1835);
    }
    if ( v18[0] == a2
      && (unsigned int)RIMIsValueCapsEqual(a1, (__int64)Buffer, a2)
      && v19 == a4
      && (unsigned int)RIMIsButtonCapsEqual(a3, (__int64)v22, a4) )
    {
      v6 = 1;
    }
    GreDeleteFastMutex((char *)Buffer, v11, v12, v13);
    GreDeleteFastMutex((char *)v22, v14, v15, v16);
  }
  return v6;
}
