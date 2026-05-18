/*
 * XREFs of DwmpNotifyUserLogoff @ 0x18000DBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000C490 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000ED7C (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000F9DC (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 */

__int64 DwmpNotifyUserLogoff()
{
  unsigned int v0; // ebx
  CApiPortClient *v1; // rcx
  __int16 v2; // r8
  void *v3; // r9
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-28h]
  void *v7; // [rsp+30h] [rbp-18h]
  __int16 v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0;
  AcquireSRWLockShared(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    v9 = 0;
    v10 = 536870915;
    v4 = CApiPortClient::SendRequest(v1, &v10, v2, v3, v6, &v9, v7, v8);
    v0 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x6FBu);
  }
  TraceLoggingWriteEtw(8, v0, 0);
  ReleaseSRWLockShared(&gDwmStateLock);
  return v0;
}
