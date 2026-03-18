/*
 * XREFs of SepPrivilegeCheck @ 0x14042F0A0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140920364 (MiIsUserQueryVmCallerTrusted.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140930170 (ObpGrantAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObpAdjustCreatorAccessState @ 0x140931B40 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     SeSinglePrivilegeCheckEx @ 0x140932740 (SeSinglePrivilegeCheckEx.c)
 *     ObCreateObject @ 0x140932FB0 (ObCreateObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x14098CFD8 (PiAuDoesClientHavePrivilege.c)
 *     SeCheckAuditPrivilege @ 0x1409F7320 (SeCheckAuditPrivilege.c)
 *     NtPrivilegeCheck @ 0x140A42F40 (NtPrivilegeCheck.c)
 *     SePrivilegeCheck @ 0x140A48B30 (SePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x140A7A93C (SeCheckPrivilegedObject.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE6EA0 (FsRtlpOplockTryPrepForAckTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall SepPrivilegeCheck(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  int v5; // eax
  __int64 v7; // rdx
  _DWORD *v8; // r10
  __int64 v9; // rbx
  int v10; // r11d
  unsigned __int8 v11; // cf
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h] BYREF

  v5 = 0;
  v14 = 0LL;
  v13 = 0LL;
  if ( !a5 )
    return 1;
  _InterlockedExchange64(&v14, *(_QWORD *)(a1 + 72));
  _InterlockedExchange64(&v13, *(_QWORD *)(a1 + 64));
  v7 = v14 & v13;
  _InterlockedOr((volatile signed __int32 *)&v13, 0);
  if ( a3 )
  {
    v8 = (_DWORD *)(a2 + 8);
    v9 = a3;
    do
    {
      v10 = *v8 & 0x7FFFFFFF;
      v11 = _bittest64(&v7, (unsigned int)*(v8 - 2));
      *v8 = v10;
      if ( v11 )
      {
        *v8 = v10 | 0x80000000;
        ++v5;
      }
      v8 += 3;
      --v9;
    }
    while ( v9 );
  }
  if ( (a4 & 1) != 0 )
    return v5 == a3;
  return v5 != 0;
}
