/*
 * XREFs of VidSchControlVSyncAdapter @ 0x1400FD840
 * Callers:
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003CB00 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x140043FA0 (VidSchCreatePeriodicFrameNotification.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 *     VidSchControlVSyncDevice @ 0x1400FD460 (VidSchControlVSyncDevice.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003F6D0 (-DerementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IncrementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003F798 (-IncrementRequestVSyncReasonAdapter@@YAXW4_VIDSCH_VSYNC_REASON_ADAPTER@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003F9C4 (-DecrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003FB70 (-IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiControlVSync @ 0x1400FDFF0 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchControlVSyncAdapter(struct _VIDSCH_GLOBAL *a1, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rsi
  struct _VIDSCH_GLOBAL *v13; // rdx
  int v14; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // r9

  v4 = 0;
  v5 = a4;
  v9 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10387;
    goto LABEL_11;
  }
  v10 = *((unsigned int *)a1 + 12);
  if ( a4 == -3 )
    goto LABEL_3;
  if ( a4 >= (unsigned int)v10 )
  {
    WdLogSingleEntry2(1LL, a4, v10);
    WdLogGlobalForLineNumber = 10395;
LABEL_11:
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return 0LL;
  }
  if ( !*((_BYTE *)a1 + 2500) )
    v5 = 4294967293LL;
LABEL_3:
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1360), 1u);
  if ( a3 )
  {
    v12 = (unsigned int *)((char *)a1 + 2112);
  }
  else
  {
    DerementRequestVSyncReasonAdapter(a2, (__int64)a1, v5);
    v12 = (unsigned int *)((char *)a1 + 2112);
    DecrementRequestVSyncCount((unsigned int *)a1 + 528, v13, v14);
  }
  if ( !*((_BYTE *)a1 + 2500) )
  {
    if ( *v12 )
      goto LABEL_7;
    v19 = 4294967293LL;
LABEL_23:
    LOBYTE(v11) = a3;
    v9 = VidSchiControlVSync(a1, v11, a3 != 0 ? 0x10000 : 0, v19);
    goto LABEL_7;
  }
  if ( (_DWORD)v5 == -3 )
  {
    if ( *((_DWORD *)a1 + 12) )
    {
      do
      {
        if ( !*((_DWORD *)a1 + v4 + 528) )
        {
          LOBYTE(v11) = a3;
          v9 = VidSchiControlVSync(a1, v11, a3 != 0 ? 0x10000 : 0, v4);
        }
        ++v4;
      }
      while ( v4 < *((_DWORD *)a1 + 12) );
      v12 = (unsigned int *)((char *)a1 + 2112);
    }
    goto LABEL_7;
  }
  if ( !*((_DWORD *)a1 + v5 + 528) )
  {
    v19 = (unsigned int)v5;
    goto LABEL_23;
  }
LABEL_7:
  if ( a3 )
  {
    if ( v9 >= 0 )
    {
      IncrementRequestVSyncCount(v12, a1, v5);
      IncrementRequestVSyncReasonAdapter(a2, v17, v18);
    }
  }
  ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1360));
  return (unsigned int)v9;
}
