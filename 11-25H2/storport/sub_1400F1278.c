/*
 * XREFs of sub_1400F1278 @ 0x1400F1278
 * Callers:
 *     sub_1400D7168 @ 0x1400D7168 (sub_1400D7168.c)
 *     sub_1400D7730 @ 0x1400D7730 (sub_1400D7730.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_1400E7D1C @ 0x1400E7D1C (sub_1400E7D1C.c)
 *     sub_1400EA0D4 @ 0x1400EA0D4 (sub_1400EA0D4.c)
 *     sub_1400EA27C @ 0x1400EA27C (sub_1400EA27C.c)
 *     sub_1400EE990 @ 0x1400EE990 (sub_1400EE990.c)
 *     sub_1400F0364 @ 0x1400F0364 (sub_1400F0364.c)
 *     sub_1400F0DFC @ 0x1400F0DFC (sub_1400F0DFC.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 *     sub_1400F604C @ 0x1400F604C (sub_1400F604C.c)
 */

__int64 __fastcall sub_1400F1278(_QWORD *SystemArgument2)
{
  unsigned int v1; // edi
  unsigned __int64 v2; // rax
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // esi
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  bool v24; // zf
  unsigned int v25; // ebp
  int v26; // eax
  signed __int32 v28[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int *v29; // [rsp+20h] [rbp-28h]
  unsigned int v30; // [rsp+50h] [rbp+8h] BYREF
  int v31; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = SystemArgument2[121] & 0xFFFFFFFFFFFFFFFEuLL;
  v30 = 0;
  v31 = 0;
  SystemArgument2[121] = v2;
  sub_1400F0364((__int64)SystemArgument2);
  if ( SystemArgument2[148] )
    sub_1400F604C(SystemArgument2);
  v6 = SystemArgument2[74];
  v7 = 500;
  v8 = 64;
  if ( v6 && *(_DWORD *)(v6 + 88) )
    v7 = 64;
  v9 = SystemArgument2[131];
  if ( v9 )
  {
    v4 = *(unsigned __int8 *)(v9 + 15);
    if ( (_BYTE)v4 )
    {
      if ( (unsigned int)v4 >= 0x40 )
        v8 = *(unsigned __int8 *)(v9 + 15);
      v7 = 100 * v8;
    }
  }
  sub_1400EE990((__int64)SystemArgument2, v4, v5);
  sub_1400E7D1C((__int64)SystemArgument2, v10, v11);
  sub_1400EA0D4((__int64)SystemArgument2);
  v12 = (void *)SystemArgument2[114];
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x54496152u);
    SystemArgument2[114] = 0LL;
  }
  sub_1400EA27C((__int64)SystemArgument2);
  v13 = (void *)SystemArgument2[152];
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x52436152u);
    SystemArgument2[152] = 0LL;
  }
  v14 = (void *)SystemArgument2[132];
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x52436152u);
    SystemArgument2[132] = 0LL;
  }
  v15 = (void *)SystemArgument2[154];
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x52436152u);
    SystemArgument2[154] = 0LL;
  }
  v16 = (void *)SystemArgument2[155];
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x52436152u);
    SystemArgument2[155] = 0LL;
  }
  v17 = (void *)SystemArgument2[153];
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x52436152u);
    SystemArgument2[153] = 0LL;
  }
  v18 = (void *)SystemArgument2[156];
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x52436152u);
    SystemArgument2[156] = 0LL;
  }
  v19 = (void *)SystemArgument2[157];
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x52436152u);
    SystemArgument2[157] = 0LL;
  }
  v20 = (void *)SystemArgument2[133];
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0x52436152u);
    SystemArgument2[133] = 0LL;
  }
  if ( (SystemArgument2[121] & 0x8000LL) != 0 )
  {
    v21 = SystemArgument2[131];
    if ( v21 && !*(_BYTE *)(v21 + 110) )
      return v1;
    if ( v7 <= 100 * (unsigned int)*(unsigned __int8 *)(v21 + 110) )
      v7 = 100 * *(unsigned __int8 *)(v21 + 110);
  }
  if ( *((_BYTE *)SystemArgument2 + 1728) == 1 )
  {
    v29 = &v30;
    sub_1400F0DFC((__int64)SystemArgument2, 0x14u, 4LL, 0);
    v22 = v30;
  }
  else
  {
    v22 = *(_DWORD *)(SystemArgument2[115] + 20LL);
  }
  v23 = v22 & 0xFFFF3FFF | 0x4000;
  v24 = *((_BYTE *)SystemArgument2 + 1728) == 1;
  v30 = v23;
  if ( v24 )
  {
    v29 = &v30;
    sub_1400F24C8(SystemArgument2, 20LL, 4LL);
  }
  else
  {
    *(_DWORD *)(SystemArgument2[115] + 20LL) = v23;
    _InterlockedOr(v28, 0);
  }
  v25 = 0;
  if ( !v7 )
    goto LABEL_47;
  do
  {
    if ( *((_BYTE *)SystemArgument2 + 1728) == 1 )
    {
      v29 = (unsigned int *)&v31;
      sub_1400F0DFC((__int64)SystemArgument2, 0x1Cu, 4LL, 0);
      LOBYTE(v26) = v31;
    }
    else
    {
      v26 = *(_DWORD *)(SystemArgument2[115] + 28LL);
      v31 = v26;
    }
    if ( (v26 & 0xC) == 8 )
      break;
    sub_14002CDD0(0x2710u);
    ++v25;
  }
  while ( v25 < v7 );
  if ( v25 >= v7 )
  {
LABEL_47:
    v1 = -2147483631;
    SystemArgument2[121] |= 0x200000uLL;
  }
  return v1;
}
