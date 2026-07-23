/*
 * XREFs of MiSetTebStackLimit @ 0x140AA43B0
 * Callers:
 *     MiCheckForUserStackOverflow @ 0x140AA4214 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall MiSetTebStackLimit(__int64 a1, __int64 a2)
{
  bool v2; // zf
  _DWORD *v3; // rcx

  v2 = *(_DWORD *)(a1 + 24) == 4;
  v3 = *(_DWORD **)(a1 + 16);
  if ( v2 )
    RtlWriteULongToUser(v3, a2);
  else
    RtlWriteULong64ToUser(v3, a2);
  return 275LL;
}
