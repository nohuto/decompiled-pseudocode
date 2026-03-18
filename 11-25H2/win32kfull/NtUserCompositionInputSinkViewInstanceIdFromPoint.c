/*
 * XREFs of NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x140222650
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019D61C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     RequestInputSinkInfoFromPoint @ 0x1401CD604 (RequestInputSinkInfoFromPoint.c)
 *     LeaveDitCompositionInputSinkQueryCrit_ @ 0x1401FE6A4 (LeaveDitCompositionInputSinkQueryCrit_.c)
 *     EnterDitCompositionInputSinkQueryCrit_ @ 0x1402015E0 (EnterDitCompositionInputSinkQueryCrit_.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserCompositionInputSinkViewInstanceIdFromPoint(void *Src, __int64 a2)
{
  void *v2; // rdi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[4]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v12[6]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE Srca[8]; // [rsp+B8h] [rbp-20h] BYREF

  v2 = (void *)a2;
  EnterDitCompositionInputSinkQueryCrit_((__int64)Src, a2);
  EnterCrit(0LL, 0LL);
  memset_0(v12, 0, 0x70uLL);
  if ( (unsigned int)IsCurrentProcessDwm(v4) )
  {
    v5 = 0;
    UserSetLastError(5);
  }
  else
  {
    v11[0] = 0LL;
    RtlCopyFromUser(v11, Src, 8uLL);
    *(_QWORD *)((char *)v12 + 4) = v11[0];
    LODWORD(v12[0]) = 8;
    HIDWORD(v12[0]) = 0;
    v5 = RequestInputSinkInfoFromPoint(v12, v7);
    if ( v5 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v2, Srca, 4uLL);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  LeaveDitCompositionInputSinkQueryCrit_(v9, v8);
  return v5;
}
