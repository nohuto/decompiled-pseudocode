/*
 * XREFs of MiAllocateUserPhysicalPages @ 0x14087DC48
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x14087F780 (NtAllocateUserPhysicalPages.c)
 *     NtAllocateUserPhysicalPagesEx @ 0x14087F7A0 (NtAllocateUserPhysicalPagesEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x14087DD64 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiAllocateUserPhysicalPagesCleanup @ 0x14087DF90 (MiAllocateUserPhysicalPagesCleanup.c)
 *     MiAllocateUserPhysicalPagesMdl @ 0x14087E04C (MiAllocateUserPhysicalPagesMdl.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiAllocateUserPhysicalPagesReturnResults @ 0x14087E82C (MiAllocateUserPhysicalPagesReturnResults.c)
 */

__int64 __fastcall MiAllocateUserPhysicalPages(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int UserPhysicalPagesPrepare; // ebx
  __int64 v7; // rdi
  __int64 UserPhysicalPagesMdl; // rax
  __int64 v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h]
  _BYTE v12[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v13; // [rsp+D8h] [rbp-28h]

  memset_0(v10, 0, 0xA0uLL);
  memset_0(v12, 0, 0x140uLL);
  UserPhysicalPagesPrepare = MiAllocateUserPhysicalPagesPrepare(Handle, a5, (__int64)v10);
  if ( UserPhysicalPagesPrepare >= 0 )
  {
    v7 = v11;
    if ( v11 )
    {
      while ( 1 )
      {
        UserPhysicalPagesMdl = MiAllocateUserPhysicalPagesMdl(v10, v12);
        if ( !UserPhysicalPagesMdl )
          break;
        UserPhysicalPagesPrepare = MiAllocateUserPhysicalPagesAddMdl(v10, v12, UserPhysicalPagesMdl);
        if ( UserPhysicalPagesPrepare < 0 )
        {
          if ( v13 )
            UserPhysicalPagesPrepare = 0;
          goto LABEL_12;
        }
        if ( v13 == v7 )
          goto LABEL_12;
      }
      if ( !v13 )
        UserPhysicalPagesPrepare = -1073741670;
LABEL_12:
      MiAllocateUserPhysicalPagesReturnResults(v10, v12, (unsigned int)UserPhysicalPagesPrepare);
    }
    else
    {
      UserPhysicalPagesPrepare = 0;
    }
  }
  MiAllocateUserPhysicalPagesCleanup(v10);
  return (unsigned int)UserPhysicalPagesPrepare;
}
