/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1401CC210
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // rbx
  int v8; // edi
  __int64 UserSessionState; // rax
  char *Prop; // r14
  unsigned int *v12; // rax
  unsigned int v13; // ecx
  _DWORD *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v18, 1LL);
  v7 = ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    Prop = (char *)GetProp(v7, *(unsigned __int16 *)(UserSessionState + 41352), 1u);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87);
      goto LABEL_4;
    }
    v12 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = (unsigned int *)MmUserProbeAddress;
    v13 = *v12;
    if ( *v12 > 0x101 )
      v13 = 257;
    v16 = v13;
    if ( a2 )
    {
      if ( !v13 )
        goto LABEL_3;
      ProbeForWrite(a2, 2LL * v13, 2u);
      RtlStringCchCopyW((char *)a2, v16, Prop);
    }
    v6 = MmUserProbeAddress;
    v14 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)&Prop[2 * v15] );
    *a3 = v15 + 1;
    v8 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
