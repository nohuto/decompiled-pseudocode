/*
 * XREFs of NtUserGetImeInfoEx @ 0x140110E00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x140111060 (_GetProcessWindowStation.c)
 *     ?GetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@W4_IMEINFOEXCLASS@@@Z @ 0x1401110AC (-GetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@W4_IMEINFOEXCLASS@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserGetImeInfoEx(ULONG64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BYTE *v5; // rdx
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 ProcessWindowStation; // rax
  int ImeInfo; // ebx
  _OWORD *v12; // rcx
  _OWORD *v13; // rdx
  _DWORD v16[6]; // [rsp+28h] [rbp-190h] BYREF
  _BYTE v17[352]; // [rsp+40h] [rbp-178h] BYREF

  memset_0(v17, 0, sizeof(v17));
  EnterLeaveCritShared::EnterLeaveCritShared(v16, 1LL);
  if ( (**(_DWORD **)(W32GetUserSessionState(v4, v3) + 19872) & 4) != 0 )
  {
    v5 = (_BYTE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[351] = v5[351];
    v6 = (_OWORD *)a1;
    v7 = v17;
    v8 = 2LL;
    v9 = 2LL;
    do
    {
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v7[3] = v6[3];
      v7[4] = v6[4];
      v7[5] = v6[5];
      v7[6] = v6[6];
      v7 += 8;
      *(v7 - 1) = v6[7];
      v6 += 8;
      --v9;
    }
    while ( v9 );
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    ProcessWindowStation = GetProcessWindowStation(0LL);
    ImeInfo = GetImeInfoEx(ProcessWindowStation, v17, a2);
    v16[0] = ImeInfo;
    v12 = (_OWORD *)a1;
    v13 = v17;
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      *(v12 - 1) = v13[7];
      v13 += 8;
      --v8;
    }
    while ( v8 );
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v12[5] = v13[5];
  }
  else
  {
    UserSetLastError(120);
    ImeInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v12);
  return ImeInfo;
}
