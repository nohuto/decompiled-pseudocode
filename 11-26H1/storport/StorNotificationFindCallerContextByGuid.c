/*
 * XREFs of StorNotificationFindCallerContextByGuid @ 0x14012CC68
 * Callers:
 *     StorCancelStorageNotificationIrp @ 0x1401AF900 (StorCancelStorageNotificationIrp.c)
 *     StorDeleteStorageNotification @ 0x1401AF9BC (StorDeleteStorageNotification.c)
 *     StorDisableStorageNotification @ 0x1401AFAA4 (StorDisableStorageNotification.c)
 *     StorEnableStorageNotification @ 0x1401AFB74 (StorEnableStorageNotification.c)
 *     StorGetStorageNotificationInfo @ 0x1401AFD54 (StorGetStorageNotificationInfo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall StorNotificationFindCallerContextByGuid(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // rdx

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = (_QWORD *)(a1 + 8);
      v4 = *(_QWORD **)(a1 + 8);
      if ( v4 )
      {
        if ( v3[1] )
        {
          while ( v4 != v3 )
          {
            v5 = v4[2] - *a2;
            if ( !v5 )
              v5 = v4[3] - a2[1];
            if ( !v5 )
              return v4;
            v4 = (_QWORD *)*v4;
          }
        }
      }
    }
  }
  return 0LL;
}
