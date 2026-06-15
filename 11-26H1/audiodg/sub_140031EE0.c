/*
 * XREFs of sub_140031EE0 @ 0x140031EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008840 @ 0x140008840 (sub_140008840.c)
 *     sub_14000A760 @ 0x14000A760 (sub_14000A760.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2F8 @ 0x14000C2F8 (sub_14000C2F8.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140031EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  if ( !a4 )
  {
    v8 = -2147467261;
    v9 = 2907;
    goto LABEL_4;
  }
  if ( ((a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v8 = -2147024890;
    v9 = 2908;
LABEL_4:
    sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v8);
    return v8;
  }
  if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v8 = -2147024890;
    v9 = 2909;
    goto LABEL_4;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 88);
  v17 = 0;
  sub_14000C2F8((__int64)&lpCriticalSection);
  v11 = sub_14000A760(a1, a2);
  v8 = v11;
  if ( v11 < 0 )
  {
    sub_14000C2A8((int)retaddr, 2914, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v11);
LABEL_18:
    if ( v17 )
      LeaveCriticalSection(lpCriticalSection);
    return v8;
  }
  v19 = 0LL;
  v12 = sub_1400B6010(a4);
  v8 = v12;
  if ( v12 < 0 )
  {
    sub_14000C2A8((int)retaddr, 2918, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v12);
    if ( v19 )
      sub_1400B6010(v19);
    goto LABEL_18;
  }
  v15 = 0LL;
  v13 = sub_140008840(a1, a3, a4, **(_QWORD **)(a1 + 768) + 48LL, &v15);
  v8 = v13;
  if ( v13 < 0 )
  {
    sub_14000C2A8((int)retaddr, 2922, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v13);
    sub_140003238(&v19);
    sub_140030124((__int64)&lpCriticalSection);
    return v8;
  }
  v14 = v19;
  v19 = 0LL;
  *(_QWORD *)(v15 + 128) = v14;
  if ( v19 )
    sub_1400B6010(v19);
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
