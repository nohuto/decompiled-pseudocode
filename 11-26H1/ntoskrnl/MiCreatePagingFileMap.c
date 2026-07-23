/*
 * XREFs of MiCreatePagingFileMap @ 0x14098989C
 * Callers:
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCreatePagingFileCleanup @ 0x14086EC18 (MiCreatePagingFileCleanup.c)
 *     MiCreatePagingFileFinish @ 0x140988DEC (MiCreatePagingFileFinish.c)
 *     MiCreatePagingFileControlArea @ 0x140989124 (MiCreatePagingFileControlArea.c)
 *     MiCreatePagingFileCommit @ 0x1409894E4 (MiCreatePagingFileCommit.c)
 *     MiCreatePagingFileMapPrepare @ 0x1409895D4 (MiCreatePagingFileMapPrepare.c)
 */

__int64 __fastcall MiCreatePagingFileMap(__int64 a1)
{
  __int64 result; // rax
  int PagingFileCommit; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v8[152]; // [rsp+28h] [rbp-B0h] BYREF

  memset_0(v8, 0, sizeof(v8));
  v7 = a1;
  result = MiCreatePagingFileMapPrepare(&v7);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x8000000) != 0
      && (PagingFileCommit = MiCreatePagingFileCommit((__int64)&v7), PagingFileCommit < 0)
      || (PagingFileCommit = MiCreatePagingFileControlArea(&v7), PagingFileCommit < 0) )
    {
      MiCreatePagingFileCleanup(&v7);
    }
    else
    {
      MiCreatePagingFileFinish(&v7, v4, v5, v6);
    }
    return (unsigned int)PagingFileCommit;
  }
  return result;
}
