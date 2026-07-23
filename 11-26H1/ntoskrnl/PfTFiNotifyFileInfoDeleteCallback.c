/*
 * XREFs of PfTFiNotifyFileInfoDeleteCallback @ 0x140484FB0
 * Callers:
 *     <none>
 * Callees:
 *     PfFbLogEntryReserve @ 0x1404850D8 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1404851D0 (PfFbLogEntryComplete.c)
 */

__int64 __fastcall PfTFiNotifyFileInfoDeleteCallback(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v4 = PfFbLogEntryReserve(a1, a1 + 288, &v11, &v12, 32);
  if ( v4 < 0 )
  {
    v9 = v11;
  }
  else
  {
    v6 = v12;
    v7 = *(_DWORD *)a2 & 3;
    *(_DWORD *)(v12 + 16) ^= ((unsigned __int8)*(_DWORD *)a2 ^ (unsigned __int8)*(_DWORD *)(v12 + 16)) & 3;
    *(_DWORD *)(v6 + 16) = v7 | (4 * *(_DWORD *)(a2 + 24));
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(a2 + 8);
    *(_DWORD *)v6 = *(_DWORD *)v6 & 0x80000000 | 0x103;
    *(_DWORD *)(v6 + 4) = HIDWORD(stru_140E66D40.WriteOperationCount)
                        + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
    v8 = v11;
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(a2 + 16);
    PfFbLogEntryComplete(a1, v8, v6, 32LL);
    v9 = 0LL;
    v4 = 0;
  }
  if ( v9 )
    PfFbLogEntryComplete(a1, v9, v5, 0LL);
  if ( v4 < 0 )
    ++*(_DWORD *)(a1 + 708);
  return (unsigned int)v4;
}
