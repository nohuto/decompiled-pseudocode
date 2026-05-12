/*
 * XREFs of sub_140012624 @ 0x140012624
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     sub_140012944 @ 0x140012944 (sub_140012944.c)
 *     sub_1400129E0 @ 0x1400129E0 (sub_1400129E0.c)
 *     sub_140012A84 @ 0x140012A84 (sub_140012A84.c)
 *     sub_140012ABC @ 0x140012ABC (sub_140012ABC.c)
 *     sub_140012E50 @ 0x140012E50 (sub_140012E50.c)
 *     sub_140012E9C @ 0x140012E9C (sub_140012E9C.c)
 *     sub_140013FA0 @ 0x140013FA0 (sub_140013FA0.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     sub_14005595C @ 0x14005595C (sub_14005595C.c)
 *     sub_140055C5C @ 0x140055C5C (sub_140055C5C.c)
 *     sub_140059BAC @ 0x140059BAC (sub_140059BAC.c)
 *     sub_140062314 @ 0x140062314 (sub_140062314.c)
 *     sub_1400665BC @ 0x1400665BC (sub_1400665BC.c)
 *     sub_140066EAC @ 0x140066EAC (sub_140066EAC.c)
 *     sub_140067EFC @ 0x140067EFC (sub_140067EFC.c)
 *     sub_1400C225C @ 0x1400C225C (sub_1400C225C.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_14017BAE8 @ 0x14017BAE8 (sub_14017BAE8.c)
 *     sub_140185324 @ 0x140185324 (sub_140185324.c)
 *     sub_1401A73A8 @ 0x1401A73A8 (sub_1401A73A8.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 */

