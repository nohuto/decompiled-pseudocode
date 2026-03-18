/*
 * XREFs of ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1402744BC
 * Callers:
 *     FreeHidProcessRequest @ 0x14011EB54 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x140217EC8 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     FreeHidTLCInfo @ 0x14011DFF0 (FreeHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401F9A54 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1402021BC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall DerefExcludeRequest(struct tagPROCESS_HID_REQUEST *a1, __int64 a2, int a3)
{
  int v4; // ebx
  __int64 UserSessionState; // rax
  char *v7; // rcx
  __int64 v9; // rcx
  char v10; // [rsp+48h] [rbp+20h] BYREF

  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v10,
    (struct _KTHREAD **)(UserSessionState + 104));
  if ( !v4 )
  {
    v7 = (char *)a1 + 24;
    if ( (*((_DWORD *)a1 + 5) & 8) != 0 )
      --*(_DWORD *)(*(_QWORD *)v7 + 40LL);
    if ( (*(_DWORD *)(*(_QWORD *)v7 + 36LL))-- == 1 )
    {
      if ( a3 )
      {
        v9 = *(_QWORD *)v7;
        if ( !(*(_DWORD *)(v9 + 20) | *(_DWORD *)(v9 + 24) | *(_DWORD *)(v9 + 32) | *(_DWORD *)(v9 + 36)) )
          FreeHidTLCInfo(
            (_QWORD *)v9,
            *(_DWORD *)(v9 + 20) | *(_DWORD *)(v9 + 24) | (unsigned int)(*(_DWORD *)(v9 + 32) | *(_DWORD *)(v9 + 36)));
      }
    }
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v10);
}
