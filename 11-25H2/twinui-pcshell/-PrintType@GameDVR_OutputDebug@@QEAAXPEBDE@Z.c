/*
 * XREFs of ?PrintType@GameDVR_OutputDebug@@QEAAXPEBDE@Z @ 0x1803194F0
 * Callers:
 *     ?BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x180315570 (-BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 *     ?BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x1803156C0 (-BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 * Callees:
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800B5720 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

void __fastcall GameDVR_OutputDebug::PrintType(GameDVR_OutputDebug *this, const char *a2, char a3)
{
  unsigned __int64 *v3; // r10
  size_t v4; // rdx
  bool v5; // zf
  const unsigned __int16 *v6; // rax
  unsigned __int16 **v7; // r8
  wchar_t *v8; // rcx

  v3 = (unsigned __int64 *)((char *)this + 2056);
  v4 = *((_QWORD *)this + 257);
  v5 = a3 == 0;
  v6 = L"%S=true ";
  v7 = (unsigned __int16 **)((char *)this + 2048);
  v8 = (wchar_t *)*((_QWORD *)this + 256);
  if ( v5 )
    v6 = L"%S=false ";
  StringCchPrintfExW(v8, v4, v7, v3, 0, v6, a2);
}
