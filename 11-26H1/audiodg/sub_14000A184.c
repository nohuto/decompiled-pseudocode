/*
 * XREFs of sub_14000A184 @ 0x14000A184
 * Callers:
 *     sub_14000A0F4 @ 0x14000A0F4 (sub_14000A0F4.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_14000A184(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  int v17; // r8d
  _QWORD *v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  void *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v27; // [rsp+50h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4 )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      v22 = 273LL;
      goto LABEL_35;
    }
    goto LABEL_9;
  }
  v5 = *(_DWORD *)(v4 + 40);
  if ( v5 != 2 )
  {
    if ( ((v5 - 1) & 0xFFFFFFFD) != 0 )
    {
      v22 = 301LL;
      goto LABEL_35;
    }
    v23 = *(_QWORD **)(v4 + 32);
    v27 = 0LL;
    v24 = sub_1400B6010(*v23);
    v20 = v24;
    if ( v24 < 0 )
    {
      v25 = 296LL;
    }
    else
    {
      v24 = sub_1400B6010(a2);
      v20 = v24;
      if ( v24 >= 0 )
      {
        v9 = v27;
        if ( v27 )
          goto LABEL_8;
        goto LABEL_9;
      }
      v25 = 297LL;
    }
    sub_14000C2A8(retaddr, v25, "avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", (unsigned int)v24);
LABEL_46:
    sub_140003238(&v27);
    return v20;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL);
  v27 = v6;
  if ( v6 )
    sub_1400B6010(v6);
  v7 = sub_1400B6010(a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_14000C2A8(retaddr, 285LL, "avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", (unsigned int)v7);
    sub_140003238(&v27);
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
    if ( v11 <= 6 )
    {
      v17 = 74;
      if ( _bittest(&v17, v11) )
      {
        v18 = *(_QWORD **)(v10 + 32);
        v27 = 0LL;
        v19 = sub_1400B6010(*v18);
        v20 = v19;
        if ( v19 < 0 )
        {
          sub_14000C2A8(
            retaddr,
            327LL,
            "avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
            (unsigned int)v19);
          if ( v27 )
            sub_1400B6010(v27);
          return v20;
        }
        v21 = sub_1400B6010(a2);
        v20 = v21;
        if ( v21 >= 0 )
        {
          v15 = v27;
          if ( !v27 )
            return 0LL;
          goto LABEL_16;
        }
        sub_14000C2A8(
          retaddr,
          328LL,
          "avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
          (unsigned int)v21);
        goto LABEL_46;
      }
    }
    v22 = 332LL;
LABEL_35:
    v20 = -2005139396;
    sub_14000C2A8(retaddr, v22, "avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", 2289827900LL);
    return v20;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 40LL);
  v27 = v12;
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
  sub_14000C2A8(retaddr, 315LL, "avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", (unsigned int)v13);
  if ( v12 )
    sub_1400B6010(v12);
  return v14;
}
