/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x14041F320
 * Callers:
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 * Callees:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1404FCAD4 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpIsSDValidSelfRelative @ 0x14051179C (AdtpIsSDValidSelfRelative.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14071A02C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpPermissionBitPosition @ 0x14071A46C (AdtpPermissionBitPosition.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x140B32F30 (AdtpEtwBuildDashString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        char *a9)
{
  char v10; // di
  int IsSDValidSelfRelative; // esi
  __int64 v12; // r13
  char *v13; // rbx
  unsigned int i; // r12d
  int v15; // ecx
  signed int v16; // r9d
  unsigned int v17; // ebx
  unsigned int v18; // r12d
  unsigned int v19; // r8d
  __int64 v20; // rdx
  int v21; // r8d
  unsigned __int16 *v22; // rdi
  int v23; // eax
  int v24; // r8d
  unsigned int v25; // ebx
  int j; // edi
  unsigned __int16 *v27; // r12
  int v28; // eax
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rdi
  char v32; // al
  __int64 Pool2; // rax
  unsigned int v34; // r12d
  unsigned __int16 *v35; // r14
  const void *v36; // rdx
  PVOID *v37; // rbx
  __int64 v38; // rdi
  int v40; // [rsp+28h] [rbp-D8h]
  char v41; // [rsp+60h] [rbp-A0h]
  char v42; // [rsp+62h] [rbp-9Eh]
  _BYTE v44[4]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v45; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+6Ch] [rbp-94h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h]
  char *v49; // [rsp+80h] [rbp-80h]
  __int128 v50; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h]
  __int128 v52; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  _DWORD *v55; // [rsp+C0h] [rbp-40h]
  char *v56; // [rsp+C8h] [rbp-38h]
  _BYTE v57[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v58; // [rsp+D8h] [rbp-28h] BYREF

  v54 = a7;
  v10 = 1;
  v55 = a8;
  v47 = a2;
  v56 = a9;
  IsSDValidSelfRelative = 0;
  v12 = 0LL;
  v48 = a1;
  v46 = 0;
  v44[0] = 0;
  v45 = 0;
  v41 = 0;
  v42 = 0;
  v49 = 0LL;
  v50 = 0LL;
  P = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( !*(_DWORD *)a3 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6);
    goto LABEL_69;
  }
  v13 = (char *)(a3 + 144);
  for ( i = 0; i < 0x20; ++i )
  {
    v15 = *(_DWORD *)(a3 + 4LL * i + 4) & 0xFF0000;
    switch ( v15 )
    {
      case 0:
        continue;
      case 327680:
      case 65536:
      case 131072:
        v10 = 0;
        if ( !v13 || !RtlValidSecurityDescriptor(v13) )
        {
LABEL_15:
          IsSDValidSelfRelative = -1073741811;
          goto LABEL_69;
        }
        break;
      case 196608:
      case 262144:
      case 393216:
        v10 = 0;
        if ( (unsigned int)AdtpIsSDValidSelfRelative(v13) != -1073741736 )
          goto LABEL_15;
        v49 = &v13[RtlLengthSecurityDescriptor(v13)];
        IsSDValidSelfRelative = AdtpIsSDValidSelfRelative(v49);
        if ( IsSDValidSelfRelative < 0 )
          goto LABEL_15;
        v42 = 1;
        break;
      default:
        v10 = 0;
        continue;
    }
    v41 = 1;
  }
  if ( v10 == 1 )
    goto LABEL_2;
  memset_0(v57, 0, 0x200uLL);
  if ( v41 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v13, &v50);
  if ( v42 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v49, &v52);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  while ( 2 )
  {
    if ( v17 < 7 )
    {
      v19 = *((_DWORD *)AdtpStandardAccessTypes + v17);
      if ( a4 == 1 )
      {
        v20 = (unsigned __int8)AdtpPermissionBitPosition(v19);
        if ( *(_DWORD *)(a3 + 4 * v20 + 4) < v16 )
        {
          v22 = (unsigned __int16 *)&v57[16 * (unsigned int)v12];
          v23 = AdtpBuildStagingReasonAuditStringInternal(
                  v48,
                  v47,
                  (unsigned int)&v50,
                  (unsigned int)&v52,
                  v21,
                  v40,
                  a3 + 4,
                  (__int64)v22);
          goto LABEL_34;
        }
      }
      else
      {
        v24 = *(_DWORD *)a3 & v19;
        if ( v24 )
        {
          v22 = (unsigned __int16 *)&v57[16 * (unsigned int)v12];
          LOBYTE(v40) = *(_BYTE *)(a3 + 136);
          v23 = AdtpBuildAccessReasonAuditStringInternal(
                  v48,
                  v47,
                  v24,
                  v40,
                  a3 + 4,
                  (__int64)v22,
                  v16,
                  v16,
                  v16,
                  (__int64)v44);
LABEL_34:
          v16 = 0;
          IsSDValidSelfRelative = v23;
          if ( v23 < 0 )
            goto LABEL_64;
          v18 += *v22;
          v12 = (unsigned int)(v12 + 1);
          v45 = v18;
          v46 = v12;
        }
      }
      ++v17;
      continue;
    }
    break;
  }
  if ( *(_WORD *)a3 )
  {
    v25 = v16;
    for ( j = 1; v25 < 0x10; j *= 2 )
    {
      if ( a4 == 1 )
      {
        if ( *(_DWORD *)(a3 + 4LL * v25 + 4) >= v16 )
          goto LABEL_47;
        v27 = (unsigned __int16 *)&v57[16 * (unsigned int)v12];
        v28 = AdtpBuildStagingReasonAuditStringInternal(
                v48,
                v47,
                (unsigned int)&v50,
                (unsigned int)&v52,
                j,
                v40,
                a3 + 4,
                (__int64)v27);
      }
      else
      {
        if ( (*(_DWORD *)a3 & j) == 0 )
          goto LABEL_47;
        v27 = (unsigned __int16 *)&v57[16 * (unsigned int)v12];
        LOBYTE(v40) = *(_BYTE *)(a3 + 136);
        v28 = AdtpBuildAccessReasonAuditStringInternal(
                v48,
                v47,
                *(_DWORD *)a3 & (unsigned int)j,
                v40,
                a3 + 4,
                (__int64)v27,
                v16,
                v16,
                v16,
                (__int64)v44);
      }
      v16 = 0;
      IsSDValidSelfRelative = v28;
      if ( v28 < 0 )
        goto LABEL_64;
      v45 += *v27;
      v12 = (unsigned int)(v12 + 1);
      v46 = v12;
LABEL_47:
      ++v25;
    }
  }
  v45 >>= 1;
  v29 = v45 + 1;
  if ( v54 )
  {
    if ( v55 )
    {
      v30 = (unsigned int)*v55;
      if ( (unsigned int)v30 + v29 < 0x400 )
      {
        v31 = v54 + 2 * v30;
        *v55 = v30 + v29;
        v32 = v16;
LABEL_55:
        v34 = v16;
        *v56 = v32;
        if ( (_DWORD)v12 )
        {
          v35 = (unsigned __int16 *)v57;
          do
          {
            v36 = (const void *)*((_QWORD *)v35 + 1);
            if ( v36 )
            {
              memmove((void *)(v31 + v34), v36, *v35);
              v34 += *v35;
              v16 = 0;
            }
            v35 += 8;
            --v12;
          }
          while ( v12 );
          LODWORD(v12) = v46;
        }
        *(_WORD *)(v31 + 2LL * v45) = v16;
        if ( a6 )
        {
          *(_QWORD *)a6 = v31;
          *(_DWORD *)(a6 + 8) = 2 * v29;
          *(_DWORD *)(a6 + 12) = v16;
        }
        else
        {
          MEMORY[8] = v31;
          MEMORY[2] = 2 * v29;
          MEMORY[0] = 2 * v29 - 2;
        }
        goto LABEL_64;
      }
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v16 = 0;
  v31 = Pool2;
  if ( Pool2 )
  {
    v32 = 1;
    goto LABEL_55;
  }
  IsSDValidSelfRelative = -1073741801;
LABEL_64:
  if ( (_DWORD)v12 )
  {
    v37 = (PVOID *)&v58;
    v38 = (unsigned int)v12;
    do
    {
      if ( *v37 )
        ExFreePoolWithTag(*v37, 0);
      v37 += 2;
      --v38;
    }
    while ( v38 );
  }
LABEL_69:
  if ( DWORD2(v50) && P )
    ExFreePoolWithTag(P, 0);
  if ( DWORD2(v52) && v53 )
    ExFreePoolWithTag(v53, 0);
  return (unsigned int)IsSDValidSelfRelative;
}
