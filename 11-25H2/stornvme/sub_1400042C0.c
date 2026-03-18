/*
 * XREFs of sub_1400042C0 @ 0x1400042C0
 * Callers:
 *     sub_140001580 @ 0x140001580 (sub_140001580.c)
 *     sub_140001FD0 @ 0x140001FD0 (sub_140001FD0.c)
 *     sub_1400020E0 @ 0x1400020E0 (sub_1400020E0.c)
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 *     sub_140004020 @ 0x140004020 (sub_140004020.c)
 *     sub_140004780 @ 0x140004780 (sub_140004780.c)
 *     sub_140005770 @ 0x140005770 (sub_140005770.c)
 *     sub_140005F10 @ 0x140005F10 (sub_140005F10.c)
 *     sub_140006260 @ 0x140006260 (sub_140006260.c)
 *     sub_1400069C0 @ 0x1400069C0 (sub_1400069C0.c)
 *     sub_140011210 @ 0x140011210 (sub_140011210.c)
 *     sub_140011670 @ 0x140011670 (sub_140011670.c)
 *     sub_140021020 @ 0x140021020 (sub_140021020.c)
 *     sub_140021288 @ 0x140021288 (sub_140021288.c)
 *     sub_14002256C @ 0x14002256C (sub_14002256C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140022C1C @ 0x140022C1C (sub_140022C1C.c)
 *     sub_140023450 @ 0x140023450 (sub_140023450.c)
 *     sub_1400235E4 @ 0x1400235E4 (sub_1400235E4.c)
 *     sub_1400240D8 @ 0x1400240D8 (sub_1400240D8.c)
 *     sub_14002438C @ 0x14002438C (sub_14002438C.c)
 *     sub_140024A30 @ 0x140024A30 (sub_140024A30.c)
 *     sub_14002517C @ 0x14002517C (sub_14002517C.c)
 *     sub_14002532C @ 0x14002532C (sub_14002532C.c)
 *     sub_1400254C8 @ 0x1400254C8 (sub_1400254C8.c)
 *     sub_1400256A0 @ 0x1400256A0 (sub_1400256A0.c)
 *     sub_140025944 @ 0x140025944 (sub_140025944.c)
 *     sub_140026F14 @ 0x140026F14 (sub_140026F14.c)
 *     sub_140027360 @ 0x140027360 (sub_140027360.c)
 *     sub_140027660 @ 0x140027660 (sub_140027660.c)
 *     sub_140027830 @ 0x140027830 (sub_140027830.c)
 *     sub_1400279C4 @ 0x1400279C4 (sub_1400279C4.c)
 *     sub_140027EFC @ 0x140027EFC (sub_140027EFC.c)
 *     sub_140028E38 @ 0x140028E38 (sub_140028E38.c)
 *     sub_140028EEC @ 0x140028EEC (sub_140028EEC.c)
 *     sub_140029050 @ 0x140029050 (sub_140029050.c)
 *     sub_14002910C @ 0x14002910C (sub_14002910C.c)
 *     sub_1400292D8 @ 0x1400292D8 (sub_1400292D8.c)
 *     sub_140029394 @ 0x140029394 (sub_140029394.c)
 *     sub_14002DDDC @ 0x14002DDDC (sub_14002DDDC.c)
 *     sub_14002E000 @ 0x14002E000 (sub_14002E000.c)
 * Callees:
 *     sub_140004670 @ 0x140004670 (sub_140004670.c)
 *     sub_14002079C @ 0x14002079C (sub_14002079C.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400042C0(__int64 a1, __int64 a2)
{
  char v2; // r11
  __int64 v5; // rdi
  bool v6; // r15
  unsigned int v7; // r12d
  unsigned __int8 *v8; // r10
  unsigned int v9; // eax
  unsigned int *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  unsigned int v15; // r8d
  unsigned int i; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int *v19; // rcx
  __int64 v20; // r9
  unsigned __int16 v21; // r14
  int v22; // ecx
  unsigned int v23; // ebp
  bool v24; // cl
  unsigned int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 result; // rax
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // [rsp+20h] [rbp-58h] BYREF
  __int128 v34; // [rsp+28h] [rbp-50h] BYREF
  int v35; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  v6 = 0;
  v33 = 0;
  v7 = 0;
  if ( (*(_BYTE *)(v5 + 4225) & 1) != 0 )
    goto LABEL_47;
  v35 = 0;
  v8 = 0LL;
  v34 = 0LL;
  if ( v2 == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v9 = *(_DWORD *)(a2 + 56);
      if ( v9 )
      {
        v10 = (unsigned int *)(a2 + 120);
        v11 = v9;
        while ( 1 )
        {
          v12 = *v10;
          if ( (unsigned int)v12 < 0x80 || (unsigned int)v12 > *(_DWORD *)(a2 + 16) )
            goto LABEL_15;
          v13 = a2 + v12;
          if ( *(_DWORD *)(a2 + v12) == 64 )
          {
            if ( *(_BYTE *)(v13 + 10) )
              goto LABEL_72;
          }
          else
          {
            if ( *(_DWORD *)(a2 + v12) != 65 )
            {
              if ( *(_DWORD *)(a2 + v12) == 66 && *(_DWORD *)(v13 + 12) )
                v8 = (unsigned __int8 *)(v13 + 32);
              goto LABEL_15;
            }
            if ( *(_BYTE *)(v13 + 10) )
LABEL_72:
              v8 = (unsigned __int8 *)(v13 + 24);
          }
LABEL_15:
          ++v10;
          if ( !--v11 )
            goto LABEL_16;
        }
      }
    }
  }
  else if ( !v2 && *(_BYTE *)(a2 + 10) )
  {
    v8 = (unsigned __int8 *)(a2 + 72);
LABEL_16:
    if ( v8 )
    {
      v14 = *v8;
      if ( v14 == 138 || (v29 = v14 - 40) == 0 || (v30 = v29 - 2) == 0 || v30 == 94 )
      {
        if ( v2 == 40 )
        {
          v15 = *(_DWORD *)(a2 + 56);
          if ( v15 )
          {
            for ( i = 0; i < v15; ++i )
            {
              v17 = *(unsigned int *)(a2 + 4LL * i + 120);
              if ( (unsigned int)v17 >= 0x80 && (unsigned int)v17 < *(_DWORD *)(a2 + 16) )
              {
                v18 = a2 + v17;
                if ( *(_DWORD *)(a2 + v17) == 128 )
                  goto LABEL_27;
              }
            }
          }
        }
        v19 = (unsigned int *)(a2 + 16);
        v18 = 0LL;
        if ( v2 == 40 )
LABEL_27:
          v19 = (unsigned int *)(a2 + 60);
        if ( v19 )
          v7 = *v19;
        if ( v18 )
          v6 = (*(_BYTE *)(v18 + 8) & 2) != 0;
      }
    }
  }
  *(_QWORD *)&v34 = 0x1400000002LL;
  StorPortExtendedFunction(15LL, a1, a2, &v34);
  v21 = WORD4(v34);
  if ( (_WORD)v35 == 0xFFFF && BYTE2(v35) == 0xFF )
    StorPortExtendedFunction(17LL, a1, &v35, v20);
  StorPortExtendedFunction(56LL, a1, &v35, &v33);
  v22 = *(_BYTE *)(a2 + 2) == 40 ? *(_DWORD *)(a2 + 24) : *(_DWORD *)(a2 + 12);
  v23 = v33;
  v24 = (v22 & 0x4000) != 0;
  if ( (*(_BYTE *)(v5 + 4225) & 1) != 0 )
  {
LABEL_47:
    result = *(unsigned __int16 *)(a1 + 384);
    goto LABEL_46;
  }
  if ( *(_BYTE *)(a1 + 20) )
  {
    result = *(_QWORD *)(a1 + 936);
    *(_WORD *)(v5 + 4212) = *(_WORD *)(result + 48);
    return result;
  }
  v25 = *(unsigned __int16 *)(a1 + 234);
  if ( v33 >= v25 )
    v23 = v33 % v25;
  v26 = *(_QWORD *)(a1 + 264);
  if ( v24 )
  {
    if ( !*(_QWORD *)(v26 + 72LL * v23 + 64) )
      sub_14002079C(a1, v23, v21);
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v23 + 64);
  }
  else
  {
    if ( !*(_QWORD *)(v26 + 72LL * v23 + 56) )
      sub_140004670(a1, v23, v21, 0LL);
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v23 + 56);
  }
  if ( !*(_BYTE *)(a1 + 3752) || !v7 )
  {
    result = *(unsigned __int16 *)(v27 + 48);
LABEL_46:
    *(_WORD *)(v5 + 4212) = result;
    return result;
  }
  v31 = *(_DWORD *)(a1 + 3764);
  if ( (v31 & 0x80u) == 0 && (v7 > *(_DWORD *)(a1 + 3760) || v6) )
  {
    LOWORD(v32) = *(_WORD *)(a1 + 334) + v23 % (unsigned __int16)(*(_WORD *)(a1 + 332) - *(_WORD *)(a1 + 334));
  }
  else
  {
    if ( (v31 & 0x40) != 0 )
    {
      result = *(_QWORD *)(a1 + 936);
      *(_WORD *)(v5 + 4212) = *(_WORD *)(208LL * (v23 % *(unsigned __int16 *)(a1 + 332)) + result + 48);
      return result;
    }
    v32 = v23 % *(unsigned __int16 *)(a1 + 334);
  }
  result = *(_QWORD *)(a1 + 936);
  *(_WORD *)(v5 + 4212) = *(_WORD *)(208LL * (unsigned __int16)v32 + result + 48);
  return result;
}
