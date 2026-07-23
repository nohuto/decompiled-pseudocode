/*
 * XREFs of SeSecurityModelQueryInformation @ 0x14077D87C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x14063E83C (SepIsDeviceOwnerProtectionDowngradeAllowed.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall SeSecurityModelQueryInformation(void *a1, size_t Size, _DWORD *a3, char a4)
{
  int Src[8]; // [rsp+28h] [rbp-20h] BYREF

  Src[0] = 0;
  if ( (_DWORD)Size != 4 )
    return 3221225476LL;
  if ( a4 )
    RtlSetUserMemory(a1);
  else
    RtlSetVolatileMemory(a1, 0, 4uLL);
  if ( SepIsDeviceOwnerProtectionDowngradeAllowed() )
  {
    Src[0] = 2;
    if ( a4 )
      RtlWriteULongToUser(a1, 2LL);
    else
      RtlCopyVolatileMemory(a1, Src, 4uLL);
  }
  *a3 = 4;
  return 0LL;
}
