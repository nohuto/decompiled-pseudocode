/*
 * XREFs of sub_140023DA0 @ 0x140023DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140024510 @ 0x140024510 (sub_140024510.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140023DA0(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // eax
  int v13; // eax
  int v14; // edx
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+28h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v16 = v6;
  v7 = 0;
  if ( !*(_DWORD *)(a1 + 256) )
  {
    v7 = -2005139437;
    v14 = 331;
LABEL_22:
    sub_14000C2A8((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v7);
    goto LABEL_24;
  }
  if ( !a2 )
  {
    v14 = 335;
LABEL_21:
    v7 = -2147467261;
    goto LABEL_22;
  }
  if ( !a3 )
  {
    v14 = 336;
    goto LABEL_21;
  }
  v8 = *(_QWORD **)(*(_QWORD *)sub_140024510(*(_QWORD *)(a1 + 160) + 16LL) + 32LL);
  v18 = 0LL;
  v9 = sub_1400B6010(*v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    sub_14000C2A8((int)retaddr, 347, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v9);
    if ( v18 )
      sub_1400B6010(v18);
    goto LABEL_8;
  }
  v15 = 0LL;
  v11 = sub_1400B6010(v18);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v13 = sub_1400B6010(v15);
    v10 = v13;
    if ( v13 < 0 )
    {
      sub_14000C2A8((int)retaddr, 354, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v13);
      if ( v18 )
        sub_1400B6010(v18);
      goto LABEL_8;
    }
    *a2 = 0;
    *a3 = *(_DWORD *)(a1 + 136);
    sub_140003238(&v15);
    sub_140003238(&v18);
LABEL_24:
    sub_140018FF0(&v16);
    return v7;
  }
  sub_14000C2A8((int)retaddr, 351, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v11);
  if ( v18 )
    sub_1400B6010(v18);
LABEL_8:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v10;
}
