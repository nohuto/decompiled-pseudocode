/*
 * XREFs of sub_14007FC38 @ 0x14007FC38
 * Callers:
 *     sub_14007B620 @ 0x14007B620 (sub_14007B620.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004FC0C @ 0x14004FC0C (sub_14004FC0C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007FC38(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  int v4; // ebx
  unsigned int v8; // edi
  int v9; // edx
  int v10; // eax

  v4 = 0;
  v8 = 0;
  if ( !qword_1400E97A0 )
  {
    qword_1400E97A0 = (__int64)sub_14004FC0C("RtlQueryFeatureConfiguration");
    if ( !qword_1400E97A0 )
    {
      v9 = -1073741511;
      goto LABEL_9;
    }
  }
  v10 = sub_1400B6010(a2);
  v9 = v10;
  if ( v10 )
  {
    if ( v10 != 279 )
      goto LABEL_9;
    v8 = 1;
  }
  else
  {
    v8 = 1;
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  *(_DWORD *)(a1 + 16) = 0;
LABEL_9:
  if ( a4 )
  {
    LOBYTE(v4) = v9 != -2147483614;
    *a4 = v4;
  }
  return v8;
}