__int64 __fastcall sub_140012624(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  signed int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  char v9; // cl
  int v10; // edx
  char v11; // bp
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64); // rax
  char v16; // al
  int v17; // eax
  PVOID *v18; // rsi
  PVOID Dst; // rax
  char v20; // al
  char v21; // si
  _OWORD *v22; // rdi
  _OWORD *v23; // rdx
  int v24; // [rsp+20h] [rbp-78h]
  int v25; // [rsp+28h] [rbp-70h]
  unsigned int v26; // [rsp+A8h] [rbp+10h] BYREF
  _OWORD *v27; // [rsp+B0h] [rbp+18h] BYREF

  if ( a2 )
  {
    v4 = a1 + 376;
    v5 = sub_14017BAE8(a1 + 376, a2, a3, a1 + 360);
    if ( v5 < 0 )
    {
      *(_DWORD *)(a1 + 6188) = 5;
      return (unsigned int)v5;
    }
    if ( byte_140168448 && !*(_QWORD *)(a1 + 6048) )
      sub_140062314(a1);
    v6 = *(_QWORD *)(a1 + 2000);
    *(_BYTE *)(a1 + 4370) = 1;
    v7 = sub_140012ABC(v4, v6);
    *(_BYTE *)(a1 + 108) |= 0x40u;
    v5 = v7;
    if ( v7 < 0 )
    {
      *(_DWORD *)(a1 + 6188) = 6;
      return (unsigned int)v5;
    }
    LOBYTE(v8) = byte_140168DAA;
    sub_140055C5C(a1, v8);
    sub_14005595C(a1);
    sub_1400129E0(a1);
    sub_140012944(a1);
    if ( !*(_DWORD *)(a1 + 928) )
    {
      if ( *(_BYTE *)(a1 + 528) == 2 )
      {
        if ( *(_QWORD *)(a1 + 4288) < 0x100000000uLL )
          *(_QWORD *)(a1 + 4288) = -1LL;
        *(_QWORD *)(a1 + 4304) = 0x100000000LL;
      }
      else
      {
        if ( (unsigned int)*(unsigned __int8 *)(a1 + 528) - 3 >= 2 )
          goto LABEL_8;
        if ( *(_QWORD *)(a1 + 4288) < 0x100000000uLL )
          *(_QWORD *)(a1 + 4288) = -1LL;
        *(_QWORD *)(a1 + 4304) = 0LL;
      }
      *(_QWORD *)(a1 + 4320) = -1LL;
    }
LABEL_8:
    v9 = *(_BYTE *)(a1 + 580);
    v10 = *(_DWORD *)(a1 + 532);
    *(_DWORD *)(a1 + 872) = v10;
    *(_BYTE *)(a1 + 4370) = v9 == 0;
    if ( v9 )
    {
      v11 = 0;
    }
    else
    {
      v17 = *(_DWORD *)(a1 + 544);
      *(_BYTE *)(a1 + 107) &= ~1u;
      *(_DWORD *)(a1 + 4336) = v17;
      if ( v17 )
      {
        *(_BYTE *)(a1 + 4368) = 1;
        if ( !v10 )
          *(_DWORD *)(a1 + 4336) = 1;
      }
      v5 = sub_140059BAC(a1);
      if ( v5 < 0 )
      {
        *(_DWORD *)(a1 + 6188) = 7;
        return (unsigned int)v5;
      }
      v5 = sub_1400665BC(a1);
      if ( v5 < 0 )
      {
        *(_DWORD *)(a1 + 6188) = 8;
        return (unsigned int)v5;
      }
      v20 = sub_14001E1F0(a1);
      *(_BYTE *)(a1 + 107) |= 1u;
      v11 = v20;
    }
    v12 = (_BYTE *)(a1 + 104);
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v5 = sub_140012A84(v4);
    if ( v5 >= 0 )
      *v12 |= 1u;
    if ( *(_BYTE *)(a1 + 4370) )
    {
      LOBYTE(v13) = v11;
      sub_140029830(a1, v13);
    }
    if ( v5 < 0 )
    {
      *(_DWORD *)(a1 + 6188) = 9;
    }
    else
    {
      v14 = *(__int64 (__fastcall **)(__int64))(a1 + 4328);
      if ( !v14 || (v16 = v14(*(_QWORD *)(a1 + 616) + 16LL), v5 = v16 == 0 ? 0xC0000001 : 0, v16) )
      {
        *(_BYTE *)(a1 + 104) = *v12 & 0xEF;
        sub_140012E9C(a1);
        sub_140012E50(a1 + 376, 23LL);
        if ( *(char *)(a1 + 110) >= 0
          && (*(_DWORD *)(a1 + 604) & 0x80u) != 0
          && (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 188LL) & 2) != 0 )
        {
          sub_1401A73A8(a1);
        }
        if ( *(int *)(*(_QWORD *)(a1 + 608) + 184LL) < 0 )
        {
          v18 = (PVOID *)(a1 + 6000);
          if ( *(char *)(a1 + 110) < 0 && (Dst = *v18) != 0LL
            || (Dst = (PVOID)sub_1400143E0(64LL, 4096LL, 1229152594LL, *(_QWORD *)(a1 + 8)), (*v18 = Dst) != 0LL) )
          {
            v5 = sub_1401ADED0(a1, 0, 0, 1, v24, v25, 0, Dst);
            if ( v5 < 0 )
            {
              *(_BYTE *)(a1 + 112) |= 8u;
              if ( *v18 )
              {
                ExFreePoolWithTag(*v18, 0x49436152u);
                *v18 = 0LL;
              }
              *(_DWORD *)(a1 + 6188) = 17;
              return (unsigned int)v5;
            }
          }
          if ( byte_1401688B6 )
          {
            v27 = 0LL;
            v26 = 0;
            v21 = 0;
            if ( (int)sub_140185324(a1, &v27, &v26) >= 0 )
            {
              v22 = v27;
              if ( v27 )
              {
                if ( (unsigned __int8)sub_140067EFC(v27, *(_QWORD *)(a1 + 6152)) )
                {
                  if ( v23 )
                  {
                    *v23 = *v22;
                    v23[1] = v22[1];
                    v23[2] = v22[2];
                    v23[3] = v22[3];
                    v23[4] = v22[4];
                    v23[5] = v22[5];
                    v23[6] = v22[6];
                    v23[7] = v22[7];
                  }
                  else
                  {
                    *(_QWORD *)(a1 + 6152) = v22;
                    v22 = 0LL;
                  }
                  sub_1400C225C(a1);
                  *(_BYTE *)(a1 + 111) |= 1u;
                }
                else
                {
                  v21 = 1;
                  if ( v23 )
                  {
                    *v23 = *v22;
                    v23[1] = v22[1];
                    v23[2] = v22[2];
                    v23[3] = v22[3];
                    v23[4] = v22[4];
                    v23[5] = v22[5];
                    v23[6] = v22[6];
                    v23[7] = v22[7];
                  }
                  else
                  {
                    *(_QWORD *)(a1 + 6152) = v22;
                    v22 = 0LL;
                  }
                  *(_BYTE *)(a1 + 111) &= ~1u;
                }
                LOBYTE(v23) = v21;
                sub_140066EAC(a1, v23, v26);
                if ( v22 )
                  ExFreePoolWithTag(v22, 0x464D6152u);
              }
            }
          }
        }
        v5 = sub_140013FA0(a1);
        if ( v5 < 0 )
          *(_DWORD *)(a1 + 6188) = 11;
      }
      else
      {
        *(_DWORD *)(a1 + 6188) = 10;
      }
    }
    return (unsigned int)v5;
  }
  return 3221225486LL;
}
