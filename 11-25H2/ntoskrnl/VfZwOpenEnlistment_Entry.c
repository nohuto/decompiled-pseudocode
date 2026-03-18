/*
 * XREFs of VfZwOpenEnlistment_Entry @ 0x140B846A0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140B84CB0 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140B84D98 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B84DE4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenEnlistment_Entry(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[5], *a1);
    return ViZwCheckObjectAttributes(a1[1], *a1);
  }
  return result;
}
