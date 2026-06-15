/*
 * XREFs of sub_140074DA0 @ 0x140074DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_1400749EC @ 0x1400749EC (sub_1400749EC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140074DA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+28h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v6 = a1 - 8;
  *(_DWORD *)(a1 - 8 + 88) = _InterlockedIncrement(&dword_1400E9734);
  EnterCriticalSection(&stru_1400E87B8);
  v13 = &stru_1400E87B8;
  v15 = v6;
  sub_1400749EC(v7, (_DWORD *)(a1 + 80), &v15);
  sub_140018FF0(&v13);
  v8 = 0LL;
  v12 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  sub_140019444(&v12);
  v9 = sub_1400B6010(a2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v8 = v12;
LABEL_5:
    *(_QWORD *)(a1 + 64) = v8;
    *(_QWORD *)(a1 + 72) = a3;
    v10 = 0;
    goto LABEL_6;
  }
  sub_14000C2A8((int)retaddr, 58, (int)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp", v9);
LABEL_6:
  sub_140003238(&v12);
  return v10;
}
