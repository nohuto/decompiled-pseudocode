/*
 * XREFs of MiAllocateUserPhysicalPages @ 0x140877868
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1408793A0 (NtAllocateUserPhysicalPages.c)
 *     NtAllocateUserPhysicalPagesEx @ 0x1408793C0 (NtAllocateUserPhysicalPagesEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x140877984 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiAllocateUserPhysicalPagesCleanup @ 0x140877BB0 (MiAllocateUserPhysicalPagesCleanup.c)
 *     MiAllocateUserPhysicalPagesMdl @ 0x140877C6C (MiAllocateUserPhysicalPagesMdl.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiAllocateUserPhysicalPagesReturnResults @ 0x14087844C (MiAllocateUserPhysicalPagesReturnResults.c)
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
