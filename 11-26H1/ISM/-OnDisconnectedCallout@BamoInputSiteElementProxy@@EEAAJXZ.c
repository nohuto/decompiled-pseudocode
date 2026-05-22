/*
 * XREFs of ?OnDisconnectedCallout@BamoInputSiteElementProxy@@EEAAJXZ @ 0x180037850
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180037540 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180037930 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoInputSiteElementProxy::OnDisconnectedCallout(BamoInputSiteElementProxy *this)
{
  void (__fastcall ***v2)(char *); // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rsi
  int v4; // ebp
  int v5; // eax
  unsigned int v6; // ebx
  int v8[2]; // [rsp+20h] [rbp-28h] BYREF
  char *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (void (__fastcall ***)(char *))((char *)this + 16);
  v3 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  v4 = (BamoInputSiteElementProxy *)((char *)this + 16) != 0LL ? 3 : 0;
  v9 = (char *)this + 16;
  if ( this != (BamoInputSiteElementProxy *)-16LL )
    (**v2)((char *)this + 16);
  v10 = v4;
  *(_QWORD *)v8 = 0LL;
  if ( !*((_DWORD *)v3 + 47) )
  {
    *(_QWORD *)v8 = v3;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v3);
  }
  if ( v2 )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = (*(__int64 (__fastcall **)(BamoInputSiteElementProxy *))(*(_QWORD *)this + 88LL))(this);
      if ( v5 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v5,
          v8[0]);
    }
  }
  v6 = (*(__int64 (__fastcall **)(BamoInputSiteElementProxy *))(*(_QWORD *)this + 40LL))(this);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v8);
  return v6;
}
