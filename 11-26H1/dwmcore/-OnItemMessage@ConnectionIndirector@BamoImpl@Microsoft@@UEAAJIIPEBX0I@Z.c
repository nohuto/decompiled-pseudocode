/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x180162770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180162998 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801629F4 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180162B84 (--1-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z @ 0x180162C04 (-IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        unsigned int a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v10; // rdi
  struct Microsoft::BamoImpl::ConnectionIndirector **v11; // rcx
  __int64 v12; // r8
  const void *v13; // rdx
  unsigned int v14; // ebx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v18,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  v10 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(v10 + 64)
    || Microsoft::BamoImpl::BaseBamoConnectionImpl::IsPendingRemovalFromItemTable(
         *((Microsoft::BamoImpl::BaseBamoConnectionImpl **)this + 2),
         a3) )
  {
    v14 = 0;
  }
  else if ( a4 )
  {
    v12 = a6;
    v13 = a5;
    *(_DWORD *)(v10 + 32) = a2;
    v14 = (*(__int64 (__fastcall **)(const void *, const void *, __int64))(*(_QWORD *)a4 + 32LL))(a4, v13, v12);
    *(_DWORD *)(v10 + 32) = 0;
  }
  else
  {
    v16 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v11, 0x87B2080C, 0);
    v14 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x76E,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v16);
  }
  if ( v18 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v18 + 32));
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(&v18);
  return v14;
}
