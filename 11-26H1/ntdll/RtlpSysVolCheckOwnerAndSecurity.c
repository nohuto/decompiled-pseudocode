/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x1800C7758
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C7AD0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlEqualSid @ 0x180059860 (RtlEqualSid.c)
 *     RtlpSysVolAllocate @ 0x1800C7D8C (RtlpSysVolAllocate.c)
 *     RtlGetAce @ 0x1800C80C0 (RtlGetAce.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x1800C8110 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlMakeSelfRelativeSD @ 0x1800C8340 (RtlMakeSelfRelativeSD.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800C8D00 (RtlSetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x180161C50 (NtQuerySecurityObject.c)
 *     NtSetSecurityObject @ 0x180162670 (NtSetSecurityObject.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r14
  __int64 v6; // rdi
  int v7; // esi
  char v8; // si
  _WORD *v9; // r8
  unsigned int i; // r15d
  int Ace; // eax
  __int64 v12; // rsi
  int v13; // r14d
  void *v14; // rax
  __int64 v15; // rsi
  int v16; // r14d
  int SelfRelativeSD; // eax
  __int16 v18; // ax
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rcx
  size_t Size; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  __int16 v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+42h] [rbp-3Eh]
  __int16 v27; // [rsp+46h] [rbp-3Ah]
  int v28; // [rsp+48h] [rbp-38h]
  __int16 v29; // [rsp+58h] [rbp-28h] BYREF
  int v30; // [rsp+5Ah] [rbp-26h]
  __int16 v31; // [rsp+5Eh] [rbp-22h]
  int v32; // [rsp+60h] [rbp-20h]
  int v33; // [rsp+64h] [rbp-1Ch]

  v2 = 0;
  LODWORD(Size) = 0;
  v24 = 0LL;
  v5 = 0LL;
  if ( (unsigned int)NtQuerySecurityObject(a1, 5LL, 0LL, 0LL, &Size) != -1073741789 )
    return 0LL;
  v6 = RtlpSysVolAllocate((unsigned int)Size);
  if ( !v6 )
    return 3221225626LL;
  v7 = NtQuerySecurityObject(a1, 5LL, v6, (unsigned int)Size, &Size);
  if ( v7 < 0 )
  {
LABEL_33:
    RtlpSysVolFree(v6);
    return (unsigned int)v7;
  }
  if ( *(_BYTE *)v6 != 1 )
  {
    v7 = -1073741736;
    goto LABEL_33;
  }
  if ( (*(_BYTE *)(v6 + 2) & 4) != 0 )
  {
    v8 = 1;
    if ( *(__int16 *)(v6 + 2) >= 0 )
    {
      v5 = *(_QWORD *)(v6 + 32);
    }
    else if ( *(_DWORD *)(v6 + 16) )
    {
      v5 = v6 + *(unsigned int *)(v6 + 16);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( *(__int16 *)(v6 + 2) >= 0 )
  {
    v9 = *(_WORD **)(v6 + 8);
  }
  else if ( *(_DWORD *)(v6 + 4) )
  {
    v9 = (_WORD *)(v6 + *(unsigned int *)(v6 + 4));
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
  v29 = 513;
  v30 = 0;
  v32 = 32;
  v33 = 544;
  if ( v9 && RtlEqualSid(v9, &v29) && v8 && v5 )
  {
    for ( i = 0; ; ++i )
    {
      Ace = RtlGetAce(v5, i, &v24);
      v12 = v24;
      if ( Ace < 0 )
        v12 = 0LL;
      v24 = v12;
      if ( !v12 )
        break;
      if ( !*(_BYTE *)v12 && RtlEqualSid((_WORD *)(v12 + 8), &v25) )
      {
        if ( (*(_BYTE *)(v12 + 1) & 3) == 3 )
          goto LABEL_37;
        *(_BYTE *)(v12 + 1) |= 3u;
        SelfRelativeSD = NtSetSecurityObject(a1, 4LL, v6);
        goto LABEL_36;
      }
    }
  }
  LODWORD(v24) = Size;
  if ( (unsigned int)RtlSelfRelativeToAbsoluteSD2(v6, &v24) != -1073741789 )
    goto LABEL_23;
  v13 = v24;
  v14 = (void *)RtlpSysVolAllocate((unsigned int)v24);
  v15 = (__int64)v14;
  if ( !v14 )
  {
LABEL_46:
    v2 = -1073741670;
    goto LABEL_37;
  }
  memmove(v14, (const void *)v6, (unsigned int)Size);
  RtlpSysVolFree(v6);
  LODWORD(Size) = v13;
  v6 = v15;
  v16 = RtlSelfRelativeToAbsoluteSD2(v15, &Size);
  if ( v16 >= 0 )
  {
LABEL_23:
    SelfRelativeSD = RtlSetOwnerSecurityDescriptor(v6, &v29, 0LL);
    if ( SelfRelativeSD >= 0 )
    {
      if ( *(_BYTE *)v6 != 1 )
      {
        v2 = -1073741736;
        goto LABEL_37;
      }
      v18 = *(_WORD *)(v6 + 2);
      if ( v18 < 0 )
      {
        v2 = -1073741703;
        goto LABEL_37;
      }
      v19 = v18 | 4;
      *(_QWORD *)(v6 + 32) = 0LL;
      if ( a2 )
        *(_QWORD *)(v6 + 32) = a2;
      LODWORD(v24) = 0;
      *(_WORD *)(v6 + 2) = v19 & 0xFFF7;
      SelfRelativeSD = RtlMakeSelfRelativeSD(v6, 0LL, &v24);
      if ( SelfRelativeSD == -1073741789 )
      {
        v20 = RtlpSysVolAllocate((unsigned int)v24);
        v15 = v20;
        if ( v20 )
        {
          v16 = RtlMakeSelfRelativeSD(v6, v20, &v24);
          RtlpSysVolFree(v6);
          if ( v16 >= 0 )
          {
            LODWORD(Size) = v24;
            v2 = NtSetSecurityObject(a1, 5LL, v15);
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
