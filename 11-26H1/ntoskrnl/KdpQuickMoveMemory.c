/*
 * XREFs of KdpQuickMoveMemory @ 0x140C1816C
 * Callers:
 *     KdpGetContextEx @ 0x1405E66C0 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1405E67A4 (KdpSetContextEx.c)
 *     KdpSearchMemory @ 0x140C1ACE4 (KdpSearchMemory.c)
 *     KdpReportExceptionStateChange @ 0x140C1CF4C (KdpReportExceptionStateChange.c)
 *     KdpCopyContext @ 0x140C1D9C0 (KdpCopyContext.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     KdCopyToUser @ 0x140536320 (KdCopyToUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

void __fastcall KdpQuickMoveMemory(char *a1, unsigned __int64 Src, int a3)
{
  char *v5; // rbx
  bool IsUserAddress; // bp
  bool i; // r14
  char Srca; // [rsp+50h] [rbp+18h] BYREF

  Srca = 0;
  v5 = (char *)Src;
  IsUserAddress = MmIsUserAddress(Src);
  for ( i = MmIsUserAddress((unsigned __int64)a1); a3; --a3 )
  {
    if ( IsUserAddress )
      KdCopyToUser((__int64)&Srca, (__int64)v5, 1LL);
    else
      RtlCopyVolatileMemory(&Srca, v5, 1uLL);
    if ( i )
      KdCopyToUser((__int64)a1, (__int64)&Srca, 1LL);
    else
      RtlCopyVolatileMemory(a1, &Srca, 1uLL);
    ++v5;
    ++a1;
  }
}
