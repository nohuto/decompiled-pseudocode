/*
 * XREFs of LdrpNotifyLoadOfGraph @ 0x1801195E0
 * Callers:
 *     LdrpNotifyLoadOfGraph @ 0x1801195E0 (LdrpNotifyLoadOfGraph.c)
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     LdrpNotifyLoadOfGraph @ 0x1801195E0 (LdrpNotifyLoadOfGraph.c)
 *     LdrpSendPostSnapNotifications @ 0x18011AFD0 (LdrpSendPostSnapNotifications.c)
 */

__int64 __fastcall LdrpNotifyLoadOfGraph(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rbx
  int v4; // edx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  if ( !v1 )
    goto LABEL_13;
  v3 = *(_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v3 = (_QWORD *)*v3;
    v4 = *(_DWORD *)(v3[1] + 56LL);
    if ( v4 == 6 )
    {
      result = LdrpNotifyLoadOfGraph();
      if ( (int)result < 0 )
        goto LABEL_12;
      goto LABEL_8;
    }
    if ( v4 < 7 )
      break;
    result = 0LL;
LABEL_8:
    if ( v3 == v1 )
      goto LABEL_12;
  }
  result = 3221225701LL;
  if ( v4 == -4 )
    result = 3221225794LL;
LABEL_12:
  if ( (int)result >= 0 )
  {
LABEL_13:
    *(_DWORD *)(a1 + 56) = 7;
    result = LdrpSendPostSnapNotifications(a1);
    if ( (int)result < 0 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
