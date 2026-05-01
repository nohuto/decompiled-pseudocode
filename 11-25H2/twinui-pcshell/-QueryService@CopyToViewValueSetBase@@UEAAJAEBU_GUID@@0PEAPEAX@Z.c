/*
 * XREFs of ?QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804D6650
 * Callers:
 *     ?QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180232040 (-QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?GetInvokePoint@DelayedTileActivationCallSite@@UEAAJPEAUtagPOINT@@@Z @ 0x1804D6310 (-GetInvokePoint@DelayedTileActivationCallSite@@UEAAJPEAUtagPOINT@@@Z.c)
 *     ?GetKeyState@DelayedTileActivationCallSite@@UEAAJPEAK@Z @ 0x1804D6390 (-GetKeyState@DelayedTileActivationCallSite@@UEAAJPEAK@Z.c)
 *     ?GetMonitor@DelayedTileActivationCallSite@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1804D6410 (-GetMonitor@DelayedTileActivationCallSite@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?GetShowCommand@DelayedTileActivationCallSite@@UEAAJPEAH@Z @ 0x1804D6490 (-GetShowCommand@DelayedTileActivationCallSite@@UEAAJPEAH@Z.c)
 *     ?GetShowUI@DelayedTileActivationCallSite@@UEAAJPEAH@Z @ 0x1804D6530 (-GetShowUI@DelayedTileActivationCallSite@@UEAAJPEAH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CopyToViewValueSetBase::QueryService(
        __int64 (__fastcall ***this)(char *, const struct _GUID *, void **),
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // rax
  __int64 (__fastcall **v9)(char *, const struct _GUID *, void **); // r9
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = *(_QWORD *)&a2->Data1 - 0x40AAF578E1380B20LL;
  if ( *(_QWORD *)&a2->Data1 == 0x40AAF578E1380B20LL )
    v7 = *(_QWORD *)a2->Data4 - 0x36081BD12BA27DBBLL;
  if ( !v7 && this[8] )
    return (**(this - 1))((char *)this - 8, a3, a4);
  v9 = this[7];
  v10 = 0LL;
  v12 = 0LL;
  if ( v9 )
  {
    (*((void (__fastcall **)(__int64 (__fastcall **)(char *, const struct _GUID *, void **), GUID *, __int64 *))*v9 + 3))(
      v9,
      &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
      &v12);
    v10 = v12;
  }
  if ( v10 )
    v11 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v10 + 24LL))(
            v10,
            a2,
            a3,
            a4);
  else
    v11 = -2147467263;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  return v11;
}
