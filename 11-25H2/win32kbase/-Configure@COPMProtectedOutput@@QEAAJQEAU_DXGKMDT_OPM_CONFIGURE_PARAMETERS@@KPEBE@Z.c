/*
 * XREFs of ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x140147838
 * Callers:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x14014776C (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140083298 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x140083440 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     CallMonitor @ 0x140083470 (CallMonitor.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall COPMProtectedOutput::Configure(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a2,
        unsigned int a3,
        const unsigned __int8 *a4)
{
  void **v4; // rdi
  size_t v6; // rbp
  unsigned int v9; // esi
  ULONG v10; // esi
  void *v11; // rdx
  OPM *v12; // rbx
  void *v13; // rdx
  OPM *Pool2; // [rsp+60h] [rbp+8h] BYREF

  v4 = (void **)*((_QWORD *)this + 1);
  v6 = a3;
  OPM::CMutex::Lock(v4);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v9 = -1071774438;
  }
  else
  {
    v10 = v6 + 4112;
    if ( (unsigned int)v6 >= 0xFFFFEFF0 )
    {
      v9 = -1071774453;
    }
    else
    {
      Pool2 = (OPM *)ExAllocatePool2(258LL, v10, 1297108807LL);
      v12 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)Pool2 = *((_QWORD *)this + 9);
        memmove((char *)v12 + 8, a2, 0x1000uLL);
        *((_DWORD *)v12 + 1026) = v6;
        memmove((char *)v12 + 4108, a4, v6);
        v9 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23249Fu, v12, v10, 0LL, 0);
        OPM::OPMFreeMemory(v12, v13);
      }
      else
      {
        wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
          &Pool2,
          v11);
        v9 = -1073741801;
      }
    }
  }
  OPM::CMutex::Unlock((struct _KMUTANT **)v4);
  return v9;
}
