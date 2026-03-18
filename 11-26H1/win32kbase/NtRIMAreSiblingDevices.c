/*
 * XREFs of NtRIMAreSiblingDevices @ 0x1401FEFC0
 * Callers:
 *     <none>
 * Callees:
 *     RIMAreSiblingDevices @ 0x140200BE0 (RIMAreSiblingDevices.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x140227898 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtRIMAreSiblingDevices(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // edi
  unsigned int v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  v8 = 0;
  v7 = RIMAreSiblingDevices(a1, a2, &v8);
  if ( v7 >= 0 )
    RtlWriteULongToUser(a3, v8);
  return (unsigned int)v7;
}
