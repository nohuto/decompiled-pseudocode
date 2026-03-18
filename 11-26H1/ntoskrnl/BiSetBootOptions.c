/*
 * XREFs of BiSetBootOptions @ 0x1408941E0
 * Callers:
 *     BiExportEfiBootManager @ 0x140B37EA8 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootOptions @ 0x1407266F0 (ZwSetBootOptions.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BiSetBootOptions(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(22LL, &v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootOptions(a1, a2);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot options. Status: %x", (unsigned int)v5);
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v4;
}
