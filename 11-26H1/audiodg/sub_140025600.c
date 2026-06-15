/*
 * XREFs of sub_140025600 @ 0x140025600
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140024510 @ 0x140024510 (sub_140024510.c)
 *     sub_1400561D8 @ 0x1400561D8 (sub_1400561D8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140025600(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rdx
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // edx
  __int64 v10; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v12; // [rsp+40h] [rbp+20h] BYREF
  __int64 v13; // [rsp+48h] [rbp+28h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+30h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v14 = v2;
  if ( !*(_DWORD *)(a1 + 256) )
  {
    v4 = -2005139437;
    sub_14000C2A8((int)retaddr, 389, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", -2005139437);
LABEL_11:
    sub_140018FF0(&v14);
    return v4;
  }
  v5 = *(_QWORD **)(*(_QWORD *)sub_140024510(*(_QWORD *)(a1 + 160) + 16LL, v3) + 32LL);
  v12 = 0LL;
  v6 = sub_1400B6010(*v5);
  v4 = v6;
  if ( v6 < 0 )
  {
    sub_14000C2A8((int)retaddr, 400, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v6);
LABEL_10:
    sub_140003238(&v12);
    goto LABEL_11;
  }
  v13 = 0LL;
  v7 = sub_1400B6010(v12);
  v4 = v7;
  if ( v7 < 0 )
  {
    v8 = 404;
LABEL_9:
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v7);
    sub_140003238(&v13);
    goto LABEL_10;
  }
  v7 = sub_1400B6010(v13);
  v4 = v7;
  if ( v7 < 0 )
  {
    v8 = 409;
    goto LABEL_9;
  }
  sub_1400B6010(a1);
  v10 = sub_1400561D8(a1 + 152);
  sub_1400B6010(v10);
  if ( v13 )
    sub_1400B6010(v13);
  if ( v12 )
    sub_1400B6010(v12);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
