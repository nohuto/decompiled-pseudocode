/*
 * XREFs of ?GetVidMmEvictionDataEntry@DripsBlockerTrackingHelper@@IEAA_N_KPEAI@Z @ 0x1403FD148
 * Callers:
 *     ?UpdateDripsBlockerVidMmEvictionData@DripsBlockerTrackingHelper@@QEAAX_KPEAU_DXGK_SLEEP_STUDY_DATA@@@Z @ 0x14030F9FC (-UpdateDripsBlockerVidMmEvictionData@DripsBlockerTrackingHelper@@QEAAX_KPEAU_DXGK_SLEEP_STUDY_DA.c)
 * Callees:
 *     <none>
 */

char __fastcall DripsBlockerTrackingHelper::GetVidMmEvictionDataEntry(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        unsigned int *a3)
{
  unsigned int i; // eax
  unsigned __int64 v6; // r8
  unsigned __int64 v8; // rdx

  for ( i = 0; i < 6; ++i )
  {
    v6 = (unsigned __int64)i << 6;
    if ( *(_DWORD *)((char *)this + v6 + 302160) && *(_QWORD *)((char *)this + v6 + 302168) == a2 )
    {
LABEL_6:
      *a3 = i;
      return 1;
    }
  }
  for ( i = 0; i < 6; ++i )
  {
    v8 = (unsigned __int64)i << 6;
    if ( !*(_DWORD *)((char *)this + v8 + 302160) )
    {
      *(_QWORD *)((char *)this + v8 + 302168) = a2;
      *(_DWORD *)((char *)this + v8 + 302160) = 1;
      goto LABEL_6;
    }
  }
  return 0;
}
