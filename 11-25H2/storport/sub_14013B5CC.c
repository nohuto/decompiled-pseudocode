/*
 * XREFs of sub_14013B5CC @ 0x14013B5CC
 * Callers:
 *     sub_14013A45C @ 0x14013A45C (sub_14013A45C.c)
 *     sub_14013AEC0 @ 0x14013AEC0 (sub_14013AEC0.c)
 *     sub_14013AFF4 @ 0x14013AFF4 (sub_14013AFF4.c)
 *     sub_14013B2AC @ 0x14013B2AC (sub_14013B2AC.c)
 *     sub_14013B440 @ 0x14013B440 (sub_14013B440.c)
 *     sub_14013B4D8 @ 0x14013B4D8 (sub_14013B4D8.c)
 *     sub_14013B5CC @ 0x14013B5CC (sub_14013B5CC.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_14013AEC0 @ 0x14013AEC0 (sub_14013AEC0.c)
 *     sub_14013AFF4 @ 0x14013AFF4 (sub_14013AFF4.c)
 *     sub_14013B5CC @ 0x14013B5CC (sub_14013B5CC.c)
 *     sub_14013B8AC @ 0x14013B8AC (sub_14013B8AC.c)
 *     sub_14013B98C @ 0x14013B98C (sub_14013B98C.c)
 */

__int64 __fastcall sub_14013B5CC(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned __int8 v4; // r9
  int v5; // eax
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r11
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // eax
  __int64 v16; // rdi
  _QWORD *i; // rsi
  int v18; // eax
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r9
  PDEVICE_OBJECT v26; // rcx
  unsigned __int16 v27; // dx
  unsigned int v28; // eax
  unsigned __int8 v30; // [rsp+50h] [rbp+30h] BYREF
  unsigned int v31; // [rsp+58h] [rbp+38h] BYREF

  v31 = 0;
  v3 = a1;
  v30 = 0;
  while ( 1 )
  {
    v5 = sub_14013B98C(a1, &v30, &v31);
    v6 = (unsigned int)v5;
    if ( v5 )
      break;
    v4 = v30;
    if ( v30 != 0xFF )
      goto LABEL_7;
    ++*(_DWORD *)(v3 + 12);
    a1 = v3;
  }
  if ( v5 < 0 )
    return (unsigned int)v6;
  v4 = v30;
LABEL_7:
  v7 = v31;
  if ( v31 <= 1 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x1Cu, (__int64)&unk_1401552C8, v4);
    goto LABEL_56;
  }
  ++*(_DWORD *)(v3 + 12);
  v8 = 0LL;
  v9 = *(unsigned int *)(v3 + 36);
  if ( (unsigned int)v9 >= 0x100 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930((__int64)off_140168120->AttachedDevice, 0x26u, (__int64)&unk_1401552C8);
      *a2 = 0LL;
      goto LABEL_11;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 36) = v9 + 1;
    v8 = v3 + 8 * (v9 + 2 * v9 + 5);
  }
  *a2 = v8;
  if ( !v8 )
  {
LABEL_11:
    LODWORD(v6) = -1073741670;
    return (unsigned int)v6;
  }
  *(_DWORD *)(v8 + 8) = v7;
  if ( v7 > 11 )
  {
    v19 = v7 - 12;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_40;
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_40;
      v22 = v21 - 1;
      if ( !v22 )
      {
LABEL_23:
        *(_DWORD *)(*a2 + 12) = v4 & 0xF;
LABEL_48:
        v15 = sub_14013B8AC(v3, *a2, v6);
        goto LABEL_49;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
          return (unsigned int)v6;
LABEL_40:
        v24 = *(unsigned int *)(v3 + 12);
        v25 = (unsigned int)(v24 + 2);
        if ( (unsigned int)v25 < *(_DWORD *)(v3 + 8) )
        {
          v6 = *(unsigned __int8 *)(v25 + *(_QWORD *)v3) | ((*(unsigned __int8 *)((unsigned int)(v24 + 1) + *(_QWORD *)v3) | (*(unsigned __int8 *)(v24 + *(_QWORD *)v3) << 8)) << 8);
          *(_DWORD *)(*a2 + 12) = v6;
          *(_DWORD *)(v3 + 12) += 3;
          goto LABEL_48;
        }
        v26 = off_140168120;
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        {
          v27 = 30;
LABEL_45:
          sub_140055930((__int64)v26->AttachedDevice, v27, (__int64)&unk_1401552C8);
        }
LABEL_56:
        LODWORD(v6) = -1073741435;
        return (unsigned int)v6;
      }
    }
LABEL_46:
    v28 = *(_DWORD *)(v3 + 12);
    if ( v28 < *(_DWORD *)(v3 + 8) )
    {
      *(_DWORD *)(*a2 + 12) = ((v4 & 7) << 8) + *(unsigned __int8 *)(v28 + *(_QWORD *)v3);
      ++*(_DWORD *)(v3 + 12);
      goto LABEL_48;
    }
    v26 = off_140168120;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    {
      v27 = 29;
      goto LABEL_45;
    }
    goto LABEL_56;
  }
  if ( v7 == 11 )
    goto LABEL_46;
  v10 = v7 - 4;
  if ( !v10 )
  {
    v15 = sub_14013AEC0(v3, *a2);
    goto LABEL_49;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v16 = *a2;
    v31 = 0;
    v30 = 0;
    *(_DWORD *)(v16 + 12) = 0;
    for ( i = (_QWORD *)(v16 + 16); ; i = (_QWORD *)*i )
    {
      v18 = sub_14013B98C(v3, &v30, &v31);
      LODWORD(v6) = v18;
      if ( v18 )
        break;
      if ( v30 == 0xF1 )
        goto LABEL_32;
      LODWORD(v6) = sub_14013B5CC(v3, i);
      if ( (int)v6 < 0 )
        return (unsigned int)v6;
      ++*(_DWORD *)(v16 + 12);
    }
    if ( v18 < 0 )
      return (unsigned int)v6;
LABEL_32:
    ++*(_DWORD *)(v3 + 12);
    return (unsigned int)v6;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v15 = sub_14013AFF4(v3, *a2);
LABEL_49:
    LODWORD(v6) = v15;
    return (unsigned int)v6;
  }
  v13 = v12 - 1;
  if ( !v13 || (v14 = v13 - 1) == 0 )
  {
    *(_DWORD *)(*a2 + 12) = 1;
    *(_BYTE *)(*a2 + 16) = v4 & 0x3F;
    return (unsigned int)v6;
  }
  if ( (unsigned int)(v14 - 1) <= 1 )
    goto LABEL_23;
  return (unsigned int)v6;
}
