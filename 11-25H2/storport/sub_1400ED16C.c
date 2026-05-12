/*
 * XREFs of sub_1400ED16C @ 0x1400ED16C
 * Callers:
 *     sub_1400CD79C @ 0x1400CD79C (sub_1400CD79C.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 *     sub_1400F045C @ 0x1400F045C (sub_1400F045C.c)
 *     sub_1400F1128 @ 0x1400F1128 (sub_1400F1128.c)
 * Callees:
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 *     sub_1400BD9F4 @ 0x1400BD9F4 (sub_1400BD9F4.c)
 *     sub_1400C93A0 @ 0x1400C93A0 (sub_1400C93A0.c)
 *     sub_1400E941C @ 0x1400E941C (sub_1400E941C.c)
 *     sub_1400E9D5C @ 0x1400E9D5C (sub_1400E9D5C.c)
 *     sub_1400EA44C @ 0x1400EA44C (sub_1400EA44C.c)
 *     sub_1400EB850 @ 0x1400EB850 (sub_1400EB850.c)
 *     sub_1400ECAF8 @ 0x1400ECAF8 (sub_1400ECAF8.c)
 *     sub_1400ECCD0 @ 0x1400ECCD0 (sub_1400ECCD0.c)
 *     sub_1400ED960 @ 0x1400ED960 (sub_1400ED960.c)
 *     sub_1400F26B4 @ 0x1400F26B4 (sub_1400F26B4.c)
 *     sub_1400F2A1C @ 0x1400F2A1C (sub_1400F2A1C.c)
 *     sub_1400F60E0 @ 0x1400F60E0 (sub_1400F60E0.c)
 *     sub_1400F6320 @ 0x1400F6320 (sub_1400F6320.c)
 *     sub_1400F6568 @ 0x1400F6568 (sub_1400F6568.c)
 *     sub_140114C80 @ 0x140114C80 (sub_140114C80.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400ED16C(_QWORD *SystemArgument2, char a2)
{
  char v2; // bp
  int v5; // edi
  const wchar_t *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int16 v10; // r9
  __int64 v11; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD *v14; // [rsp+50h] [rbp-48h]
  __int64 v15; // [rsp+58h] [rbp-40h] BYREF
  __int128 v16; // [rsp+60h] [rbp-38h] BYREF

  v15 = 0LL;
  v2 = *((_BYTE *)SystemArgument2 + 1728);
  v16 = 0LL;
  if ( a2 )
  {
    v5 = sub_140114C80();
    if ( v5 < 0 )
    {
      *((_DWORD *)SystemArgument2 + 294) = 36;
      v6 = L"Create SGL buffer pool failed";
LABEL_22:
      v10 = *((_WORD *)SystemArgument2 + 588);
      *(_QWORD *)&v16 = SystemArgument2[121];
      DWORD2(v16) = *((_DWORD *)SystemArgument2 + 294);
      sub_140075474(SystemArgument2[16], 0LL, 0, v10, (const int *)v6, 8u, &v15, 0x10u, &v16);
      goto LABEL_28;
    }
    v5 = sub_1400ED960(SystemArgument2);
    if ( v5 < 0 )
    {
      *((_DWORD *)SystemArgument2 + 294) = 7;
      v6 = L"Admin Queue Initialize failed";
      goto LABEL_22;
    }
  }
  if ( v2 == 1 )
  {
    sub_1400F26B4(SystemArgument2);
  }
  else
  {
    *(_DWORD *)(SystemArgument2[115] + 36LL) = (*((_WORD *)SystemArgument2 + 3) - 1) & 0xFFF | (((*((_WORD *)SystemArgument2
                                                                                                  + 3)
                                                                                                - 1) & 0xFFF) << 16);
    _InterlockedOr(v13, 0);
    v7 = *(_QWORD *)(SystemArgument2[107] + 8LL);
    v14 = (_QWORD *)(SystemArgument2[115] + 48LL);
    *v14 = v7;
    _InterlockedOr(v13, 0);
    v8 = *(_QWORD *)(SystemArgument2[89] + 8LL);
    v14 = (_QWORD *)(SystemArgument2[115] + 40LL);
    *v14 = v8;
    _InterlockedOr(v13, 0);
  }
  sub_1400E941C((__int64)SystemArgument2);
  v5 = sub_1400EA44C((__int64)SystemArgument2);
  if ( v5 < 0 )
  {
    *((_DWORD *)SystemArgument2 + 294) = 8;
    v6 = L"Controller enable failed";
    goto LABEL_22;
  }
  if ( !a2 && (SystemArgument2[121] & 0x20) == 0 )
    goto LABEL_28;
  SystemArgument2[121] &= ~0x20uLL;
  v5 = sub_1400ECAF8(SystemArgument2);
  if ( v5 < 0 )
  {
    *((_DWORD *)SystemArgument2 + 294) = 30;
    v6 = L"Identify controller failed";
    goto LABEL_22;
  }
  *((_WORD *)SystemArgument2 + 2) = *(_WORD *)(SystemArgument2[74] + 78LL);
  if ( !(unsigned int)sub_1400C93A0() || (*(_DWORD *)(SystemArgument2[16] + 144LL) & 0x200LL) == 0 )
  {
    v5 = sub_1400E9D5C(SystemArgument2, *(_DWORD *)(SystemArgument2[74] + 516LL));
    if ( v5 < 0 )
    {
      v6 = L"Create pending IO queue context failed";
LABEL_21:
      *((_DWORD *)SystemArgument2 + 294) = 31;
      goto LABEL_22;
    }
  }
  v9 = SystemArgument2[74];
  *((_OWORD *)SystemArgument2 + 50) = *(_OWORD *)(v9 + 24);
  *((_OWORD *)SystemArgument2 + 51) = *(_OWORD *)(v9 + 40);
  SystemArgument2[104] = *(_QWORD *)(v9 + 56);
  *(_QWORD *)((char *)SystemArgument2 + 841) = *(_QWORD *)(v9 + 64);
  v5 = sub_1400F2A1C(SystemArgument2);
  if ( v5 < 0 )
  {
    v6 = L"Storing SubsystemId failed";
    goto LABEL_21;
  }
  sub_1400EB850(SystemArgument2);
  sub_1400ECCD0(SystemArgument2);
  if ( a2 )
  {
    sub_1400F60E0(SystemArgument2);
    if ( !(unsigned int)sub_1400C93A0() || (*(_DWORD *)(SystemArgument2[16] + 144LL) & 0x200LL) == 0 )
      sub_1400BD9F4(SystemArgument2);
    sub_1400F6320(SystemArgument2);
    sub_1400F6568(SystemArgument2);
  }
LABEL_28:
  v11 = SystemArgument2[159];
  if ( v5 < 0 )
    ++*(_DWORD *)(v11 + 12);
  else
    ++*(_DWORD *)(v11 + 8);
  return (unsigned int)v5;
}
