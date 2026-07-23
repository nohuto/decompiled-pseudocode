/*
 * XREFs of WmipClearIrpObjectList @ 0x1403FB2AC
 * Callers:
 *     WmipReceiveNotifications @ 0x1403DE4EC (WmipReceiveNotifications.c)
 *     WmipWriteWnodeToObject @ 0x1403FB190 (WmipWriteWnodeToObject.c)
 *     WmipNotificationIrpCancel @ 0x1403FBA80 (WmipNotificationIrpCancel.c)
 *     WmipCompleteGuidIrpWithError @ 0x1404C306C (WmipCompleteGuidIrpWithError.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall WmipClearIrpObjectList(__int64 a1)
{
  _QWORD **v1; // rcx
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // r9
  _QWORD *v5; // r8

  v1 = (_QWORD **)(a1 + 120);
  result = *v1;
  while ( result != v1 )
  {
    v3 = (_QWORD *)*result;
    v4 = result;
    result = v3;
    *(v4 - 1) = 0LL;
    if ( (_QWORD *)v3[1] != v4 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    *v5 = v3;
    v3[1] = v5;
  }
  return result;
}
