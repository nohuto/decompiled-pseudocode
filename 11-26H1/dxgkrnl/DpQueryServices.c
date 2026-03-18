/*
 * XREFs of DpQueryServices @ 0x140238020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpQueryServices(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(int, __int64); // rax
  __int64 (__fastcall *v11)(struct _DXGK_TIMED_OPERATION *, PVOID, KWAIT_REASON, KPROCESSOR_MODE, BOOLEAN, __int64 *); // rax

  v3 = 0;
  if ( !a1 || !a3 )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2206;
    return v3;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 || *(_DWORD *)(v7 + 16) != 1953656900 || (v8 = *(_DWORD *)(v7 + 20), v8 != 2) && v8 != 3 )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2219;
    return v3;
  }
  if ( !KeGetCurrentIrql() )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( *(_WORD *)(a3 + 2) != 1 )
        {
          v3 = -1073741811;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2309;
          return v3;
        }
        if ( *(_WORD *)a3 != 56 )
        {
          v3 = -1073741811;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2319;
          return v3;
        }
        *(_QWORD *)(a3 + 16) = WdpInterfaceReferenceNop;
        *(_QWORD *)(a3 + 24) = WdpInterfaceReferenceNop;
        *(_QWORD *)(a3 + 32) = DpiDbgReportCreate;
        *(_QWORD *)(a3 + 40) = DpiDbgReportSecondaryData;
        v11 = (__int64 (__fastcall *)(struct _DXGK_TIMED_OPERATION *, PVOID, KWAIT_REASON, KPROCESSOR_MODE, BOOLEAN, __int64 *))DpiDbgReportComplete;
      }
      else
      {
        if ( a2 != 2 )
        {
          switch ( a2 )
          {
            case 3:
              if ( *(_WORD *)(a3 + 2) != 1 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2391;
                return v3;
              }
              if ( *(_WORD *)a3 != 72 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2401;
                return v3;
              }
              v9 = *(_QWORD *)(v7 + 24);
              *(_QWORD *)(a3 + 16) = WdpInterfaceReferenceNop;
              *(_QWORD *)(a3 + 24) = WdpInterfaceReferenceNop;
              *(_QWORD *)(a3 + 32) = DpOpenSpbResource;
              *(_QWORD *)(a3 + 40) = DpCloseSpbResource;
              *(_QWORD *)(a3 + 48) = &DpReadSpbResource;
              *(_QWORD *)(a3 + 56) = &DpWriteSpbResource;
              *(_QWORD *)(a3 + 64) = DpSpbResourceIoControl;
              goto LABEL_64;
            case 4:
              if ( !*(_BYTE *)(v7 + 1153) )
              {
                v3 = -1073741816;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2433;
                return v3;
              }
              if ( *(_WORD *)a3 != 40 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2444;
                return v3;
              }
              if ( *(_WORD *)(a3 + 2) != 1 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2454;
                return v3;
              }
              v9 = *(_QWORD *)(v7 + 24);
              *(_QWORD *)(a3 + 16) = WdpInterfaceReferenceNop;
              *(_QWORD *)(a3 + 24) = WdpInterfaceReferenceNop;
              *(_QWORD *)(a3 + 32) = DpGetMSBDDDisplayInfoPlusEdid;
              goto LABEL_64;
            case 5:
              if ( *(_WORD *)(a3 + 2) != 1 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2482;
                return v3;
              }
              if ( *(_WORD *)a3 != 48 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2492;
                return v3;
              }
              v9 = *(_QWORD *)(v7 + 24);
              *(_QWORD *)(a3 + 16) = WdpInterfaceReferenceNop;
              *(_QWORD *)(a3 + 24) = WdpInterfaceReferenceNop;
              *(_QWORD *)(a3 + 32) = &DpiEnumSystemFirmwareTables;
              v10 = (__int64 (__fastcall *)(int, __int64))&DpiReadSystemFirmwareTable;
              break;
            case 6:
              if ( !*(_BYTE *)(v7 + 1158) )
              {
                v3 = -1073741816;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2521;
                return v3;
              }
              if ( *(_WORD *)a3 != 80 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2530;
                return v3;
              }
              v9 = *(_QWORD *)(v7 + 24);
              *(_QWORD *)(a3 + 16) = WdpInterfaceReferenceNop;
              *(_QWORD *)(a3 + 24) = WdpInterfaceReferenceNop;
              *(_QWORD *)(a3 + 32) = &DpiIndirectCbSendMessage;
              *(_QWORD *)(a3 + 40) = DpiIndirectCbForceDisplaySwitch;
              *(_QWORD *)(a3 + 48) = DpiIndirectCbDisableRenderD3Requests;
              *(_QWORD *)(a3 + 56) = DpiIndirectCbNotifyCursorSupportChange;
              *(_QWORD *)(a3 + 64) = DpiIndirectCbOpmSetSrmList;
              *(_QWORD *)(a3 + 72) = DpiIndirectCbOpmGetSrmListVersion;
              goto LABEL_64;
            case 7:
              if ( *(_WORD *)a3 != 48 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 2563;
                return v3;
              }
              v9 = *(_QWORD *)(v7 + 24);
              *(_QWORD *)(a3 + 16) = WdpInterfaceReferenceNop;
              *(_QWORD *)(a3 + 24) = WdpInterfaceReferenceNop;
              *(_QWORD *)(a3 + 32) = DpiIsFeatureEnabled2;
              v10 = DpiQueryFeatureInterface;
              break;
            default:
              v3 = -1073741811;
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 2589;
              return v3;
          }
LABEL_63:
          *(_QWORD *)(a3 + 40) = v10;
LABEL_64:
          *(_QWORD *)(a3 + 8) = v9;
          goto LABEL_65;
        }
        if ( *(_WORD *)(a3 + 2) != 1 )
        {
          v3 = -1073741811;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2350;
          return v3;
        }
        if ( *(_WORD *)a3 != 56 )
        {
          v3 = -1073741811;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2360;
          return v3;
        }
        *(_QWORD *)(a3 + 16) = WdpInterfaceReferenceNop;
        *(_QWORD *)(a3 + 24) = WdpInterfaceReferenceNop;
        *(_QWORD *)(a3 + 32) = TdrTimedOperationStart;
        *(_QWORD *)(a3 + 40) = TdrTimedOperationDelay;
        v11 = TdrTimedOperationWaitForSingleObject;
      }
      *(_QWORD *)(a3 + 8) = 0LL;
      v9 = 0LL;
      *(_QWORD *)(a3 + 48) = v11;
LABEL_65:
      WdpInterfaceReferenceNop(v9);
      return v3;
    }
    if ( *(_WORD *)(a3 + 2) != 1 )
    {
      v3 = -1073741811;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2255;
      return v3;
    }
    if ( *(_WORD *)a3 != 56 )
    {
      v3 = -1073741811;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2265;
      return v3;
    }
    if ( !*(_QWORD *)(v7 + 680) )
    {
      v3 = -1073741823;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2275;
      return v3;
    }
    v9 = *(_QWORD *)(v7 + 24);
    *(_QWORD *)(a3 + 16) = WdpInterfaceReferenceNop;
    *(_QWORD *)(a3 + 24) = WdpInterfaceReferenceNop;
    *(_QWORD *)(a3 + 48) = DpiAgpSetAgpCommand;
    *(_QWORD *)(a3 + 32) = &DpiAgpAllocatePool;
    v10 = (__int64 (__fastcall *)(int, __int64))DpiAgpFreePool;
    goto LABEL_63;
  }
  v3 = -1073741811;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x2003u )
  {
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2232;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 2238;
  return v3;
}
