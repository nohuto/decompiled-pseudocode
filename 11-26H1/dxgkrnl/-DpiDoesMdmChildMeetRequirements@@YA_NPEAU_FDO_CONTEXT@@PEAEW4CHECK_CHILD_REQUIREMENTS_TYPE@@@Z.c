/*
 * XREFs of ?DpiDoesMdmChildMeetRequirements@@YA_NPEAU_FDO_CONTEXT@@PEAEW4CHECK_CHILD_REQUIREMENTS_TYPE@@@Z @ 0x14008BD88
 * Callers:
 *     DpiMdmProcessStartAdapter @ 0x140090C00 (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     DpiAcpiGetAcpiChildUidFromName @ 0x140252F60 (DpiAcpiGetAcpiChildUidFromName.c)
 */

bool __fastcall DpiDoesMdmChildMeetRequirements(__int64 a1, _BYTE *a2, int a3)
{
  char v4; // bp
  bool result; // al
  int v8; // r14d
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v11 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 3440), 1u);
  if ( (int)DpiAcpiGetAcpiChildUidFromName(a1, *(_QWORD *)(a1 + 6384), &v11) >= 0 )
  {
    v8 = v11;
    v9 = *(_QWORD **)(a1 + 3600);
    while ( v9 != (_QWORD *)(a1 + 3600) )
    {
      v10 = v9 - 4;
      v9 = (_QWORD *)*v9;
      if ( *((_DWORD *)v10 + 5) == v8 )
      {
        if ( a3 )
        {
          v4 = 1;
          if ( a3 == 1 )
          {
            if ( *(_WORD *)(a1 + 5898) > 1u )
            {
              if ( *a2 )
              {
                if ( !*((_WORD *)v10 + 46) )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 3780;
                  *(_DWORD *)(a1 + 6116) = 9;
                }
              }
              else if ( !*(_BYTE *)(a1 + 2716) && *((_WORD *)v10 + 46) )
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 3792;
                *(_DWORD *)(a1 + 6116) = 10;
              }
            }
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 3801;
            *(_DWORD *)(a1 + 6116) = 6;
          }
          break;
        }
        *(_DWORD *)(a1 + 6376) = *((_DWORD *)v10 + 6);
        if ( !*(_DWORD *)(a1 + 6116) )
        {
          v4 = 1;
          if ( *(_DWORD *)v10 == 1 && *((_DWORD *)v10 + 1) == 0x80000000 )
          {
            if ( *((_DWORD *)v10 + 4) == 4 )
            {
              *(_DWORD *)(a1 + 6116) = 1;
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 3760;
              *(_DWORD *)(a1 + 6116) = 8;
            }
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3754;
            *(_DWORD *)(a1 + 6116) = 7;
          }
          break;
        }
      }
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 3440));
    KeLeaveCriticalRegion();
    if ( !v4 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3814;
      *(_DWORD *)(a1 + 6116) = 2;
    }
    return *(_DWORD *)(a1 + 6116) == 1;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 0;
    WdLogGlobalForLineNumber = 3722;
    *(_DWORD *)(a1 + 6116) = 2;
  }
  return result;
}
