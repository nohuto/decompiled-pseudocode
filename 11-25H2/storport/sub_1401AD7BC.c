/*
 * XREFs of sub_1401AD7BC @ 0x1401AD7BC
 * Callers:
 *     sub_1401B2CE0 @ 0x1401B2CE0 (sub_1401B2CE0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 *     sub_14003918C @ 0x14003918C (sub_14003918C.c)
 *     sub_140066AC0 @ 0x140066AC0 (sub_140066AC0.c)
 *     sub_140066B1C @ 0x140066B1C (sub_140066B1C.c)
 *     sub_140066B78 @ 0x140066B78 (sub_140066B78.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

signed int __fastcall sub_1401AD7BC(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  _WORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int16 v11; // ax
  _WORD *v12; // rax
  signed int result; // eax
  __int64 v14; // rsi
  _WORD *v15; // rax
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+28h] [rbp-D8h] BYREF
  struct _STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+54h] [rbp-ACh]
  char Dst; // [rsp+58h] [rbp-A8h] BYREF
  char SourceString[263]; // [rsp+59h] [rbp-A7h] BYREF
  _BYTE v23[256]; // [rsp+160h] [rbp+60h] BYREF

  memset_0(&Dst, 0, 0x104uLL);
  v16 = 0LL;
  v17 = 0LL;
  DestinationString = 0LL;
  if ( !sub_140020090(a1 + 376, 17) )
    return -1073741637;
  v6 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 0LL;
    return -1073741789;
  }
  *a2 = 264;
  a2[1] = 264;
  if ( v6 < 0x108 )
  {
    *a3 = 8LL;
    return 0;
  }
  v7 = a2 + 2;
  *a3 = 0LL;
  memset_0(v7, 0, 0x100uLL);
  v8 = *(_QWORD *)(a1 + 5080);
  if ( v8 )
  {
    v9 = 128LL;
    v10 = v8 - (_QWORD)v7;
    do
    {
      if ( v9 == -2147483518 )
        break;
      v11 = *(_WORD *)((char *)v7 + v10);
      if ( !v11 )
        break;
      *v7++ = v11;
      --v9;
    }
    while ( v9 );
    v12 = v7 - 1;
    if ( v9 )
      v12 = v7;
    *v12 = 0;
    result = v9 == 0 ? 0x80000005 : 0;
    if ( v9 )
LABEL_12:
      *a3 = 264LL;
  }
  else
  {
    v19 = 1;
    v20 = 268;
    result = sub_1400296E0(a1 + 376);
    if ( result >= 0 )
    {
      result = Dst == 1
             ? sub_140066B1C(SourceString, 0x7FFFFFFFLL, &v16)
             : sub_140066AC0(SourceString, 0x7FFFFFFFLL, &v16);
      if ( result >= 0 )
      {
        v14 = v16;
        if ( (unsigned __int64)(v16 - 1) > 0x7E )
          return -1073739509;
        v17.Buffer = (PWSTR)v23;
        v17.MaximumLength = 256;
        if ( Dst == 1 )
        {
          result = sub_140066B78(&v17.Length, SourceString);
        }
        else
        {
          RtlInitAnsiString(&DestinationString, SourceString);
          result = RtlAnsiStringToUnicodeString(&v17, &DestinationString, 0);
        }
        if ( result >= 0 )
        {
          result = sub_14003918C(v7, 128LL, (__int64)v23);
          if ( result >= 0 )
          {
            v15 = (_WORD *)sub_1400143E0(64LL, 2 * v14 + 2, 1413833042LL, *(_QWORD *)(a1 + 8));
            *(_QWORD *)(a1 + 5080) = v15;
            if ( v15 )
              sub_14003918C(v15, v14 + 1, (__int64)v23);
            result = 0;
            goto LABEL_12;
          }
        }
      }
    }
  }
  return result;
}
