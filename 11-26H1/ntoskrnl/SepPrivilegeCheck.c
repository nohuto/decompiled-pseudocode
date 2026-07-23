/*
 * XREFs of SepPrivilegeCheck @ 0x14041BFB0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObpAdjustCreatorAccessState @ 0x14090D710 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeSinglePrivilegeCheckEx @ 0x14090E300 (SeSinglePrivilegeCheckEx.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140923720 (MiIsUserQueryVmCallerTrusted.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     PiAuDoesClientHavePrivilege @ 0x14094DA38 (PiAuDoesClientHavePrivilege.c)
 *     NtPrivilegeCheck @ 0x1409E1EF0 (NtPrivilegeCheck.c)
 *     SePrivilegeCheck @ 0x140A51E20 (SePrivilegeCheck.c)
 *     SeCheckAuditPrivilege @ 0x140A5FE70 (SeCheckAuditPrivilege.c)
 *     SeCheckPrivilegedObject @ 0x140A8287C (SeCheckPrivilegedObject.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
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
