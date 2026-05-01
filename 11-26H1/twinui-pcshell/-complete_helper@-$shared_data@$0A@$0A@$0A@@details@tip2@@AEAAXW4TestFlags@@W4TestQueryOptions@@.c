/*
 * XREFs of ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z @ 0x18027EF5C
 * Callers:
 *     ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B5B40 (-MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18027EF88 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,0>::complete_helper(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 64) |= a2 | 0x300;
  if ( *(_QWORD *)(a1 + 240) )
    return tip2::details::shared_data<0,0,0>::complete_helper(a1, a3);
  return result;
}
