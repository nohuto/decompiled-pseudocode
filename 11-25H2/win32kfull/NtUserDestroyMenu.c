/*
 * XREFs of NtUserDestroyMenu @ 0x1400467F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rdi
  struct _HEAD *v5; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _HEAD *v9; // [rsp+40h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v7);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v8);
  v2 = ValidateHmenu(a1, 32LL);
  v3 = 0;
  v9 = 0LL;
  v4 = v2;
  if ( v2 != *(_QWORD *)v8[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v8);
    if ( v4 )
    {
      v8[0] = *(_QWORD *)(v4 + 152);
      ++*(_DWORD *)(v8[0] + 8LL);
    }
    else
    {
      v8[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v8)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v5 = v9;
    if ( !v9 )
      v5 = *(struct _HEAD **)v8[0];
    v3 = DestroyMenu(v5);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v8);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v7);
  UserSessionSwitchLeaveCrit();
  return v3;
}
