/*
 * XREFs of sub_140015F50 @ 0x140015F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000EE10 @ 0x14000EE10 (sub_14000EE10.c)
 *     sub_140015C30 @ 0x140015C30 (sub_140015C30.c)
 *     sub_1400162D8 @ 0x1400162D8 (sub_1400162D8.c)
 *     sub_1400165A4 @ 0x1400165A4 (sub_1400165A4.c)
 *     sub_1400165C0 @ 0x1400165C0 (sub_1400165C0.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_1400168CC @ 0x1400168CC (sub_1400168CC.c)
 *     sub_140016980 @ 0x140016980 (sub_140016980.c)
 *     sub_140016A80 @ 0x140016A80 (sub_140016A80.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140044BB0 @ 0x140044BB0 (sub_140044BB0.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140015F50(char *lpParameter, __int64 a2, __int64 a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  void **v8; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  HANDLE *v12; // rbx
  HANDLE Thread; // rax
  void *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // edx
  void *v25; // rax
  int v26; // eax
  unsigned int v27; // edi
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  char v30; // [rsp+70h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)(lpParameter + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(lpParameter + 128));
  v28 = v7;
  if ( !lpParameter[72] )
  {
    v22 = -2005139437;
    v24 = 1030;
LABEL_28:
    sub_14000C2A8((int)retaddr, v24, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v22);
LABEL_22:
    if ( v7 )
      LeaveCriticalSection(v7);
    return v22;
  }
  v8 = (void **)(lpParameter + 120);
  if ( *((_QWORD *)lpParameter + 15) && *v8 != (void *)-1LL )
  {
    v22 = -2005139434;
    v24 = 1033;
    goto LABEL_28;
  }
  v9 = *((_QWORD *)lpParameter + 41);
  *((_QWORD *)lpParameter + 41) = a3;
  if ( a3 )
    sub_1400B6010(a3);
  if ( v9 )
    sub_1400B6010(v9);
  if ( a4 )
  {
    sub_14000EE10((__int64 *)lpParameter + 586);
    v23 = sub_1400B6010(a4);
    v22 = v23;
    if ( v23 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1041, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v23);
LABEL_38:
      sub_140018FF0(&v28);
      return v22;
    }
  }
  if ( !sub_140015C30((__int64)lpParameter) )
    _InterlockedExchange((volatile __int32 *)lpParameter + 84, 2);
  lpParameter[76] = 0;
  sub_1400162D8(*((_QWORD *)lpParameter + 35));
  lpParameter[4681] = 0;
  v10 = sub_14000DA4C();
  lpParameter[324] = (int)sub_1400168CC(v10) >= 0;
  lpParameter[325] = (int)sub_1400165C0() >= 0;
  sub_1400162D8(*((_QWORD *)lpParameter + 33));
  v11 = *((_QWORD *)lpParameter + 53);
  if ( v11 )
  {
    v25 = (void *)sub_1400B6010(v11);
    ResetEvent(v25);
  }
  v12 = (HANDLE *)(lpParameter + 264);
  Thread = CreateThread(
             0LL,
             0LL,
             *((LPTHREAD_START_ROUTINE *)lpParameter + 27),
             lpParameter,
             0,
             (LPDWORD)lpParameter + 24);
  sub_140016858(lpParameter + 120, Thread);
  if ( (unsigned __int8)sub_1400165A4(lpParameter + 120) )
  {
    v22 = sub_1400470EC(retaddr, 1081LL, "avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp");
    goto LABEL_22;
  }
  v14 = *v8;
  if ( !*v8 || v14 == (void *)-1LL )
    v12 = (HANDLE *)(lpParameter + 264);
  else
    SetThreadPriority(v14, 2);
  WaitForSingleObjectEx(*v12, 0x2710u, 0);
  v15 = *(_QWORD *)sub_140044BB0(&v30, lpParameter);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)lpParameter + 84, 0, 0) )
    goto LABEL_18;
  v17 = *((_QWORD *)lpParameter + 13);
  v18 = *((_QWORD *)lpParameter + 37);
  if ( !*((_QWORD *)lpParameter + 39) )
  {
    LOBYTE(v16) = 1;
    v26 = sub_140016A80(lpParameter, v18, v17, v16);
    v27 = v26;
    if ( v26 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1117, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v26);
      sub_140016980(v15);
      v22 = v27;
      goto LABEL_38;
    }
    goto LABEL_18;
  }
  v19 = sub_140016A80(lpParameter, v18, 2 * v17, 0LL);
  v20 = v19;
  if ( v19 >= 0 )
  {
LABEL_18:
    if ( v7 )
      LeaveCriticalSection(v7);
    return 0LL;
  }
  sub_14000C2A8((int)retaddr, 1112, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v19);
  sub_140016980(v15);
  if ( v7 )
    LeaveCriticalSection(v7);
  return v20;
}
