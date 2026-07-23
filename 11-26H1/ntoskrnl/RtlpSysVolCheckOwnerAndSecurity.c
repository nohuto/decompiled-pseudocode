/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x140A992E0
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x140A98FD0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     RtlGetAce @ 0x140420040 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x14047FDF0 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x140808940 (RtlSelfRelativeToAbsoluteSD2.c)
 *     NtSetSecurityObject @ 0x1408F31F0 (NtSetSecurityObject.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlMakeSelfRelativeSD @ 0x140A6F3AC (RtlMakeSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140A98F90 (RtlGetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x140A99610 (NtQuerySecurityObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned int v2; // ebx
  void *Pool2; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  void *v8; // rcx
  ULONG i; // r14d
  NTSTATUS v10; // eax
  _BYTE *v11; // rsi
  NTSTATUS SelfRelativeSD; // eax
  ULONG v13; // r14d
  void *v14; // rax
  void *v15; // rsi
  NTSTATUS v16; // r14d
  void *v17; // rax
  void *v18; // rcx
  BOOLEAN DaclPresent[4]; // [rsp+30h] [rbp-29h] BYREF
  ULONG Length; // [rsp+34h] [rbp-25h] BYREF
  BOOLEAN DaclDefaulted[8]; // [rsp+38h] [rbp-21h] BYREF
  PACL Dacla; // [rsp+40h] [rbp-19h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-11h] BYREF
  PSID Owner; // [rsp+50h] [rbp-9h] BYREF
  __int16 v25; // [rsp+58h] [rbp-1h] BYREF
  int v26; // [rsp+5Ah] [rbp+1h]
  __int16 v27; // [rsp+5Eh] [rbp+5h]
  int v28; // [rsp+60h] [rbp+7h]
  __int16 Sid2; // [rsp+70h] [rbp+17h] BYREF
  int v30; // [rsp+72h] [rbp+19h]
  __int16 v31; // [rsp+76h] [rbp+1Dh]
  int v32; // [rsp+78h] [rbp+1Fh]
  int v33; // [rsp+7Ch] [rbp+23h]

  v2 = 0;
  Length = 0;
  Owner = 0LL;
  DaclPresent[0] = 0;
  Ace = 0LL;
  Dacla = 0LL;
  if ( NtQuerySecurityObject(Handle, 5u, 0LL, 0, &Length) != -1073741789 )
    return 0LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(Handle, 5u, Pool2, Length, &Length);
  v8 = Pool2;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_6;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(Pool2, DaclPresent, &Dacla, DaclDefaulted);
  v8 = Pool2;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_6;
  DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Pool2, &Owner, DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
  {
    v8 = Pool2;
LABEL_6:
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v26 = 0;
  v30 = 0;
  v25 = 257;
  v27 = 1280;
  v28 = 18;
  Sid2 = 513;
  v31 = 1280;
  v32 = 32;
  v33 = 544;
  if ( Owner && RtlEqualSid(Owner, &Sid2) && DaclPresent[0] && Dacla )
  {
    for ( i = 0; ; ++i )
    {
      v10 = RtlGetAce(Dacla, i, &Ace);
      v11 = Ace;
      if ( v10 < 0 )
        v11 = 0LL;
      Ace = v11;
      if ( !v11 )
        break;
      if ( !*v11 && RtlEqualSid(v11 + 8, &v25) )
      {
        if ( (v11[1] & 3) == 3 )
          goto LABEL_33;
        v11[1] |= 3u;
        SelfRelativeSD = NtSetSecurityObject(Handle, 4u, Pool2);
        goto LABEL_28;
      }
    }
  }
  LODWORD(Dacla) = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(Pool2, (PULONG)&Dacla) == -1073741789 )
  {
    v13 = (unsigned int)Dacla;
    v14 = (void *)ExAllocatePool2(0x100uLL);
    v15 = v14;
    if ( !v14 )
      goto LABEL_32;
    memmove(v14, Pool2, Length);
    ExFreePoolWithTag(Pool2, 0);
    Length = v13;
    Pool2 = v15;
    v16 = RtlSelfRelativeToAbsoluteSD2(v15, &Length);
    if ( v16 < 0 )
    {
LABEL_26:
      ExFreePoolWithTag(v15, 0);
      return (unsigned int)v16;
    }
  }
  SelfRelativeSD = RtlSetOwnerSecurityDescriptor(Pool2, &Sid2, 0);
  if ( SelfRelativeSD < 0
    || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(Pool2, 1u, Dacl, 0), SelfRelativeSD < 0)
    || (LODWORD(Dacla) = 0,
        SelfRelativeSD = RtlMakeSelfRelativeSD(Pool2, 0LL, (PULONG)&Dacla),
        SelfRelativeSD != -1073741789) )
  {
LABEL_28:
    v2 = SelfRelativeSD;
LABEL_33:
    v18 = Pool2;
    goto LABEL_36;
  }
  v17 = (void *)ExAllocatePool2(0x100uLL);
  v15 = v17;
  if ( !v17 )
  {
LABEL_32:
    v2 = -1073741670;
    goto LABEL_33;
  }
  v16 = RtlMakeSelfRelativeSD(Pool2, v17, (PULONG)&Dacla);
  ExFreePoolWithTag(Pool2, 0);
  if ( v16 < 0 )
    goto LABEL_26;
  Length = (unsigned int)Dacla;
  v2 = NtSetSecurityObject(Handle, 5u, v15);
  v18 = v15;
LABEL_36:
  ExFreePoolWithTag(v18, 0);
  return v2;
}
