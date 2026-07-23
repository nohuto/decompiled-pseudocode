/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x1800B1C70
 * Callers:
 *     RtlWow64GetCurrentMachine @ 0x1800B1440 (RtlWow64GetCurrentMachine.c)
 * Callees:
 *     RtlpValidateContextFlags2 @ 0x1800B1FF0 (RtlpValidateContextFlags2.c)
 *     RtlpGetEntireXStateAreaLength2 @ 0x1800B20C4 (RtlpGetEntireXStateAreaLength2.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B2120 (RtlpRemoveArchDisallowedXStateFeatures.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int16 v5; // di
  unsigned int v7; // r15d
  __int64 result; // rax
  unsigned int v9; // esi
  __int64 v10; // r13
  __int64 v11; // r12
  int v12; // ecx
  int v13; // r11d
  char v14; // al
  int v15; // ecx
  int v16; // r15d
  int v17; // ecx
  int v18; // r15d
  int v19; // r8d
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // eax
  int v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+80h] [rbp+18h]
  unsigned __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  *(_QWORD *)(a3 + 24) = a1;
  v5 = a2;
  v7 = 0;
  if ( !a2 )
    v5 = *(_WORD *)(a1 + 2);
  switch ( v5 )
  {
    case 0x14Cu:
      v9 = 0x10000;
      v10 = 4LL;
      v11 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x40000000000001FCLL;
      if ( v11 )
        v9 = 65600;
      break;
    case 0x1C4u:
      v9 = 0x200000;
      v10 = 8LL;
      v11 = 0LL;
      break;
    case 0x8664u:
      v9 = 0x100000;
      v10 = 16LL;
      v11 = 0LL;
      break;
    case 0xAA64u:
      v10 = 16LL;
      v11 = 0LL;
      v9 = 0x400000;
      break;
    default:
      return 3221225485LL;
  }
  v23 = 0;
  v25 = v9 & 0x10000;
  v24 = v9 & 0x100000;
  if ( (int)RtlpValidateContextFlags2(v9, &v23, 2147353560LL) >= 0 )
  {
    v12 = 0;
    v13 = 0;
    if ( v25 )
    {
      v12 = 716;
      v13 = 4;
    }
    else
    {
      v22 = v24;
      if ( v24 )
      {
        v12 = 1232;
      }
      else
      {
        v24 = 0;
        if ( (v9 & 0x200000) != 0 )
        {
          v12 = 416;
          v13 = 8;
          goto LABEL_13;
        }
        if ( (v9 & 0x400000) == 0 )
          goto LABEL_13;
        v12 = 912;
      }
      v24 = v22;
      v13 = 16;
    }
LABEL_13:
    v14 = v23;
    v15 = v12 + 32;
    if ( (v23 & 2) != 0 )
    {
      v16 = -v13 & (v15 + v13 - 1);
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v26 = v11 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL);
        RtlpRemoveArchDisallowedXStateFeatures(v9, &v26);
        v11 = v26;
      }
      v17 = RtlpGetEntireXStateAreaLength2(v11, 2147353560LL) - 448;
      v14 = v23;
      v15 = v16 - v13 + v17;
    }
    v18 = v15 + 32;
    if ( (v14 & 4) == 0 )
      v18 = v15;
    v7 = v13 + v18 - 1;
  }
  v19 = v24;
  v20 = ~(v10 - 1) & (v10 + a1 + 3);
  *(_QWORD *)a3 = v20;
  v21 = (v20 + v7 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a3 + 8) = v21;
  if ( !v25 )
  {
    if ( v19 )
    {
      v20 += 48LL;
    }
    else if ( (v9 & 0x200000) == 0 )
    {
      if ( (v9 & 0x400000) != 0 )
        v3 = ~(v10 - 1) & (v10 + a1 + 3);
      v20 = v3;
    }
  }
  *(_QWORD *)(a3 + 40) = (v21 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  *(_QWORD *)(a3 + 16) = v20;
  *(_DWORD *)(a3 + 32) = v9;
  *(_WORD *)(a3 + 36) = v5;
  return result;
}
