/*
 * XREFs of sub_18002E5CC @ 0x18002E5CC
 * Callers:
 *     sub_18002DE54 @ 0x18002DE54 (sub_18002DE54.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 */

__int64 __fastcall sub_18002E5CC(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  const void *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  const void *v14; // r8
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  const void *v18; // rax
  const void *v19; // r8
  int v20; // eax
  const void *v21; // rax
  const void *v22; // r8
  int v23; // eax
  __int64 *i; // rbx
  __int64 *v25; // rax
  __int64 *j; // rax
  const void *v27; // rax
  const void *v28; // r8
  int v29; // eax
  bool v30; // zf
  const void *v31; // rax
  const void *v32; // r8
  int v33; // eax
  __int64 *v34; // rbx
  __int64 *v35; // rax
  __int64 **v36; // rcx
  __int64 *v37; // rcx
  const void *v38; // rax
  const void *v39; // r8
  int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int128 v44; // [rsp+20h] [rbp-38h] BYREF
  __int64 v45; // [rsp+30h] [rbp-28h]

  v4 = (_QWORD *)*a1;
  if ( *((_BYTE *)a3 + 25) )
  {
    v9 = v4 + 2;
    if ( *(_BYTE *)(v4[1] + 25LL)
      || (sub_1800148EC(a4),
          v11 = (const void *)sub_1800148EC(v10 + 32),
          LOBYTE(v15) = sub_18001CF60(v11, *(_QWORD *)(v13 + 48), v14, *(_QWORD *)(v12 + 16)),
          v15 < 0) )
    {
      *(_QWORD *)a2 = *v9;
      *(_BYTE *)(a2 + 16) = 0;
LABEL_44:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_45;
    }
    goto LABEL_37;
  }
  v16 = (__int64)(a3 + 4);
  v17 = (__int64)(a3 + 4);
  if ( a3 != (__int64 *)*v4 )
  {
    sub_1800148EC(v17);
    v21 = (const void *)sub_1800148EC(a4);
    LOBYTE(v23) = sub_18001CF60(v21, *(_QWORD *)(a4 + 16), v22, *(_QWORD *)(v16 + 16));
    if ( v23 < 0 )
    {
      i = (__int64 *)*a3;
      v25 = a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v25 == (__int64 *)*i; i = (__int64 *)i[1] )
          v25 = i;
        if ( *((_BYTE *)v25 + 25) )
          i = v25;
      }
      else
      {
        for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
          i = j;
      }
      sub_1800148EC(a4);
      v27 = (const void *)sub_1800148EC((__int64)(i + 4));
      LOBYTE(v29) = sub_18001CF60(v27, i[6], v28, *(_QWORD *)(a4 + 16));
      if ( v29 >= 0 )
        goto LABEL_37;
      v30 = *(_BYTE *)(i[2] + 25) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( !v30 )
      {
        *(_QWORD *)a2 = i;
        goto LABEL_44;
      }
      *(_QWORD *)a2 = a3;
LABEL_25:
      *(_QWORD *)(a2 + 8) = 1LL;
      goto LABEL_45;
    }
    sub_1800148EC(a4);
    v31 = (const void *)sub_1800148EC(v16);
    LOBYTE(v33) = sub_18001CF60(v31, *(_QWORD *)(v16 + 16), v32, *(_QWORD *)(a4 + 16));
    if ( v33 >= 0 )
    {
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_43;
    }
    v34 = (__int64 *)a3[2];
    if ( *((_BYTE *)v34 + 25) )
    {
      v34 = (__int64 *)a3[1];
      if ( *((_BYTE *)v34 + 25) )
        goto LABEL_40;
      v35 = a3;
      do
      {
        v36 = (__int64 **)v34;
        if ( v35 != (__int64 *)v34[2] )
          break;
        v34 = (__int64 *)v34[1];
        v35 = (__int64 *)v36;
      }
      while ( !*((_BYTE *)v34 + 25) );
    }
    else
    {
      v37 = (__int64 *)*v34;
      if ( !*(_BYTE *)(*v34 + 25) )
      {
        do
        {
          v34 = v37;
          v37 = (__int64 *)*v37;
        }
        while ( !*((_BYTE *)v37 + 25) );
      }
    }
    if ( !*((_BYTE *)v34 + 25) )
    {
      sub_1800148EC((__int64)(v34 + 4));
      v38 = (const void *)sub_1800148EC(a4);
      LOBYTE(v40) = sub_18001CF60(v38, *(_QWORD *)(a4 + 16), v39, v34[6]);
      if ( v40 >= 0 )
        goto LABEL_37;
    }
LABEL_40:
    v30 = *(_BYTE *)(a3[2] + 25) == 0;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v30 )
    {
      *(_QWORD *)a2 = v34;
      goto LABEL_25;
    }
LABEL_43:
    *(_QWORD *)a2 = a3;
    goto LABEL_44;
  }
  sub_1800148EC(v17);
  v18 = (const void *)sub_1800148EC(a4);
  LOBYTE(v20) = sub_18001CF60(v18, *(_QWORD *)(a4 + 16), v19, *(_QWORD *)(v16 + 16));
  if ( v20 >= 0 )
  {
LABEL_37:
    sub_18001CC6C((__int64)a1, &v44, a4);
    v41 = v45;
    if ( sub_18001CD34(v42, v45) )
    {
      *(_QWORD *)a2 = v41;
      *(_QWORD *)(a2 + 8) = 2LL;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_45;
    }
    *(_OWORD *)a2 = v44;
    goto LABEL_8;
  }
  *(_QWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = 1LL;
LABEL_8:
  *(_BYTE *)(a2 + 16) = 0;
LABEL_45:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
