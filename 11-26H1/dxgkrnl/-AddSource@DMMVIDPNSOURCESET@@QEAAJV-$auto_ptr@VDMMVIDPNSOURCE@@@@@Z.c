/*
 * XREFs of ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1403450A8
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140344904 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??$Add@VDMMVIDPNSOURCE@@@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCE@@@Z @ 0x14004A364 (--$Add@VDMMVIDPNSOURCE@@@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEAA-AW4SETSTATUS@0@PEAVDMMVIDPNSOURCE@.c)
 */

__int64 __fastcall DMMVIDPNSOURCESET::AddSource(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 745;
  }
  v5 = IndexedSet<DMMVIDPNSOURCE>::Add<DMMVIDPNSOURCE>(a1, *a2);
  switch ( v5 )
  {
    case 1:
      WdLogSingleEntry2(2LL, *a2, a1);
      WdLogGlobalForLineNumber = 767;
      v2 = -1071774953;
      break;
    case 2:
      WdLogSingleEntry3(2LL, *(unsigned int *)(*a2 + 24), *a2, a1);
      WdLogGlobalForLineNumber = 776;
      v2 = -1071774927;
      break;
    case 3:
      *a2 = 0LL;
      break;
    default:
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 782;
      v2 = -1073741823;
      break;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v2;
}
