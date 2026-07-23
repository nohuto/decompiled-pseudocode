/*
 * XREFs of SepAdjustPrivileges @ 0x1409E1914
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1409E1580 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x14040CB40 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14043A480 (SepCopyTokenIntegrity.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     SepAdtTokenRightAdjusted @ 0x1409FDFBC (SepAdtTokenRightAdjusted.c)
 */

NTSTATUS SepAdjustPrivileges(
        __int64 a1,
        BOOLEAN a2,
        char a3,
        int a4,
        unsigned int *a5,
        __int64 a6,
        int *a7,
        _DWORD *a8,
        _BYTE *a9,
        char a10,
        ...)
{
  signed int v13; // edi
  unsigned int v14; // r13d
  NTSTATUS result; // eax
  int v16; // r14d
  int v17; // eax
  __int64 v18; // r15
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rcx
  void *v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // r14
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  void *v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  bool v38; // zf
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  void *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  BOOLEAN Dominates[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v48; // [rsp+3Ch] [rbp-CCh]
  int v49; // [rsp+40h] [rbp-C8h]
  unsigned int v50; // [rsp+44h] [rbp-C4h]
  __int64 v51; // [rsp+48h] [rbp-C0h]
  __int64 v52; // [rsp+50h] [rbp-B8h]
  _QWORD Sid1[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-98h]
  _BYTE *v55; // [rsp+78h] [rbp-90h]
  int *v56; // [rsp+80h] [rbp-88h]
  __int64 Src; // [rsp+88h] [rbp-80h] BYREF
  int v58; // [rsp+90h] [rbp-78h]
  _QWORD v59[54]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v60[54]; // [rsp+248h] [rbp+140h] BYREF

  v13 = 0;
  v54 = a6;
  v14 = 0;
  v56 = a7;
  Dominates[0] = a2;
  v50 = 0;
  Dominates[1] = 0;
  Dominates[2] = 0;
  LOBYTE(v49) = 0;
  v52 = 0LL;
  v48 = 0;
  Src = 0LL;
  v58 = 0;
  LODWORD(Sid1[0]) = a4;
  v55 = a9;
  *(_OWORD *)&Sid1[1] = 0LL;
  memset_0(v59, 0, sizeof(v59));
  memset_0(v60, 0, sizeof(v60));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1, (__int64)&Sid1[1]);
  result = RtlSidDominates((PSID)Sid1[1], SeHighMandatorySid, &Dominates[1]);
  LODWORD(v51) = result;
  v16 = result;
  if ( result < 0 )
    return result;
  if ( !Dominates[1] )
  {
    result = RtlSidDominates((PSID)Sid1[1], SeMediumMandatorySid, &Dominates[2]);
    LODWORD(v51) = result;
    v16 = result;
    if ( result < 0 )
      return result;
    v17 = (unsigned __int8)v49;
    if ( !Dominates[2] )
      v17 = 1;
    v49 = v17;
  }
  if ( a3 )
  {
    v18 = v54;
    do
    {
      if ( ((1LL << v13) & *(_QWORD *)(a1 + 72)) != 0 )
      {
        if ( Dominates[0] )
        {
          v19 = (((1LL << v13) & *(_QWORD *)(a1 + 72)) != 0 ? 2 : 0) | ((*(_QWORD *)(a1 + 80) & (1LL << v13)) != 0);
          v52 = v13;
          Src = v13;
          v20 = v14++;
          v58 = v19;
          v21 = 3 * v20;
          *(_QWORD *)((char *)v59 + 4 * v21) = v13;
          *((_DWORD *)&v59[1] + v21) = v19;
          if ( v18 )
          {
            v22 = (void *)(v18 + 4 * ((unsigned int)*a8 + 2LL * (unsigned int)*a8 + 1));
            if ( a10 )
              RtlCopyToUser(v22, &Src, 0xCuLL);
            else
              RtlCopyVolatileMemory(v22, &Src, 0xCuLL);
          }
          v23 = *(_QWORD *)(a1 + 72);
          _bittestandreset64(&v23, (unsigned int)v13);
          *(_QWORD *)(a1 + 72) = v23;
        }
        ++*a8;
      }
      ++v13;
    }
    while ( (unsigned int)v13 <= 0x24 );
    v16 = v51;
    v24 = v48;
    goto LABEL_71;
  }
  if ( !LODWORD(Sid1[0]) )
  {
    v24 = 0;
    goto LABEL_70;
  }
  v25 = v54;
  v26 = LODWORD(Sid1[0]);
  Sid1[1] = LODWORD(Sid1[0]);
  do
  {
    v27 = *(_QWORD *)(a1 + 64);
    if ( !_bittest64(&v27, *a5) )
      goto LABEL_65;
    ++v50;
    Src = *(_QWORD *)a5;
    v28 = *(_QWORD *)(a1 + 80);
    v29 = a5[2];
    v58 = ((*(_QWORD *)(a1 + 72) & (1LL << Src)) != 0 ? 2 : 0) | _bittest64(&v28, (unsigned int)Src);
    if ( (v29 & 4) != 0 )
    {
      if ( Dominates[0] )
      {
        *(_QWORD *)(a1 + 72) &= ~(1LL << Src);
        *(_QWORD *)(a1 + 64) &= ~(1LL << Src);
        *(_DWORD *)(a1 + 200) |= 0x800u;
      }
    }
    else
    {
      if ( (v29 & 2) != 0 )
      {
        v30 = *(_QWORD *)(a1 + 72);
        if ( !_bittest64(&v30, *a5) )
        {
          if ( !Dominates[0] )
            goto LABEL_64;
          if ( v25 )
          {
            v31 = (void *)(v25 + 4 * ((unsigned int)*a8 + 2LL * (unsigned int)*a8 + 1));
            if ( a10 )
              RtlCopyToUser(v31, &Src, 0xCuLL);
            else
              RtlCopyVolatileMemory(v31, &Src, 0xCuLL);
          }
          v32 = v58;
          v33 = 3LL * v48;
          v34 = v48 + 1;
          v38 = Dominates[1] == 0;
          *(_QWORD *)((char *)v60 + 4 * v33) = Src;
          *((_DWORD *)&v60[1] + v33) = v32;
          v48 = v34;
          if ( v38 )
          {
            if ( Dominates[2] )
            {
              v35 = 0x1120160684LL;
              if ( _bittest64(&v35, *a5) )
              {
                ++v13;
              }
              else
              {
                v36 = *(_QWORD *)(a1 + 72);
                _bittestandset64(&v36, (unsigned int)Src);
                *(_QWORD *)(a1 + 72) = v36;
              }
              if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
LABEL_41:
                v52 = 0x200800000LL;
LABEL_48:
              if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
                && (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
              {
                v40 = v52;
                v26 = Sid1[1];
                if ( _bittest64(&v40, *a5) )
                {
                  v41 = *(_QWORD *)(a1 + 72);
                  _bittestandset64(&v41, (unsigned int)Src);
                  goto LABEL_63;
                }
                ++v13;
              }
              else
              {
                v26 = Sid1[1];
              }
              goto LABEL_64;
            }
            if ( !(_BYTE)v49 )
              goto LABEL_48;
            if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
              goto LABEL_41;
            v37 = 1LL << *a5;
            v38 = (*(_DWORD *)(a1 + 200) & 0x4000) == 0;
            v52 = 0x200800000LL;
            if ( v38 )
              v38 = (v37 & 0x202800000LL) == 0;
            else
              v38 = (v37 & 0x200800000LL) == 0;
            if ( v38 )
            {
              ++v13;
              goto LABEL_48;
            }
          }
          v39 = *(_QWORD *)(a1 + 72);
          _bittestandset64(&v39, (unsigned int)Src);
          *(_QWORD *)(a1 + 72) = v39;
          goto LABEL_48;
        }
      }
      if ( (a5[2] & 2) == 0 )
      {
        v42 = *(_QWORD *)(a1 + 72);
        if ( _bittest64(&v42, *a5) )
        {
          if ( Dominates[0] )
          {
            if ( v25 )
            {
              v43 = (void *)(v25 + 4 * ((unsigned int)*a8 + 2LL * (unsigned int)*a8 + 1));
              if ( a10 )
                RtlCopyToUser(v43, &Src, 0xCuLL);
              else
                RtlCopyVolatileMemory(v43, &Src, 0xCuLL);
              v26 = Sid1[1];
            }
            v44 = v14++;
            v45 = 3 * v44;
            LODWORD(v44) = v58;
            *(_QWORD *)((char *)v59 + 4 * v45) = Src;
            *((_DWORD *)&v59[1] + v45) = v44;
            v41 = *(_QWORD *)(a1 + 72);
            _bittestandreset64(&v41, (unsigned int)Src);
LABEL_63:
            *(_QWORD *)(a1 + 72) = v41;
          }
LABEL_64:
          ++*a8;
        }
      }
    }
LABEL_65:
    a5 += 3;
    Sid1[1] = --v26;
  }
  while ( v26 );
  v16 = v51;
  if ( v50 < LODWORD(Sid1[0]) || (v24 = v48, v13) )
  {
    v16 = 262;
    v24 = v48;
  }
LABEL_70:
  v18 = v54;
LABEL_71:
  if ( *a8 && Dominates[0] )
  {
    *v55 = 1;
    SepAdtTokenRightAdjusted(a1, (unsigned int)v59, v14, (unsigned int)v60, v24, v16 >= 0);
  }
  if ( v18 )
  {
    if ( *a8 <= 1u )
      v46 = 16;
    else
      v46 = 12 * *a8 + 4;
    *v56 = v46;
  }
  return v16;
}
