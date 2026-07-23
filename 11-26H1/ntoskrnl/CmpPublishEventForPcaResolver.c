/*
 * XREFs of CmpPublishEventForPcaResolver @ 0x140ADAEC8
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

char __fastcall CmpPublishEventForPcaResolver(__int64 a1, unsigned __int16 *a2)
{
  _UNKNOWN **v2; // rax
  char v4; // bl
  _KPROCESS *CurrentThreadProcess; // rax
  int v7; // r8d
  unsigned __int16 *LastRebalanceQpc; // rdx
  int v9; // ecx
  __int16 v11; // [rsp+38h] [rbp-39h] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-35h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp+7h] BYREF
  __int64 v15; // [rsp+88h] [rbp+17h]
  int v16; // [rsp+90h] [rbp+1Fh]
  int v17; // [rsp+94h] [rbp+23h]
  __int16 *v18; // [rsp+98h] [rbp+27h]
  __int64 v19; // [rsp+A0h] [rbp+2Fh]
  __int64 v20; // [rsp+A8h] [rbp+37h]
  int v21; // [rsp+B0h] [rbp+3Fh]
  int v22; // [rsp+B4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  v4 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( EtwAppCompatProvRegHandle )
  {
    LOBYTE(v2) = EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED);
    if ( (_BYTE)v2 )
    {
      if ( (*(_DWORD *)(a1 + 160) & 1) == 0 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        v4 = 1;
      }
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      v7 = *a2;
      LastRebalanceQpc = (unsigned __int16 *)CurrentThreadProcess[1].LastRebalanceQpc;
      v11 = *LastRebalanceQpc >> 1;
      v12 = (unsigned __int16)v7 >> 1;
      UserData.Ptr = (ULONGLONG)&v11;
      *(_QWORD *)&UserData.Size = 2LL;
      v9 = *LastRebalanceQpc;
      v15 = *((_QWORD *)LastRebalanceQpc + 1);
      v18 = &v12;
      v20 = *((_QWORD *)a2 + 1);
      v16 = v9;
      v21 = v7;
      v17 = 0;
      v19 = 2LL;
      v22 = 0;
      LOBYTE(v2) = EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED, 0LL, 4u, &UserData);
      if ( v4 )
        LOBYTE(v2) = CmpDetachFromRegistryProcess(&ApcState);
    }
  }
  return (char)v2;
}
