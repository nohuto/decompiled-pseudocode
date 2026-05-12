/*
 * XREFs of sub_140112BBC @ 0x140112BBC
 * Callers:
 *     sub_140111E3C @ 0x140111E3C (sub_140111E3C.c)
 *     sub_1401130D0 @ 0x1401130D0 (sub_1401130D0.c)
 * Callees:
 *     sub_14008ED30 @ 0x14008ED30 (sub_14008ED30.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140112BBC(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v8; // rdx
  unsigned int v9; // eax
  size_t v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  char v13; // cl
  char v14; // al
  _BYTE Dst[128]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(Dst, 0, sizeof(Dst));
  v9 = sub_14008ED30(a1, v8, (__int64)Dst);
  v10 = v9;
  v11 = 0;
  v12 = v9 + 8;
  if ( *a3 >= v9 + 8 )
  {
    v13 = *(_BYTE *)(a4 + 5);
    *(_BYTE *)(a4 + 3) = v9 + 4;
    v14 = *(_BYTE *)(a4 + 4) & 0xF3;
    *(_BYTE *)(a4 + 5) = v13 & 0xC0 | 8;
    *(_BYTE *)(a4 + 7) = v10;
    *(_BYTE *)(a4 + 4) = v14 | 3;
    *(_WORD *)a4 = -32000;
    memmove((void *)(a4 + 8), Dst, v10);
    *a3 = v12;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    sub_140112680(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  return v11;
}
