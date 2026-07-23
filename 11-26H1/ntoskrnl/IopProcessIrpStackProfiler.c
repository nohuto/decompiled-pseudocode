/*
 * XREFs of IopProcessIrpStackProfiler @ 0x1404B4884
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x1404B4660 (IopIrpStackProfilerDpcRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopProcessIrpStackProfiler(__int64 a1)
{
  unsigned __int64 v1; // r9
  unsigned int AffinityVersion; // edx
  unsigned int AffinityVersion_high; // r8d
  signed __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r11d
  unsigned __int64 *v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  bool v11; // cf
  bool v12; // zf
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  unsigned int v15; // r9d
  _QWORD *v16; // r10
  signed __int64 v17; // rcx

  v1 = 0LL;
  AffinityVersion = IopPerfIoTrackingLock.AffinityVersion;
  AffinityVersion_high = HIDWORD(IopPerfIoTrackingLock.AffinityVersion);
  v5 = 0LL;
  v6 = 0LL;
  if ( (IopIrpStackProfilerFlags & 1) != 0 )
  {
    v7 = 10;
    v8 = (unsigned __int64 *)(a1 + 80);
    do
    {
      v9 = *v8;
      v10 = v7;
      v11 = *v8 < v1;
      v12 = *v8++ == v1;
      v13 = v9;
      if ( v11 || v12 )
      {
        v13 = v1;
        v10 = AffinityVersion;
      }
      ++v7;
      AffinityVersion = v10;
      v1 = v13;
    }
    while ( v7 < 0x14 );
    if ( v13 < LODWORD(IopPerfIoTrackingLock.Timer.TimerListEntry.Blink) )
      AffinityVersion = IopPerfIoTrackingLock.AffinityVersion;
  }
  result = (unsigned int)IopIrpStackProfilerFlags;
  v15 = 2;
  if ( (IopIrpStackProfilerFlags & 2) != 0 && AffinityVersion > 2 )
  {
    v16 = (_QWORD *)(a1 + 16);
    do
    {
      v6 += *v16;
      result = v15;
      ++v16;
      v17 = v6 * (v15 - (unsigned __int64)AffinityVersion);
      if ( v17 >= v5 )
        result = AffinityVersion_high;
      ++v15;
      AffinityVersion_high = result;
      if ( v17 >= v5 )
        v17 = v5;
      v5 = v17;
    }
    while ( v15 < AffinityVersion );
  }
  if ( LODWORD(IopPerfIoTrackingLock.AffinityVersion) != AffinityVersion )
    LODWORD(IopPerfIoTrackingLock.AffinityVersion) = AffinityVersion;
  if ( HIDWORD(IopPerfIoTrackingLock.AffinityVersion) != AffinityVersion_high )
    HIDWORD(IopPerfIoTrackingLock.AffinityVersion) = AffinityVersion_high;
  return result;
}
