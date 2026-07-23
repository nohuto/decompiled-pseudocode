/*
 * XREFs of SeTokenCanImpersonate @ 0x140904C94
 * Callers:
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 * Callees:
 *     SepAcquireOrderedReadLocks @ 0x1402FD460 (SepAcquireOrderedReadLocks.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlSidDominatesForTrust @ 0x1403AF7B0 (RtlSidDominatesForTrust.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x14040CB40 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14043A480 (SepCopyTokenIntegrity.c)
 *     SeTokenIsRestricted @ 0x14045A300 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x1404866B0 (SeTokenIsWriteRestricted.c)
 *     SeTokenIsElevated @ 0x1408FBC38 (SeTokenIsElevated.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409E4888 (RtlIsParentOfChildAppContainer.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140A96858 (SepIsImpersonationAllowedDueToCapability.c)
 *     RtlQueryElevationFlags @ 0x140AADFA0 (RtlQueryElevationFlags.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x140B59DAC (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 */

__int64 __fastcall SeTokenCanImpersonate(_DWORD *Token, _DWORD *a2, int a3, _BYTE *a4)
{
  int IsElevated; // ebx
  _BYTE *v7; // r10
  int v9; // eax
  void *v10; // r14
  void *v11; // r15
  void *v12; // rbx
  void *v13; // rdi
  PSID Sid2[2]; // [rsp+20h] [rbp-28h] BYREF
  PSID Sid1[3]; // [rsp+30h] [rbp-18h] BYREF
  BOOLEAN DominatesTrust; // [rsp+80h] [rbp+38h] BYREF
  BOOLEAN Dominates; // [rsp+88h] [rbp+40h] BYREF
  char v18; // [rsp+90h] [rbp+48h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+98h] [rbp+50h] BYREF

  Dominates = 0;
  DominatesTrust = 0;
  v18 = 0;
  Flags.Flags = 0;
  *a4 = 0;
  *(_OWORD *)Sid1 = 0LL;
  *(_OWORD *)Sid2 = 0LL;
  if ( a3 < 2 )
    return 0;
  if ( a2[6] == 998 && !a2[7] )
  {
    if ( _bittest(Token + 50, 0xEu) )
    {
      if ( !_bittest(a2 + 50, 0xEu) )
        return (unsigned int)-1073741727;
      v12 = (void *)*((_QWORD *)a2 + 98);
      v13 = (void *)*((_QWORD *)Token + 98);
      if ( !RtlEqualSid(v13, v12) && !RtlIsParentOfChildAppContainer(v13, v12) )
        return (unsigned int)-1073741727;
    }
    return 0;
  }
  IsElevated = RtlSidDominatesForTrust(*((PSID *)Token + 138), *((PSID *)a2 + 138), &DominatesTrust);
  if ( IsElevated >= 0 )
  {
    if ( !DominatesTrust )
      *v7 = 1;
    if ( (*((_QWORD *)Token + 8) & *((_QWORD *)Token + 9) & 0x20000000LL) == 0 )
    {
      SepAcquireOrderedReadLocks((unsigned __int64)Token, (struct _KTHREAD *)a2);
      SepCopyTokenIntegrity((__int64)Token, (__int64)Sid1);
      SepCopyTokenIntegrity((__int64)a2, (__int64)Sid2);
      IsElevated = RtlSidDominates(Sid1[0], Sid2[0], &Dominates);
      if ( IsElevated >= 0 )
      {
        if ( !Dominates )
          goto LABEL_31;
        if ( (unsigned __int8)SepIsImpersonationAllowedDueToCapability(Token)
          || Token[6] == a2[56] && Token[7] == a2[57] )
        {
          IsElevated = 0;
          goto LABEL_22;
        }
        if ( !RtlEqualSid(**((PSID **)Token + 19), **((PSID **)a2 + 19)) )
          goto LABEL_31;
        if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 1) == 0 )
        {
LABEL_19:
          IsElevated = 0;
          if ( !_bittest(Token + 50, 0xEu)
            || _bittest(a2 + 50, 0xEu)
            && ((v10 = (void *)*((_QWORD *)a2 + 98), v11 = (void *)*((_QWORD *)Token + 98), RtlEqualSid(v11, v10))
             || RtlIsParentOfChildAppContainer(v11, v10)) )
          {
            if ( !SeTokenIsRestricted(Token)
              || SeTokenIsRestricted(a2) && (SeTokenIsWriteRestricted(Token) || !SeTokenIsWriteRestricted(a2)) )
            {
              v9 = a2[30];
              if ( Token[30] == v9 || v9 )
                goto LABEL_22;
            }
          }
          goto LABEL_31;
        }
        IsElevated = SeTokenIsElevated(a2, &v18);
        if ( IsElevated >= 0 )
        {
          if ( v18 )
          {
            IsElevated = SeTokenIsElevated(Token, &v18);
            if ( IsElevated < 0 )
              goto LABEL_22;
            if ( !v18 && (*(_DWORD *)(*((_QWORD *)Token + 27) + 40LL) & 4) != 0 )
              goto LABEL_31;
          }
          if ( (*(_DWORD *)(*((_QWORD *)Token + 27) + 40LL) & 4) == 0
            || (*(_DWORD *)(*((_QWORD *)a2 + 27) + 40LL) & 4) != 0 )
          {
            goto LABEL_19;
          }
          SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
LABEL_31:
          IsElevated = -1073741727;
        }
      }
LABEL_22:
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExReleaseResourceLite(*((PERESOURCE *)a2 + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)IsElevated;
    }
    return 0;
  }
  return (unsigned int)IsElevated;
}
