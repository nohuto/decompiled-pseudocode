/*
 * XREFs of ??0LoadFontFileRequest@@QEAA@KPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1401095A8
 * Callers:
 *     UmfdLoadFontFile @ 0x140107CD0 (UmfdLoadFontFile.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?HashPath@CPathNameHashTable@UmfdReliabilityManager@@SA_NQEAGPEAK@Z @ 0x140109678 (-HashPath@CPathNameHashTable@UmfdReliabilityManager@@SA_NQEAGPEAK@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x14010A208 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

LoadFontFileRequest *__fastcall LoadFontFileRequest::LoadFontFileRequest(
        LoadFontFileRequest *this,
        int a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v12; // eax

  FontDriverDdiRequest::FontDriverDdiRequest(this, 4LL);
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = -1;
  *((_QWORD *)this + 33) = 0LL;
  *(_QWORD *)this = &LoadFontFileRequest::`vftable';
  *((_QWORD *)this + 14) = a5;
  *((_QWORD *)this + 19) = a6;
  v12 = a7;
  a7 = 0;
  *((_DWORD *)this + 33) = v12;
  *((_DWORD *)this + 34) = a8;
  *((_DWORD *)this + 10) = a2;
  *((_QWORD *)this + 6) = a3;
  *((_QWORD *)this + 10) = a4;
  if ( !UmfdReliabilityManager::CPathNameHashTable::HashPath(*(unsigned __int16 *const *)(*a3 + 80), &a7) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *((_DWORD *)this + 68) = a7;
  return this;
}
