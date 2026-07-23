/*
 * XREFs of VfZwAlpcAcceptConnectPort_Entry @ 0x140C38260
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C26580 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckObjectAttributes @ 0x140C39130 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x140C4DB94 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcAcceptConnectPort_Entry(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[9], *a1);
    ViZwCheckVirtualAddress(a1[5], *a1);
    ViZwCheckVirtualAddress(a1[3], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
    return ViZwCheckObjectAttributes(a1[6], *a1);
  }
  return result;
}
