/*
 * XREFs of ViThunkApplyPristineCurrentSession @ 0x140B87314
 * Callers:
 *     VfThunkApplyPristineToAllSession @ 0x140B871A4 (VfThunkApplyPristineToAllSession.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     VfUtilPrintCheckinString @ 0x140B73504 (VfUtilPrintCheckinString.c)
 *     ViThunkGetPristine @ 0x140B87890 (ViThunkGetPristine.c)
 *     MmApplyVerifierToRunningImage @ 0x140B947B0 (MmApplyVerifierToRunningImage.c)
 */

__int64 __fastcall ViThunkApplyPristineCurrentSession(ULONG_PTR BugCheckParameter2)
{
  int v2; // ebx
  __int64 v3; // rsi
  _QWORD *v4; // r14
  _DWORD *v5; // r15
  ULONG v6; // edi
  __int64 v7; // rcx
  __int64 Pristine; // r10
  int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // rcx
  ULONG v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  v2 = 0;
  v3 = 0LL;
  v4 = RtlImageDirectoryEntryToData(*(PVOID *)(BugCheckParameter2 + 48), 1u, 0xCu, &v13);
  if ( v4 && v13 )
  {
    v5 = ViWdmThunksWithIatIndex;
    v6 = v13 >> 3;
    if ( ViWdmThunksWithIatIndex )
    {
      memset_0(ViWdmThunksWithIatIndex, 0, 24LL * (unsigned int)ViNumberOfWdmThunks);
      if ( v6 )
      {
        do
        {
          Pristine = ViThunkGetPristine(*v4, &VfPoolThunks);
          if ( Pristine
            || (Pristine = ViThunkGetPristine(v7, &VfRegularThunks)) != 0
            || (Pristine = ViThunkGetPristine(v10, &VfDifThunks)) != 0 )
          {
            v11 = 3 * v3;
            v3 = (unsigned int)(v3 + 1);
            v5[2 * v11] = v9;
            *(_QWORD *)&v5[2 * v11 + 2] = Pristine;
          }
          ++v4;
        }
        while ( v9 + 1 < v6 );
        if ( (_DWORD)v3 )
        {
          v2 = MmApplyVerifierToRunningImage(BugCheckParameter2);
          if ( v2 >= 0 )
            VfUtilPrintCheckinString((unsigned __int16 *)(BugCheckParameter2 + 88), 1);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
