/*
 * XREFs of sub_140190904 @ 0x140190904
 * Callers:
 *     sub_140193A88 @ 0x140193A88 (sub_140193A88.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003918C @ 0x14003918C (sub_14003918C.c)
 *     sub_140066AC0 @ 0x140066AC0 (sub_140066AC0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

int __fastcall sub_140190904(__int64 *a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v6; // eax
  int result; // eax
  _WORD *v8; // r14
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  _WORD *v14; // rax
  __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+28h] [rbp-D8h] BYREF
  struct _STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD Dst[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v19; // [rsp+58h] [rbp-A8h]
  char SourceString[16]; // [rsp+59h] [rbp-A7h] BYREF
  int v21; // [rsp+69h] [rbp-97h]
  char v22; // [rsp+6Dh] [rbp-93h]
  char v23; // [rsp+6Eh] [rbp-92h]
  char v24; // [rsp+6Fh] [rbp-91h]
  char v25; // [rsp+70h] [rbp-90h]
  char v26; // [rsp+71h] [rbp-8Fh]
  char v27; // [rsp+72h] [rbp-8Eh]
  _BYTE v28[256]; // [rsp+160h] [rbp+60h] BYREF

  memset_0(Dst, 0, 0x10CuLL);
  v15 = 0LL;
  v6 = *a3;
  v16 = 0LL;
  DestinationString = 0LL;
  if ( v6 < 8 )
  {
    *a3 = 0;
    return -1073741789;
  }
  *a2 = 264;
  a2[1] = 264;
  if ( v6 < 0x108 )
  {
    *a3 = 8;
    return 0;
  }
  *a3 = 0;
  v8 = a2 + 2;
  memset_0(a2 + 2, 0, 0x100uLL);
  v9 = a1[131];
  if ( v9 )
  {
    result = sub_14003918C((_WORD *)a2 + 4, 128LL, v9);
    if ( result < 0 )
      return result;
    goto LABEL_17;
  }
  v10 = a1[142];
  Dst[0] = 1;
  Dst[1] = 268;
  v11 = *(_QWORD *)(v10 + 592);
  if ( !v11 )
    return -1073741637;
  *(_OWORD *)SourceString = *(_OWORD *)(v11 + 4);
  v21 = *(_DWORD *)(v11 + 20);
  v22 = 95;
  v12 = *(unsigned __int16 *)(v11 + 78);
  v27 = 0;
  v19 = 0;
  v26 = a0123456789abcd[v12 & 0xF];
  v25 = a0123456789abcd[(unsigned __int8)v12 >> 4];
  v24 = a0123456789abcd[((unsigned int)v12 >> 8) & 0xF];
  v23 = a0123456789abcd[v12 >> 12];
  result = sub_140066AC0(SourceString, 256LL, &v15);
  if ( result < 0 )
    return result;
  v13 = v15;
  if ( (unsigned __int64)(v15 - 1) > 0x7E )
    return -1073739509;
  v16.MaximumLength = 256;
  v16.Buffer = (PWSTR)v28;
  RtlInitAnsiString(&DestinationString, SourceString);
  result = RtlAnsiStringToUnicodeString(&v16, &DestinationString, 0);
  if ( result >= 0 )
  {
    result = sub_14003918C(v8, 128LL, (__int64)v28);
    if ( result >= 0 )
    {
      v14 = (_WORD *)sub_1400143E0(64LL, 2 * v13 + 2, 1413833042LL, a1[1]);
      a1[131] = (__int64)v14;
      if ( v14 )
        sub_14003918C(v14, v13 + 1, (__int64)v28);
      result = 0;
LABEL_17:
      *a3 = 264;
    }
  }
  return result;
}
