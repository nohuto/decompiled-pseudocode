/*
 * XREFs of ?HampDepGroupGetNextDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU1@@Z @ 0x180018128
 * Callers:
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016330 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800162B0 (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

struct _HAM_DONATION_DEPENDENCY *__fastcall HampDepGroupGetNextDonation(struct _HAM_DONATION_DEPENDENCY *a1)
{
  __int64 v1; // rdx
  struct _HAM_DEPENDENCY_LINK *v2; // r9
  char *v3; // r8
  bool v4; // zf
  char *v5; // rax
  struct _HAM_DEPENDENCY_LINK *NextLink; // rax
  char *v7; // rdx
  char *v8; // rcx

  v1 = *((_QWORD *)a1 + 2);
  v2 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 1);
  v3 = 0LL;
  v4 = v1 == (_QWORD)v2 + 80;
  v5 = (char *)(v1 - 16);
  while ( 1 )
  {
    if ( !v4 )
      v3 = v5;
    if ( v3 )
      break;
    NextLink = HampDepGroupGetNextLink(v2);
    v2 = NextLink;
    if ( !NextLink )
      break;
    v7 = (char *)NextLink + 80;
    v8 = (char *)*((_QWORD *)NextLink + 10);
    v5 = v8 - 16;
    v4 = v8 == v7;
  }
  return (struct _HAM_DONATION_DEPENDENCY *)v3;
}
