/*
 * XREFs of TcglibpGetCapabilities @ 0x1401349AC
 * Callers:
 *     TcglibDiscoverDevice @ 0x140130E30 (TcglibDiscoverDevice.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     TcglibEalAllocateIfRecvCommand @ 0x14008C960 (TcglibEalAllocateIfRecvCommand.c)
 *     TcglibEalAllocateIfSendCommand @ 0x14008CC34 (TcglibEalAllocateIfSendCommand.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     TcglibEalFreeCommand @ 0x14008D1C4 (TcglibEalFreeCommand.c)
 *     TcglibEalGetCommandPayload @ 0x14008D290 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibStackReset @ 0x140131DA0 (TcglibStackReset.c)
 *     TcglibpGetTableColumnData @ 0x140134100 (TcglibpGetTableColumnData.c)
 *     TcglibpGetLockingInfoTable @ 0x140134CDC (TcglibpGetLockingInfoTable.c)
 *     TcglibpParseLevel0Data @ 0x140134FC4 (TcglibpParseLevel0Data.c)
 *     TcglibpGetSecretProtection @ 0x140135688 (TcglibpGetSecretProtection.c)
 *     TcglibpCloseSession @ 0x140136434 (TcglibpCloseSession.c)
 *     TcglibpGetTPerProperties @ 0x140136630 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSessionWithRetry @ 0x140136870 (TcglibpOpenSessionWithRetry.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibpGetCapabilities(int **a1, __int64 a2)
{
  int *v2; // r15
  char v4; // r14
  int IfSendCommand; // ebx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  _BYTE v14[4]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v15; // [rsp+44h] [rbp-35h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-29h] BYREF
  __int64 v18; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v19[3]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v20; // [rsp+90h] [rbp+17h]

  v2 = *a1;
  v17 = 0LL;
  v16 = 0LL;
  v20 = 0LL;
  v4 = 1;
  v18 = 0LL;
  v15 = 0;
  memset(v19, 0, sizeof(v19));
  IfSendCommand = TcglibEalAllocateIfSendCommand((__int64)v2, 1, 1, 2048, (__int64 *)&v16);
  if ( IfSendCommand >= 0 )
  {
    IfSendCommand = TcglibEalExecuteCommandSync((__int64)v2, v16, v7);
    TcglibEalFreeCommand(*a1, v16);
    if ( IfSendCommand >= 0 )
    {
      IfSendCommand = TcglibEalAllocateIfRecvCommand((__int64)v2, 1, 1, 2048, (__int64 *)&v17);
      if ( IfSendCommand >= 0 )
      {
        TcglibEalLogCommand(*a1, "GetCapabilities", 0, 0, 0LL, 0LL);
        v8 = v17;
        IfSendCommand = TcglibEalExecuteCommandSync((__int64)v2, v17, v9);
        if ( IfSendCommand >= 0 )
        {
          TcglibEalGetCommandPayload(*a1, v8, &v18, &v15);
          IfSendCommand = TcglibpParseLevel0Data(a1, v18, v15, a2);
        }
        TcglibEalFreeCommand(v2, v8);
        if ( IfSendCommand >= 0 )
        {
          if ( (int)TcglibpGetTPerProperties(a1, v19, a2 + 8) >= 0 )
            goto LABEL_13;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            WPP_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xBu,
              (__int64)&WPP_0ef325dc9a723379ae6740d6b32d6064_Traceguids);
          v10 = TcglibStackReset((__int64)a1, (__int64)v19);
          IfSendCommand = v10;
          if ( v10 >= 0 )
          {
            IfSendCommand = TcglibpGetTPerProperties(a1, v19, a2 + 8);
            if ( IfSendCommand < 0 )
              return (unsigned int)IfSendCommand;
LABEL_13:
            IfSendCommand = TcglibpOpenSessionWithRetry(a1, v19, 0x20500000001LL);
            if ( IfSendCommand < 0 )
              return (unsigned int)IfSendCommand;
            IfSendCommand = TcglibpGetTableColumnData((__int64)a1, (__int64)v19, 0x20500000002LL, 6u, a2 + 68, 4, 0LL);
            if ( IfSendCommand < 0 )
              goto LABEL_22;
            *(_BYTE *)(a2 + 64) = 1;
            v14[0] = 0;
            IfSendCommand = TcglibpGetTableColumnData(
                              (__int64)a1,
                              (__int64)v19,
                              0x900000006LL,
                              5u,
                              (__int64)v14,
                              1,
                              0LL);
            if ( IfSendCommand < 0 || v14[0] )
            {
              if ( !*(_BYTE *)(a2 + 148) )
              {
LABEL_22:
                TcglibpCloseSession(a1, v19, v11);
                if ( IfSendCommand >= 0 )
                {
                  if ( *(_BYTE *)(a2 + 64) )
                  {
                    if ( *(_DWORD *)(a2 + 68) == 9 )
                    {
                      IfSendCommand = TcglibpOpenSessionWithRetry(a1, v19, 0x20500000002LL);
                      if ( IfSendCommand >= 0 )
                      {
                        IfSendCommand = TcglibpGetLockingInfoTable(a1, v19, a2);
                        if ( IfSendCommand >= 0 )
                          IfSendCommand = TcglibpGetSecretProtection(a1, v19, a2 + 80);
                        TcglibpCloseSession(a1, v19, v12);
                      }
                    }
                  }
                }
                return (unsigned int)IfSendCommand;
              }
              if ( !*(_BYTE *)(a2 + 149) && *(_BYTE *)(a2 + 150) )
                v4 = 0;
            }
            *(_BYTE *)(a2 + 4) = v4;
            goto LABEL_22;
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xCu,
              (__int64)&WPP_0ef325dc9a723379ae6740d6b32d6064_Traceguids,
              v10);
        }
      }
    }
  }
  return (unsigned int)IfSendCommand;
}
