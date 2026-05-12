/*
 * XREFs of sub_140112C94 @ 0x140112C94
 * Callers:
 *     sub_140111E3C @ 0x140111E3C (sub_140111E3C.c)
 *     sub_1401130D0 @ 0x1401130D0 (sub_1401130D0.c)
 * Callees:
 *     sub_14008EEFC @ 0x14008EEFC (sub_14008EEFC.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140112C94(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  _BYTE Dst[128]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(Dst, 0, sizeof(Dst));
  v8 = sub_14008EEFC(a1, 0x80u, (__int64)Dst);
  v9 = 0;
  v10 = v8 + 4;
  if ( *a3 >= v8 + 4 )
  {
    *(_WORD *)a4 = 0x8000;
    *(_BYTE *)(a4 + 3) = v8;
    memmove((void *)(a4 + 4), Dst, v8);
    *a3 = v10;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    sub_140112680(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  return v9;
}
