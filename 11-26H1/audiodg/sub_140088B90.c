/*
 * XREFs of sub_140088B90 @ 0x140088B90
 * Callers:
 *     sub_140086DE8 @ 0x140086DE8 (sub_140086DE8.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140086D20 @ 0x140086D20 (sub_140086D20.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140088B90(__int64 a1, __int64 a2, const IID *a3)
{
  LPVOID *ppv; // rsi
  __int64 v6; // rcx
  int Instance; // ebx
  int v8; // edx
  LPVOID v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  LPVOID v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)(a1 + 88) = a2;
  ppv = (LPVOID *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 96);
  *ppv = 0LL;
  if ( v6 )
    sub_1400B6010(v6);
  Instance = CoCreateInstance(a3, 0LL, 0x17u, &stru_1400C69E0, ppv);
  if ( Instance < 0 )
  {
    v8 = 356;
LABEL_5:
    sub_14000C2A8(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
      Instance);
    return (unsigned int)Instance;
  }
  v10 = *ppv;
  v11 = (_QWORD *)(a1 + 112);
  v12 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( v12 )
    sub_1400B6010(v12);
  Instance = sub_1400B6010(v10);
  if ( Instance < 0 )
  {
    v8 = 357;
    goto LABEL_5;
  }
  *(_DWORD *)(a1 + 72) = sub_1400B6010(*v11);
  v13 = *ppv;
  v14 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v14 )
    sub_1400B6010(v14);
  Instance = sub_1400B6010(v13);
  if ( Instance < 0 )
  {
    v8 = 361;
    goto LABEL_5;
  }
  v16[0] = sub_1400B6010(*v11);
  v15 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( v15 )
    sub_1400B6010(v15);
  Instance = sub_140086D20((_QWORD *)(a1 + 120), v16);
  if ( Instance < 0 )
  {
    v8 = 362;
    goto LABEL_5;
  }
  return 0LL;
}
