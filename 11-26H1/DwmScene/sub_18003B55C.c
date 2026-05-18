/*
 * XREFs of sub_18003B55C @ 0x18003B55C
 * Callers:
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 */

__int64 __fastcall sub_18003B55C(__int64 a1)
{
  _BYTE *v1; // rax
  unsigned int v2; // ecx
  _BYTE *v3; // r8
  char v4; // al
  unsigned int v5; // edx

  v1 = (_BYTE *)sub_1800148EC(a1);
  v2 = 0;
  v3 = v1;
  if ( v1 )
  {
    v4 = *v1;
    v5 = 5381;
    while ( v4 )
    {
      v5 = v4 + 33 * v5;
      v4 = *++v3;
    }
    return v5;
  }
  return v2;
}
