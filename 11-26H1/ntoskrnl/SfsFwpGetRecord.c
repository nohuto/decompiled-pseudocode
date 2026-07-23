/*
 * XREFs of SfsFwpGetRecord @ 0x1406E1184
 * Callers:
 *     PrExtGetRecord @ 0x1406E0F1C (PrExtGetRecord.c)
 * Callees:
 *     DrpGetRecord @ 0x1406E24F8 (DrpGetRecord.c)
 *     DrpGetRecordCount @ 0x1406E2534 (DrpGetRecordCount.c)
 *     DrpGetSectionAtIndex @ 0x1406E2560 (DrpGetSectionAtIndex.c)
 */

__int64 __fastcall SfsFwpGetRecord(__int64 a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4, unsigned int *a5)
{
  unsigned int v13; // r14d
  int RecordCount; // ecx
  unsigned int i; // edi
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // r11
  __int64 j; // rdx
  unsigned int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-30h] BYREF
  int v26; // [rsp+24h] [rbp-2Ch]
  _DWORD *v27; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v28[4]; // [rsp+30h] [rbp-20h] BYREF

  v27 = 0LL;
  v28[0] = 0LL;
  _RAX = 1LL;
  v25 = 0;
  __asm { cpuid }
  v26 = _RAX;
  v13 = -1;
  RecordCount = DrpGetRecordCount(a1, a2, &v25);
  if ( RecordCount >= 0 )
  {
    for ( i = 0; i < v25; ++i )
    {
      RecordCount = DrpGetSectionAtIndex(a1, a2, i, &v27);
      if ( RecordCount < 0 )
        return (unsigned int)-1073741811;
      if ( *v27 == 14 )
      {
        RecordCount = DrpGetRecord(a1, a2, v27, v28);
        if ( RecordCount < 0 )
          return (unsigned int)-1073741811;
        v17 = v28[0];
        if ( !v28[0] )
          return (unsigned int)-1073741811;
        v18 = *(_QWORD *)(v16 + 24) + 24LL;
        if ( v18 > a2 )
          return (unsigned int)-1073741811;
        v19 = *(_QWORD *)(v28[0] + 8LL);
        v20 = *(unsigned int *)(v28[0] + 20LL);
        if ( v18 + v19 + 4 * v20 > a2 )
          return (unsigned int)-1073741811;
        v21 = *(_QWORD *)(v16 + 16);
        if ( v21 != v19 + 4 * (v20 + 6) )
          return (unsigned int)-1073741811;
        for ( j = 0LL; (unsigned int)j < (unsigned int)v20; j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)(v28[0] + 4 * j + 24) == v26 )
          {
            v23 = *(_DWORD *)(v16 + 8);
            if ( CmpContextListLock.Timer.DueTime.LowPart < v23 && v23 < v13 )
            {
              v13 = *(_DWORD *)(v16 + 8);
              HIDWORD(CmpContextListLock.Timer.Header.WaitListHead.Flink) = v13;
              *a4 = v21;
              *a5 = v23;
              *a3 = v17;
              RecordCount = 0;
            }
            break;
          }
        }
      }
    }
    if ( !HIDWORD(CmpContextListLock.Timer.Header.WaitListHead.Flink) )
      return (unsigned int)-1073741275;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)RecordCount;
}
