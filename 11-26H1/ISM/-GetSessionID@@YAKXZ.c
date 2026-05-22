/*
 * XREFs of ?GetSessionID@@YAKXZ @ 0x180096BD4
 * Callers:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180057EC8 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetSessionID(void)
{
  _QWORD ProcessInformation[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG ReturnLength; // [rsp+70h] [rbp+8h] BYREF

  ReturnLength = 0;
  memset(ProcessInformation, 0, 48);
  if ( NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessBasicInformation,
         ProcessInformation,
         0x30u,
         &ReturnLength) )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return *(unsigned int *)(ProcessInformation[1] + 704LL);
  }
}
