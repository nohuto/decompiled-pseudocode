/*
 * XREFs of sub_140036AC0 @ 0x140036AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140036D40 @ 0x140036D40 (sub_140036D40.c)
 *     sub_140048178 @ 0x140048178 (sub_140048178.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140036AC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rcx
  int v10; // ebx
  struct _RTL_CRITICAL_SECTION *v11; // rdi
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  int v15; // edx
  __int64 v16; // r14
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // rax
  int v20; // eax
  unsigned int v21; // esi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v7 = (__int64 *)(a1 + 272);
  if ( *(_QWORD *)(a1 + 272) )
  {
    v18 = *(_DWORD *)(a1 + 256);
    if ( v18 == 2 || v18 == 3 )
      LOBYTE(a4) = 1;
    else
      a4 = 0LL;
    v10 = sub_140036D40(a1 + 272, a2, a3, a4);
    if ( v10 < 0 )
    {
      v15 = 416;
      goto LABEL_16;
    }
  }
  v8 = *v7;
  if ( !v8 )
    v8 = a3;
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 )
  {
    if ( !v8 )
    {
      v10 = sub_1400B6010(a2);
      if ( v10 < 0 )
      {
        v15 = 440;
        goto LABEL_16;
      }
      goto LABEL_7;
    }
    v10 = sub_140048178(v9);
    if ( v10 >= 0 )
    {
      v10 = sub_1400B6010(a2);
      if ( v10 >= 0 )
      {
LABEL_7:
        *(_BYTE *)(a1 + 312) = 1;
        goto LABEL_8;
      }
      v15 = 435;
    }
    else
    {
      v15 = 432;
    }
LABEL_16:
    sub_14000C2A8((int)retaddr, v15, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v10);
    return (unsigned int)v10;
  }
LABEL_8:
  v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v12 = *(_QWORD **)(a1 + 72);
  while ( v12 )
  {
    v16 = v12[2];
    v12 = (_QWORD *)*v12;
    if ( v16 )
      sub_1400B6010(v16);
    sub_1400B6010(a1);
    v17 = sub_1400B6010(v16);
    v10 = v17;
    if ( v17 < 0 )
    {
      sub_14000C2A8((int)retaddr, 453, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v17);
      sub_1400B6010(v16);
      if ( a1 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
      return (unsigned int)v10;
    }
    sub_1400B6010(v16);
  }
  v13 = *(_QWORD **)(a1 + 120);
  do
  {
    if ( !v13 )
    {
      if ( v11 )
        LeaveCriticalSection(v11);
      return 0LL;
    }
    v19 = (_QWORD *)v13[2];
    v13 = (_QWORD *)*v13;
    v20 = sub_1400B6010(*v19);
    v21 = v20;
  }
  while ( v20 >= 0 );
  sub_14000C2A8((int)retaddr, 461, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v20);
  if ( v11 )
    LeaveCriticalSection(v11);
  return v21;
}
