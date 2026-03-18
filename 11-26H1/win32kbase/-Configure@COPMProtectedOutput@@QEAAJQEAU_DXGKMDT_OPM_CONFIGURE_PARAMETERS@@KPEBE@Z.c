/*
 * XREFs of ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1400087E8
 * Callers:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x140008410 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140008D84 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x140009D10 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14000A430 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     CallMonitor @ 0x14000A460 (CallMonitor.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall COPMProtectedOutput::Configure(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a2,
        unsigned int a3,
        const unsigned __int8 *a4)
{
  OPM::CMutex *v4; // rbx
  ULONG v9; // edi
  _DWORD *v10; // rsi
  unsigned int v11; // edi
  void *v12; // rdx
  _QWORD *Pool2; // [rsp+60h] [rbp+8h] BYREF

  v4 = (OPM::CMutex *)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v4);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v11 = -1071774438;
  }
  else
  {
    v9 = a3 + 4112;
    if ( a3 >= 0xFFFFEFF0 )
    {
      v11 = -1071774453;
    }
    else
    {
      Pool2 = (_QWORD *)ExAllocatePool2(258LL, v9, 1297108807LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = *((_QWORD *)this + 9);
        memmove(v10 + 2, a2, 0x1000uLL);
        v10[1026] = a3;
        memmove(v10 + 1027, a4, a3);
        v11 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23249Fu, v10, v9, 0LL, 0);
        OPM::OPMFreeMemory((OPM *)v10, v12);
      }
      else
      {
        wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Pool2);
        v11 = -1073741801;
      }
    }
  }
  OPM::CMutex::Unlock(v4);
  return v11;
}
