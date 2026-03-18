/*
 * XREFs of KdpQuickMoveMemory @ 0x140C1216C
 * Callers:
 *     KdpGetContextEx @ 0x1405E3D50 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1405E3E34 (KdpSetContextEx.c)
 *     KdpSearchMemory @ 0x140C14CE4 (KdpSearchMemory.c)
 *     KdpReportExceptionStateChange @ 0x140C16F4C (KdpReportExceptionStateChange.c)
 *     KdpCopyContext @ 0x140C179C0 (KdpCopyContext.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     KdCopyToUser @ 0x140533EA0 (KdCopyToUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 */

unsigned __int8 __fastcall KdpQuickMoveMemory(char *a1, unsigned __int64 Src, int a3)
{
  char *v5; // rbx
  bool IsUserAddress; // bp
  unsigned __int8 result; // al
  unsigned __int8 i; // r14
  char Srca; // [rsp+50h] [rbp+18h] BYREF

  Srca = 0;
  v5 = (char *)Src;
  IsUserAddress = MmIsUserAddress(Src);
  result = MmIsUserAddress((unsigned __int64)a1);
  for ( i = result; a3; --a3 )
  {
    if ( IsUserAddress )
      KdCopyToUser((__int64)&Srca, (__int64)v5, 1LL);
    else
      RtlCopyVolatileMemory(&Srca, v5, 1uLL);
    if ( i )
      result = KdCopyToUser((__int64)a1, (__int64)&Srca, 1LL);
    else
      result = (unsigned __int8)RtlCopyVolatileMemory(a1, &Srca, 1uLL);
    ++v5;
    ++a1;
  }
  return result;
}
