/*
 * XREFs of sub_1400751A0 @ 0x1400751A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140059FCC @ 0x140059FCC (sub_140059FCC.c)
 *     sub_140074D58 @ 0x140074D58 (sub_140074D58.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400751A0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // edx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  int v19; // [rsp+78h] [rbp+28h] BYREF

  v19 = a2;
  v15 = 0LL;
  v16 = 0LL;
  EnterCriticalSection(&stru_1400E87B8);
  v17 = &stru_1400E87B8;
  v6 = sub_140074D58(v5, &v19);
  if ( v6 == -1 )
  {
    v7 = 0LL;
  }
  else
  {
    if ( v6 < 0 || v6 >= dword_1400E87F0 )
    {
      sub_140059FCC(0xC000008C);
      JUMPOUT(0x14007538FLL);
    }
    v7 = *(_QWORD *)(qword_1400E87E8 + 8LL * v6);
  }
  sub_140018FF0(&v17);
  if ( !v7 )
  {
    v8 = -2147023728;
    v9 = -2147023728;
    v10 = 96;
LABEL_16:
    sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp", v9);
    sub_140003238(&v16);
    sub_140003238(&v15);
    return v8;
  }
  v11 = sub_1400B6010(*(_QWORD *)(v7 + 80) + 16LL);
  v8 = v11;
  if ( v11 < 0 )
  {
    v10 = 99;
LABEL_15:
    v9 = v11;
    goto LABEL_16;
  }
  v12 = *(_QWORD *)(v7 + 72);
  if ( v12 )
  {
    v11 = sub_1400B6010(v12);
    v8 = v11;
    if ( v11 < 0 )
    {
      v10 = 104;
      goto LABEL_15;
    }
  }
  else
  {
    v11 = sub_1400B6010(v16);
    v8 = v11;
    if ( v11 < 0 )
    {
      v10 = 108;
      goto LABEL_15;
    }
  }
  v14 = v15;
  v15 = 0LL;
  *a5 = v14;
  sub_140003238(&v16);
  sub_140003238(&v15);
  return 0LL;
}
