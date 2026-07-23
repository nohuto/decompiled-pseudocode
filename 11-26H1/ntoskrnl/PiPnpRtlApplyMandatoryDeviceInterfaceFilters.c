/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x14095B974
 * Callers:
 *     IopDeviceInterfaceFilterCallback @ 0x14095B760 (IopDeviceInterfaceFilterCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     _PnpGetObjectPropertyWorker @ 0x14095CB50 (_PnpGetObjectPropertyWorker.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceInterfaceFilters(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // r15d
  unsigned int v6; // eax
  void *Pool2; // rdi
  __int64 i; // rbx
  __int64 v10; // r13
  __int64 v11; // r14
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int ObjectPropertyWorker; // eax
  int v17; // eax
  int v18; // [rsp+68h] [rbp-41h] BYREF
  int v19; // [rsp+6Ch] [rbp-3Dh] BYREF
  __int64 v20; // [rsp+78h] [rbp-31h]
  __int64 v21; // [rsp+80h] [rbp-29h]
  __int64 v22; // [rsp+88h] [rbp-21h]
  __int64 v23; // [rsp+90h] [rbp-19h]
  const DEVPROPKEY *v24; // [rsp+98h] [rbp-11h]
  int *v25; // [rsp+A0h] [rbp-9h]
  __int64 v26; // [rsp+A8h] [rbp-1h]
  unsigned int v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B4h] [rbp+Bh]
  int *v29; // [rsp+B8h] [rbp+Fh]
  __int64 v30; // [rsp+C0h] [rbp+17h]

  v5 = 0;
  v19 = 0;
  v6 = 200;
  Pool2 = 0LL;
  v18 = 200;
  for ( i = a3; ; i = a3 )
  {
    if ( v6 > v5 )
    {
      v5 = v6;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x47706E50u);
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        break;
    }
    v10 = *(_QWORD *)&PiPnpRtlCtx;
    v24 = &DEVPKEY_Device_InstanceId;
    v18 = 0;
    v25 = &v19;
    v11 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 488LL);
    v29 = &v18;
    v20 = 0LL;
    v21 = 0LL;
    v28 = 0;
    v30 = 0LL;
    v22 = i;
    v23 = 0LL;
    v26 = (__int64)Pool2;
    v27 = v5;
    if ( v11 )
    {
      v12 = guard_dispatch_icall_no_overrides(*(__int64 *)&PiPnpRtlCtx, a2);
      if ( v12 == -1073741822 )
      {
        v11 = 0LL;
      }
      else
      {
        if ( v12 == -1073741536 )
          goto LABEL_9;
        if ( v12 )
          goto LABEL_22;
      }
    }
    ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                             v10,
                             a2,
                             3,
                             v22,
                             v23,
                             (__int64)v24,
                             (__int64)v25,
                             v26,
                             v27,
                             (__int64)v29,
                             v30);
    v13 = ObjectPropertyWorker;
    if ( v11 )
    {
      LODWORD(v20) = ObjectPropertyWorker;
      v17 = guard_dispatch_icall_no_overrides(v10, a2);
      if ( v17 != -1073741822 )
      {
        if ( v17 == -1073741536 )
        {
LABEL_9:
          v13 = v20;
          goto LABEL_10;
        }
        if ( v17 )
        {
LABEL_22:
          v13 = -1073741595;
          v14 = -1073741595;
LABEL_12:
          if ( !Pool2 )
          {
            v13 = v14;
            if ( v14 < 0 )
              return v13;
            goto LABEL_14;
          }
LABEL_15:
          ExFreePoolWithTag(Pool2, 0x47706E50u);
          return v13;
        }
      }
    }
LABEL_10:
    if ( v13 != -1073741789 )
    {
      v14 = v13;
      if ( (v13 & 0x80000000) != 0 )
        goto LABEL_12;
      if ( !v18 && Pool2 )
      {
        ExFreePoolWithTag(Pool2, 0x47706E50u);
        Pool2 = 0LL;
      }
LABEL_14:
      v13 = PiPnpRtlApplyMandatoryDeviceFilters(a1, (_DWORD)Pool2, 0, a4, a5);
      if ( !Pool2 )
        return v13;
      goto LABEL_15;
    }
    v6 = v18;
  }
  return (unsigned int)-1073741670;
}
