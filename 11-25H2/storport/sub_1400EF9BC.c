/*
 * XREFs of sub_1400EF9BC @ 0x1400EF9BC
 * Callers:
 *     sub_14012AED0 @ 0x14012AED0 (sub_14012AED0.c)
 *     sub_14012AF50 @ 0x14012AF50 (sub_14012AF50.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_1400C7960 @ 0x1400C7960 (sub_1400C7960.c)
 *     sub_1400EE8C0 @ 0x1400EE8C0 (sub_1400EE8C0.c)
 *     sub_1400F0DFC @ 0x1400F0DFC (sub_1400F0DFC.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 */

__int64 __fastcall sub_1400EF9BC(_QWORD *SystemArgument2)
{
  char v1; // r14
  unsigned int v2; // edi
  unsigned int *v4; // rcx
  _BYTE *v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // eax
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  int v16[2]; // [rsp+20h] [rbp-38h]
  size_t Size; // [rsp+30h] [rbp-28h]
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_BYTE *)SystemArgument2 + 1728);
  v2 = 0;
  v18 = 0;
  v19 = 0;
  SystemArgument2[121] |= 0x4000000uLL;
  v4 = (unsigned int *)SystemArgument2[148];
  if ( v4 )
  {
    LODWORD(Size) = v4[1];
    sub_1400C7960(SystemArgument2, 0, 0, 0, *v4, v4 + 2, Size);
  }
  v5 = (_BYTE *)SystemArgument2[149];
  if ( v5 && (*v5 & 3) == 3 )
    *v5 |= 4u;
  v6 = SystemArgument2[131];
  v7 = *(_DWORD *)(SystemArgument2[74] + 88LL) != 0 ? 64 : 500;
  if ( v6 )
  {
    v8 = *(unsigned __int8 *)(v6 + 15);
    if ( (_BYTE)v8 )
    {
      v9 = 64;
      if ( v8 >= 0x40 )
        v9 = *(unsigned __int8 *)(v6 + 15);
      v7 = 100 * v9;
    }
  }
  SystemArgument2[121] |= 4uLL;
  SystemArgument2[121] &= ~1uLL;
  v10 = sub_1400EE8C0(SystemArgument2);
  if ( v1 == 1 )
  {
    *(_QWORD *)v16 = &v18;
    sub_1400F0DFC(SystemArgument2, 20LL, 4LL);
    v11 = v18;
  }
  else
  {
    v11 = *(_DWORD *)(SystemArgument2[115] + 20LL);
  }
  v12 = v11 & 0xFFFF3FFF | 0x4000;
  v18 = v12;
  if ( v1 == 1 )
  {
    *(_QWORD *)v16 = &v18;
    sub_1400F24C8(SystemArgument2, 20LL, 4LL);
  }
  else
  {
    *(_DWORD *)(SystemArgument2[115] + 20LL) = v12;
    _InterlockedOr(v15, 0);
  }
  if ( !v7 )
    goto LABEL_24;
  do
  {
    if ( v1 == 1 )
    {
      *(_QWORD *)v16 = &v19;
      sub_1400F0DFC(SystemArgument2, 28LL, 4LL);
      LOBYTE(v13) = v19;
    }
    else
    {
      v13 = *(_DWORD *)(SystemArgument2[115] + 28LL);
      v19 = v13;
    }
    if ( (v13 & 0xC) == 8 )
      break;
    sub_14002CDD0(0x2710u);
    ++v2;
  }
  while ( v2 < v7 );
  if ( v2 >= v7 )
  {
LABEL_24:
    v10 = -2147483631;
    SystemArgument2[121] |= 0x200000uLL;
  }
  SystemArgument2[121] &= ~0x4000000uLL;
  return v10;
}
