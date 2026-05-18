/*
 * XREFs of sub_180011004 @ 0x180011004
 * Callers:
 *     sub_18000EB70 @ 0x18000EB70 (sub_18000EB70.c)
 * Callees:
 *     sub_18000F2CC @ 0x18000F2CC (sub_18000F2CC.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 */

__int64 __fastcall sub_180011004(__int64 a1, LONG a2, LONG a3, const WCHAR *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  HANDLE Semaphore; // rdi
  __int64 v9; // r8
  __int64 v10; // r9

  v5 = 0;
  Semaphore = CreateSemaphoreExW(0LL, a2, a3, a4, 0, 0x1F0003u);
  if ( Semaphore )
  {
    GetLastError();
    sub_180011088(a1, Semaphore);
  }
  else
  {
    return (unsigned int)sub_18000F2CC(v7, v6, v9, v10);
  }
  return v5;
}
