/*
 * XREFs of ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AD2C4
 * Callers:
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B62C0 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401ACC7C (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401AD018 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 */

void __fastcall Win32JobObject::HandleConvertToGui(Win32JobObject *this, struct tagPROCESSINFO *a2)
{
  __int64 ProcessJob; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  int JobUIRestrictionsClass; // edi
  __int64 v7; // rdx
  _QWORD *W32Job; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  ProcessJob = PsGetProcessJob(*(_QWORD *)this);
  v4 = ProcessJob;
  if ( ProcessJob )
  {
    JobUIRestrictionsClass = PsGetJobUIRestrictionsClass(ProcessJob);
    if ( JobUIRestrictionsClass )
    {
      v10 = 0LL;
      v9[0] = 0;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v9, v5);
      W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job(v4, v7);
      Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions((__int64)W32Job, this, JobUIRestrictionsClass);
      if ( v9[0] )
        --*(_DWORD *)(v10 + 28);
    }
  }
}
