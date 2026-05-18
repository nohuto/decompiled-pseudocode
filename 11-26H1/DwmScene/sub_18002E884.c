/*
 * XREFs of sub_18002E884 @ 0x18002E884
 * Callers:
 *     sub_18002DF50 @ 0x18002DF50 (sub_18002DF50.c)
 *     sub_18005FD88 @ 0x18005FD88 (sub_18005FD88.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 */

__int64 __fastcall sub_18002E884(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 i; // rbx
  __int64 v25; // rax
  __int64 j; // rax
  const void *v27; // rax
  const void *v28; // r8
  int v29; // eax
  bool v30; // zf
  const void *v31; // rax
  const void *v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 *v35; // rax
  __int64 v36; // rbx
  const void *v37; // rax
  const void *v38; // r8
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int128 v43; // [rsp+20h] [rbp-38h] BYREF
  __int64 v44; // [rsp+30h] [rbp-28h]
  __int64 v45; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_QWORD *)*a1;
  if ( *(_BYTE *)(a3 + 25) )
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
LABEL_36:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_37;
    }
    goto LABEL_29;
  }
  v16 = a3 + 32;
  v17 = a3 + 32;
  if ( a3 != *v4 )
  {
    sub_1800148EC(v17);
    v21 = (const void *)sub_1800148EC(a4);
    LOBYTE(v23) = sub_18001CF60(v21, *(_QWORD *)(a4 + 16), v22, *(_QWORD *)(v16 + 16));
    if ( v23 < 0 )
    {
      i = *(_QWORD *)a3;
      v25 = a3;
      if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
      {
        for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v25 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
          v25 = i;
        if ( *(_BYTE *)(v25 + 25) )
          i = v25;
      }
      else
      {
        for ( j = *(_QWORD *)(i + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
          i = j;
      }
      sub_1800148EC(a4);
      v27 = (const void *)sub_1800148EC(i + 32);
      LOBYTE(v29) = sub_18001CF60(v27, *(_QWORD *)(i + 48), v28, *(_QWORD *)(a4 + 16));
      if ( v29 >= 0 )
        goto LABEL_29;
      v30 = *(_BYTE *)(*(_QWORD *)(i + 16) + 25LL) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( !v30 )
      {
        *(_QWORD *)a2 = i;
        goto LABEL_36;
      }
      *(_QWORD *)a2 = a3;
LABEL_25:
      *(_QWORD *)(a2 + 8) = 1LL;
      goto LABEL_37;
    }
    sub_1800148EC(a4);
    v31 = (const void *)sub_1800148EC(v16);
    LOBYTE(v33) = sub_18001CF60(v31, *(_QWORD *)(v16 + 16), v32, *(_QWORD *)(a4 + 16));
    if ( v33 >= 0 )
    {
      *(_BYTE *)(a2 + 16) = 1;
    }
    else
    {
      v45 = a3;
      v35 = sub_18001D6F4(&v45, v34);
      v36 = *v35;
      if ( !*(_BYTE *)(*v35 + 25) )
      {
        sub_1800148EC(v36 + 32);
        v37 = (const void *)sub_1800148EC(a4);
        LOBYTE(v39) = sub_18001CF60(v37, *(_QWORD *)(a4 + 16), v38, *(_QWORD *)(v36 + 48));
        if ( v39 >= 0 )
          goto LABEL_29;
      }
      v30 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( v30 )
      {
        *(_QWORD *)a2 = v36;
        goto LABEL_25;
      }
    }
    *(_QWORD *)a2 = a3;
    goto LABEL_36;
  }
  sub_1800148EC(v17);
  v18 = (const void *)sub_1800148EC(a4);
  LOBYTE(v20) = sub_18001CF60(v18, *(_QWORD *)(a4 + 16), v19, *(_QWORD *)(v16 + 16));
  if ( v20 >= 0 )
  {
LABEL_29:
    sub_18001CC6C((__int64)a1, &v43, a4);
    v40 = v44;
    if ( sub_18001CD34(v41, v44) )
    {
      *(_QWORD *)a2 = v40;
      *(_QWORD *)(a2 + 8) = 2LL;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_37;
    }
    *(_OWORD *)a2 = v43;
    goto LABEL_8;
  }
  *(_QWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = 1LL;
LABEL_8:
  *(_BYTE *)(a2 + 16) = 0;
LABEL_37:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
