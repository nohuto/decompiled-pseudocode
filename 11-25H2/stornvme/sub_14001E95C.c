/*
 * XREFs of sub_14001E95C @ 0x14001E95C
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 *     sub_140028BD4 @ 0x140028BD4 (sub_140028BD4.c)
 * Callees:
 *     sub_14000C180 @ 0x14000C180 (sub_14000C180.c)
 *     sub_14000C770 @ 0x14000C770 (sub_14000C770.c)
 *     sub_1400192CC @ 0x1400192CC (sub_1400192CC.c)
 *     sub_14001B4B4 @ 0x14001B4B4 (sub_14001B4B4.c)
 *     sub_1400206D0 @ 0x1400206D0 (sub_1400206D0.c)
 *     sub_1400286F4 @ 0x1400286F4 (sub_1400286F4.c)
 *     sub_140029F2C @ 0x140029F2C (sub_140029F2C.c)
 *     sub_14002A02C @ 0x14002A02C (sub_14002A02C.c)
 *     sub_14002A194 @ 0x14002A194 (sub_14002A194.c)
 *     sub_14002A340 @ 0x14002A340 (sub_14002A340.c)
 *     sub_14002A4A4 @ 0x14002A4A4 (sub_14002A4A4.c)
 *     sub_14002AED8 @ 0x14002AED8 (sub_14002AED8.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14001E95C(__int64 a1, char a2)
{
  const wchar_t *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  int v15; // eax
  int v16; // eax
  signed __int32 v17[10]; // [rsp+0h] [rbp-E8h] BYREF
  const wchar_t *v18; // [rsp+28h] [rbp-C0h]
  int v19; // [rsp+30h] [rbp-B8h]
  _BYTE *v20; // [rsp+38h] [rbp-B0h]
  int v21; // [rsp+40h] [rbp-A8h]
  __int64 *v22; // [rsp+48h] [rbp-A0h]
  int *v23; // [rsp+50h] [rbp-98h]
  int v24; // [rsp+60h] [rbp-88h] BYREF
  __int64 v25; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v26[96]; // [rsp+70h] [rbp-78h] BYREF

  sub_140032C80(v26, 0LL, 88LL);
  if ( a2 && !sub_14001B4B4(a1) )
  {
    *(_DWORD *)(a1 + 28) = 7;
    v4 = L"Admin Queue Initialize failed";
LABEL_26:
    v13 = -1056964607;
    goto LABEL_27;
  }
  v5 = (*(_WORD *)(a1 + 324) - 1) & 0xFFF | ((unsigned __int16)((*(_WORD *)(a1 + 324) - 1) & 0xFFF) << 16);
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 36LL) = v5;
  _InterlockedOr(v17, 0);
  sub_1400206D0(v5, *(_QWORD *)(a1 + 176) + 48LL, *(_QWORD *)(a1 + 552));
  sub_1400206D0(v6, *(_QWORD *)(a1 + 176) + 40LL, *(_QWORD *)(a1 + 344));
  v7 = *(_QWORD *)(a1 + 192);
  if ( (v7 & 0x20000) != 0 && (*(_DWORD *)(a1 + 56) & 0x400) != 0 )
    v8 = 2048;
  else
    v8 = 0;
  v9 = v8 | 0x60;
  if ( (v7 & 0x80000000000LL) == 0 )
    v9 = v8;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = v9 | 0x460000;
  _InterlockedOr(v17, 0);
  StorPortStallExecution(5000LL);
  v13 = sub_14000C770(a1, v10, v11, v12);
  if ( !v13 )
  {
    if ( a2 || (*(_DWORD *)(a1 + 24) & 0x20) != 0 )
    {
      *(_DWORD *)(a1 + 24) &= ~0x20u;
      v13 = sub_1400286F4(a1);
      if ( v13 )
      {
        *(_DWORD *)(a1 + 28) = 30;
        v4 = L"Identify controller failed";
        goto LABEL_27;
      }
      sub_140029F2C(a1);
      sub_14002A02C(a1);
      if ( a2 )
      {
        if ( !*(_BYTE *)(a1 + 20) )
          sub_14002A194(a1);
        sub_14002AED8(a1);
        sub_14002A340(a1);
        sub_14002A4A4(a1);
      }
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      *(_DWORD *)(a1 + 232) = 65537;
    }
    else if ( !sub_14000C180(a1) )
    {
      *(_DWORD *)(a1 + 28) = 10;
      v4 = L"Get processor information failed";
      goto LABEL_26;
    }
    ++*(_DWORD *)(a1 + 4184);
    return v13;
  }
  *(_DWORD *)(a1 + 28) = 8;
  v4 = L"Controller enable failed";
LABEL_27:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    sub_1400192CC(a1, (__int64)v26);
    v25 = 0LL;
    v15 = *(_DWORD *)(a1 + 24);
    v23 = &v24;
    LODWORD(v25) = v15;
    v16 = *(_DWORD *)(a1 + 28);
    v22 = &v25;
    v21 = 8;
    v20 = v26;
    HIDWORD(v25) = v16;
    v19 = 88;
    v18 = v4;
    v17[8] = (unsigned __int16)v16;
    v24 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
  }
  ++*(_DWORD *)(a1 + 4188);
  return v13;
}
