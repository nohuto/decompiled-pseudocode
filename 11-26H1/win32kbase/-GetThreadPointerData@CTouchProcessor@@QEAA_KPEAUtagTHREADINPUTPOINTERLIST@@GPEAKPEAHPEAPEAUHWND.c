/*
 * XREFs of ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x14004F870
 * Callers:
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x140157C14 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 *     NtUserGetPointerCursorId @ 0x1401E4AF0 (NtUserGetPointerCursorId.c)
 *     NtUserGetRawPointerDeviceData @ 0x1401E4D40 (NtUserGetRawPointerDeviceData.c)
 *     ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x140215940 (-GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x14004F970 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall CTouchProcessor::GetThreadPointerData(
        CTouchProcessor *this,
        struct _LIST_ENTRY *a2,
        unsigned __int16 a3,
        unsigned int *a4,
        int *a5,
        HWND *a6)
{
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rbx
  int (*v11)(void); // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v14)(struct _LIST_ENTRY *, _QWORD); // rax

  ThreadPointerData = 0LL;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 48) + 6064LL);
  if ( !v11 )
    goto LABEL_18;
  if ( v11() >= 0 )
  {
    v14 = *(__int64 (__fastcall **)(struct _LIST_ENTRY *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48)
                                                                 + 6072LL);
    if ( v14 )
      ThreadPointerData = (struct tagTHREADPOINTERDATA *)v14(a2, a3);
  }
  if ( !ThreadPointerData )
  {
LABEL_18:
    ThreadPointerData = CTouchProcessor::FindThreadPointerData(this, a2, a3);
    if ( !ThreadPointerData )
      return 0LL;
  }
  if ( (*((_DWORD *)ThreadPointerData + 12) & 8) != 0 )
    return 0LL;
  if ( a4 )
    *a4 = *((_DWORD *)ThreadPointerData + 5);
  if ( a5 )
    *a5 = -(*((_DWORD *)ThreadPointerData + 12) & 1);
  if ( a6 )
    *a6 = (HWND)*((_QWORD *)ThreadPointerData + 5);
  return *((_QWORD *)ThreadPointerData + 3);
}
