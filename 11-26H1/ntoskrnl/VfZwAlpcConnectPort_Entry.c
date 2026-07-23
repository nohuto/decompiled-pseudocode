/*
 * XREFs of VfZwAlpcConnectPort_Entry @ 0x140C382C0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C26580 (ViZwCheckVirtualAddress.c)
 *     ViZwCheckObjectAttributes @ 0x140C39130 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140C39180 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140C4DB94 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcConnectPort_Entry(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[11], *a1);
    ViZwCheckVirtualAddress(a1[8], *a1);
    ViZwCheckVirtualAddress(a1[6], *a1);
    ViZwCheckVirtualAddress(a1[5], *a1);
    ViZwCheckVirtualAddress(a1[4], *a1);
    ViZwCheckVirtualAddress(a1[3], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
    ViZwCheckVirtualAddress(a1[1], *a1);
    ViZwCheckObjectAttributes(a1[9], *a1);
    return ViZwCheckUnicodeString(a1[10], *a1);
  }
  return result;
}
