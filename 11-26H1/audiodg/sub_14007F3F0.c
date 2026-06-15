/*
 * XREFs of sub_14007F3F0 @ 0x14007F3F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14007F3F0(__int64 a1, HSTRING *a2)
{
  HRESULT v2; // ebx
  int v3; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v2 = -2147467261;
    v3 = 294;
LABEL_3:
    sub_14000C2A8((int)retaddr, v3, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v2);
    return (unsigned int)v2;
  }
  v2 = WindowsDuplicateString(*(HSTRING *)(a1 + 80), a2);
  if ( v2 < 0 )
  {
    v3 = 295;
    goto LABEL_3;
  }
  return 0LL;
}
