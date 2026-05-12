/*
 * XREFs of sub_1400ECECC @ 0x1400ECECC
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140042F5C @ 0x140042F5C (sub_140042F5C.c)
 *     sub_140053AA4 @ 0x140053AA4 (sub_140053AA4.c)
 *     sub_1400C7960 @ 0x1400C7960 (sub_1400C7960.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400ECECC(_QWORD *SystemArgument2, char a2)
{
  unsigned int v2; // ebp
  char v3; // r13
  __int64 v5; // rax
  int v6; // r15d
  unsigned int v7; // r9d
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // eax
  char *v11; // r14
  unsigned int v12; // r10d
  __int64 v13; // rcx
  int v14; // esi
  int v15; // esi
  unsigned int v16; // r10d
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ecx
  _DWORD *v20; // rax
  unsigned int *v21; // r10
  void *v22; // rcx
  PHYSICAL_ADDRESS HighAddress; // [rsp+30h] [rbp-168h]
  unsigned int v26; // [rsp+54h] [rbp-144h] BYREF
  __int64 v27; // [rsp+58h] [rbp-140h]
  __int64 Dst[16]; // [rsp+60h] [rbp-138h] BYREF
  __int64 v29[16]; // [rsp+E0h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = 0;
  v26 = 8;
  if ( SystemArgument2[148] )
  {
    v3 = 1;
    v11 = (char *)(SystemArgument2 + 16);
    goto LABEL_22;
  }
  v5 = SystemArgument2[74];
  v6 = 0;
  v7 = *(_DWORD *)(v5 + 276) << 12;
  v8 = *(_DWORD *)(v5 + 272) << 12;
  if ( v8 )
  {
    v9 = SystemArgument2[131];
    if ( !v9 )
    {
LABEL_10:
      v11 = (char *)(SystemArgument2 + 16);
      v12 = 1 << (((*(_DWORD *)(SystemArgument2[115] + 20LL) >> 7) & 0xF) + 12);
      v13 = SystemArgument2[16];
      LODWORD(v27) = v12;
      if ( (unsigned int)sub_140042F5C(
                           *(_QWORD *)(v13 + 408) + 16LL,
                           v7,
                           v8,
                           0LL,
                           v12,
                           0LL,
                           (PHYSICAL_ADDRESS)0x7FFFFFFFFFFFFFFFLL,
                           0LL,
                           (__int64)v29,
                           &v26) )
      {
        v14 = -1073741670;
        goto LABEL_25;
      }
      v2 = v26;
      if ( v26 > 8 )
        v2 = 8;
      v15 = 16 * v2;
      memset_0(Dst, 0, 16 * v2);
      if ( v2 )
      {
        v16 = v27;
        v17 = 0LL;
        v18 = v2;
        do
        {
          v19 = v29[v17 + 1];
          v6 += v19;
          Dst[v17] = v29[v17];
          v17 += 2LL;
          LODWORD(Dst[v17 - 1]) = v19 / v16;
          --v18;
        }
        while ( v18 );
      }
      v20 = (_DWORD *)sub_1400143E0(72LL, (unsigned int)(v15 + 8), 1213096274LL, *(_QWORD *)(*(_QWORD *)v11 + 8LL));
      SystemArgument2[148] = v20;
      if ( !v20 )
      {
        v14 = -1073741670;
LABEL_23:
        if ( v2 )
          sub_140053AA4(*(_QWORD *)(*(_QWORD *)v11 + 408LL) + 16LL);
        goto LABEL_25;
      }
      *v20 = v6;
      memmove((void *)(SystemArgument2[148] + 8LL), Dst, 16 * v2);
      *(_DWORD *)(SystemArgument2[148] + 4LL) = v15;
LABEL_22:
      v21 = (unsigned int *)SystemArgument2[148];
      HighAddress.LowPart = v21[1];
      v14 = sub_1400C7960(SystemArgument2, a2, 1u, v3, *v21, v21 + 2, HighAddress.QuadPart);
      if ( v14 >= 0 )
        return (unsigned int)v14;
      goto LABEL_23;
    }
    v10 = *(_DWORD *)(v9 + 84);
    if ( v10 )
    {
      if ( v10 != -1 )
      {
        v8 = v10;
        if ( (v10 & 0xFFF) != 0 )
          v8 = (v10 + 4095) & 0xFFFFF000;
        if ( v8 < v7 )
          v8 = v7;
      }
      goto LABEL_10;
    }
  }
  v14 = -1073741637;
LABEL_25:
  v22 = (void *)SystemArgument2[148];
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0x484E6152u);
    SystemArgument2[148] = 0LL;
  }
  return (unsigned int)v14;
}
