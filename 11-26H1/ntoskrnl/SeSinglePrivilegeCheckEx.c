/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x140932740
 * Callers:
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1409846E4 (CmpSetAccessStateForBackupRestore.c)
 *     SepValidOwnerSubjectContext @ 0x140AB05C8 (SepValidOwnerSubjectContext.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x14042F0A0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 */

__int64 __fastcall SeSinglePrivilegeCheckEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // edi
  int v4; // r15d
  __int64 v6; // rcx
  unsigned __int8 v7; // bp
  __int64 v8; // rax
  void *v9; // rsi
  PSE_EXPORTS v11; // r14
  __int64 *v12; // r9
  __int64 v13; // r10
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 *v16; // r8
  __int64 v17; // r10
  _DWORD *v18; // rax
  _UNKNOWN **v19; // rdx
  _DWORD v20[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h] BYREF
  int v22; // [rsp+50h] [rbp-38h]

  v3 = 1;
  v4 = 0;
  v20[0] = 1;
  v20[1] = 1;
  v21 = a1;
  v22 = 0;
  if ( !a3 )
    return 1LL;
  v6 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    v6 = *(_QWORD *)(a2 + 16);
LABEL_4:
    v3 = v20[0];
    v7 = SepPrivilegeCheck(v6, (__int64)&v21, 1u, 1, a3);
    goto LABEL_5;
  }
  if ( *(int *)(a2 + 8) >= 2 )
    goto LABEL_4;
  v7 = 0;
LABEL_5:
  v8 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    v8 = *(_QWORD *)(a2 + 16);
  v9 = **(void ***)(v8 + 152);
  if ( RtlEqualSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, v9) )
    return v7;
  v11 = SeExports;
  if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v9) && !RtlEqualSid(v11->SeLocalServiceSid, v9) )
    goto LABEL_11;
  v12 = &v21;
  v13 = v3;
  do
  {
    Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
    Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
    while ( *(_DWORD *)v12 != LODWORD(Flink->Flink) || *((_DWORD *)v12 + 1) != HIDWORD(Blink->Flink->Flink) )
    {
      Flink = Blink->Blink;
      Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
      if ( !Flink )
        goto LABEL_22;
    }
    ++v4;
LABEL_22:
    v12 = (__int64 *)((char *)v12 + 12);
    --v13;
  }
  while ( v13 );
  v16 = &v21;
  v17 = v3;
  do
  {
    v18 = SepServicesFilterPrivileges;
    v19 = &SepServicesFilterPrivileges;
    while ( *(_DWORD *)v16 != *v18 || *((_DWORD *)v16 + 1) != *((_DWORD *)*v19 + 1) )
    {
      v18 = v19[1];
      ++v19;
      if ( !v18 )
        goto LABEL_27;
    }
    ++v4;
LABEL_27:
    v16 = (__int64 *)((char *)v16 + 12);
    --v17;
  }
  while ( v17 );
  if ( v4 != v3 )
LABEL_11:
    SepAdtPrivilegedServiceAuditAlarm(
      a2,
      (unsigned int)&SeSubsystemName,
      0,
      *(_QWORD *)a2,
      *(_QWORD *)(a2 + 16),
      (__int64)v20,
      v7);
  return v7;
}
