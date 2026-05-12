/*
 * XREFs of sub_1400ED47C @ 0x1400ED47C
 * Callers:
 *     sub_1400E7EF0 @ 0x1400E7EF0 (sub_1400E7EF0.c)
 *     sub_1400F045C @ 0x1400F045C (sub_1400F045C.c)
 *     sub_1400F1128 @ 0x1400F1128 (sub_1400F1128.c)
 * Callees:
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 *     sub_1400C62AC @ 0x1400C62AC (sub_1400C62AC.c)
 *     sub_1400C6B94 @ 0x1400C6B94 (sub_1400C6B94.c)
 *     sub_1400C7138 @ 0x1400C7138 (sub_1400C7138.c)
 *     sub_1400C7BB0 @ 0x1400C7BB0 (sub_1400C7BB0.c)
 *     sub_1400C7D1C @ 0x1400C7D1C (sub_1400C7D1C.c)
 *     sub_1400E94A4 @ 0x1400E94A4 (sub_1400E94A4.c)
 *     sub_1400EB6AC @ 0x1400EB6AC (sub_1400EB6AC.c)
 *     sub_1400ECECC @ 0x1400ECECC (sub_1400ECECC.c)
 *     sub_1400EE2AC @ 0x1400EE2AC (sub_1400EE2AC.c)
 *     sub_1400EE870 @ 0x1400EE870 (sub_1400EE870.c)
 *     sub_1400EEC0C @ 0x1400EEC0C (sub_1400EEC0C.c)
 *     sub_1400EEF60 @ 0x1400EEF60 (sub_1400EEF60.c)
 *     sub_1400F0A34 @ 0x1400F0A34 (sub_1400F0A34.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400ED47C(_QWORD *SystemArgument2, __int64 a2, char a3)
{
  int v3; // r14d
  char v5; // bp
  int v7; // edi
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int16 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h] BYREF
  int v18; // [rsp+60h] [rbp-38h]
  int v19; // [rsp+64h] [rbp-34h]

  v3 = *((_DWORD *)SystemArgument2 + 164);
  v16 = 0LL;
  v19 = 0;
  v5 = a2;
  if ( (_BYTE)a2 )
  {
    v7 = sub_1400EB6AC((__int64)SystemArgument2);
    if ( v7 < 0 )
    {
      *((_DWORD *)SystemArgument2 + 294) = 33;
      v8 = L"Get interrupt information failed";
      goto LABEL_37;
    }
    sub_1400C62AC((_BYTE **)SystemArgument2, a3);
  }
  if ( v3 )
  {
    if ( (SystemArgument2[121] & 0x2000LL) != 0 )
    {
      v9 = SystemArgument2[131];
      if ( v9 )
        *(_DWORD *)(v9 + 92) = 0xFFFF;
    }
    LOBYTE(a2) = v5 == 0;
    v7 = sub_1400C7D1C(SystemArgument2, a2, a3);
    if ( v7 < 0 )
    {
      *((_DWORD *)SystemArgument2 + 294) = 12;
      v8 = L"Set IO queue count failed";
      goto LABEL_37;
    }
    if ( !*((_WORD *)SystemArgument2 + 13) || !*((_WORD *)SystemArgument2 + 11) )
    {
      *((_DWORD *)SystemArgument2 + 294) = 12;
      goto LABEL_41;
    }
    v10 = SystemArgument2[131];
    if ( v10 && (*(_DWORD *)(v10 + 24) & 4) == 0 && *((_BYTE *)SystemArgument2 + 1728) != 1 )
    {
      sub_1400C7BB0(SystemArgument2, a3);
      sub_1400C7138(SystemArgument2, a3);
    }
    if ( v5 )
    {
      if ( (SystemArgument2[121] & 0x800000LL) == 0
        && *((_BYTE *)SystemArgument2 + 1728) != 1
        && !(unsigned __int8)sub_1400EE2AC(SystemArgument2) )
      {
        *((_WORD *)SystemArgument2 + 13) = 0;
        v8 = L"Initialize perf options failed";
        *((_WORD *)SystemArgument2 + 11) = 0;
        v7 = -1073741595;
        *((_DWORD *)SystemArgument2 + 294) = 21;
        goto LABEL_37;
      }
      v7 = sub_1400EEC0C(SystemArgument2);
      if ( v7 < 0 )
      {
        *((_DWORD *)SystemArgument2 + 294) = 13;
        v8 = L"Initialize IO queues failed";
        goto LABEL_37;
      }
      v7 = sub_1400EEF60(SystemArgument2);
      if ( v7 < 0 )
      {
        *((_DWORD *)SystemArgument2 + 294) = 32;
        v8 = L"IO queues mapping failed";
        goto LABEL_37;
      }
      v7 = sub_1400F0A34(SystemArgument2);
      if ( v7 < 0 )
      {
        *((_DWORD *)SystemArgument2 + 294) = 32;
        v8 = L"Processor to SQ mapping failed";
        goto LABEL_37;
      }
      sub_1400E94A4((__int64)SystemArgument2);
    }
    if ( *((_WORD *)SystemArgument2 + 13) && *((_WORD *)SystemArgument2 + 11) )
    {
      v11 = SystemArgument2[131];
      if ( (!v11 || (*(_DWORD *)(v11 + 96) & 4) == 0) && !a3 )
      {
        v7 = -1073741822;
        v8 = L"IO queues async creation failed";
LABEL_37:
        v12 = *((_WORD *)SystemArgument2 + 588);
        v17 = SystemArgument2[121];
        v18 = *((_DWORD *)SystemArgument2 + 294);
        sub_140075474(SystemArgument2[16], 0LL, 0, v12, (const int *)v8, 8u, &v16, 0x10u, &v17);
        v13 = SystemArgument2[159];
        if ( v13 )
          ++*(_DWORD *)(v13 + 20);
        return (unsigned int)v7;
      }
      v7 = sub_1400EE870(SystemArgument2);
      if ( v7 < 0 )
      {
        v8 = L"IO queues sync creation failed";
        goto LABEL_37;
      }
    }
  }
  sub_1400ECECC(SystemArgument2, a3);
  sub_1400C6B94(SystemArgument2, a3);
  v7 = 0;
LABEL_41:
  v14 = SystemArgument2[159];
  if ( v14 )
    ++*(_DWORD *)(v14 + 16);
  return (unsigned int)v7;
}
