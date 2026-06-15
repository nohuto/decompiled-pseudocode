/*
 * XREFs of sub_1400364B0 @ 0x1400364B0
 * Callers:
 *     sub_14000A0F4 @ 0x14000A0F4 (sub_14000A0F4.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1400364B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  _QWORD *v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v26; // [rsp+50h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 24) )
      goto LABEL_9;
    v24 = 371;
    goto LABEL_44;
  }
  v5 = *(_DWORD *)(v4 + 40);
  if ( v5 != 2 )
  {
    if ( ((v5 - 1) & 0xFFFFFFFD) == 0 )
    {
      v17 = *(_QWORD **)(v4 + 32);
      v26 = 0LL;
      v18 = sub_1400B6010(*v17);
      v19 = v18;
      if ( v18 < 0 )
      {
        sub_14000C2A8((int)retaddr, 395, (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", v18);
        if ( v26 )
          sub_1400B6010(v26);
        return v19;
      }
      v20 = sub_1400B6010(a2);
      v19 = v20;
      if ( v20 < 0 )
      {
        sub_14000C2A8((int)retaddr, 396, (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", v20);
        sub_140003238(&v26);
        return v19;
      }
      v9 = v26;
      if ( v26 )
        goto LABEL_8;
      goto LABEL_9;
    }
    v24 = 400;
LABEL_44:
    v19 = -2005139396;
    sub_14000C2A8(
      (int)retaddr,
      v24,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      -2005139396);
    return v19;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL);
  v26 = v6;
  if ( v6 )
    sub_1400B6010(v6);
  v7 = sub_1400B6010(a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_14000C2A8((int)retaddr, 383, (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", v7);
    sub_140003238(&v26);
    return v8;
  }
  if ( v6 )
  {
    v9 = v6;
LABEL_8:
    sub_1400B6010(v9);
  }
LABEL_9:
  v10 = *(_QWORD *)(a1 + 24);
  if ( !v10 )
    return 0LL;
  v11 = *(_DWORD *)(v10 + 40);
  if ( v11 != 2 )
  {
    if ( ((v11 - 1) & 0xFFFFFFF9) == 0 && v11 != 7 )
    {
      v21 = *(_QWORD **)(v10 + 32);
      v26 = 0LL;
      v22 = sub_1400B6010(*v21);
      v19 = v22;
      if ( v22 < 0 )
      {
        sub_14000C2A8((int)retaddr, 426, (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", v22);
        if ( v26 )
          sub_1400B6010(v26);
      }
      else
      {
        v23 = sub_1400B6010(a2);
        v19 = v23;
        if ( v23 >= 0 )
        {
          v15 = v26;
          if ( !v26 )
            return 0LL;
          goto LABEL_16;
        }
        sub_14000C2A8((int)retaddr, 427, (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", v23);
        if ( v26 )
          sub_1400B6010(v26);
      }
      return v19;
    }
    v24 = 431;
    goto LABEL_44;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 40LL);
  v26 = v12;
  if ( v12 )
    sub_1400B6010(v12);
  v13 = sub_1400B6010(a2);
  v14 = v13;
  if ( v13 >= 0 )
  {
    if ( v12 )
    {
      v15 = v12;
LABEL_16:
      sub_1400B6010(v15);
    }
    return 0LL;
  }
  sub_14000C2A8((int)retaddr, 414, (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", v13);
  if ( v12 )
    sub_1400B6010(v12);
  return v14;
}
