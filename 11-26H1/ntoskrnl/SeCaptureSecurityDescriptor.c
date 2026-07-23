/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x140901ED0
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     CmpCopySaclToVirtualKey @ 0x140861014 (CmpCopySaclToVirtualKey.c)
 *     AlpcpConnectPort @ 0x1408EF8A0 (AlpcpConnectPort.c)
 *     NtSetSecurityObject @ 0x1408F31F0 (NtSetSecurityObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14092DF60 (ObpCaptureObjectCreateInformation.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14096FE40 (PipGetRegistrySecurityWithFallback.c)
 *     NtCreateWnfStateName @ 0x1409CAAE0 (NtCreateWnfStateName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140AE2774 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     IopQuerySecureDeviceClassState @ 0x140B3140C (IopQuerySecureDeviceClassState.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     SepCheckAcl @ 0x1409E0B40 (SepCheckAcl.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(unsigned __int16 *Src, char a2, int a3, char a4, unsigned __int16 **a5)
{
  unsigned __int16 *v7; // r15
  __int16 UShortFromUser; // di
  size_t v9; // r8
  char v10; // si
  __int16 v11; // di
  char *v12; // r13
  char *v13; // r12
  unsigned __int16 *v14; // rdx
  unsigned int v15; // edi
  unsigned __int16 v16; // ax
  int v17; // ecx
  unsigned int v18; // esi
  unsigned __int8 UCharFromUser; // al
  int v20; // eax
  unsigned int v21; // eax
  unsigned __int8 v22; // al
  int v23; // eax
  char *PoolWithTag; // rax
  _DWORD *v25; // rdi
  ACL *v26; // rbx
  unsigned __int16 v28; // ax
  unsigned int v29; // ecx
  int v30; // ecx
  size_t Size; // [rsp+20h] [rbp-E8h]
  unsigned int v32; // [rsp+28h] [rbp-E0h]
  unsigned int v33; // [rsp+2Ch] [rbp-DCh]
  unsigned int v34; // [rsp+38h] [rbp-D0h]
  UCHAR v35; // [rsp+3Ch] [rbp-CCh]
  UCHAR v36; // [rsp+40h] [rbp-C8h]
  unsigned __int16 *Srca; // [rsp+48h] [rbp-C0h]
  __int16 v38; // [rsp+64h] [rbp-A4h]
  __int16 v39; // [rsp+6Ch] [rbp-9Ch]
  __int128 v40; // [rsp+80h] [rbp-88h] BYREF
  __int128 v41; // [rsp+90h] [rbp-78h]
  unsigned __int16 *v42; // [rsp+A0h] [rbp-68h]
  __int128 v43; // [rsp+A8h] [rbp-60h]
  unsigned int v44; // [rsp+110h] [rbp+8h]

  v7 = 0LL;
  *(_DWORD *)((char *)&v43 + 2) = 0;
  WORD3(v43) = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v35 = 0;
  v32 = 0;
  v36 = 0;
  v33 = 0;
  if ( !Src )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( !a2 && !a4 )
  {
    *a5 = Src;
    return 0LL;
  }
  if ( a2 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    UShortFromUser = RtlReadUShortFromUser(Src + 1);
  }
  else
  {
    UShortFromUser = Src[1];
  }
  v9 = 20LL;
  if ( UShortFromUser >= 0 )
    v9 = 40LL;
  if ( a2 )
    RtlCopyFromUser(&v40, Src, v9);
  else
    RtlCopyVolatileMemory(&v40, Src, v9);
  WORD1(v40) = UShortFromUser;
  if ( (_BYTE)v40 != 1 )
    return 3221225560LL;
  LOWORD(v43) = __PAIR16__(BYTE1(v40), 1);
  v10 = UShortFromUser;
  WORD1(v43) = UShortFromUser & 0x7FFF;
  v11 = UShortFromUser & 0x8000;
  if ( v11 )
  {
    if ( DWORD1(v40) )
      v12 = (char *)Src + DWORD1(v40);
    else
      v12 = 0LL;
  }
  else
  {
    v12 = (char *)*((_QWORD *)&v40 + 1);
  }
  *((_QWORD *)&v43 + 1) = v12;
  if ( v11 )
  {
    if ( DWORD2(v40) )
      v13 = (char *)Src + DWORD2(v40);
    else
      v13 = 0LL;
  }
  else
  {
    v13 = (char *)v41;
  }
  if ( v11 )
  {
    if ( HIDWORD(v40) )
      v14 = (unsigned __int16 *)((char *)Src + HIDWORD(v40));
    else
      v14 = 0LL;
  }
  else
  {
    v14 = (unsigned __int16 *)*((_QWORD *)&v41 + 1);
  }
  Srca = v14;
  if ( v11 )
  {
    if ( (_DWORD)v41 )
      v7 = (unsigned __int16 *)((char *)Src + (unsigned int)v41);
  }
  else
  {
    v7 = v42;
  }
  Size = 0LL;
  v34 = 0;
  v15 = 0;
  v44 = 0;
  v38 = v10 & 0x10;
  if ( (v10 & 0x10) != 0 && v14 )
  {
    if ( a2 )
    {
      v28 = RtlReadUShortFromUser(v14 + 1);
      LOBYTE(v14) = (_BYTE)Srca;
    }
    else
    {
      v28 = v14[1];
    }
    HIDWORD(Size) = v28;
    if ( a2 && v28 && ((unsigned __int8)v14 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v29 = (v28 + 3) & 0xFFFFFFFC;
    v34 = v29;
    if ( v29 > 0xFFFF || v29 < 8 )
      return 3221225591LL;
  }
  v39 = v10 & 4;
  if ( (v10 & 4) != 0 && v7 )
  {
    if ( a2 )
      v16 = RtlReadUShortFromUser(v7 + 1);
    else
      v16 = v7[1];
    v17 = v16;
    LODWORD(Size) = v16;
    if ( a2 && v16 )
    {
      if ( ((unsigned __int8)v7 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = v16;
    }
    v18 = (v17 + 3) & 0xFFFFFFFC;
    if ( v18 > 0xFFFF || v18 < 8 )
      return 3221225591LL;
  }
  else
  {
    v18 = 0;
  }
  if ( v12 )
  {
    if ( a2 )
      UCharFromUser = RtlReadUCharFromUser(v12 + 1);
    else
      UCharFromUser = v12[1];
    v35 = UCharFromUser;
    v20 = 4 * UCharFromUser + 8;
    v32 = v20;
    if ( a2 && ((unsigned __int8)v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (v20 + 3) & 0xFFFFFFFC;
    v44 = v21;
  }
  else
  {
    v21 = 0;
  }
  if ( v13 )
  {
    if ( a2 )
      v22 = RtlReadUCharFromUser(v13 + 1);
    else
      v22 = v13[1];
    v36 = v22;
    v23 = 4 * v22 + 8;
    v33 = v23;
    if ( a2 && ((unsigned __int8)v13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (v23 + 3) & 0xFFFFFFFC;
    v21 = v44;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)(a3 | 0x400), v18 + v15 + v21 + v34 + 20, 0x63536553u);
  v25 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_OWORD *)PoolWithTag = v43;
  *((_DWORD *)PoolWithTag + 4) = (_DWORD)v13;
  v26 = (ACL *)(PoolWithTag + 20);
  *((_WORD *)PoolWithTag + 1) |= 0x8000u;
  if ( v38 && Srca )
  {
    if ( a2 )
      RtlCopyFromUser(v26, Srca, HIDWORD(Size));
    else
      RtlCopyVolatileMemory(v26, Srca, HIDWORD(Size));
    if ( a2 && (HIDWORD(Size) < 8 || HIDWORD(Size) != v26->AclSize || !RtlValidAcl(v26)) )
      goto LABEL_66;
    v25[3] = (_DWORD)v26 - (_DWORD)v25;
    v26->AclSize = v34;
    v26 = (ACL *)((char *)v26 + v34);
  }
  else
  {
    *((_DWORD *)PoolWithTag + 3) = 0;
  }
  if ( v39 && v7 )
  {
    if ( a2 )
      RtlCopyFromUser(v26, v7, (unsigned int)Size);
    else
      RtlCopyVolatileMemory(v26, v7, (unsigned int)Size);
    if ( a2 && !(unsigned __int8)SepCheckAcl(v26, (unsigned int)Size) )
    {
LABEL_66:
      ExFreePoolWithTag(v25, 0);
      return 3221225591LL;
    }
    v25[4] = (_DWORD)v26 - (_DWORD)v25;
    v26->AclSize = v18;
    v26 = (ACL *)((char *)v26 + v18);
  }
  else
  {
    v25[4] = 0;
  }
  if ( !v12 )
  {
    v30 = 0;
LABEL_107:
    v25[1] = v30;
    if ( !v13 )
    {
      v25[2] = 0;
      *a5 = (unsigned __int16 *)v25;
      return 0LL;
    }
    if ( a2 )
      RtlCopyFromUser(v26, v13, v33);
    else
      RtlCopyVolatileMemory(v26, v13, v33);
    v26->Sbz1 = v36;
    if ( !a2 || RtlValidSid(v26) )
    {
      v25[2] = (_DWORD)v26 - (_DWORD)v25;
      *a5 = (unsigned __int16 *)v25;
      return 0LL;
    }
    goto LABEL_119;
  }
  if ( a2 )
    RtlCopyFromUser(v26, v12, v32);
  else
    RtlCopyVolatileMemory(v26, v12, v32);
  v26->Sbz1 = v35;
  if ( !a2 || RtlValidSid(v26) )
  {
    v30 = (_DWORD)v26 - (_DWORD)v25;
    v26 = (ACL *)((char *)v26 + v44);
    goto LABEL_107;
  }
LABEL_119:
  ExFreePoolWithTag(v25, 0);
  return 3221225592LL;
}
