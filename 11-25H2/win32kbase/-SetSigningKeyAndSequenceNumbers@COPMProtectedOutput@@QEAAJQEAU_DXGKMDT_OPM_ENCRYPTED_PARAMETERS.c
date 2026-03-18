/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x140148B48
 * Callers:
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x140148AC4 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140083298 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     CallMonitor @ 0x140083470 (CallMonitor.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a2)
{
  void **v2; // rbx
  unsigned int v5; // edi
  OPM *Pool2; // rax
  void *v7; // rdx
  OPM *v8; // r8
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  void *v12; // rdx
  OPM *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v2);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v5 = -1071774438;
  }
  else
  {
    Pool2 = (OPM *)ExAllocatePool2(258LL, 264LL, 1297108807LL);
    v14 = Pool2;
    v8 = Pool2;
    if ( Pool2 )
    {
      v9 = 2LL;
      *(_QWORD *)Pool2 = *((_QWORD *)this + 9);
      v10 = (_OWORD *)((char *)Pool2 + 8);
      do
      {
        *v10 = *(_OWORD *)a2->abEncryptedParameters;
        v10[1] = *(_OWORD *)&a2->abEncryptedParameters[16];
        v10[2] = *(_OWORD *)&a2->abEncryptedParameters[32];
        v10[3] = *(_OWORD *)&a2->abEncryptedParameters[48];
        v10[4] = *(_OWORD *)&a2->abEncryptedParameters[64];
        v10[5] = *(_OWORD *)&a2->abEncryptedParameters[80];
        v10[6] = *(_OWORD *)&a2->abEncryptedParameters[96];
        v10 += 8;
        v11 = *(_OWORD *)&a2->abEncryptedParameters[112];
        a2 = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const)((char *)a2 + 128);
        *(v10 - 1) = v11;
        --v9;
      }
      while ( v9 );
      v5 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232493u, v8, 0x108u, 0LL, 0);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v14,
        v12);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v14,
        v7);
      v5 = -1073741801;
    }
  }
  OPM::CMutex::Unlock((struct _KMUTANT **)v2);
  return v5;
}
