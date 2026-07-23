/*
 * XREFs of LdrpGetLoadAsEntry @ 0x1800C37FC
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800C2A80 (LdrGetFileNameFromLoadAsDataTable.c)
 *     LdrpIsReparsePoint @ 0x1800C3638 (LdrpIsReparsePoint.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x18001D184 (LdrpInitMuiCrits.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpGetLoadAsEntry(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  _OWORD *v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  LdrpInitMuiCrits(a1, (__int64)a2);
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v5 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v6 = LoadAsDataTable;
    while ( v5 > 0 )
    {
      if ( *(_QWORD *)&v6[3 * --v5] == a1 )
      {
        if ( *((_QWORD *)&v6[3 * v5] + 1) )
        {
          *a2 = v6[3 * v5];
          a2[1] = v6[3 * v5 + 1];
          a2[2] = v6[3 * v5 + 2];
          v4 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v4;
}
