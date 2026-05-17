/*
 * XREFs of LdrpLogImportRedirectionTelemetry @ 0x18015D73C
 * Callers:
 *     LdrpInitializeImportRedirection @ 0x18011D004 (LdrpInitializeImportRedirection.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x1800EB8E8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

char __fastcall LdrpLogImportRedirectionTelemetry(__int64 a1)
{
  struct _PEB *v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE v7[32]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD *v8; // [rsp+50h] [rbp+7h]
  __int64 v9; // [rsp+58h] [rbp+Fh]
  __int64 v10; // [rsp+60h] [rbp+17h]
  _DWORD v11[2]; // [rsp+68h] [rbp+1Fh] BYREF
  _DWORD *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  __int64 v14; // [rsp+80h] [rbp+37h]
  _DWORD v15[2]; // [rsp+88h] [rbp+3Fh] BYREF

  v1 = NtCurrentPeb();
  if ( v1->ProcessHeap )
  {
    LOBYTE(v1) = RtlRunOnceExecuteOnce(
                   &LibLoaderTelemetryInitRunOnce,
                   (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))LibLoaderTelemetryInitOnce,
                   0LL,
                   0LL);
    if ( (unsigned int)dword_1801C5958 > 5 )
    {
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1801C5958, 0x200000000000LL);
      if ( (_BYTE)v1 )
      {
        v8 = v11;
        v10 = *(_QWORD *)(a1 + 80);
        v11[0] = *(unsigned __int16 *)(a1 + 72);
        v12 = v15;
        v14 = *(_QWORD *)(LdrpImageEntry + 80);
        v15[0] = *(unsigned __int16 *)(LdrpImageEntry + 72);
        v9 = 2LL;
        v11[1] = 0;
        v13 = 2LL;
        v15[1] = 0;
        LOBYTE(v1) = tlgWriteTransfer_EtwEventWriteTransfer(v3, byte_18019C63B, v4, v5, 6, (__int64)v7);
      }
    }
  }
  return (char)v1;
}
