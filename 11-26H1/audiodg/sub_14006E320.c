/*
 * XREFs of sub_14006E320 @ 0x14006E320
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008528 @ 0x140008528 (sub_140008528.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006E320(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 *v9; // rax
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  int v13; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+18h]
  _QWORD *v16; // [rsp+40h] [rbp+20h] BYREF
  __int64 v17; // [rsp+50h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+38h] BYREF

  v3 = *(_QWORD *)(a1 + 272);
  if ( v3 )
  {
    v4 = sub_140008528(v3, a2);
    if ( v4 < 0 )
    {
      v5 = 1159;
LABEL_4:
      sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v4);
      return (unsigned int)v4;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v4 = sub_140008528(v6, a2);
      if ( v4 < 0 )
      {
        v5 = 1164;
        goto LABEL_4;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v8 = *(_QWORD **)(a1 + 72);
  v16 = v8;
  v18 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  while ( v8 )
  {
    v9 = sub_1400265D8(v7, &v16);
    sub_140010994(&v17, *v9);
    v10 = sub_1400B6010(v17);
    v4 = v10;
    if ( v10 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1174, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v10);
      sub_140003238(&v17);
      goto LABEL_19;
    }
    sub_140003238(&v17);
    v8 = v16;
  }
  v11 = *(_QWORD **)(a1 + 120);
  v16 = v11;
  while ( v11 )
  {
    v12 = sub_1400265D8(v7, &v16);
    v13 = sub_1400B6010(*(_QWORD *)*v12);
    v4 = v13;
    if ( v13 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1182, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v13);
      goto LABEL_19;
    }
    v11 = v16;
  }
  v4 = 0;
LABEL_19:
  sub_140018FF0(&v18);
  return (unsigned int)v4;
}
