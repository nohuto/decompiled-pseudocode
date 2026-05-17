/*
 * XREFs of LdrpGetLoadAsEntry @ 0x1800C603C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800C52C0 (LdrGetFileNameFromLoadAsDataTable.c)
 *     LdrpIsReparsePoint @ 0x1800C5E78 (LdrpIsReparsePoint.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x180032024 (LdrpInitMuiCrits.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpGetLoadAsEntry(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  __int64 v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  LdrpInitMuiCrits(a1, (__int64)a2);
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v5 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v6 = LoadAsDataTable;
    while ( v5 > 0 )
    {
      if ( *(_QWORD *)(v6 + 48LL * --v5) == a1 )
      {
        if ( *(_QWORD *)(v6 + 48LL * v5 + 8) )
        {
          *a2 = *(_OWORD *)(v6 + 48LL * v5);
          a2[1] = *(_OWORD *)(v6 + 48LL * v5 + 16);
          a2[2] = *(_OWORD *)(v6 + 48LL * v5 + 32);
          v4 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits);
  return v4;
}
