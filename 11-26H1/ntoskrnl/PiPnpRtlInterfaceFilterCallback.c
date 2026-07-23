/*
 * XREFs of PiPnpRtlInterfaceFilterCallback @ 0x14095DDC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetObjectPropertyWorker @ 0x14095CB50 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlInterfaceFilterCallback(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // r14
  wchar_t *v8; // rdi
  _WORD *v9; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // eax
  int ObjectPropertyWorker; // r13d
  __int64 v15; // rax
  int v16; // eax
  __int64 Pool2; // rax
  int v18; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v19; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int128 v24; // [rsp+A0h] [rbp-60h]
  const DEVPROPKEY *v25; // [rsp+B0h] [rbp-50h]
  int *v26; // [rsp+B8h] [rbp-48h]
  const wchar_t *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  unsigned int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  __int128 v31; // [rsp+E0h] [rbp-20h] BYREF

  v5 = 0;
  v8 = 0LL;
  v31 = 0LL;
  v18 = 0;
  v19 = 0;
  if ( *(_QWORD *)a4 )
  {
    v11 = *(_QWORD *)&PiPnpRtlCtx;
    v25 = &DEVPKEY_DeviceInterface_ClassGuid;
    v26 = &v18;
    v27 = (const wchar_t *)&v31;
    v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 488LL);
    v29 = &v19;
    *(_QWORD *)&DestinationString.Length = *(_QWORD *)&PiPnpRtlCtx;
    v22 = 0LL;
    v23 = 0LL;
    v28 = 16LL;
    v30 = 0LL;
    v20 = v12;
    v24 = 0LL;
    if ( v12 )
    {
      v13 = guard_dispatch_icall_no_overrides(*(__int64 *)&PiPnpRtlCtx, (__int64)a2);
      if ( v13 == -1073741822 )
      {
        v20 = 0LL;
      }
      else
      {
        if ( v13 == -1073741536 )
        {
          ObjectPropertyWorker = v22;
          goto LABEL_16;
        }
        if ( v13 )
          return v5;
      }
    }
    ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                             v11,
                             (__int64)a2,
                             3,
                             (char *)v24,
                             *((__int64 *)&v24 + 1),
                             (__int64)v25,
                             v26,
                             v27,
                             v28,
                             v29,
                             v30);
    if ( v20 )
    {
      LODWORD(v22) = ObjectPropertyWorker;
      v16 = guard_dispatch_icall_no_overrides(*(__int64 *)&DestinationString.Length, (__int64)a2);
      if ( v16 != -1073741822 )
      {
        if ( v16 == -1073741536 )
        {
          ObjectPropertyWorker = v22;
        }
        else if ( v16 )
        {
          return v5;
        }
      }
    }
LABEL_16:
    if ( ObjectPropertyWorker < 0 || v19 < 0x10 || v18 != 13 )
      return v5;
    v15 = **(_QWORD **)a4 - v31;
    if ( !v15 )
      v15 = *(_QWORD *)(*(_QWORD *)a4 + 8LL) - *((_QWORD *)&v31 + 1);
    if ( v15 )
      return v5;
  }
  v9 = *(_WORD **)(a4 + 8);
  if ( v9 && *v9 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v8 = (wchar_t *)Pool2;
    if ( !Pool2 )
      return v5;
    if ( (int)PnpGetObjectProperty(
                PiPnpRtlCtx,
                (_DWORD)a2,
                3,
                0,
                0LL,
                (__int64)&DEVPKEY_Device_InstanceId,
                (__int64)&v18,
                Pool2,
                400,
                (__int64)&v19,
                0) < 0
      || v18 != 18
      || wcsicmp(*(const wchar_t **)(a4 + 8), v8) )
    {
      goto LABEL_8;
    }
  }
  if ( *(_BYTE *)(a4 + 16) )
  {
    DestinationString = 0LL;
    if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 && *(_QWORD *)(a1 + 288) )
      guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
  }
  else
  {
    v5 = 1;
    if ( *(_QWORD *)(a4 + 24) )
      v5 = guard_dispatch_icall_no_overrides(a1, (__int64)a2);
  }
  if ( v8 )
LABEL_8:
    ExFreePoolWithTag(v8, 0x47706E50u);
  return v5;
}
