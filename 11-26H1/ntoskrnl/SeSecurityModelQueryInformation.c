/*
 * XREFs of SeSecurityModelQueryInformation @ 0x14077A94C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x14063B720 (SepIsDeviceOwnerProtectionDowngradeAllowed.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
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
