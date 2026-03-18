/*
 * XREFs of ?GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x140146778
 * Callers:
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1401466EC (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 * Callees:
 *     CallMonitor @ 0x140083470 (CallMonitor.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall COPMProtectedOutput::GetCertificate(
        COPMProtectedOutput *this,
        enum _DXGKMDT_CERTIFICATE_TYPE a2,
        unsigned __int8 *a3,
        ULONG a4)
{
  void **v4; // rbx
  unsigned int v8; // edi
  enum _DXGKMDT_CERTIFICATE_TYPE InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a2;
  v4 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v4);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
    v8 = -1071774438;
  else
    v8 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232487u, &InputBuffer, 4u, a3, a4);
  OPM::CMutex::Unlock((struct _KMUTANT **)v4);
  return v8;
}
