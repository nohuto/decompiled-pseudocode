/*
 * XREFs of PipChangeDeviceObjectFromRegistryProperties @ 0x14096F9D8
 * Callers:
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14047FDF0 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObSetSecurityObjectByPointer @ 0x1408F2970 (ObSetSecurityObjectByPointer.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14091B880 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PipGetRegistryDwordWithFallback @ 0x14096FD64 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14096FE40 (PipGetRegistrySecurityWithFallback.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipChangeDeviceObjectFromRegistryProperties(__int64 a1, int a2, ACL *a3, __int64 a4, char a5)
{
  int v5; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  PVOID v11; // r13
  __int64 v12; // rdx
  int v13; // esi
  int v14; // esi
  char RegistryDwordWithFallback; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r15d
  _WORD *RegistrySecurityWithFallback; // rax
  unsigned int v24; // r12d
  void *v25; // rdi
  __int64 i; // rax
  int DaclSecurityDescriptor; // esi
  __int64 v28; // rdx
  char v30; // [rsp+40h] [rbp-61h]
  BOOLEAN DaclPresent; // [rsp+41h] [rbp-60h] BYREF
  char v32; // [rsp+42h] [rbp-5Fh]
  char v33; // [rsp+43h] [rbp-5Eh]
  int v34; // [rsp+44h] [rbp-5Dh] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+48h] [rbp-59h] BYREF
  int v36; // [rsp+4Ch] [rbp-55h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-51h] BYREF
  PVOID v38; // [rsp+58h] [rbp-49h] BYREF
  PVOID P; // [rsp+60h] [rbp-41h] BYREF
  PACL Dacl; // [rsp+68h] [rbp-39h] BYREF
  __int64 v41; // [rsp+70h] [rbp-31h]
  _OWORD v42[2]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v43; // [rsp+98h] [rbp-9h]

  v5 = (int)a3;
  Dacl = a3;
  v41 = a4;
  v8 = a1;
  if ( a1 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 312);
  v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 48);
  v30 = 0;
  P = 0LL;
  v13 = *(_DWORD *)(v10 + 32);
  v38 = 0LL;
  v14 = v13 & 0x800;
  v37 = 0;
  v36 = 0;
  v34 = 0;
  RegistryDwordWithFallback = PipGetRegistryDwordWithFallback(26, v12, a2, (_DWORD)a3, a4, (__int64)&v37);
  v16 = *(_QWORD *)(v9 + 48);
  v32 = RegistryDwordWithFallback;
  v17 = PipGetRegistryDwordWithFallback(27, v16, a2, v5, a4, (__int64)&v36);
  v18 = *(_QWORD *)(v9 + 48);
  v33 = v17;
  PipGetRegistryDwordWithFallback(28, v18, a2, v5, a4, (__int64)&v34);
  if ( a5 || (v20 = *(_QWORD *)(v8 + 24)) == 0 )
  {
    v19 = 0;
    v20 = v8;
    if ( !v8 )
      goto LABEL_6;
  }
  else
  {
    v19 = 0;
  }
  do
  {
    v19 |= *(_DWORD *)(v20 + 52);
    v20 = *(_QWORD *)(v20 + 24);
  }
  while ( v20 );
LABEL_6:
  v21 = *(_QWORD *)(v9 + 48);
  v22 = (v34 | v19) & 0x5010F;
  v34 = 0;
  RegistrySecurityWithFallback = (_WORD *)PipGetRegistrySecurityWithFallback(
                                            v14 != 0 ? v41 : 0,
                                            v21,
                                            a2,
                                            v14 != 0 ? (unsigned int)Dacl : 0,
                                            v41 & -(__int64)(v14 != 0));
  v24 = v37;
  v25 = RegistrySecurityWithFallback;
  if ( RegistrySecurityWithFallback )
  {
    if ( *(_BYTE *)RegistrySecurityWithFallback == 1 )
    {
      DaclPresent = (RegistrySecurityWithFallback[1] & 0x10) != 0;
      DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                 RegistrySecurityWithFallback,
                                 &DaclPresent,
                                 &Dacl,
                                 DaclDefaulted);
      if ( DaclSecurityDescriptor >= 0 )
      {
        if ( !v32 )
          goto LABEL_8;
LABEL_28:
        *(_DWORD *)(v8 + 72) = v24;
        goto LABEL_8;
      }
    }
    else
    {
      DaclSecurityDescriptor = -1073741736;
    }
LABEL_31:
    ExFreePoolWithTag(v25, 0);
    goto LABEL_20;
  }
  if ( v32 )
  {
    v43 = 0LL;
    memset(v42, 0, sizeof(v42));
    v25 = IopCreateDefaultDeviceSecurityDescriptor(v37, v22, 0, v42, (ACL **)&P, (__int64)&v38, &v34);
    if ( !v25 )
    {
      v11 = v38;
      DaclSecurityDescriptor = -1073741823;
      goto LABEL_20;
    }
    v30 = 1;
    goto LABEL_28;
  }
LABEL_8:
  if ( v33 && v36 )
    *(_DWORD *)(v8 + 48) |= 8u;
  *(_DWORD *)(v8 + 52) = v22 | *(_DWORD *)(v8 + 52) & 0xFFFAFEF0;
  for ( i = *(_QWORD *)(v8 + 24); i; i = *(_QWORD *)(i + 24) )
    *(_DWORD *)(i + 52) |= v22;
  DaclSecurityDescriptor = 0;
  if ( v25 )
    DaclSecurityDescriptor = ObSetSecurityObjectByPointer(v8);
  v28 = v8 + 312;
  do
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 16LL) & 0x100) != 0 )
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 40LL) + 396LL) |= 0xC00000u;
    if ( v30 && *(_QWORD *)(v8 + 272) )
      *(_DWORD *)(*(_QWORD *)(v8 + 312) + 32LL) |= 0x800u;
    v8 = *(_QWORD *)(v8 + 24);
  }
  while ( v8 );
  v11 = v38;
  if ( v25 && !v30 )
    goto LABEL_31;
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)DaclSecurityDescriptor;
}
