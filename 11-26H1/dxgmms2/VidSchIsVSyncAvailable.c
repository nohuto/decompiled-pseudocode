/*
 * XREFs of VidSchIsVSyncAvailable @ 0x1401043F0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x140043FA0 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall VidSchIsVSyncAvailable(__int64 a1, unsigned int a2)
{
  struct _ERESOURCE *v4; // rdi
  int v5; // eax
  unsigned __int8 v6; // bl
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( a1 )
  {
    if ( a2 >= *(_DWORD *)(a1 + 48) )
    {
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 9999;
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
      return 0;
    }
    else
    {
      v4 = (struct _ERESOURCE *)(a1 + 1360);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1360), 1u);
      v5 = *(_DWORD *)(a1 + 2496);
      v6 = _bittest(&v5, a2);
      ExReleaseResourceLite(v4);
      return v6;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9990;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 0;
  }
}
