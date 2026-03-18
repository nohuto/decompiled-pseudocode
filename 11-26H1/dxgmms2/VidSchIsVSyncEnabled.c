/*
 * XREFs of VidSchIsVSyncEnabled @ 0x1400FDD40
 * Callers:
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x140005D64 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSendToExecutionQueue @ 0x1400224B0 (VidSchiSendToExecutionQueue.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140031F58 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400FDA70 (VidSchiEnsureVSyncEnabled.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiGetVSyncSuspended @ 0x140037890 (VidSchiGetVSyncSuspended.c)
 *     VidSchiSetVSyncSuspended @ 0x14003DE10 (VidSchiSetVSyncSuspended.c)
 *     VidSchiControlVSync @ 0x1400FDFF0 (VidSchiControlVSync.c)
 */

char __fastcall VidSchIsVSyncEnabled(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // rsi
  char v4; // bp
  int v5; // edi
  unsigned int v6; // edx
  char VSyncSuspended; // bp
  char v8; // dl
  struct _VIDSCH_GLOBAL *v9; // rcx
  char v10; // di
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rcx

  v2 = a2;
  if ( a1 )
  {
    if ( a2 >= *((_DWORD *)a1 + 12) )
    {
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 10076;
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
      return 0;
    }
    else
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1360), 1u);
      v4 = 0;
      if ( (unsigned int)v2 >= *((_DWORD *)a1 + 12) )
      {
        WdLogSingleEntry1(1LL, v2);
        WdLogGlobalForLineNumber = 9999;
        DxgkLogInternalTriageEvent(v19, 0x40000LL);
      }
      else
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1360), 1u);
        v5 = *((_DWORD *)a1 + 624) & (1 << v2);
        ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1360));
        if ( v5 )
        {
          VSyncSuspended = VidSchiGetVSyncSuspended((__int64)a1, v2);
          if ( VSyncSuspended )
          {
            v16 = *((_BYTE *)a1 + 2500);
            v17 = 4 * v2 + 2112;
            if ( !v16 )
              v17 = 2112LL;
            if ( *(_DWORD *)((char *)a1 + v17) )
            {
              v18 = (unsigned int)v2;
              if ( !v16 )
                v18 = 4294967293LL;
              VidSchiControlVSync(a1, 1LL, 65539LL, v18);
            }
            else
            {
              VidSchiSetVSyncSuspended((__int64)a1, v6, 0);
            }
          }
          v8 = *((_BYTE *)a1 + 2500);
          v9 = a1;
          if ( v8 )
            v9 = (struct _VIDSCH_GLOBAL *)((char *)a1 + v2);
          v10 = *((_BYTE *)v9 + 2096);
          if ( v10 && !VSyncSuspended )
          {
            if ( v8 )
              _InterlockedExchange((volatile __int32 *)a1 + v2 + 640, 1);
            else
              _InterlockedExchange((volatile __int32 *)a1 + 640, 1);
          }
          v4 = v10;
          if ( *((_BYTE *)a1 + 67) && v10 )
          {
            v12 = *((_QWORD *)a1 + 2);
            v13 = 0LL;
            if ( (*(_DWORD *)(v12 + 3016) & 0x10) != 0 )
              v13 = (unsigned int)v2;
            if ( (unsigned int)v13 < 0x10 )
            {
              if ( *(_DWORD *)(v12 + 4 * v13 + 3192) )
                VidSchiSetInterruptTargetPresentId(a1, v2, 0, 0LL, 1, 0);
            }
          }
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1360));
      return v4;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10067;
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
    return 0;
  }
}
