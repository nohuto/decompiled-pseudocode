/*
 * XREFs of ??0CDriverListener@@QEAA@XZ @ 0x18003E23C
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

CDriverListener *__fastcall CDriverListener::CDriverListener(CDriverListener *this)
{
  _QWORD *v2; // rcx

  *(_QWORD *)this = &CDriverListener::`vftable';
  *((_DWORD *)this + 124) = 0;
  v2 = (_QWORD *)((char *)this + 504);
  *((_QWORD *)this + 64) = 0LL;
  *v2 = 0LL;
  RtlSubscribeWnfStateChangeNotification(
    v2,
    WNF_AVLC_VOLUME_WARNING_ACCEPTED,
    0LL,
    CDriverListener::s_ShellWnfCallback,
    this,
    0LL,
    0,
    0);
  RtlSubscribeWnfStateChangeNotification(
    (char *)this + 512,
    WNF_AVLC_DRIVER_REQUEST,
    0LL,
    CDriverListener::s_DriverWnfCallback,
    this,
    0LL,
    0,
    0);
  return this;
}
