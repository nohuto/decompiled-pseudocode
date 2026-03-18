/*
 * XREFs of ??1BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ @ 0x14015912C
 * Callers:
 *     ?FreeSessionGlobalsArea@Base@Gre@@YAXXZ @ 0x14006E100 (-FreeSessionGlobalsArea@Base@Gre@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Gre::Base::BaseGlobalsNonPaged::~BaseGlobalsNonPaged(char *Resource)
{
  ExDeleteResourceLite((PERESOURCE)(Resource + 1824));
  ExDeleteResourceLite((PERESOURCE)(Resource + 1720));
  ExDeleteResourceLite((PERESOURCE)(Resource + 1616));
  ExDeleteResourceLite((PERESOURCE)(Resource + 1512));
  ExDeleteResourceLite((PERESOURCE)Resource + 13);
  ExDeleteResourceLite((PERESOURCE)Resource + 12);
  ExDeleteResourceLite((PERESOURCE)Resource + 11);
  ExDeleteResourceLite((PERESOURCE)Resource + 10);
  ExDeleteResourceLite((PERESOURCE)Resource + 9);
  ExDeleteResourceLite((PERESOURCE)Resource + 8);
  ExDeleteResourceLite((PERESOURCE)Resource + 7);
  ExDeleteResourceLite((PERESOURCE)Resource + 6);
  ExDeleteResourceLite((PERESOURCE)Resource + 5);
  ExDeleteResourceLite((PERESOURCE)Resource + 4);
  ExDeleteResourceLite((PERESOURCE)Resource + 3);
  ExDeleteResourceLite((PERESOURCE)Resource + 2);
  ExDeleteResourceLite((PERESOURCE)Resource + 1);
  ExDeleteResourceLite((PERESOURCE)Resource);
}
