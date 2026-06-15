/*
 * XREFs of sub_14000BF70 @ 0x14000BF70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000A808 @ 0x14000A808 (sub_14000A808.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2F8 @ 0x14000C2F8 (sub_14000C2F8.c)
 *     sub_14000C448 @ 0x14000C448 (sub_14000C448.c)
 *     sub_14000C544 @ 0x14000C544 (sub_14000C544.c)
 *     sub_14000D810 @ 0x14000D810 (sub_14000D810.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14000BF70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // r14
  _QWORD *v17; // rcx
  unsigned __int64 i; // rsi
  int v19; // eax
  __int64 v20; // rdx
  LPCRITICAL_SECTION v21; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+80h] [rbp+30h]

  if ( !a3 )
  {
    v9 = -2147024809;
    v8 = 2689LL;
    goto LABEL_5;
  }
  if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 2690LL;
LABEL_4:
    v9 = -2147024890;
LABEL_5:
    sub_14000C2A8(retaddr, v8, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v9);
    return v9;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 2691LL;
    goto LABEL_4;
  }
  v21 = (LPCRITICAL_SECTION)(a1 + 88);
  v22 = 0;
  sub_14000C2F8(&v21);
  v11 = *(_QWORD *)(a1 + 768);
  if ( !v11 )
  {
    v9 = -2147024890;
    v20 = 1909LL;
    goto LABEL_43;
  }
  if ( a2 != *(_QWORD *)(v11 + 16) )
  {
    v9 = -2147024890;
    v20 = 1912LL;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(a1 + 777) )
  {
    v9 = -2005139407;
    v20 = 1915LL;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(a1 + 778) )
  {
    v9 = -2005139406;
    v20 = 1916LL;
LABEL_43:
    sub_14000C2A8(retaddr, v20, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v9);
    sub_14000C2A8(retaddr, 2696LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v9);
LABEL_44:
    sub_140030124(&v21);
    return v9;
  }
  sub_1400B6010(*(_QWORD *)(a1 + 792));
  v12 = (_QWORD *)MEMORY[0];
  do
  {
    if ( !v12 )
      goto LABEL_13;
    v15 = (_QWORD *)v12[2];
    v12 = (_QWORD *)*v12;
  }
  while ( *v15 != a3 );
  if ( !v15 )
  {
LABEL_13:
    v13 = *(_QWORD **)(a1 + 176);
    while ( v13 )
    {
      v15 = (_QWORD *)v13[2];
      v13 = (_QWORD *)*v13;
      if ( *v15 == a3 )
      {
        if ( v15 )
          goto LABEL_26;
        break;
      }
    }
    v14 = 2709LL;
LABEL_16:
    sub_14000C2A8(retaddr, v14, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2289827866LL);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( v22 )
      LeaveCriticalSection(v21);
    return 2289827866LL;
  }
LABEL_26:
  v16 = sub_14000A808(a1, a4);
  if ( !v16 )
  {
    sub_14000C2A8(retaddr, 2712LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2289827866LL);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v9 = -2005139430;
    goto LABEL_44;
  }
  v17 = v15 + 19;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v15[20] )
    {
      v14 = 2716LL;
      goto LABEL_16;
    }
    if ( *(_QWORD *)(*v17 + 8 * i) == v16 )
      break;
  }
  sub_14000C544(v17, i);
  sub_14000C448(v15 + 35, i);
  --*(_DWORD *)(v16 + 12);
  v19 = sub_14000D810(a1, v16);
  v9 = v19;
  if ( v19 >= 0 )
  {
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( v22 )
      LeaveCriticalSection(v21);
    return 0LL;
  }
  sub_14000C2A8(retaddr, 2723LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", (unsigned int)v19);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v22 )
    LeaveCriticalSection(v21);
  return v9;
}
