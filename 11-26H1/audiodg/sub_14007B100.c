/*
 * XREFs of sub_14007B100 @ 0x14007B100
 * Callers:
 *     sub_14001C940 @ 0x14001C940 (sub_14001C940.c)
 *     sub_140045B10 @ 0x140045B10 (sub_140045B10.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14007B100(const GUID *a1, HSTRING *a2)
{
  HRESULT String; // ebx
  int v4; // edx
  __int64 v6; // rdx
  OLECHAR sz[40]; // [rsp+20h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  if ( !StringFromGUID2(a1, sz, 39) )
  {
    String = -2147024809;
    v4 = 56;
LABEL_3:
    sub_14000C2A8((int)retaddr, v4, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", String);
    return (unsigned int)String;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( sz[v6] );
  String = WindowsCreateString(sz, v6, a2);
  if ( String < 0 )
  {
    v4 = 57;
    goto LABEL_3;
  }
  return 0LL;
}
