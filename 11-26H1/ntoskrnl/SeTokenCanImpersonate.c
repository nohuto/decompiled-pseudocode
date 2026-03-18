/*
 * XREFs of SeTokenCanImpersonate @ 0x140929184
 * Callers:
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     RtlSidDominatesForTrust @ 0x1402ACB80 (RtlSidDominatesForTrust.c)
 *     SepAcquireOrderedReadLocks @ 0x1402B2790 (SepAcquireOrderedReadLocks.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlSidDominates @ 0x140418530 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140441970 (SepCopyTokenIntegrity.c)
 *     SeTokenIsRestricted @ 0x140461340 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14048CB70 (SeTokenIsWriteRestricted.c)
 *     RtlIsParentOfChildAppContainer @ 0x140A8F93C (RtlIsParentOfChildAppContainer.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140A91D08 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x140A9BCE0 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x140AB0350 (RtlQueryElevationFlags.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x140B56E58 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 */

__int64 __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  int IsElevated; // ebx
  _BYTE *v7; // r10
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  void *v14; // r14
  void *v15; // r15
  void *v16; // rbx
  void *v17; // rdi
  void *Buf2[2]; // [rsp+20h] [rbp-28h] BYREF
  void *Buf1[2]; // [rsp+30h] [rbp-18h] BYREF
  bool v20; // [rsp+80h] [rbp+38h] BYREF
  char v21; // [rsp+88h] [rbp+40h] BYREF
  char v22; // [rsp+90h] [rbp+48h] BYREF
  int v23; // [rsp+98h] [rbp+50h] BYREF

  v21 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  *a4 = 0;
  *(_OWORD *)Buf1 = 0LL;
  *(_OWORD *)Buf2 = 0LL;
  if ( a3 < 2 )
    return 0;
  if ( *(_DWORD *)(a2 + 24) == 998 && !*(_DWORD *)(a2 + 28) )
  {
    if ( _bittest((const signed __int32 *)(Token + 200), 0xEu) )
    {
      if ( !_bittest((const signed __int32 *)(a2 + 200), 0xEu) )
        return (unsigned int)-1073741727;
      v16 = *(void **)(a2 + 784);
      v17 = *(void **)(Token + 784);
      if ( !RtlEqualSid(v17, v16) && !(unsigned __int8)RtlIsParentOfChildAppContainer(v17, v16) )
        return (unsigned int)-1073741727;
    }
    return 0;
  }
  IsElevated = RtlSidDominatesForTrust(*(_QWORD *)(Token + 1104), *(_QWORD *)(a2 + 1104), &v20);
  if ( IsElevated >= 0 )
  {
    if ( !v20 )
      *v7 = 1;
    if ( (*(_QWORD *)(Token + 64) & *(_QWORD *)(Token + 72) & 0x20000000LL) == 0 )
    {
      SepAcquireOrderedReadLocks(Token, (struct _KTHREAD *)a2);
      SepCopyTokenIntegrity(Token, (__int64)Buf1);
      SepCopyTokenIntegrity(a2, (__int64)Buf2);
      IsElevated = RtlSidDominates((char *)Buf1[0], (char *)Buf2[0], &v21);
      if ( IsElevated >= 0 )
      {
        if ( !v21 )
          goto LABEL_31;
        if ( (unsigned __int8)SepIsImpersonationAllowedDueToCapability((PACCESS_TOKEN)Token)
          || *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
        {
          IsElevated = 0;
          goto LABEL_22;
        }
        if ( !RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
          goto LABEL_31;
        if ( (int)RtlQueryElevationFlags(&v23) < 0 || (v23 & 1) == 0 )
        {
LABEL_19:
          IsElevated = 0;
          if ( !_bittest((const signed __int32 *)(Token + 200), 0xEu)
            || _bittest((const signed __int32 *)(a2 + 200), 0xEu)
            && ((v14 = *(void **)(a2 + 784), v15 = *(void **)(Token + 784), RtlEqualSid(v15, v14))
             || (unsigned __int8)RtlIsParentOfChildAppContainer(v15, v14)) )
          {
            if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
              || SeTokenIsRestricted((PACCESS_TOKEN)a2)
              && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
            {
              v9 = *(_DWORD *)(a2 + 120);
              if ( *(_DWORD *)(Token + 120) == v9 || v9 )
                goto LABEL_22;
            }
          }
          goto LABEL_31;
        }
        IsElevated = SeTokenIsElevated(a2, &v22);
        if ( IsElevated >= 0 )
        {
          if ( v22 )
          {
            IsElevated = SeTokenIsElevated(Token, &v22);
            if ( IsElevated < 0 )
              goto LABEL_22;
            if ( !v22 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 40LL) & 4) != 0 )
              goto LABEL_31;
          }
          if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 40LL) & 4) == 0
            || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 40LL) & 4) != 0 )
          {
            goto LABEL_19;
          }
          SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
LABEL_31:
          IsElevated = -1073741727;
        }
      }
LABEL_22:
      ExReleaseResourceLite(*(PERESOURCE *)(Token + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11);
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13);
      return (unsigned int)IsElevated;
    }
    return 0;
  }
  return (unsigned int)IsElevated;
}
