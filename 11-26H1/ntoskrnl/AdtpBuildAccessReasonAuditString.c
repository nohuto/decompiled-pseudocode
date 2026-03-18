/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x1404322F0
 * Callers:
 *     AdtpPackageParameters @ 0x140475440 (AdtpPackageParameters.c)
 * Callees:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14043282C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140503204 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpIsSDValidSelfRelative @ 0x140517D2C (AdtpIsSDValidSelfRelative.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14071533C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpPermissionBitPosition @ 0x14071577C (AdtpPermissionBitPosition.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlLengthSecurityDescriptor @ 0x1409228D0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140926EB0 (RtlValidSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x140B30D30 (AdtpEtwBuildDashString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  int v11; // esi
  __int64 v12; // r13
  char *v13; // rbx
  unsigned int i; // r12d
  int v15; // ecx
  int IsSDValidSelfRelative; // eax
  signed int v17; // r9d
  unsigned int v18; // ebx
  unsigned int v19; // r12d
  unsigned int v20; // r8d
  __int64 v21; // rdx
  int v22; // r8d
  unsigned __int16 *v23; // rdi
  int v24; // eax
  int v25; // r8d
  unsigned int v26; // ebx
  int j; // edi
  unsigned __int16 *v28; // r12
  int v29; // eax
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rdi
  char v33; // al
  __int64 Pool2; // rax
  unsigned int v35; // r12d
  unsigned __int16 *v36; // r14
  const void *v37; // rdx
  PVOID *v38; // rbx
  __int64 v39; // rdi
  int v41; // [rsp+28h] [rbp-D8h]
  char v42; // [rsp+60h] [rbp-A0h]
  char v43; // [rsp+61h] [rbp-9Fh] BYREF
  char v44; // [rsp+62h] [rbp-9Eh]
  char v45; // [rsp+63h] [rbp-9Dh]
  _BYTE v46[4]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+6Ch] [rbp-94h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  char *v51; // [rsp+80h] [rbp-80h]
  __int128 v52; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h]
  __int128 v54; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  _DWORD *v57; // [rsp+C0h] [rbp-40h]
  char *v58; // [rsp+C8h] [rbp-38h]
  _BYTE v59[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v60; // [rsp+D8h] [rbp-28h] BYREF

  v56 = a7;
  v10 = 1;
  v57 = a8;
  v49 = a2;
  v58 = a9;
  v11 = 0;
  v12 = 0LL;
  v45 = a4;
  v50 = a1;
  v48 = 0;
  v46[0] = 0;
  v47 = 0;
  v42 = 0;
  v44 = 0;
  v43 = 0;
  v51 = 0LL;
  v52 = 0LL;
  P = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  if ( !*(_DWORD *)a3 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6);
    goto LABEL_71;
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
          goto LABEL_16;
        break;
      case 196608:
      case 262144:
      case 393216:
        v10 = 0;
        IsSDValidSelfRelative = AdtpIsSDValidSelfRelative(v13, &v43);
        if ( IsSDValidSelfRelative < 0 )
        {
          if ( IsSDValidSelfRelative != -1073741736 )
            goto LABEL_16;
        }
        else if ( !v43 )
        {
          goto LABEL_16;
        }
        v51 = &v13[RtlLengthSecurityDescriptor(v13)];
        v11 = AdtpIsSDValidSelfRelative(v51, 0LL);
        if ( v11 < 0 )
        {
LABEL_16:
          v11 = -1073741811;
          goto LABEL_71;
        }
        v44 = 1;
        break;
      default:
        v10 = 0;
        continue;
    }
    v42 = 1;
  }
  if ( v10 == 1 )
    goto LABEL_2;
  memset_0(v59, 0, 0x200uLL);
  if ( v42 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v13, &v52);
  if ( v44 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v51, &v54);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  while ( 2 )
  {
    if ( v18 < 7 )
    {
      v20 = *((_DWORD *)AdtpStandardAccessTypes + v18);
      if ( v45 == 1 )
      {
        v21 = (unsigned __int8)AdtpPermissionBitPosition(v20);
        if ( *(_DWORD *)(a3 + 4 * v21 + 4) < v17 )
        {
          v23 = (unsigned __int16 *)&v59[16 * (unsigned int)v12];
          v24 = AdtpBuildStagingReasonAuditStringInternal(
                  v50,
                  v49,
                  (unsigned int)&v52,
                  (unsigned int)&v54,
                  v22,
                  v41,
                  a3 + 4,
                  (__int64)v23);
          goto LABEL_36;
        }
      }
      else
      {
        v25 = *(_DWORD *)a3 & v20;
        if ( v25 )
        {
          v23 = (unsigned __int16 *)&v59[16 * (unsigned int)v12];
          LOBYTE(v41) = *(_BYTE *)(a3 + 136);
          v24 = AdtpBuildAccessReasonAuditStringInternal(
                  v50,
                  v49,
                  v25,
                  v41,
                  a3 + 4,
                  (__int64)v23,
                  v17,
                  v17,
                  v17,
                  (__int64)v46);
LABEL_36:
          v17 = 0;
          v11 = v24;
          if ( v24 < 0 )
            goto LABEL_66;
          v19 += *v23;
          v12 = (unsigned int)(v12 + 1);
          v47 = v19;
          v48 = v12;
        }
      }
      ++v18;
      continue;
    }
    break;
  }
  if ( *(_WORD *)a3 )
  {
    v26 = v17;
    for ( j = 1; v26 < 0x10; j *= 2 )
    {
      if ( v45 == 1 )
      {
        if ( *(_DWORD *)(a3 + 4LL * v26 + 4) >= v17 )
          goto LABEL_49;
        v28 = (unsigned __int16 *)&v59[16 * (unsigned int)v12];
        v29 = AdtpBuildStagingReasonAuditStringInternal(
                v50,
                v49,
                (unsigned int)&v52,
                (unsigned int)&v54,
                j,
                v41,
                a3 + 4,
                (__int64)v28);
      }
      else
      {
        if ( (*(_DWORD *)a3 & j) == 0 )
          goto LABEL_49;
        v28 = (unsigned __int16 *)&v59[16 * (unsigned int)v12];
        LOBYTE(v41) = *(_BYTE *)(a3 + 136);
        v29 = AdtpBuildAccessReasonAuditStringInternal(
                v50,
                v49,
                *(_DWORD *)a3 & (unsigned int)j,
                v41,
                a3 + 4,
                (__int64)v28,
                v17,
                v17,
                v17,
                (__int64)v46);
      }
      v17 = 0;
      v11 = v29;
      if ( v29 < 0 )
        goto LABEL_66;
      v47 += *v28;
      v12 = (unsigned int)(v12 + 1);
      v48 = v12;
LABEL_49:
      ++v26;
    }
  }
  v47 >>= 1;
  v30 = v47 + 1;
  if ( v56 )
  {
    if ( v57 )
    {
      v31 = (unsigned int)*v57;
      if ( (unsigned int)v31 + v30 < 0x400 )
      {
        v32 = v56 + 2 * v31;
        *v57 = v31 + v30;
        v33 = v17;
LABEL_57:
        v35 = v17;
        *v58 = v33;
        if ( (_DWORD)v12 )
        {
          v36 = (unsigned __int16 *)v59;
          do
          {
            v37 = (const void *)*((_QWORD *)v36 + 1);
            if ( v37 )
            {
              memmove((void *)(v32 + v35), v37, *v36);
              v35 += *v36;
              v17 = 0;
            }
            v36 += 8;
            --v12;
          }
          while ( v12 );
          LODWORD(v12) = v48;
        }
        *(_WORD *)(v32 + 2LL * v47) = v17;
        if ( a6 )
        {
          *(_QWORD *)a6 = v32;
          *(_DWORD *)(a6 + 8) = 2 * v30;
          *(_DWORD *)(a6 + 12) = v17;
        }
        else
        {
          MEMORY[8] = v32;
          MEMORY[2] = 2 * v30;
          MEMORY[0] = 2 * v30 - 2;
        }
        goto LABEL_66;
      }
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v17 = 0;
  v32 = Pool2;
  if ( Pool2 )
  {
    v33 = 1;
    goto LABEL_57;
  }
  v11 = -1073741801;
LABEL_66:
  if ( (_DWORD)v12 )
  {
    v38 = (PVOID *)&v60;
    v39 = (unsigned int)v12;
    do
    {
      if ( *v38 )
        ExFreePoolWithTag(*v38, 0);
      v38 += 2;
      --v39;
    }
    while ( v39 );
  }
LABEL_71:
  if ( DWORD2(v52) && P )
    ExFreePoolWithTag(P, 0);
  if ( DWORD2(v54) && v55 )
    ExFreePoolWithTag(v55, 0);
  return (unsigned int)v11;
}
