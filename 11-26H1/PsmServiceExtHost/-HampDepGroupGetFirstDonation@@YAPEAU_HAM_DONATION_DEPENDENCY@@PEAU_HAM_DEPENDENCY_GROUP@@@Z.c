/*
 * XREFs of ?HampDepGroupGetFirstDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017210
 * Callers:
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016330 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800162B0 (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017250 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

struct _HAM_DONATION_DEPENDENCY *__fastcall HampDepGroupGetFirstDonation(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_DEPENDENCY_LINK *i; // rax
  struct _HAM_DEPENDENCY_LINK *v2; // r9
  struct _HAM_DONATION_DEPENDENCY *result; // rax
  struct _HAM_DEPENDENCY_LINK *v4; // rdx

  for ( i = HampDepGroupGetFirstLink(a1); ; i = HampDepGroupGetNextLink(v2) )
  {
    v2 = i;
    result = 0LL;
    if ( !v2 )
      break;
    v4 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v2 + 10);
    if ( v4 != (struct _HAM_DEPENDENCY_LINK *)((char *)v2 + 80) )
      result = (struct _HAM_DEPENDENCY_LINK *)((char *)v4 - 16);
    if ( result )
      break;
  }
  return result;
}
