/*
 * XREFs of ?GetInitialFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x14006CC6C
 * Callers:
 *     ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1401F99DC (-Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N4@Z @ 0x140351D48 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int64 __fastcall DXGSYNCOBJECT::GetInitialFenceValue(DXGSYNCOBJECT *this)
{
  int v1; // eax
  __int64 v2; // rbx

  v1 = *((_DWORD *)this + 105);
  v2 = 0LL;
  if ( v1 == 5 )
    return *((_QWORD *)this + 29);
  if ( v1 == 7 )
    return *((_QWORD *)this + 38);
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 472;
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 472LL, 0LL, 0LL, 0LL, 0LL);
  return v2;
}
