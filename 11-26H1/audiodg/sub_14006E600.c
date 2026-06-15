/*
 * XREFs of sub_14006E600 @ 0x14006E600
 * Callers:
 *     sub_140059BC0 @ 0x140059BC0 (sub_140059BC0.c)
 * Callees:
 *     sub_140005164 @ 0x140005164 (sub_140005164.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006E600(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // r9d
  int v9; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v12 = v2;
  v5 = sub_140005164(a1, a2);
  if ( v5 )
  {
    v9 = sub_1400B6010(v5);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v8 = v9;
    v7 = 674;
  }
  else
  {
    v6 = -2005139430;
    v7 = 673;
    v8 = -2005139430;
  }
  sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v8);
LABEL_7:
  sub_140018FF0(&v12);
  return v6;
}
