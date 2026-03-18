/*
 * XREFs of HmgModifyHandleType @ 0x14006F6A0
 * Callers:
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x14006E5A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x14006F600 (HmgLockAndModifyHandleType.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x140178B78 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x14004AC30 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     EtwTraceGdiTransformHandle @ 0x14004AD40 (EtwTraceGdiTransformHandle.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x14006FBAC (-GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  unsigned int v2; // esi
  GdiHandleManager *v3; // rbx
  struct _ENTRY *EntryFromIndex; // rdi
  struct OBJECT *EntryObject; // rbx
  char EtwGdiHandleType; // al
  char v7; // r9
  __int64 result; // rax

  v2 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v3 = *(GdiHandleManager **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 5672LL);
  EntryFromIndex = GdiHandleManager::GetEntryFromIndex(v3, v2);
  EntryObject = GdiHandleManager::GetEntryObject(v3, v2);
  EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)EntryFromIndex + 14));
  EtwTraceGdiTransformHandle(*(_QWORD *)EntryObject, a1, EtwGdiHandleType, v7);
  result = a1;
  *((_WORD *)EntryFromIndex + 6) = WORD1(a1);
  *(_QWORD *)EntryObject = a1;
  return result;
}
