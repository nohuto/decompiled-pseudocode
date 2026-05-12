/*
 * XREFs of sub_1401ADB60 @ 0x1401ADB60
 * Callers:
 *     sub_14001A620 @ 0x14001A620 (sub_14001A620.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140014460 @ 0x140014460 (sub_140014460.c)
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 *     sub_140030070 @ 0x140030070 (sub_140030070.c)
 *     sub_14003F874 @ 0x14003F874 (sub_14003F874.c)
 *     sub_140042428 @ 0x140042428 (sub_140042428.c)
 *     sub_140055FF4 @ 0x140055FF4 (sub_140055FF4.c)
 *     sub_1400BEB50 @ 0x1400BEB50 (sub_1400BEB50.c)
 *     sub_1400BED78 @ 0x1400BED78 (sub_1400BED78.c)
 *     sub_1400BEE3C @ 0x1400BEE3C (sub_1400BEE3C.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 *     sub_1401AE30C @ 0x1401AE30C (sub_1401AE30C.c)
 */

__int64 __fastcall sub_1401ADB60(__int64 a1, int *a2, _BYTE *a3)
{
  unsigned int v4; // r14d
  char v5; // r13
  _DWORD *v6; // rsi
  bool v8; // zf
  char v9; // r15
  _DWORD *v10; // rax
  unsigned int v11; // r12d
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // r8
  __int64 i; // rcx
  int v16; // edx
  int v17; // eax
  char v18; // r15
  char v19; // r15
  _QWORD *j; // rdi
  int v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+28h] [rbp-D8h]
  char v23; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+51h] [rbp-AFh]
  char v25; // [rsp+52h] [rbp-AEh]
  int v26; // [rsp+54h] [rbp-ACh]
  _BYTE v27[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  char v29; // [rsp+BCh] [rbp-44h]
  char v30; // [rsp+BDh] [rbp-43h]
  __int64 Dst[15]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v32; // [rsp+138h] [rbp+38h] BYREF
  char v33; // [rsp+1A0h] [rbp+A0h]
  char v36; // [rsp+1B8h] [rbp+B8h] BYREF

  memset_0(Dst, 0, 0x88uLL);
  v4 = 0;
  v5 = 0;
  v33 = 0;
  v6 = 0LL;
  v26 = 0;
  v24 = 0;
  v25 = 0;
  if ( !*(_QWORD *)(a1 + 6000) )
    return 3221225659LL;
  *(_DWORD *)(a1 + 6128) &= ~1u;
  v8 = (*(_BYTE *)(a1 + 104) & 0x40) == 0;
  *(_QWORD *)(a1 + 6132) = 0LL;
  if ( v8 || (*(_DWORD *)(a1 + 4828) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 111) & 0x40) != 0 )
    {
      v9 = 0;
    }
    else
    {
      v10 = (_DWORD *)sub_1400143E0(64LL, 4096LL, 1229873490LL, *(_QWORD *)(a1 + 8));
      v6 = v10;
      if ( v10 )
      {
        if ( (int)sub_1401ADED0(a1, 0, 0, 2, v21, v22, 0, v10) >= 0 )
        {
          if ( !*v6 )
          {
            *(_DWORD *)(a1 + 6128) |= 1u;
            ExFreePoolWithTag(v6, 0x494E6152u);
            return 3221226021LL;
          }
        }
        else
        {
          v5 = 1;
        }
        v11 = 1024;
        v9 = 0;
        goto LABEL_17;
      }
      v9 = 0;
    }
    v5 = 1;
  }
  else
  {
    v9 = 1;
    v33 = 1;
    v5 = 1;
    v26 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 4840) + 10LL);
  }
  v11 = 0;
LABEL_17:
  sub_140042428(Dst);
  v13 = sub_140055FF4(Dst, a1);
  while ( v4 < *(_DWORD *)(*(_QWORD *)(a1 + 6000) + 516LL) )
  {
    if ( v9 && v4 != v26 )
      goto LABEL_41;
    memset_0(v27, 0, 0x60uLL);
    v13 = sub_14001D220(Dst, (unsigned int)(unsigned __int8)v4 + 1, (__int64)v27);
    if ( v13 < 0 )
    {
      v13 = -1073741801;
      goto LABEL_57;
    }
    if ( !v5 )
    {
      for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(i + 1) )
      {
        v16 = v6[i];
        if ( !v16 )
          break;
        if ( v16 == v4 + 1 )
          goto LABEL_29;
      }
      v30 = 0;
      sub_1400BEE3C(Dst, (__int64)v27);
      sub_140030070(Dst, (__int64)v27);
      goto LABEL_41;
    }
LABEL_29:
    v23 = 0;
    v36 = 0;
    v17 = sub_1401AE30C(a1, v4 + 1, (unsigned int)v27, (unsigned int)&v23, (__int64)&v36);
    v18 = v36;
    v13 = v17;
    if ( v17 < 0 )
      goto LABEL_34;
    if ( !v36 )
    {
      v13 = -1073741637;
LABEL_34:
      if ( v29 )
        sub_14003F874(v28);
      goto LABEL_36;
    }
    v13 = sub_1400BEB50((__int64)Dst, (__int64)v27);
    if ( v13 < 0 )
      goto LABEL_34;
    sub_1400BEE3C(Dst, (__int64)v27);
LABEL_36:
    sub_140030070(Dst, (__int64)v27);
    if ( v18 && v13 >= 0 )
    {
      ++*(_DWORD *)(a1 + 6132);
      v24 = 1;
    }
    else if ( v23 )
    {
      ++*(_DWORD *)(a1 + 6136);
      v19 = 1;
      goto LABEL_45;
    }
    v9 = v33;
LABEL_41:
    ++v4;
  }
  v19 = v25;
LABEL_45:
  if ( v13 < 0 )
  {
LABEL_57:
    for ( j = v32; j != &v32; j = (_QWORD *)*j )
      sub_14003F874(*(j - 1));
    goto LABEL_60;
  }
  if ( v19 )
  {
    v13 = -1073741637;
    goto LABEL_57;
  }
  if ( !v24 )
  {
    v13 = -1073741275;
    goto LABEL_57;
  }
  sub_1400BED78((__int64)Dst, v12, v14);
  if ( *(_BYTE *)(a1 + 106) )
  {
    *(_BYTE *)(a1 + 106) = 0;
    *(_QWORD *)(a1 + 4264) = MEMORY[0xFFFFF78000000014];
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0 )
  {
    if ( a2 )
      *a2 = v13;
    if ( a3 )
      *a3 = 1;
  }
LABEL_60:
  sub_140014460((__int64)Dst);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x494E6152u);
  return (unsigned int)v13;
}
