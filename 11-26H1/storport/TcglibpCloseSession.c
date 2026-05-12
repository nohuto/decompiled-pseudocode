/*
 * XREFs of TcglibpCloseSession @ 0x140136434
 * Callers:
 *     TcglibCloseSession @ 0x140130A70 (TcglibCloseSession.c)
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 * Callees:
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     TcglibEalGetCommandPayload @ 0x14008D290 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     TcglibpExecuteCommand @ 0x140133F84 (TcglibpExecuteCommand.c)
 *     TcglibpReleaseRequestResources @ 0x1401342A0 (TcglibpReleaseRequestResources.c)
 *     InitTcgParser @ 0x140136C14 (InitTcgParser.c)
 *     ParseToken @ 0x1401375C4 (ParseToken.c)
 *     GenTCGHeaders @ 0x140138330 (GenTCGHeaders.c)
 */

__int64 __fastcall TcglibpCloseSession(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  int *v5; // r14
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  int v13; // r9d
  __int64 result; // rax
  __int64 v15; // [rsp+80h] [rbp+48h] BYREF
  __int64 v16; // [rsp+88h] [rbp+50h] BYREF
  __int64 v17; // [rsp+90h] [rbp+58h] BYREF
  __int64 v18; // [rsp+98h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  v3 = *(_QWORD *)(a2 + 48);
  v5 = *(int **)a1;
  v16 = 0LL;
  v7 = 0;
  LODWORD(v15) = 0;
  v18 = v2;
  v17 = v3;
  if ( v2 && v3 )
  {
    TcglibEalGetCommandPayload(v5, v2, &v16, &v15);
    v8 = v16;
    v9 = v15;
    *(_BYTE *)(v16 + 56) = -6;
    v7 = GenTCGHeaders(v8, v9, a2, 1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 4));
    if ( v7 < 0 )
    {
LABEL_19:
      TcglibpReleaseRequestResources(v5, &v18, &v17);
      *(_QWORD *)(a2 + 40) = 0LL;
      *(_QWORD *)(a2 + 48) = 0LL;
      goto LABEL_20;
    }
    v7 = TcglibpExecuteCommand(v5, v2, v10, 0);
    if ( v7 < 0 )
    {
      TcglibEalLogError(*(int **)a1, "CloseSession-SEND failed", v7, *(_DWORD *)(a2 + 8), 0LL, 0LL);
      goto LABEL_19;
    }
    v7 = TcglibpExecuteCommand(v5, v3, v11, 1);
    if ( v7 < 0 )
    {
      TcglibEalLogError(*(int **)a1, "CloseSession-RECV failed", v7, *(_DWORD *)(a2 + 8), 0LL, 0LL);
      goto LABEL_19;
    }
    _InterlockedDecrement(&OpenSessionCount);
    TcglibEalLogCommand(v5, "CloseSession success", *(_DWORD *)(a2 + 8), 0, 0LL, 0LL);
    TcglibEalGetCommandPayload(v5, v3, &v16, &v15);
    if ( !(unsigned int)InitTcgParser(a1, v16, (unsigned int)v15) )
    {
      v15 = 0LL;
      v12 = ParseToken(a1 + 56, &v15);
      if ( v12 >= 0 )
      {
        v13 = *(_DWORD *)(v15 + 8);
        if ( v13 != 3 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0x18u,
              (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
              v13);
          v7 = -1073741435;
          LOBYTE(v12) = -123;
          goto LABEL_17;
        }
      }
      v7 = v12;
      if ( v12 < 0 )
LABEL_17:
        TcglibEalLogError(*(int **)a1, "CloseSession-ParseTcgEndSession failed", v12, 0, 0LL, 0LL);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
    goto LABEL_19;
  }
LABEL_20:
  *(_QWORD *)(a2 + 4) = 0LL;
  result = (unsigned int)v7;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)(a2 + 24) = 0;
  return result;
}
