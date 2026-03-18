/*
 * XREFs of VidSchiHandleControlEvent @ 0x1400C577C
 * Callers:
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1400C4B80 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x14009BDCC (VidSchiSetSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 *     VidSchiResume @ 0x140124E94 (VidSchiResume.c)
 */

LONG __fastcall VidSchiHandleControlEvent(struct _VIDSCH_GLOBAL *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  LONG result; // eax

  v1 = *((_DWORD *)a1 + 95);
  if ( *((_DWORD *)a1 + 94) != v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          *((_DWORD *)a1 + 815) = 3;
          VidSchFlushAdapter(a1, 17);
          return VidSchiSetSchedulerStatus((__int64)a1, 3, 1);
        }
      }
      else
      {
        return VidSchTerminateAdapter(a1);
      }
    }
    else
    {
      return VidSchiResume();
    }
  }
  return result;
}
