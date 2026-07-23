/*
 * XREFs of _CmGetInstallerClassRegPropWorker @ 0x140973A40
 * Callers:
 *     _CmGetInstallerClassRegProp @ 0x1409738BC (_CmGetInstallerClassRegProp.c)
 * Callees:
 *     _CmClassPropertyRead @ 0x1404865B4 (_CmClassPropertyRead.c)
 *     _MapCmClassPropertyToRegValue @ 0x14049C010 (_MapCmClassPropertyToRegValue.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     _CmOpenCommonClassRegKey @ 0x14095FB24 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmGetInstallerClassRegPropWorker(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int *a7,
        __int16 a8)
{
  int v8; // ebx
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rcx
  int v15; // eax
  HANDLE v17; // rdx
  int v18; // [rsp+28h] [rbp-38h]
  HANDLE v19; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF

  v8 = 0;
  v19 = 0LL;
  Handle = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
  {
    v8 = -1073741811;
    goto LABEL_22;
  }
  v11 = *a7;
  if ( *a7 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  *a7 = 0;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    return (unsigned int)-1073741264;
  if ( a3 )
  {
LABEL_11:
    v14 = (unsigned int)(a4 - 8);
    if ( a4 == 8 || (v14 = (unsigned int)(a4 - 13), a4 == 13) || (v14 = (unsigned int)(a4 - 18), (unsigned int)v14 < 2) )
    {
      if ( !a3 )
        a3 = v19;
    }
    else
    {
      v17 = v19;
      if ( a3 )
        v17 = a3;
      v8 = PnpOpenPropertiesKey(v13, (__int64)v17, 0LL, 1LL, 0, v18, &Handle);
      if ( v8 < 0 )
      {
LABEL_31:
        v8 = -1073741275;
        goto LABEL_22;
      }
      a3 = Handle;
    }
    if ( !MapCmClassPropertyToRegValue(v14, a4) )
    {
      v8 = -1073741264;
      goto LABEL_22;
    }
    v15 = guard_dispatch_icall_no_overrides(a1, (__int64)a3);
    if ( v15 != -1073741772 && v15 != -1073741444 )
    {
      if ( (int)(v15 + 0x80000000) < 0 || v15 == -1073741789 )
      {
        if ( v11 > 0x40 && a4 == 8 )
        {
          v8 = -1073741595;
        }
        else
        {
          *a7 = v11;
          *a5 = 0;
          if ( v15 || !v11 )
            v8 = -1073741789;
        }
      }
      else
      {
        v8 = v15;
      }
      goto LABEL_22;
    }
    goto LABEL_31;
  }
  v8 = CmOpenCommonClassRegKey(v13, v12, 32, 0, 33554433, 0, (__int64)&v19, 0LL);
  if ( v8 >= 0 )
  {
    v13 = a1;
    goto LABEL_11;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( v19 )
    ZwClose(v19);
  return (unsigned int)v8;
}
