/*
 * XREFs of sub_14004F8D0 @ 0x14004F8D0
 * Callers:
 *     sub_14004D618 @ 0x14004D618 (sub_14004D618.c)
 * Callees:
 *     sub_14001CDE4 @ 0x14001CDE4 (sub_14001CDE4.c)
 *     sub_14001D640 @ 0x14001D640 (sub_14001D640.c)
 */

__int64 __fastcall sub_14004F8D0(__int64 *a1, LONG a2, LONG a3, const WCHAR *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  HANDLE Semaphore; // rdi
  __int64 v9; // r8
  int v10; // r9d

  v5 = 0;
  Semaphore = CreateSemaphoreExW(0LL, a2, a3, a4, 0, 0x1F0003u);
  if ( Semaphore )
  {
    GetLastError();
    sub_14001D640(a1, (__int64)Semaphore);
  }
  else
  {
    return (unsigned int)sub_14001CDE4(v7, v6, v9, v10);
  }
  return v5;
}
