/*
 * XREFs of ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x14034663C
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x140346520 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     RtlStringLengthWorkerW @ 0x14004D50C (RtlStringLengthWorkerW.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x14034688C (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned int MaximumLength; // r8d
  unsigned int Length; // eax
  unsigned __int64 v15; // r13
  struct HDXGMONITOR__ *v16; // rcx
  int CCDMonitorID; // eax
  unsigned int v18; // r14d
  bool v19; // sf
  __int16 v20; // ax
  unsigned __int16 v21; // ax
  __int64 result; // rax
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  size_t pcchLength; // [rsp+70h] [rbp+18h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+78h] [rbp+20h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7646;
  }
  v4 = *((_QWORD *)a1 + 395);
  if ( !v4 )
    return 0LL;
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, v5);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
    v6 = *(_QWORD *)(v5 + 120);
    v7 = -1073741789;
    v8 = 0LL;
    v9 = v6 + 24;
    v10 = *(_QWORD *)(v6 + 24);
    if ( v10 != v6 + 24 )
      v8 = v10 - 8;
    while ( v8 )
    {
      if ( !*(_DWORD *)(v8 + 92) )
      {
        v11 = *(_QWORD *)(v8 + 112);
        if ( v11 )
        {
          MaximumLength = a2->MaximumLength;
          Length = a2->Length;
          if ( (unsigned __int16)Length >= (unsigned __int16)MaximumLength )
            goto LABEL_26;
          v15 = (a2->MaximumLength - (unsigned __int64)a2->Length) >> 1;
          v16 = *(struct HDXGMONITOR__ **)(v8 + 112);
          psz = &a2->Buffer[(unsigned __int64)a2->Length >> 1];
          CCDMonitorID = MonitorGetCCDMonitorID(
                           v16,
                           (MaximumLength - (unsigned __int64)Length) >> 1,
                           (unsigned __int16 *)psz);
          v18 = CCDMonitorID;
          if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
            goto LABEL_26;
          if ( CCDMonitorID < 0 )
          {
            WdLogSingleEntry2(3LL, v11, CCDMonitorID);
            WdLogGlobalForLineNumber = 7728;
            if ( v6 )
              ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
            v7 = v18;
            goto LABEL_28;
          }
          pcchLength = 0LL;
          if ( !psz
            || (unsigned int)v15 > 0x7FFFFFFF
            || (v19 = RtlStringLengthWorkerW(psz, (unsigned int)v15, &pcchLength) < 0, v20 = pcchLength, v19) )
          {
            v20 = 0;
          }
          v21 = a2->Length + 2 * v20;
          a2->Length = v21;
          if ( v21 >= a2->MaximumLength )
          {
LABEL_26:
            if ( v6 )
              ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
LABEL_28:
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
            return v7;
          }
          v9 = v6 + 24;
          a2->Buffer[(unsigned __int64)v21 >> 1] = 94;
          a2->Length += 2;
        }
      }
      v12 = *(_QWORD *)(v8 + 8);
      v8 = v12 - 8;
      if ( v12 == v9 )
        v8 = 0LL;
    }
    if ( v6 )
      ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
    return 0LL;
  }
  WdLogSingleEntry1(2LL);
  result = 3223192373LL;
  WdLogGlobalForLineNumber = 7667;
  return result;
}
