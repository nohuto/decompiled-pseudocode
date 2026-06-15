/*
 * XREFs of sub_140084920 @ 0x140084920
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2D0 @ 0x14000C2D0 (sub_14000C2D0.c)
 *     sub_14000C448 @ 0x14000C448 (sub_14000C448.c)
 *     sub_14000C544 @ 0x14000C544 (sub_14000C544.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140083CA0 @ 0x140083CA0 (sub_140083CA0.c)
 *     sub_140083D0C @ 0x140083D0C (sub_140083D0C.c)
 *     sub_140083DBC @ 0x140083DBC (sub_140083DBC.c)
 *     sub_140083ED8 @ 0x140083ED8 (sub_140083ED8.c)
 *     sub_1400859F0 @ 0x1400859F0 (sub_1400859F0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140084920(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // r14
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  int v19; // r9d
  int v20; // eax
  unsigned int v21; // esi
  int v22; // eax
  _QWORD *v24[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v25[16]; // [rsp+40h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+80h] [rbp+30h]

  if ( a3 )
  {
    if ( ((a4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v8 = -2147024890;
      v9 = 1772;
      goto LABEL_3;
    }
    if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v8 = -2147024890;
      v9 = 1773;
      goto LABEL_3;
    }
    sub_14000C2D0((__int64)v25, a1 + 96);
    v10 = sub_1400859F0(a1, a2);
    v8 = v10;
    if ( v10 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1778, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v10);
LABEL_27:
      sub_140030124((__int64)v25);
      return v8;
    }
    v11 = *(_QWORD *)(a1 + 800);
    v24[1] = 0LL;
    sub_1400B6010(v11);
    v24[0] = 0LL;
    v14 = sub_140083D0C(v12, 0LL, a3, v24);
    if ( v14 || (v24[0] = 0LL, (v14 = sub_140083D0C(v13, (_QWORD *)(a1 + 184), a3, v24)) != 0LL) )
    {
      v16 = sub_140083DBC(a1, a4);
      v18 = v16;
      if ( v16 )
      {
        v24[0] = 0LL;
        v20 = sub_140083ED8(v17, v14 + 15, v16, v24);
        v21 = v20;
        if ( v20 < 0 )
        {
          sub_14000C2A8((int)retaddr, 1798, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v20);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          v8 = v21;
          goto LABEL_27;
        }
        sub_14000C544(v14 + 15, (unsigned __int64)v24[0]);
        sub_14000C448(v14 + 31, (unsigned __int64)v24[0]);
        --*(_DWORD *)(v18 + 12);
        v22 = sub_140083CA0(a1, v18);
        v8 = v22;
        if ( v22 >= 0 )
        {
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          v8 = 0;
          goto LABEL_27;
        }
        v19 = v22;
        v15 = 1805;
        goto LABEL_16;
      }
      v15 = 1794;
    }
    else
    {
      v15 = 1791;
    }
    v8 = -2005139430;
    v19 = -2005139430;
LABEL_16:
    sub_14000C2A8((int)retaddr, v15, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v19);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_27;
  }
  v8 = -2147467261;
  v9 = 1771;
LABEL_3:
  sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v8);
  return v8;
}
