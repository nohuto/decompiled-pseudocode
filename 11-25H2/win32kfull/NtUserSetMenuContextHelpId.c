/*
 * XREFs of NtUserSetMenuContextHelpId @ 0x14029F660
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserSetMenuContextHelpId(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v12, v4);
  v5 = ValidateHmenu(a1, 64LL);
  v6 = 0LL;
  v13 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v12, v5);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v12)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v8 = v13;
    if ( !v13 )
      v8 = *(_QWORD *)v12[0];
    v6 = 1LL;
    *(_DWORD *)(*(_QWORD *)(v8 + 40) + 48LL) = a2;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v12, v7);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
