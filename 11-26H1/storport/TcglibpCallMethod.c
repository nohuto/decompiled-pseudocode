/*
 * XREFs of TcglibpCallMethod @ 0x140133D2C
 * Callers:
 *     TcglibpAssignNamespaceLocking @ 0x1401329F0 (TcglibpAssignNamespaceLocking.c)
 *     TcglibpDeassignNamespaceLocking @ 0x140132AA4 (TcglibpDeassignNamespaceLocking.c)
 *     TcglibpEraseBand @ 0x140132B48 (TcglibpEraseBand.c)
 *     TcglibpGetBandMetadata @ 0x140132C28 (TcglibpGetBandMetadata.c)
 *     TcglibpGetLockingObjectInfo @ 0x140132D48 (TcglibpGetLockingObjectInfo.c)
 *     TcglibpSetBandMetadata @ 0x1401333A8 (TcglibpSetBandMetadata.c)
 *     TcglibpGetTableColumns @ 0x140134170 (TcglibpGetTableColumns.c)
 *     TcglibpSetTableColumns @ 0x14013435C (TcglibpSetTableColumns.c)
 *     TcglibpActivateLockingSp @ 0x1401345C4 (TcglibpActivateLockingSp.c)
 *     TcglibpRevertLockingSp @ 0x140134840 (TcglibpRevertLockingSp.c)
 *     TcglibpSetACEBooleanExpr @ 0x1401348F8 (TcglibpSetACEBooleanExpr.c)
 *     TcglibpGetSecretProtection @ 0x140135688 (TcglibpGetSecretProtection.c)
 *     TcglibpAuthenticateSession @ 0x14013634C (TcglibpAuthenticateSession.c)
 *     TcglibpGetTPerProperties @ 0x140136630 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSession @ 0x140136744 (TcglibpOpenSession.c)
 *     TcglibpSetMaxPacketSizes @ 0x140136980 (TcglibpSetMaxPacketSizes.c)
 * Callees:
 *     TcglibEalGetCommandPayload @ 0x14008D290 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     TcglibpExecuteCommand @ 0x140133F84 (TcglibpExecuteCommand.c)
 *     TcglibpReinitRequestResources @ 0x140134228 (TcglibpReinitRequestResources.c)
 *     InitTcgParser @ 0x140136C14 (InitTcgParser.c)
 *     ParseTcgMethodData @ 0x1401370EC (ParseTcgMethodData.c)
 *     ParseTcgReceivedPayload @ 0x140137430 (ParseTcgReceivedPayload.c)
 *     GenCallMethodBegin @ 0x140137C78 (GenCallMethodBegin.c)
 *     GenCallMethodEnd @ 0x140137D20 (GenCallMethodEnd.c)
 *     GenTCGHeaders @ 0x140138330 (GenTCGHeaders.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TcglibpCallMethod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64, __int64 *, __int64),
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 (__fastcall *a9)(__int64, __int64, __int64, __int64),
        __int64 a10)
{
  int *v10; // r12
  __int64 v12; // rax
  __int64 v16; // rdi
  int v17; // eax
  int v18; // r8d
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  const char *v23; // rdx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  const char *v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v31; // [rsp+30h] [rbp-20h]
  __int64 v32; // [rsp+38h] [rbp-18h]
  __int64 v33; // [rsp+40h] [rbp-10h] BYREF
  int v34; // [rsp+48h] [rbp-8h]
  int v35; // [rsp+4Ch] [rbp-4h]
  __int64 v36; // [rsp+90h] [rbp+40h] BYREF
  __int64 v37; // [rsp+98h] [rbp+48h] BYREF

  v10 = *(int **)a1;
  v12 = *(_QWORD *)(a2 + 48);
  v32 = *(_QWORD *)(a2 + 40);
  v37 = 0LL;
  LODWORD(v36) = 0;
  v31 = v12;
  TcglibEalGetCommandPayload(v10, v32, &v37, &v36);
  v35 = 0;
  v33 = v37 + 56;
  v34 = v36 - 56;
  LODWORD(v16) = GenCallMethodBegin(&v33, a3, a4);
  if ( (int)v16 >= 0 )
  {
    if ( !a5 || (LODWORD(v16) = a5(a1, a2, &v33, a6), (int)v16 >= 0) )
    {
      LODWORD(v16) = GenCallMethodEnd(&v33);
      if ( (int)v16 >= 0 )
      {
        v17 = 0;
        v18 = 0;
        if ( a3 != 255 )
        {
          v17 = *(_DWORD *)(a2 + 8);
          v18 = *(_DWORD *)(a2 + 4);
        }
        LODWORD(v16) = GenTCGHeaders(v37, v36, a2, v35, v17, v18);
        if ( (int)v16 >= 0 )
        {
          v20 = TcglibpExecuteCommand(v10, v32, v19, 0LL);
          v16 = v20;
          if ( v20 < 0 )
          {
            v23 = "TcglibpCallMethod-SEND failed";
LABEL_12:
            TcglibEalLogError(*(int **)a1, v23, a3, a4, v16, 0LL);
            goto LABEL_23;
          }
          LOBYTE(v22) = 1;
          v24 = TcglibpExecuteCommand(v10, v31, v21, v22);
          v16 = v24;
          if ( v24 < 0 )
          {
            v23 = "TcglibpCallMethod-RECV failed";
            goto LABEL_12;
          }
          TcglibEalGetCommandPayload(v10, v31, &v37, &v36);
          if ( !(unsigned int)InitTcgParser(a1, v37, (unsigned int)v36) )
          {
            v36 = 0LL;
            v25 = ParseTcgReceivedPayload(a1);
            v16 = v25;
            if ( v25 < 0 )
            {
              v26 = *(unsigned __int8 *)(a1 + 88);
              v27 = "ParseTcgReceivedPayload failed";
              v28 = v16;
            }
            else
            {
              LODWORD(v26) = ParseTcgMethodData(a1, a7, a8, &v36);
              LODWORD(v16) = v26;
              if ( (int)v26 >= 0 )
              {
                if ( a9 )
                {
                  v29 = a9(a1, a2, v36, a10);
                  LODWORD(v16) = v29;
                  if ( v29 < 0 )
                    TcglibEalLogError(*(int **)a1, "TcglibpCallMethod-Parsing data failed", a3, a4, v29, 0LL);
                }
                goto LABEL_22;
              }
              v27 = "ParseTcgMethodData failed";
              v26 = (int)v26;
              v28 = 0LL;
            }
            TcglibEalLogError(*(int **)a1, v27, a3, a4, v26, v28);
          }
LABEL_22:
          _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
        }
      }
    }
  }
LABEL_23:
  TcglibpReinitRequestResources(v10, v32, v31);
  return (unsigned int)v16;
}
