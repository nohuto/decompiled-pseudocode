/*
 * XREFs of sub_14002B8B0 @ 0x14002B8B0
 * Callers:
 *     sub_14002B664 @ 0x14002B664 (sub_14002B664.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2F8 @ 0x14000C2F8 (sub_14000C2F8.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_14000E63C @ 0x14000E63C (sub_14000E63C.c)
 *     sub_14002BB98 @ 0x14002BB98 (sub_14002BB98.c)
 *     sub_14002BCF8 @ 0x14002BCF8 (sub_14002BCF8.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140044BB0 @ 0x140044BB0 (sub_140044BB0.c)
 *     sub_140048510 @ 0x140048510 (sub_140048510.c)
 *     sub_14004E2C8 @ 0x14004E2C8 (sub_14004E2C8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002B8B0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rax
  int v5; // r8d
  __int64 v6; // rbx
  ULONGLONG TickCount64; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rbx
  int v11; // r8d
  int v12; // r9d
  _DWORD *v13; // rcx
  unsigned int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // r9d
  int v19; // edx
  __int64 v20; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v22; // [rsp+38h] [rbp-8h]
  void *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v24; // [rsp+58h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v15 = -2147467261;
    v16 = 1247;
LABEL_22:
    sub_14000C2A8((int)retaddr, v16, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v15);
    return v15;
  }
  if ( !*(_BYTE *)(a1 + 776) )
  {
    v15 = -2005139437;
    v16 = 1248;
    goto LABEL_22;
  }
  v22 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 88);
  sub_14000C2F8((__int64)&lpCriticalSection);
  if ( !*(_QWORD *)(a1 + 768) )
    goto LABEL_4;
  if ( !(unsigned __int8)sub_140048510() )
  {
    v15 = -2005139409;
    sub_14000C2A8(
      (int)retaddr,
      1253,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      -2005139409);
    if ( v22 )
      LeaveCriticalSection(lpCriticalSection);
    return v15;
  }
  sub_14004E2C8(
    retaddr,
    1256LL,
    "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    2289827891LL,
    "Prior transaction timed out");
  v17 = sub_1400B6010(a1);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = v17;
    v19 = 1257;
    goto LABEL_26;
  }
LABEL_4:
  if ( *(_BYTE *)(a1 + 778) )
  {
    v15 = -2005139406;
    v19 = 1264;
    v18 = -2005139406;
LABEL_26:
    sub_14000C2A8((int)retaddr, v19, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v18);
LABEL_37:
    sub_140030124(&lpCriticalSection);
    return v15;
  }
  while ( 1 )
  {
    v4 = sub_14000DA4C();
    v6 = sub_14000DF30(0x18uLL, v4, v5);
    if ( v6 )
    {
      TickCount64 = GetTickCount64();
      v8 = qword_1400E7B60 + 1;
      *(_QWORD *)(v6 + 8) = TickCount64 + 10000;
      qword_1400E7B60 = v8;
      *(_QWORD *)(v6 + 16) = v8;
    }
    else
    {
      v6 = 0LL;
    }
    v9 = *(_BYTE *)(a1 + 779) == 0;
    *(_QWORD *)(a1 + 768) = v6;
    if ( v9 )
      break;
    if ( !v6 )
      Sleep(1u);
    if ( !*(_BYTE *)(a1 + 779) )
      break;
    if ( *(_QWORD *)(a1 + 768) )
      goto LABEL_9;
  }
  if ( !*(_QWORD *)(a1 + 768) )
  {
    sub_14000C2A8(
      (int)retaddr,
      1269,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      -2147024882);
LABEL_36:
    v15 = -2147024882;
    goto LABEL_37;
  }
LABEL_9:
  v10 = *(_QWORD *)sub_140044BB0(&v24, a1);
  **(_QWORD **)(a1 + 768) = sub_14002BB98(a1 + 384);
  if ( !**(_QWORD **)(a1 + 768) )
  {
    sub_14000C2A8(
      (int)retaddr,
      1274,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      -2147024882);
    v20 = *(_QWORD *)(v10 + 768);
    if ( v20 )
      sub_14000E63C(v20);
    *(_QWORD *)(v10 + 768) = 0LL;
    goto LABEL_36;
  }
  v13 = *(_DWORD **)(a1 + 824);
  if ( *v13 > 5u )
  {
    v24 = a1;
    sub_14002BCF8((_DWORD)v13, (unsigned int)&unk_1400D2955, v11, v12, (__int64)&v24);
  }
  v9 = v22 == 0;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 768) + 16LL);
  if ( !v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
