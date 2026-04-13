/*
 * XREFs of ?DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z @ 0x18002E254
 * Callers:
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800332DC (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x180023B70 (--$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z.c)
 */

void __fastcall DelayAllocateTLS_AllocateInternal(unsigned int *a1, const unsigned __int16 *a2)
{
  DWORD v2; // ecx
  const wchar_t *v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = L"ThumbnailCache";
  v2 = TlsAlloc();
  if ( v2 != -1 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&g_tlsThumbnailCache, v2, -1) == -1 )
      DelayAllocateTLSTelemetry::Allocated<unsigned short const * &>((__int64 *)&v3);
    else
      TlsFree(v2);
  }
}
