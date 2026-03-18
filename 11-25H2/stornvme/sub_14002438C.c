/*
 * XREFs of sub_14002438C @ 0x14002438C
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140020894 @ 0x140020894 (sub_140020894.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002438C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v9; // edx
  __int64 v10; // r15
  unsigned int v11; // edx
  unsigned int v12; // r8d
  int v13; // [rsp+28h] [rbp-38h]
  __int64 PhysicalAddress; // [rsp+50h] [rbp-10h]
  _DWORD *v15; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+30h]
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h]

  v17 = a3;
  v5 = 0;
  v15 = 0LL;
  v6 = sub_14000B900(a2, &v15);
  v18 = 0LL;
  LODWORD(v17) = 512;
  v7 = v6;
  PhysicalAddress = 0LL;
  HIWORD(v16) = 0;
  if ( v6 && *v15 >= 0x30u )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 261LL) & 8) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002690LL;
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v6, &v17);
      if ( !PhysicalAddress || (unsigned int)v17 < 0x200 )
      {
        *(_BYTE *)(a2 + 3) = 4;
        return 3238002691LL;
      }
      v18 = v7;
      if ( (unsigned int)v17 > 0x200 )
        LODWORD(v17) = 512;
    }
    else
    {
      sub_140006100(a1, 0x200u);
      v7 = v18;
    }
    if ( v7 )
    {
      v10 = sub_140005000(a2);
      if ( (v9 & 3) != 0 )
      {
        if ( v9 )
          sub_140032C80(v7, 0LL, v9);
      }
      else
      {
        v11 = v9 >> 2;
        if ( v11 )
          sub_140032C80(v7, 0LL, 4LL * v11);
      }
      *(_BYTE *)(v10 + 4225) |= 3u;
      sub_1400042C0(a1, a2);
      LOBYTE(v12) = 7;
      sub_140020894(a1, v10, v12, v17, PhysicalAddress, v13, 0LL, 1, 1u);
      *(_BYTE *)(v10 + 4225) |= 4u;
      *(_QWORD *)(v10 + 4192) = sub_140024A30;
      *(_QWORD *)(v10 + 4160) = v18;
      *(_QWORD *)(v10 + 4168) = PhysicalAddress;
      LOWORD(v16) = 7;
      *(_DWORD *)(v10 + 4208) = v17;
      *(_QWORD *)(v10 + 4200) = v16;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return (unsigned int)-1056964605;
    }
    return v5;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
