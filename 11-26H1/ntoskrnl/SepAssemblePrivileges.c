/*
 * XREFs of SepAssemblePrivileges @ 0x140A9B378
 * Callers:
 *     SepAccessCheckEx @ 0x1403AEA10 (SepAccessCheckEx.c)
 *     SepAccessCheck @ 0x1405196A0 (SepAccessCheck.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall SepAssemblePrivileges(int a1, char a2, char a3, char a4, LUID **a5)
{
  LUID *Pool2; // rax
  LUID *v9; // rdx
  __int64 LowPart; // rax

  if ( a5 )
  {
    if ( a1 )
    {
      Pool2 = (LUID *)ExAllocatePool2(0x100uLL);
      v9 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = 0LL;
        LowPart = 0LL;
        if ( a2 )
        {
          v9[1] = SeSecurityPrivilege;
          v9[2].LowPart = 0x80000000;
          v9->LowPart = 1;
          LowPart = 1LL;
        }
        if ( a3 )
        {
          *(LUID *)((char *)&v9[1] + 12 * LowPart) = (LUID)SeTakeOwnershipPrivilege;
          *(&v9[2].LowPart + 3 * v9->LowPart++) = 0x80000000;
          LowPart = v9->LowPart;
        }
        if ( a4 )
        {
          *(LUID *)((char *)&v9[1] + 12 * LowPart) = (LUID)SeRelabelPrivilege;
          *(&v9[2].LowPart + 3 * v9->LowPart++) = 0x80000000;
        }
        *a5 = v9;
      }
    }
  }
}
