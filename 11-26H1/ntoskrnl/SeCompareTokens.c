/*
 * XREFs of SeCompareTokens @ 0x140A3BAE0
 * Callers:
 *     EtwTiLogImpersonateClient @ 0x140904FBC (EtwTiLogImpersonateClient.c)
 *     NtCompareTokens @ 0x140A3D530 (NtCompareTokens.c)
 * Callees:
 *     SepAcquireOrderedReadLocks @ 0x1402FD460 (SepAcquireOrderedReadLocks.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SeTokenIsRestricted @ 0x14045A300 (SeTokenIsRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x14047F9F8 (SepReleaseOrderedReadLocks.c)
 *     SeTokenIsWriteRestricted @ 0x1404866B0 (SeTokenIsWriteRestricted.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SepCompareSidAndAttributeArrays @ 0x140A3BD38 (SepCompareSidAndAttributeArrays.c)
 *     SepCompareClaimAttributes @ 0x140A3BE1C (SepCompareClaimAttributes.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140A3C358 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 */

__int64 __fastcall SeCompareTokens(struct _KTHREAD *Token, struct _KTHREAD *a2, bool *a3)
{
  bool v3; // di
  NTSTATUS v7; // r14d
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v9; // r15
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  struct _SINGLE_LIST_ENTRY *v11; // rcx
  BOOLEAN IsRestricted; // bl
  __int64 result; // rax
  BOOLEAN v14; // bl
  PVOID TokenInformation; // [rsp+50h] [rbp+8h] BYREF
  PVOID v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  LODWORD(TokenInformation) = 0;
  LODWORD(v16) = 0;
  v7 = 0;
  if ( Token == a2 )
  {
    v3 = 1;
  }
  else
  {
    SepAcquireOrderedReadLocks((unsigned __int64)Token, a2);
    Flink = a2->ApcState.ApcListHead[0].Flink;
    v9 = Token->ApcState.ApcListHead[0].Flink;
    if ( RtlEqualSid(v9->Flink, Flink->Flink) )
    {
      if ( ((LOBYTE(Flink->Blink) ^ LOBYTE(v9->Blink)) & 0x14) == 0 )
      {
        v7 = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( v7 >= 0 )
        {
          v7 = SeQueryInformationToken(a2, TokenIsAppContainer, &v16);
          if ( v7 >= 0
            && (_DWORD)TokenInformation == (_DWORD)v16
            && (!(_DWORD)TokenInformation
             || RtlEqualSid(Token->MutantListHead.Blink, a2->MutantListHead.Blink)
             && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                   *(_QWORD *)&Token->AbWaitEntryCount,
                                   LODWORD(Token->SchedulerSharedSystemSlot),
                                   *(_QWORD *)&a2->AbWaitEntryCount,
                                   LODWORD(a2->SchedulerSharedSystemSlot))) )
          {
            Next = a2->SystemAffinityTokenListHead.Next;
            v11 = Token->SystemAffinityTokenListHead.Next;
            if ( (v11 != 0LL) == (Next != 0LL) && (!v11 || RtlEqualSid(v11, Next)) )
            {
              IsRestricted = SeTokenIsRestricted(Token);
              if ( IsRestricted == SeTokenIsRestricted(a2) )
              {
                if ( !IsRestricted
                  || (v14 = SeTokenIsWriteRestricted(a2), SeTokenIsWriteRestricted(Token) == v14)
                  && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                        Token->ApcState.ApcListHead[0].Blink,
                                        Token->SystemCallNumber,
                                        a2->ApcState.ApcListHead[0].Blink,
                                        a2->SystemCallNumber) )
                {
                  if ( Token->CycleTime == a2->CycleTime
                    && Token->ThreadLock == a2->ThreadLock
                    && HIDWORD(Token->WaitBlockList) == HIDWORD(a2->WaitBlockList)
                    && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                          &Token->ApcState.ApcListHead[0].Flink[1],
                                          (unsigned int)(*(_DWORD *)&Token->Tag - 1),
                                          &a2->ApcState.ApcListHead[0].Flink[1],
                                          (unsigned int)(*(_DWORD *)&a2->Tag - 1))
                    && (unsigned __int8)SepCompareClaimAttributes(*(_QWORD *)&Token->Spare36, *(_QWORD *)&a2->Spare36) )
                  {
                    v3 = (unsigned __int8)AuthzBasepCompareLegacySecurityAttributesInformation(
                                            Token->MutantListHead.Flink,
                                            a2->MutantListHead.Flink) != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    SepReleaseOrderedReadLocks((__int64)Token, (__int64)a2);
  }
  result = (unsigned int)v7;
  *a3 = v3;
  return result;
}
