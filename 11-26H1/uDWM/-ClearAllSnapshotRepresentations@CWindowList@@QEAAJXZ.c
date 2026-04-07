/*
 * XREFs of ?ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ @ 0x18007D2F0
 * Callers:
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x18008A1F0 (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 */

char *__fastcall CWindowList::ClearAllSnapshotRepresentations(CWindowList *this)
{
  struct _RTL_GENERIC_TABLE *v1; // rsi
  CWindowData *v2; // rdi
  CWindowData *i; // rbx
  __int64 v4; // r8
  char *result; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  v1 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  while ( 1 )
  {
    result = (char *)RtlEnumerateGenericTableWithoutSplaying(v1, &RestartKey);
    if ( !result )
      break;
    v2 = (CWindowData *)(result + 80);
    for ( i = (CWindowData *)*((_QWORD *)result + 10); i != v2; i = *(CWindowData **)i )
      CWindowData::ClearSnapshot(i, 1, v4, 1);
  }
  return result;
}
