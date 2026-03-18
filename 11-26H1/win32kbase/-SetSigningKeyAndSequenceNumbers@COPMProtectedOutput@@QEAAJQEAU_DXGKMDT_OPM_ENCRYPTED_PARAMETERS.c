/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x140008DA4
 * Callers:
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x140008AC8 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140008D84 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x140009D10 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14000A430 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     CallMonitor @ 0x14000A460 (CallMonitor.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a2)
{
  OPM::CMutex *v2; // rbx
  OPM *Pool2; // rax
  void *v6; // rdx
  OPM *v7; // rsi
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  unsigned int v11; // edi
  void *v12; // rdx
  OPM *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (OPM::CMutex *)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v2);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v11 = -1071774438;
  }
  else
  {
    Pool2 = (OPM *)ExAllocatePool2(258LL, 264LL, 1297108807LL);
    v14 = Pool2;
    v7 = Pool2;
    if ( Pool2 )
    {
      v8 = 2LL;
      *(_QWORD *)Pool2 = *((_QWORD *)this + 9);
      v9 = (_OWORD *)((char *)Pool2 + 8);
      do
      {
        *v9 = *(_OWORD *)a2->abEncryptedParameters;
        v9[1] = *(_OWORD *)&a2->abEncryptedParameters[16];
        v9[2] = *(_OWORD *)&a2->abEncryptedParameters[32];
        v9[3] = *(_OWORD *)&a2->abEncryptedParameters[48];
        v9[4] = *(_OWORD *)&a2->abEncryptedParameters[64];
        v9[5] = *(_OWORD *)&a2->abEncryptedParameters[80];
        v9[6] = *(_OWORD *)&a2->abEncryptedParameters[96];
        v9 += 8;
        v10 = *(_OWORD *)&a2->abEncryptedParameters[112];
        a2 = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const)((char *)a2 + 128);
        *(v9 - 1) = v10;
        --v8;
      }
      while ( v8 );
      v11 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232493u, v7, 0x108u, 0LL, 0);
      OPM::OPMFreeMemory(v7, v12);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (void *),&void OPM::OPMFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v14,
        v6);
      v11 = -1073741801;
    }
  }
  OPM::CMutex::Unlock(v2);
  return v11;
}
