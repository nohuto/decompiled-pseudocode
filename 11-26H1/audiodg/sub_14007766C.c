/*
 * XREFs of sub_14007766C @ 0x14007766C
 * Callers:
 *     sub_14007B908 @ 0x14007B908 (sub_14007B908.c)
 * Callees:
 *     sub_140075EC0 @ 0x140075EC0 (sub_140075EC0.c)
 *     sub_140077628 @ 0x140077628 (sub_140077628.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007766C(__int64 a1, __int64 a2, char a3)
{
  char v5; // di
  bool v6; // sf
  APTTYPE v7; // eax
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp+8h] BYREF
  APTTYPE pAptType; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(pAptType) = a3;
  sub_140077628();
  *(_QWORD *)a1 = off_1400BD7E0;
  *(_QWORD *)(a1 + 8) = off_1400BD7C0;
  v5 = 0;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BD940;
  *(_QWORD *)(a1 + 8) = off_1400BD920;
  *(_QWORD *)(a1 + 32) = a2;
  if ( a2 )
    sub_1400B6010(a2);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  sub_140075EC0((_DWORD *)(a1 + 52), a2);
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  v6 = CoGetApartmentType(&pAptType, &pAptQualifier) < 0;
  v7 = APTTYPE_MTA;
  if ( !v6 )
    v7 = pAptType;
  if ( v7 == APTTYPE_MAINSTA || v7 == APTTYPE_STA )
    v5 = 1;
  *(_BYTE *)(a1 + 56) = v5;
  return a1;
}
