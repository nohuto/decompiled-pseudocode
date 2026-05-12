/*
 * XREFs of sub_140124930 @ 0x140124930
 * Callers:
 *     sub_140088700 @ 0x140088700 (sub_140088700.c)
 * Callees:
 *     sub_140088878 @ 0x140088878 (sub_140088878.c)
 *     sub_140088944 @ 0x140088944 (sub_140088944.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140124930(union _SLIST_HEADER *SystemArgument2, __int64 a2, __int64 a3, _BYTE *a4)
{
  _DWORD *v5; // rsi
  int v6; // r15d
  __int64 v7; // r12
  __int64 result; // rax
  unsigned int v9; // ebx
  int v10; // edi
  unsigned int v11; // r14d
  unsigned int v12; // edx
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  bool v24; // zf
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx
  PHYSICAL_ADDRESS *v30; // rsi
  __int64 v31; // r8
  int v32; // r12d
  LONGLONG QuadPart; // rcx
  LONGLONG v34; // rcx
  void *v35; // rax
  _DWORD *v36; // rdx
  char v37; // [rsp+30h] [rbp-30h] BYREF
  char v38; // [rsp+31h] [rbp-2Fh]
  _DWORD *v39; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v40; // [rsp+40h] [rbp-20h]
  void *Dst[2]; // [rsp+48h] [rbp-18h] BYREF

  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  v39 = 0LL;
  v5 = 0LL;
  v40 = 0LL;
  v37 = 0;
  v6 = 0;
  v38 = 0;
  v7 = a2;
  *(_OWORD *)Dst = 0LL;
  result = sub_140088878(a3, 0, &v39, &v37);
  if ( (int)result < 0 )
    return result;
  v9 = v39[2];
  v10 = v39[3];
  if ( v9 >= 0x800 )
    return 3221225485LL;
  v11 = 4096;
  if ( !v37 || (v40 = v39, v5 = v39, (unsigned __int8)v9 < 0xC0u) )
  {
    v12 = (unsigned __int8)v9;
    v13 = (unsigned __int8)v9;
    v14 = (unsigned __int8)v9;
    if ( (unsigned __int8)v9 > 0x80u )
      goto LABEL_6;
    if ( (unsigned __int8)v9 == 128 )
      goto LABEL_40;
    if ( (unsigned __int8)v9 > 9u )
    {
      if ( (unsigned __int8)v9 != 10
        && (unsigned __int8)v9 != 11
        && (unsigned __int8)v9 != 12
        && (unsigned __int8)v9 != 13
        && (unsigned __int8)v9 != 14 )
      {
        v25 = (unsigned __int8)v9 - 16;
        v24 = (unsigned __int8)v9 == 16;
        goto LABEL_38;
      }
    }
    else if ( (unsigned __int8)v9 != 9
           && (unsigned __int8)v9 != 1
           && (unsigned __int8)v9 != 2
           && (unsigned __int8)v9 != 3
           && (unsigned __int8)v9 != 5
           && (unsigned __int8)v9 != 6 )
    {
      v25 = (unsigned __int8)v9 - 7;
      v24 = (unsigned __int8)v9 == 7;
LABEL_38:
      if ( !v24 && v25 != 1 )
        goto LABEL_41;
    }
LABEL_40:
    if ( v10 )
      return 3221225485LL;
    goto LABEL_41;
  }
  v12 = (unsigned __int8)v9;
  v13 = (unsigned __int8)v9;
  v38 = 1;
  v14 = (unsigned __int8)v9;
LABEL_6:
  v15 = v14 - 130;
  if ( !v15 )
    goto LABEL_40;
  v16 = v15 - 1;
  if ( !v16 )
    goto LABEL_40;
  v17 = v16 - 61;
  if ( !v17 || (v18 = v17 - 2) == 0 || (v19 = v18 - 2) == 0 || (unsigned int)(v19 - 2) <= 1 )
  {
    if ( (*((_DWORD *)&SystemArgument2[8].HeaderX64 + 2) & 0x100000) != 0 && !v37 && v10 )
      return 3221225485LL;
    goto LABEL_15;
  }
LABEL_41:
  v13 = v12;
  if ( v12 <= 0x7D )
  {
    if ( v12 == 125 )
      goto LABEL_62;
    if ( v12 > 9 )
    {
      switch ( v12 )
      {
        case 0xAu:
        case 0xBu:
LABEL_61:
          v11 = 0;
          goto LABEL_62;
        case 0xCu:
          v11 = 256;
          goto LABEL_62;
        case 0xDu:
LABEL_62:
          v6 = -1;
          goto LABEL_63;
        case 0xEu:
          v11 = 8;
          goto LABEL_62;
      }
      v26 = v12 - 16;
      if ( v12 == 16 )
        goto LABEL_61;
    }
    else
    {
      switch ( v12 )
      {
        case 9u:
        case 1u:
        case 2u:
          goto LABEL_61;
        case 3u:
          goto LABEL_63;
        case 4u:
        case 5u:
        case 6u:
          goto LABEL_61;
      }
      v26 = v12 - 7;
      if ( v12 == 7 )
        return 3221225485LL;
    }
    if ( v26 != 1 )
      goto LABEL_20;
    goto LABEL_61;
  }
LABEL_15:
  v20 = v13 - 126;
  if ( !v20 )
    goto LABEL_62;
  v21 = v20 - 1;
  if ( !v21 )
    goto LABEL_63;
  v22 = v21 - 1;
  if ( !v22 )
    goto LABEL_61;
  v23 = v22 - 1;
  if ( !v23 )
  {
    v11 = 16;
    goto LABEL_62;
  }
  if ( v23 - 1 < 2 )
  {
    v11 = 0;
    goto LABEL_63;
  }
LABEL_20:
  if ( v37 )
    v11 = v39[5];
LABEL_63:
  if ( (SystemArgument2[8].Region & 0x100000) == 0 )
    goto LABEL_74;
  v27 = v12 - 192;
  if ( v27 )
  {
    v28 = v27 - 2;
    if ( !v28 || (v29 = v28 - 2) == 0 || v29 - 2 <= 1 )
    {
      v11 = 0;
      v6 = 0;
      goto LABEL_76;
    }
LABEL_74:
    if ( !v11 )
      goto LABEL_76;
    goto LABEL_75;
  }
  v11 = 4096;
  v6 = -(BYTE1(SystemArgument2[59].Alignment) != 0);
LABEL_75:
  if ( (unsigned int)v39[4] < (unsigned __int64)(v37 != 0 ? 0x18 : 0) + 40 )
    return 3221225485LL;
LABEL_76:
  if ( v39[5] < v11 )
    return 3221225485LL;
  if ( v37 && v38 )
  {
    v6 = v5[11];
    if ( !v7 )
    {
      if ( (unsigned int)(v6 - 1) > 0xFFFFFFFD )
        goto LABEL_88;
      return 3221225485LL;
    }
    if ( v6 )
      return 3221225485LL;
LABEL_87:
    v6 = *(_DWORD *)(v7 + 56);
    goto LABEL_88;
  }
  if ( (SystemArgument2[8].Region & 0x100000) == 0 && v6 != -1 )
  {
    v6 = -1;
    if ( v7 )
      goto LABEL_87;
  }
LABEL_88:
  v30 = sub_1401225EC(SystemArgument2);
  if ( v30 )
  {
    if ( v11 )
    {
      v32 = sub_1400E736C((__int64)SystemArgument2, v11, v31, Dst, &Dst[1], 0);
      if ( v32 < 0 )
        goto LABEL_102;
      memset_0(Dst[0], 0, v11);
      v7 = a2;
    }
    *(_DWORD *)(v30->QuadPart + 4256) |= 1u;
    *(_DWORD *)(v30->QuadPart + 4256) |= 0x20u;
    *(_DWORD *)(v30->QuadPart + 4256) = (v11 != 0 ? 2 : 0) | *(_DWORD *)(v30->QuadPart + 4256) & 0xFFFFFFFD;
    *(_DWORD *)(v30->QuadPart + 4256) &= ~0x40u;
    *(_WORD *)(v30->QuadPart + 4252) = 0;
    *(_QWORD *)(v30->QuadPart + 4184) = a3;
    *(_QWORD *)(v30->QuadPart + 4192) = sub_140123DD0;
    *(_QWORD *)(v30->QuadPart + 4200) = v30;
    QuadPart = v30->QuadPart;
    if ( v7 )
      *(_QWORD *)(QuadPart + 4216) = v7;
    else
      *(_QWORD *)(QuadPart + 4224) = SystemArgument2[8].Alignment;
    *(void **)(v30->QuadPart + 4160) = Dst[0];
    *(void **)(v30->QuadPart + 4168) = Dst[1];
    *(_DWORD *)(v30->QuadPart + 4248) = v11;
    v34 = v30->QuadPart;
    v35 = Dst[1];
    *(_BYTE *)(v34 + 4096) = 10;
    *(_DWORD *)(v34 + 4100) = v6;
    *(_QWORD *)(v34 + 4120) = v35;
    *(_DWORD *)(v34 + 4136) = v9;
    *(_DWORD *)(v34 + 4140) = v10;
    if ( !v37 )
    {
LABEL_101:
      v32 = sub_140122670((__int64)SystemArgument2, v30);
      if ( v32 >= 0 )
      {
        *a4 = 0;
        return 259LL;
      }
      goto LABEL_102;
    }
    if ( v38 )
    {
      v36 = v40;
      *(_DWORD *)(v30->QuadPart + 4136) = v40[2];
      *(_DWORD *)(v30->QuadPart + 4140) = v36[3];
      *(_DWORD *)(v30->QuadPart + 4144) = v36[7];
      *(_DWORD *)(v30->QuadPart + 4148) = v36[8];
      *(_DWORD *)(v30->QuadPart + 4152) = v36[9];
      *(_DWORD *)(v30->QuadPart + 4156) = v36[10];
    }
    v32 = sub_140088944(a3);
    if ( v32 >= 0 )
    {
      *(_DWORD *)(v30->QuadPart + 4256) |= 0x400u;
      goto LABEL_101;
    }
LABEL_102:
    _interlockedbittestandreset((volatile signed __int32 *)(v30->QuadPart + 4256), 3u);
    sub_140122C20(SystemArgument2, (__int64)v30);
    goto LABEL_103;
  }
  v32 = -1073741670;
LABEL_103:
  if ( Dst[0] )
    sub_1400F5FEC((__int64)SystemArgument2, v11, v31, (__int64)Dst[0], (__int64)Dst[1]);
  return (unsigned int)v32;
}
