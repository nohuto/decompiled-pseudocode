/*
 * XREFs of AdtpWriteToEtw @ 0x140AAA894
 * Callers:
 *     SepRmCallLsa @ 0x14030EA80 (SepRmCallLsa.c)
 * Callees:
 *     EtwWriteKMSecurityEvent @ 0x140215158 (EtwWriteKMSecurityEvent.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x14046EA80 (AdtpNormalizeAuditInfoHelper.c)
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 *     AdtpCleanupParameterAllocations @ 0x14048BDD0 (AdtpCleanupParameterAllocations.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // esi
  __int16 v5; // r12
  char v6; // di
  int v7; // ebx
  __int16 v8; // cx
  int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // edx
  __int16 v12; // cx
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int16 v16; // cx
  char *v17; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  bool v26; // zf
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  bool v30; // zf
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  bool v34; // zf
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned __int16 v51; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v52; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v53[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v54; // [rsp+1A0h] [rbp+A0h] BYREF
  char v55; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v56[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v57[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v51 = 0;
  v52 = 0LL;
  memset_0(v57, 0, sizeof(v57));
  memset_0(v53, 0, sizeof(v53));
  *a2 = 0;
  memset(v56, 0, sizeof(v56));
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v7 = -1073741811;
    goto LABEL_25;
  }
  v5 = *(_WORD *)(a1 + 18);
  v6 = 2;
  v7 = AdtpPackageParameters(a1, 0LL, 2u, (__int64)v57, (__int64)v53, (__int64)&v54, &v51, (__int64)v56);
  if ( v7 < 0 )
  {
LABEL_25:
    v16 = v51;
    goto LABEL_26;
  }
  v8 = *(_WORD *)(a1 + 16);
  if ( v8 )
  {
    v9 = 0;
    if ( (unsigned __int16)(v8 - 100) <= 0x3Bu )
    {
      v10 = 0;
      v11 = *(unsigned __int16 *)(a1 + 16) - 100;
      while ( v10 < 9 )
      {
        if ( v9 + (unsigned int)*(unsigned __int16 *)&ExpPlatformBinaryLock.ApcStateFill[2 * v10 + 16] > v11 )
        {
          v12 = v11 - v9 + (((_WORD)v10 + 48) << 8);
          goto LABEL_10;
        }
        v9 += *(unsigned __int16 *)&ExpPlatformBinaryLock.ApcStateFill[2 * v10++ + 16];
      }
    }
  }
  v12 = -256;
LABEL_10:
  v13 = *(_DWORD *)(a1 + 4);
  v14 = 4931LL;
  if ( v13 > 0x1343 )
  {
    v14 = 5153LL;
    if ( v13 > 0x1421 )
    {
      v14 = 5632LL;
      if ( v13 <= 0x1600 )
      {
        if ( v13 == 5632 )
          goto LABEL_30;
        v45 = v13 - 5156;
        if ( !v45 )
          goto LABEL_30;
        v46 = v45 - 1;
        if ( !v46 )
          goto LABEL_75;
        v47 = v46 - 219;
        if ( !v47 )
          goto LABEL_30;
        v48 = v47 - 1;
        if ( !v48 )
          goto LABEL_30;
        v31 = v48 - 74;
        v30 = v31 == 0;
        goto LABEL_45;
      }
      v27 = v13 - 5712;
      if ( !v27 )
        goto LABEL_30;
      v28 = v27 - 560;
      if ( !v28 )
        goto LABEL_16;
      v29 = v28 - 1;
      if ( !v29 )
        goto LABEL_16;
LABEL_44:
      v31 = v29 - 1;
      v30 = v31 == 0;
LABEL_45:
      if ( !v30 )
      {
        v26 = v31 == 1;
        goto LABEL_37;
      }
LABEL_30:
      v6 = 1;
      goto LABEL_16;
    }
    if ( v13 == 5153 )
      goto LABEL_30;
    v14 = 5140LL;
    if ( v13 <= 0x1414 )
    {
      if ( v13 == 5140 )
        goto LABEL_30;
      v40 = v13 - 4932;
      if ( !v40 )
        goto LABEL_30;
      v41 = v40 - 1;
      if ( !v41 )
        goto LABEL_30;
      v42 = v41 - 4;
      if ( !v42 )
        goto LABEL_30;
      v43 = v42 - 121;
      if ( !v43 )
        goto LABEL_30;
      v44 = v43 - 1;
      if ( !v44 )
        goto LABEL_30;
      v26 = v44 == 66;
      goto LABEL_37;
    }
    v49 = v13 - 5146;
    if ( !v49 )
      goto LABEL_30;
    v50 = v49 - 1;
    if ( !v50 )
      goto LABEL_30;
    v29 = v50 - 3;
    v34 = v29 == 0;
LABEL_76:
    if ( v34 )
      goto LABEL_30;
    goto LABEL_44;
  }
  if ( v13 == 4931 )
    goto LABEL_30;
  v14 = 4702LL;
  if ( v13 <= 0x125E )
  {
    if ( v13 == 4702 )
      goto LABEL_30;
    v14 = 4688LL;
    if ( v13 <= 0x1250 )
    {
      if ( v13 == 4688 )
        goto LABEL_16;
      v21 = v13 - 4616;
      if ( !v21 )
        goto LABEL_30;
      v22 = v21 - 8;
      if ( v22 )
      {
        v23 = v22 - 30;
        if ( !v23 )
          goto LABEL_30;
        v24 = v23 - 2;
        if ( !v24 )
          goto LABEL_30;
        v25 = v24 - 5;
        if ( !v25 )
          goto LABEL_30;
        v26 = v25 == 2;
        goto LABEL_37;
      }
LABEL_75:
      v6 = 3;
      goto LABEL_16;
    }
    v32 = v13 - 4697;
    if ( !v32 )
      goto LABEL_30;
    v33 = v32 - 1;
    if ( !v33 )
      goto LABEL_30;
    v29 = v33 - 1;
    v34 = v29 == 0;
    goto LABEL_76;
  }
  v14 = 4887LL;
  if ( v13 > 0x1317 )
  {
    v19 = v13 - 4888;
    if ( !v19 )
      goto LABEL_30;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_30;
    v29 = v20 - 39;
    v34 = v29 == 0;
    goto LABEL_76;
  }
  if ( v13 == 4887 )
    goto LABEL_30;
  v35 = v13 - 4719;
  if ( !v35 )
    goto LABEL_30;
  v36 = v35 - 49;
  if ( !v36 )
    goto LABEL_16;
  v37 = v36 - 1;
  if ( !v37 )
    goto LABEL_16;
  v38 = v37 - 1;
  if ( !v38 )
    goto LABEL_30;
  v39 = v38 - 46;
  if ( !v39 )
    goto LABEL_30;
  v26 = v39 == 70;
LABEL_37:
  v6 = 0;
  if ( v26 )
    goto LABEL_30;
LABEL_16:
  LOWORD(v52) = *(_WORD *)(a1 + 4);
  v15 = 0x8020000000000000uLL;
  WORD3(v52) = v12;
  if ( v5 != 8 )
    v15 = 0x8010000000000000uLL;
  BYTE2(v52) = v6;
  v16 = v51;
  *(_WORD *)((char *)&v52 + 3) = 10;
  BYTE5(v52) = 0;
  *((_QWORD *)&v52 + 1) = v15;
  if ( !v51 )
    goto LABEL_23;
  v17 = &v55;
  v14 = v51;
  do
  {
    v4 += *(_DWORD *)v17;
    v17 += 16;
    --v14;
  }
  while ( v14 );
  if ( v4 <= 0xDC00 )
  {
LABEL_23:
    v7 = EtwWriteKMSecurityEvent((__int64)&v52, v14);
    if ( v7 == -1073741058 )
      *a2 = 1;
    goto LABEL_25;
  }
  *a2 = 1;
  v7 = -2147483643;
LABEL_26:
  AdtpCleanupParameterAllocations(v56, &v54, v16);
  return (unsigned int)v7;
}
