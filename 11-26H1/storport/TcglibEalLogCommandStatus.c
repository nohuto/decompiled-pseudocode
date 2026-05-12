/*
 * XREFs of TcglibEalLogCommandStatus @ 0x14008D4A4
 * Callers:
 *     TcglibpMapStatus @ 0x140137B18 (TcglibpMapStatus.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0quuujjzssszq_EtwWriteTransfer @ 0x14008C4F0 (McTemplateK0quuujjzssszq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibEalLogCommandStatus(int *a1, char a2)
{
  int v2; // eax
  const char *v3; // rdi
  int v5; // r11d
  int *v6; // rbx
  const wchar_t *v7; // rsi
  __int64 v8; // r8
  char v9; // r11
  const wchar_t *v10; // rax
  const char *v11; // rdx
  const char *v12; // rcx
  const char *v13; // rdi
  int v15; // [rsp+80h] [rbp-48h]
  __int128 v16; // [rsp+88h] [rbp-40h] BYREF
  __int128 v17; // [rsp+98h] [rbp-30h] BYREF
  __int128 v18; // [rsp+A8h] [rbp-20h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v17 = 0LL;
  v15 = RaidNullAddress;
  v18 = 0LL;
  v16 = 0LL;
  if ( v2 == 1431193940 )
  {
    v5 = a1[26];
    v3 = (const char *)a1;
    v6 = (int *)*((_QWORD *)a1 + 3);
    v18 = *(_OWORD *)(a1 + 526);
    v15 = v5;
  }
  else
  {
    v6 = 0LL;
    if ( v2 == 1094997074 )
      v6 = a1;
  }
  v17 = *(_OWORD *)(v6 + 1282);
  v7 = (const wchar_t *)*((_QWORD *)v6 + 643);
  RaidDriverGetName(*((_QWORD *)v6 + 2), (__int64)&v16);
  if ( (byte_140173443 & 0x20) != 0 )
  {
    v10 = (const wchar_t *)&unk_140153274;
    if ( v7 )
      v10 = v7;
    if ( v3 )
    {
      v11 = v3 + 242;
      v12 = v3 + 177;
      v13 = v3 + 168;
    }
    else
    {
      v13 = (const char *)&dword_140154ADC;
      v11 = (const char *)&dword_140154ADC;
      v12 = (const char *)&dword_140154ADC;
    }
    McTemplateK0quuujjzssszq_EtwWriteTransfer(
      (__int64)v12,
      (__int64)v11,
      v8,
      v6[14],
      v9,
      SBYTE1(v15),
      SBYTE2(v15),
      (__int64)&v18,
      (__int64)&v17,
      *((const wchar_t **)&v16 + 1),
      v13,
      v12,
      v11,
      v10,
      a2);
  }
  return 0LL;
}
