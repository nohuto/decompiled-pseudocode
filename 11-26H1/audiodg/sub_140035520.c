/*
 * XREFs of sub_140035520 @ 0x140035520
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_140035750 @ 0x140035750 (sub_140035750.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140035520(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // r12
  _QWORD *v10; // rdi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // r15d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v23; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+60h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v24 = v4;
  v7 = *(_QWORD **)(a1 + 120);
  v23 = v7;
  while ( v7 )
  {
    v18 = sub_1400265D8(v5, &v23);
    v19 = sub_1400B6010(*(_QWORD *)*v18);
    v12 = v19;
    if ( v19 < 0 )
    {
      sub_14000C2A8((int)retaddr, 597, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v19);
LABEL_26:
      sub_140018FF0(&v24);
      return v12;
    }
    v7 = v23;
  }
  v8 = *(_QWORD **)(a1 + 72);
  v9 = v8;
  while ( 1 )
  {
    v10 = v8;
    if ( !v9 )
      break;
    v8 = (_QWORD *)*v8;
    v9 = v8;
    v17 = (_QWORD *)v10[2];
    v23 = v17;
    if ( v17 )
      sub_1400B6010(v17);
    if ( (unsigned __int8)sub_1400B6010(v17) )
    {
      v20 = sub_1400B6010(v17);
      v21 = v20;
      if ( v20 < 0 )
      {
        sub_14000C2A8((int)retaddr, 607, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v20);
        sub_140003238((__int64 *)&v23);
        v12 = v21;
        goto LABEL_26;
      }
    }
    sub_1400B6010(v17);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( *(_QWORD *)(a1 + 24) && *(_BYTE *)(a1 + 312) )
  {
    v11 = sub_1400B6010(a2);
    v12 = v11;
    if ( v11 < 0 )
    {
      sub_14000C2A8((int)retaddr, 616, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v11);
      return v12;
    }
    *(_BYTE *)(a1 + 312) = 0;
  }
  v13 = *(_DWORD *)(a1 + 256);
  if ( v13 == 2 || v13 == 3 )
    LOBYTE(v6) = 1;
  else
    v6 = 0LL;
  v14 = sub_140035750(a1 + 272, a2, v6);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 622, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v14);
  return v15;
}
