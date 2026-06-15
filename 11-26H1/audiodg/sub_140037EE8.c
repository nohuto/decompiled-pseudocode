/*
 * XREFs of sub_140037EE8 @ 0x140037EE8
 * Callers:
 *     sub_140037E4C @ 0x140037E4C (sub_140037E4C.c)
 *     sub_14006F008 @ 0x14006F008 (sub_14006F008.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140037EE8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = off_1400B9CB0;
  *(_QWORD *)(a1 + 8) = off_1400B9C68;
  *(_QWORD *)(a1 + 16) = off_1400B9D70;
  *(_QWORD *)(a1 + 24) = off_1400B9B48;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 40), 0, 0);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 && a1 != -120 )
  {
    sub_1400B6010(v2);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  *(_DWORD *)(a1 + 100) = 1;
  result = a1;
  *(_DWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 104) = xmmword_1400C5548;
  return result;
}
