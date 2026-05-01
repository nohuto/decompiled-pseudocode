/*
 * XREFs of ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180046130
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045A94 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180045F50 (-RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004028C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004621C (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpQoSCheckHostsSetTimer(struct _RM_QOS_CONTEXT *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _RM_QOS_CONTEXT *v4; // rax
  __int64 v7; // r9
  __int64 *v8; // rdx
  char *v9; // rcx
  char *v10; // rsi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(struct _RM_QOS_CONTEXT **)a1;
  if ( *(struct _RM_QOS_CONTEXT **)a1 == a1 )
    goto LABEL_2;
  v9 = (char *)v4 - 88;
  if ( v4 != (struct _RM_QOS_CONTEXT *)88 )
  {
    while ( *((_QWORD *)v9 + 15) <= a2 )
    {
      v10 = v9 - 1176;
      if ( (unsigned int)dword_1800E1278 > 4
        && (byte_1800E1288 & 0x19) != 0
        && (qword_1800E1290 & 0x19) == qword_1800E1290 )
      {
        v11 = *((_QWORD *)v10 + 4);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          (__int64)&dword_1800E1278,
          byte_1800D417E,
          a3,
          a4,
          (__int64)&v11);
      }
      RmpQoSDisableForHostOnTimerExpiry((struct _RM_ACTIVITY_HOST *)v10);
      v4 = *(struct _RM_QOS_CONTEXT **)a1;
      if ( *(struct _RM_QOS_CONTEXT **)a1 == a1 )
        goto LABEL_2;
      v9 = (char *)v4 - 88;
      if ( v4 == (struct _RM_QOS_CONTEXT *)88 )
        break;
    }
  }
  if ( v4 == a1 || v4 == (struct _RM_QOS_CONTEXT *)88 )
  {
LABEL_2:
    v7 = 0LL;
    v8 = 0LL;
  }
  else
  {
    v8 = &v12;
    v7 = *((unsigned int *)a1 + 7);
    v12 = *((_QWORD *)v4 + 4);
  }
  TpSetTimer(*((_QWORD *)a1 + 2), v8, 0LL, v7);
}
