/*
 * XREFs of MiInitializeLargeMdlLeafPfns @ 0x1406F3000
 * Callers:
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406F2DD0 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiInitializeLargeMdlLeafPfnsWorker @ 0x1406F3100 (MiInitializeLargeMdlLeafPfnsWorker.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiInitializeMdlLeafPfns @ 0x1406F3138 (MiInitializeMdlLeafPfns.c)
 *     MiMakeMdlPfnsDesiredSize @ 0x1406F36C0 (MiMakeMdlPfnsDesiredSize.c)
 */

unsigned __int64 __fastcall MiInitializeLargeMdlLeafPfns(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int64 result; // rax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 i; // r14
  __int64 *v12; // rdi
  __int64 v13; // r14
  int PfnPageSizeIndex; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( (a2 & 0x80000200) != 0 )
  {
    v9 = CLFS_LSN_NULL_EXT;
  }
  else
  {
    result = MiMakeDemandZeroPte(4);
    v9 = result;
  }
  v10 = 0LL;
  if ( a2 < 0 )
  {
    if ( (a2 & 0x1000) != 0 )
    {
      v10 = 2LL;
LABEL_10:
      result = MiMakeMdlPfnsDesiredSize(a1, v10);
      goto LABEL_11;
    }
    if ( (a2 & 0x1000000) != 0 )
    {
      v10 = 1LL;
      goto LABEL_10;
    }
    if ( (a2 & 0x2000000) != 0 )
      goto LABEL_10;
  }
LABEL_11:
  for ( i = *(_QWORD *)(a1 + 112); i != 0x3FFFFFFFFFLL; i = v13 & 0xFFFFFFFFFFLL )
  {
    v12 = (__int64 *)(48 * i - 0x220000000000LL);
    v13 = *v12;
    PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)v12);
    MiInitializeMdlLeafPfns((_DWORD)v12, MiPageSizes[PfnPageSizeIndex], a4, v9, a2, a3);
    result = 0xFFFFFFFFFFLL;
  }
  return result;
}
