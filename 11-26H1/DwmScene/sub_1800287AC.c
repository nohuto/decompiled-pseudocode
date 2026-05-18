/*
 * XREFs of sub_1800287AC @ 0x1800287AC
 * Callers:
 *     sub_1800286EC @ 0x1800286EC (sub_1800286EC.c)
 *     sub_18002932C @ 0x18002932C (sub_18002932C.c)
 *     sub_180037D10 @ 0x180037D10 (sub_180037D10.c)
 *     sub_180052774 @ 0x180052774 (sub_180052774.c)
 *     sub_180055BDC @ 0x180055BDC (sub_180055BDC.c)
 *     sub_18005E3D0 @ 0x18005E3D0 (sub_18005E3D0.c)
 *     sub_18007F4E4 @ 0x18007F4E4 (sub_18007F4E4.c)
 *     sub_1800990DC @ 0x1800990DC (sub_1800990DC.c)
 *     sub_1800C18B8 @ 0x1800C18B8 (sub_1800C18B8.c)
 *     sub_1800C195C @ 0x1800C195C (sub_1800C195C.c)
 *     sub_1800CE920 @ 0x1800CE920 (sub_1800CE920.c)
 *     sub_1800D39C8 @ 0x1800D39C8 (sub_1800D39C8.c)
 *     sub_1800D49E0 @ 0x1800D49E0 (sub_1800D49E0.c)
 * Callees:
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18001DEA0 @ 0x18001DEA0 (sub_18001DEA0.c)
 *     sub_18001DEF0 @ 0x18001DEF0 (sub_18001DEF0.c)
 *     sub_18001DF14 @ 0x18001DF14 (sub_18001DF14.c)
 */

__int64 *__fastcall sub_1800287AC(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rcx
  char v12; // dl
  __int64 v13; // rdi
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = (__int64 *)a2;
  sub_18001D6F4((__int64 *)&v18, a2);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
LABEL_5:
    v6 = v3[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( *(__int64 **)v6 == v3 )
    {
      *(_QWORD *)v6 = v4;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v4;
    }
    v7 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        v8 = (_QWORD *)v6;
      else
        v8 = sub_18001DEF0((_QWORD *)v4);
      *v7 = v8;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        v9 = v6;
      }
      else
      {
        v10 = *(_QWORD *)(v4 + 16);
        v9 = v4;
        while ( !*(_BYTE *)(v10 + 25) )
        {
          v9 = v10;
          v10 = *(_QWORD *)(v10 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v9;
    }
    goto LABEL_35;
  }
  v5 = (__int64)v18;
  v4 = v18[2];
  if ( v18 == v3 )
    goto LABEL_5;
  *(_QWORD *)(*v3 + 8) = v18;
  *(_QWORD *)v5 = *v3;
  if ( v5 == v3[2] )
  {
    v6 = v5;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)v6 = v4;
    *(_QWORD *)(v5 + 16) = v3[2];
    *(_QWORD *)(v3[2] + 8) = v5;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v5;
  }
  else
  {
    v11 = (__int64 *)v3[1];
    if ( (__int64 *)*v11 == v3 )
      *v11 = v5;
    else
      v11[2] = v5;
  }
  *(_QWORD *)(v5 + 8) = v3[1];
  v12 = *(_BYTE *)(v5 + 24);
  *(_BYTE *)(v5 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v12;
LABEL_35:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_58;
  while ( 1 )
  {
    v13 = v6;
    if ( v4 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v4 + 24) != 1 )
      break;
    v14 = *(_BYTE **)v6;
    if ( v4 == *(_QWORD *)v6 )
    {
      v14 = *(_BYTE **)(v6 + 16);
      if ( !v14[24] )
      {
        v14[24] = 1;
        *(_BYTE *)(v6 + 24) = 0;
        sub_18001DEA0((__int64)a1, v6);
        v14 = *(_BYTE **)(v6 + 16);
      }
      if ( !v14[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
            v14[24] = 0;
            sub_18001DF14((__int64)a1, v14);
            v14 = *(_BYTE **)(v6 + 16);
          }
          v14[24] = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) = 1;
          sub_18001DEA0((__int64)a1, v6);
          break;
        }
LABEL_52:
        v14[24] = 0;
      }
    }
    else
    {
      if ( !v14[24] )
      {
        v14[24] = 1;
        *(_BYTE *)(v6 + 24) = 0;
        sub_18001DF14((__int64)a1, (_QWORD *)v6);
        v14 = *(_BYTE **)v6;
      }
      if ( !v14[25] )
      {
        v15 = *((_QWORD *)v14 + 2);
        if ( *(_BYTE *)(v15 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) == 1 )
          {
            *(_BYTE *)(v15 + 24) = 1;
            v14[24] = 0;
            sub_18001DEA0((__int64)a1, (__int64)v14);
            v14 = *(_BYTE **)v6;
          }
          v14[24] = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
          sub_18001DF14((__int64)a1, (_QWORD *)v6);
          break;
        }
        goto LABEL_52;
      }
    }
    v6 = *(_QWORD *)(v6 + 8);
    v4 = v13;
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_58:
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  return v3;
}
