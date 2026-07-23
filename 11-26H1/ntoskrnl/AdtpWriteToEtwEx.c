/*
 * XREFs of AdtpWriteToEtwEx @ 0x14046E82C
 * Callers:
 *     SeAuditPlugAndPlay @ 0x140B35364 (SeAuditPlugAndPlay.c)
 * Callees:
 *     EtwWriteKMSecurityEvent @ 0x140215158 (EtwWriteKMSecurityEvent.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x14046EA80 (AdtpNormalizeAuditInfoHelper.c)
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x140AAED68 (AdtpGetCategoryAndSubCategoryId.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpWriteToEtwEx(__int64 a1, _BYTE *a2)
{
  int v4; // ebx
  unsigned __int16 v5; // cx
  _BYTE *v6; // rdi
  __int64 v7; // r14
  PVOID *v8; // rsi
  __int16 v10; // r14
  __int64 v11; // rcx
  __int16 v12; // dx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  char *v15; // rax
  __int64 v16; // r8
  _WORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[320]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v23; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v24[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v25[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v17[0] = 0;
  v20 = 0LL;
  memset_0(v25, 0, sizeof(v25));
  memset_0(v21, 0, sizeof(v21));
  *a2 = 0;
  memset(v24, 0, sizeof(v24));
  AdtpNormalizeAuditInfoHelper(0LL, a1);
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v4 = -1073741811;
LABEL_3:
    v5 = v17[0];
    goto LABEL_4;
  }
  v10 = *(_WORD *)(a1 + 22);
  v4 = AdtpPackageParameters(0LL, a1, 2LL, v25, v21, v22, v17, v24);
  if ( v4 < 0 )
    goto LABEL_3;
  if ( *(_WORD *)(a1 + 20)
    && (v11 = *(unsigned __int16 *)(a1 + 20),
        v18 = 0,
        v19 = 0,
        (int)AdtpGetCategoryAndSubCategoryId(v11, &v18, &v19) >= 0) )
  {
    v12 = v19 + (((_WORD)v18 + 48) << 8);
  }
  else
  {
    v12 = -256;
  }
  LOWORD(v20) = *(_WORD *)(a1 + 4);
  BYTE2(v20) = *(_BYTE *)(a1 + 8);
  v13 = 0x8020000000000000uLL;
  if ( v10 != 8 )
    v13 = 0x8010000000000000uLL;
  WORD3(v20) = v12;
  v5 = v17[0];
  v14 = 0LL;
  *(_WORD *)((char *)&v20 + 3) = 10;
  BYTE5(v20) = 0;
  *((_QWORD *)&v20 + 1) = v13;
  if ( !v17[0] )
    goto LABEL_22;
  v15 = &v23;
  v16 = v17[0];
  do
  {
    v14 = (unsigned int)(*(_DWORD *)v15 + v14);
    v15 += 16;
    --v16;
  }
  while ( v16 );
  if ( (unsigned int)v14 <= 0xDC00 )
  {
LABEL_22:
    v4 = EtwWriteKMSecurityEvent((__int64)&v20, v14);
    if ( v4 == -1073741058 )
      *a2 = 1;
    goto LABEL_3;
  }
  *a2 = 1;
  v4 = -2147483643;
LABEL_4:
  if ( v5 )
  {
    v6 = v24;
    v7 = v5;
    v8 = (PVOID *)v22;
    do
    {
      if ( *v6 )
        ExFreePoolWithTag(*v8, 0);
      ++v6;
      v8 += 2;
      --v7;
    }
    while ( v7 );
  }
  return (unsigned int)v4;
}
