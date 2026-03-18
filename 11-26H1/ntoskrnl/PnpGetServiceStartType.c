/*
 * XREFs of PnpGetServiceStartType @ 0x140916D50
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140916458 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x140917E70 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 */

__int64 __fastcall PnpGetServiceStartType(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // ebx
  int v6; // ebx
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF
  int v14; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0;
  *a3 = 4;
  Handle[0] = 0LL;
  v5 = a1;
  if ( (ExpSysDbgLock.SchedulerApc.ApcStateIndex & 1) != 0 )
  {
    v8 = qword_140E661F0;
    if ( qword_140E661F0 )
    {
      if ( qword_140E661F0 == -1 )
        goto LABEL_2;
    }
    else
    {
      v9 = PnpCtxRegOpenKey(
             PiPnpRtlCtx,
             -2147483646,
             (unsigned int)L"System\\CurrentControlSet\\Control\\ManufacturingMode\\Current\\Services\\",
             0,
             131097,
             (__int64)&qword_140E661F0);
      if ( v9 == -1073741772 )
      {
        qword_140E661F0 = -1LL;
        goto LABEL_2;
      }
      if ( v9 < 0 )
        goto LABEL_2;
      v8 = qword_140E661F0;
    }
    if ( (int)PnpCtxRegOpenKey(PiPnpRtlCtx, v8, v5, 0, 131097, (__int64)Handle) >= 0 )
    {
      v14 = 4;
      v6 = PnpCtxRegQueryValue(a1, Handle[0], L"Start", &v13, a3, &v14);
      if ( v6 >= 0 && v13 == 4 )
        goto LABEL_3;
    }
    v10 = qword_140E661F8;
    if ( qword_140E661F8 )
    {
      if ( qword_140E661F8 == -1 )
        goto LABEL_2;
    }
    else
    {
      v11 = PnpCtxRegOpenKey(
              PiPnpRtlCtx,
              qword_140E661F0,
              (unsigned int)L"*Driver",
              0,
              131097,
              (__int64)&qword_140E661F8);
      if ( v11 == -1073741772 )
      {
        qword_140E661F8 = -1LL;
        goto LABEL_2;
      }
      if ( v11 < 0 )
        goto LABEL_2;
      v10 = qword_140E661F8;
    }
    v14 = 4;
    v6 = PnpCtxRegQueryValue(a1, v10, L"Start", &v13, a3, &v14);
    if ( v6 >= 0 && v13 == 4 )
      goto LABEL_3;
  }
LABEL_2:
  v14 = 4;
  v6 = PnpCtxRegQueryValue(a1, a2, L"Start", &v13, a3, &v14);
  if ( v6 >= 0 && v13 != 4 )
  {
    v6 = -1073741772;
    *a3 = 4;
  }
LABEL_3:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v6;
}
