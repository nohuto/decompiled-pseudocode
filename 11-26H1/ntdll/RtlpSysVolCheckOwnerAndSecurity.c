/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x1800C4F18
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C5290 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlEqualSid @ 0x180043DE0 (RtlEqualSid.c)
 *     RtlpSysVolAllocate @ 0x1800C554C (RtlpSysVolAllocate.c)
 *     RtlGetAce @ 0x1800C5880 (RtlGetAce.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x1800C58D0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlMakeSelfRelativeSD @ 0x1800C5B00 (RtlMakeSelfRelativeSD.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800C64C0 (RtlSetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x180161B50 (NtQuerySecurityObject.c)
 *     NtSetSecurityObject @ 0x180162570 (NtSetSecurityObject.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, __int64 a2)
{
  unsigned __int32 v2; // ebx
  ACL *v5; // r14
  _BYTE *v6; // rdi
  NTSTATUS v7; // esi
  char v8; // si
  _BYTE *v9; // r8
  ULONG i; // r15d
  NTSTATUS v11; // eax
  _BYTE *v12; // rsi
  ULONG v13; // r14d
  _BYTE *v14; // rax
  _BYTE *v15; // rsi
  NTSTATUS v16; // r14d
  NTSTATUS SelfRelativeSD; // eax
  __int16 v18; // ax
  __int16 v19; // ax
  _BYTE *v20; // rax
  void *v21; // rcx
  ULONG Length; // [rsp+30h] [rbp-50h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-48h] BYREF
  __int16 v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+42h] [rbp-3Eh]
  __int16 v27; // [rsp+46h] [rbp-3Ah]
  int v28; // [rsp+48h] [rbp-38h]
  __int16 Sid2; // [rsp+58h] [rbp-28h] BYREF
  int v30; // [rsp+5Ah] [rbp-26h]
  __int16 v31; // [rsp+5Eh] [rbp-22h]
  int v32; // [rsp+60h] [rbp-20h]
  int v33; // [rsp+64h] [rbp-1Ch]

  v2 = 0;
  Length = 0;
  Ace = 0LL;
  v5 = 0LL;
  if ( NtQuerySecurityObject(Handle, 5u, 0LL, 0, &Length) != -1073741789 )
    return 0LL;
  v6 = (_BYTE *)RtlpSysVolAllocate(Length);
  if ( !v6 )
    return 3221225626LL;
  v7 = NtQuerySecurityObject(Handle, 5u, v6, Length, &Length);
  if ( v7 < 0 )
  {
LABEL_33:
    RtlpSysVolFree(v6);
    return (unsigned int)v7;
  }
  if ( *v6 != 1 )
  {
    v7 = -1073741736;
    goto LABEL_33;
  }
  if ( (v6[2] & 4) != 0 )
  {
    v8 = 1;
    if ( *((__int16 *)v6 + 1) >= 0 )
    {
      v5 = (ACL *)*((_QWORD *)v6 + 4);
    }
    else if ( *((_DWORD *)v6 + 4) )
    {
      v5 = (ACL *)&v6[*((unsigned int *)v6 + 4)];
    }
  }
  else
  {
    v8 = 0;
  }
  if ( *((__int16 *)v6 + 1) >= 0 )
  {
    v9 = (_BYTE *)*((_QWORD *)v6 + 1);
  }
  else if ( *((_DWORD *)v6 + 1) )
  {
    v9 = &v6[*((unsigned int *)v6 + 1)];
  }
  else
  {
    v9 = 0LL;
  }
  v27 = 1280;
  v31 = 1280;
  v25 = 257;
  v26 = 0;
  v28 = 18;
  Sid2 = 513;
  v30 = 0;
  v32 = 32;
  v33 = 544;
  if ( v9 && RtlEqualSid(v9, &Sid2) && v8 && v5 )
  {
    for ( i = 0; ; ++i )
    {
      v11 = RtlGetAce(v5, i, &Ace);
      v12 = Ace;
      if ( v11 < 0 )
        v12 = 0LL;
      Ace = v12;
      if ( !v12 )
        break;
      if ( !*v12 && RtlEqualSid(v12 + 8, &v25) )
      {
        if ( (v12[1] & 3) == 3 )
          goto LABEL_37;
        v12[1] |= 3u;
        SelfRelativeSD = NtSetSecurityObject(Handle, 4u, v6);
        goto LABEL_36;
      }
    }
  }
  LODWORD(Ace) = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(v6, (PULONG)&Ace) != -1073741789 )
    goto LABEL_23;
  v13 = (unsigned int)Ace;
  v14 = (_BYTE *)RtlpSysVolAllocate((unsigned int)Ace);
  v15 = v14;
  if ( !v14 )
  {
LABEL_46:
    v2 = -1073741670;
    goto LABEL_37;
  }
  memmove(v14, v6, Length);
  RtlpSysVolFree(v6);
  Length = v13;
  v6 = v15;
  v16 = RtlSelfRelativeToAbsoluteSD2(v15, &Length);
  if ( v16 >= 0 )
  {
LABEL_23:
    SelfRelativeSD = RtlSetOwnerSecurityDescriptor(v6, &Sid2, 0);
    if ( SelfRelativeSD >= 0 )
    {
      if ( *v6 != 1 )
      {
        v2 = -1073741736;
        goto LABEL_37;
      }
      v18 = *((_WORD *)v6 + 1);
      if ( v18 < 0 )
      {
        v2 = -1073741703;
        goto LABEL_37;
      }
      v19 = v18 | 4;
      *((_QWORD *)v6 + 4) = 0LL;
      if ( a2 )
        *((_QWORD *)v6 + 4) = a2;
      LODWORD(Ace) = 0;
      *((_WORD *)v6 + 1) = v19 & 0xFFF7;
      SelfRelativeSD = RtlMakeSelfRelativeSD(v6, 0LL, (PULONG)&Ace);
      if ( SelfRelativeSD == -1073741789 )
      {
        v20 = (_BYTE *)RtlpSysVolAllocate((unsigned int)Ace);
        v15 = v20;
        if ( v20 )
        {
          v16 = RtlMakeSelfRelativeSD(v6, v20, (PULONG)&Ace);
          RtlpSysVolFree(v6);
          if ( v16 >= 0 )
          {
            Length = (unsigned int)Ace;
            v2 = NtSetSecurityObject(Handle, 5u, v15);
            v21 = v15;
LABEL_38:
            RtlpSysVolFree(v21);
            return v2;
          }
          goto LABEL_41;
        }
        goto LABEL_46;
      }
    }
LABEL_36:
    v2 = SelfRelativeSD;
LABEL_37:
    v21 = v6;
    goto LABEL_38;
  }
LABEL_41:
  RtlpSysVolFree(v15);
  return (unsigned int)v16;
}
