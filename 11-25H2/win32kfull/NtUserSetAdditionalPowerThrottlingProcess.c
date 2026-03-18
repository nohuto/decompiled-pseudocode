/*
 * XREFs of NtUserSetAdditionalPowerThrottlingProcess @ 0x14029DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1402721A8 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 *     ProcessInfoFromHandle @ 0x1402A45DC (ProcessInfoFromHandle.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserSetAdditionalPowerThrottlingProcess(__int64 a1, unsigned int a2, volatile void *a3)
{
  __int64 v3; // r14
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // r15
  int v8; // ecx
  __int64 v9; // rdx
  QualityOfService *v10; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int i; // edi
  __int64 v13; // rax
  QualityOfService *v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rcx
  _BYTE v20[16]; // [rsp+50h] [rbp-148h] BYREF
  __int64 v21; // [rsp+60h] [rbp-138h] BYREF
  _BYTE v22[248]; // [rsp+68h] [rbp-130h] BYREF

  v3 = a2;
  v5 = 0;
  v6 = EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
  v7 = ValidateHwndStrict(a1);
  if ( v7 )
  {
    if ( !(unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline() )
    {
      v8 = 5023;
LABEL_22:
      UserSetLastError(v8);
      goto LABEL_23;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL) != *(_QWORD *)(v6 + 464)
      || !IsTopLevelWindow(v7)
      || (unsigned int)v3 > 0x20
      || ((_DWORD)v3 == 0) != (a3 == 0LL) )
    {
      v8 = 87;
      goto LABEL_22;
    }
    v21 = 0LL;
    memset_0(v22, 0, sizeof(v22));
    if ( (_DWORD)v3 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10, v9);
      ProbeForRead(a3, 8 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      for ( i = 0; i < (unsigned int)v3; ++i )
      {
        v13 = ProcessInfoFromHandle(*((_QWORD *)a3 + i));
        *(_QWORD *)&v22[8 * i - 8] = v13;
        if ( v13 )
        {
          v10 = *(QualityOfService **)(v7 + 16);
          if ( v13 != *((_QWORD *)v10 + 58) )
            continue;
        }
        UserSetLastError(87);
        goto LABEL_23;
      }
    }
    QualityOfService::BeginDeferReport(v10);
    if ( (*(_DWORD *)(v7 + 380) & 0x8000000) != 0 )
      tagWND::DwsUnlinkAllProcesses(v7, 2LL);
    if ( (_DWORD)v3 )
    {
      v15 = &v21;
      v16 = v3;
      do
      {
        tagWND::DwsLinkProcess(v7, *v15++, 2LL);
        --v16;
      }
      while ( v16 );
    }
    QualityOfService::EndDeferReport(v14);
    v5 = 1;
  }
LABEL_23:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
  UserSessionSwitchLeaveCrit(v17);
  return v5;
}
