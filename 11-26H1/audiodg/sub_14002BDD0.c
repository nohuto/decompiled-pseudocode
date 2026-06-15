/*
 * XREFs of sub_14002BDD0 @ 0x14002BDD0
 * Callers:
 *     sub_14002B664 @ 0x14002B664 (sub_14002B664.c)
 * Callees:
 *     sub_14000A760 @ 0x14000A760 (sub_14000A760.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2F8 @ 0x14000C2F8 (sub_14000C2F8.c)
 *     sub_14002BEF8 @ 0x14002BEF8 (sub_14002BEF8.c)
 */

__int64 __fastcall sub_14002BDD0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  int v7; // edx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 3077;
    goto LABEL_4;
  }
  if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v6 = -2147024890;
    v7 = 3078;
LABEL_4:
    sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v6);
    return (unsigned int)v6;
  }
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 88);
  sub_14000C2F8((__int64)&lpCriticalSection);
  v6 = sub_14000A760(a1, a2);
  if ( v6 < 0 )
  {
    v11 = 3083;
LABEL_15:
    sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v6);
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)v6;
  }
  if ( (int)sub_14002BEF8(v9, **(_QWORD **)(a1 + 768) + 48LL, a3) < 0 )
  {
    v6 = sub_14002BEF8(v10, **(_QWORD **)(a1 + 768) + 96LL, a3);
    if ( v6 < 0 )
    {
      v11 = 3091;
      goto LABEL_15;
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
