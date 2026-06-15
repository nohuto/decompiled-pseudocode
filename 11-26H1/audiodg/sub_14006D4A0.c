/*
 * XREFs of sub_14006D4A0 @ 0x14006D4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140004140 @ 0x140004140 (sub_140004140.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000FFE4 @ 0x14000FFE4 (sub_14000FFE4.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14002C780 @ 0x14002C780 (sub_14002C780.c)
 *     sub_140035328 @ 0x140035328 (sub_140035328.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     sub_140069748 @ 0x140069748 (sub_140069748.c)
 *     sub_140069ABC @ 0x140069ABC (sub_140069ABC.c)
 *     sub_14006E480 @ 0x14006E480 (sub_14006E480.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006D4A0(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  void *v14; // rax
  int v15; // esi
  int v16; // edx
  int v17; // eax
  int v18; // edx
  __int64 v19; // rbx
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+60h] [rbp-20h] BYREF
  __int128 v24; // [rsp+70h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v26; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+38h] BYREF

  v22 = 0LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  v23 = v9;
  a5[236] = 0;
  if ( a2 )
  {
    v10 = sub_140035328(*(_DWORD *)a2);
    if ( v10 < 0 )
      goto LABEL_4;
    v26 = 0LL;
    v27 = 0LL;
    sub_1400B6010(a4);
    v11 = v27;
    if ( v27 )
    {
      if ( v26 )
        sub_1400B6010(v26);
      v12 = sub_1400B6010(v11);
      v10 = v12;
      if ( v12 < 0 )
      {
        sub_14000C2A8((int)retaddr, 574, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v12);
LABEL_10:
        sub_140003238(&v27);
        sub_140003238(&v26);
        goto LABEL_33;
      }
    }
    if ( v26 )
    {
      v13 = 0LL;
      a5 = 0LL;
      if ( *(_DWORD *)(a2 + 68) )
      {
        v14 = CoTaskMemAlloc(*(unsigned int *)(a2 + 68));
        sub_140008C08((void **)&a5, v14);
        v13 = (__int64)a5;
        if ( !a5 )
        {
          v10 = -2147024882;
          sub_14000C2A8(
            (int)retaddr,
            583,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
            -2147024882);
LABEL_15:
          sub_140008C08((void **)&a5, 0LL);
          goto LABEL_10;
        }
        memcpy(a5, *(const void **)(a2 + 72), *(unsigned int *)(a2 + 68));
      }
      v21 = 0LL;
      v15 = sub_14006E480(a3, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 48), *(_DWORD *)(a2 + 8) == 1, v13, (__int64)&v21);
      if ( v15 < 0 )
      {
        v16 = 588;
LABEL_19:
        sub_14000C2A8((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v15);
        sub_140003238(&v21);
        sub_140008C08((void **)&a5, 0LL);
        sub_140003238(&v27);
        sub_140003238(&v26);
        v10 = v15;
        goto LABEL_33;
      }
      v17 = sub_140069748(v21, a2, v26);
      v10 = v17;
      if ( v17 < 0 )
      {
        v18 = 597;
LABEL_22:
        sub_14000C2A8((int)retaddr, v18, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v17);
        sub_140003238(&v21);
        goto LABEL_15;
      }
      v19 = v22;
      v15 = sub_14002C780(v22);
      if ( v15 < 0 )
      {
        v16 = 599;
        goto LABEL_19;
      }
      v15 = sub_140004140(v19, 0LL);
      if ( v15 < 0 )
      {
        v16 = 600;
        goto LABEL_19;
      }
      v15 = sub_140069ABC(v19, a2, v26);
      if ( v15 < 0 )
      {
        v16 = 601;
        goto LABEL_19;
      }
      v24 = *(_OWORD *)(a2 + 32);
      v17 = sub_1400B6010(a1 - 8);
      v10 = v17;
      if ( v17 < 0 )
      {
        v18 = 611;
        goto LABEL_22;
      }
      v22 = 0LL;
      *(_BYTE *)(a1 + 256) = 1;
      sub_140003238(&v21);
      sub_140008C08((void **)&a5, 0LL);
    }
    sub_140007CC0();
    sub_140003238(&v27);
    sub_140003238(&v26);
    v10 = 0;
    goto LABEL_33;
  }
  v10 = -2147467261;
LABEL_4:
  sub_14000C2A8((int)retaddr, 566, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v10);
LABEL_33:
  sub_140018FF0(&v23);
  sub_14000FFE4(&v22);
  return (unsigned int)v10;
}
