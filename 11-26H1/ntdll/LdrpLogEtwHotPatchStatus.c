/*
 * XREFs of LdrpLogEtwHotPatchStatus @ 0x18006FB5C
 * Callers:
 *     LdrpFastpthReloadedDll @ 0x180052D40 (LdrpFastpthReloadedDll.c)
 *     LdrpApplyPatchImage @ 0x18007115C (LdrpApplyPatchImage.c)
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     LdrHotPatchNotify @ 0x18015B900 (LdrHotPatchNotify.c)
 *     LdrpLoadPatchImage @ 0x18015BE70 (LdrpLoadPatchImage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     RtlStringCbPrintfW @ 0x18011F008 (RtlStringCbPrintfW.c)
 *     RtlLogMessageInEventLogger @ 0x180120950 (RtlLogMessageInEventLogger.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLogEtwHotPatchStatus(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3, int a4, int a5)
{
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // r14d
  int v13; // r15d
  unsigned __int16 *v14; // rbx
  unsigned __int16 *v15; // rcx
  int v16; // eax
  unsigned __int16 *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+28h] [rbp-D8h]
  int v20; // [rsp+40h] [rbp-C0h]
  _QWORD v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+64h] [rbp-9Ch] BYREF
  int v25; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v28; // [rsp+80h] [rbp-80h] BYREF
  char v29[32]; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  int *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  int *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  _DWORD *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  __int64 v38; // [rsp+F0h] [rbp-10h]
  _DWORD v39[2]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  __int64 v42; // [rsp+110h] [rbp+10h]
  _DWORD v43[2]; // [rsp+118h] [rbp+18h] BYREF
  _DWORD *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  __int64 v46; // [rsp+130h] [rbp+30h]
  _DWORD v47[2]; // [rsp+138h] [rbp+38h] BYREF
  int *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  unsigned __int16 **v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  _QWORD *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  _BYTE v54[512]; // [rsp+170h] [rbp+70h] BYREF

  v26 = a3;
  v22[1] = L"Not found";
  v22[0] = 1310738LL;
  v28 = v54;
  result = RtlRunOnceExecuteOnce(
             &LibLoaderTelemetryInitRunOnce,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))LibLoaderTelemetryInitOnce,
             0LL,
             0LL);
  if ( a2 )
  {
    v11 = *(_QWORD *)(a2 + 48);
    v12 = *(_DWORD *)(a2 + 288);
    v13 = *(_DWORD *)(a2 + 128);
    v14 = (unsigned __int16 *)(a2 + 88);
  }
  else
  {
    v11 = 0LL;
    v14 = (unsigned __int16 *)v22;
    v12 = 0;
    v13 = 0;
  }
  if ( (unsigned int)dword_1801C5958 > 5 && (qword_1801C5968 & 0x400000000001LL) != 0 )
  {
    result = qword_1801C5970 & 0x400000000001LL;
    if ( (qword_1801C5970 & 0x400000000001LL) == qword_1801C5970 )
    {
      v27 = v11;
      v31 = 8LL;
      v30 = &v27;
      v15 = (unsigned __int16 *)v22;
      if ( v14 )
        v15 = v14;
      v23 = v12;
      v33 = 4LL;
      v32 = &v23;
      v24 = v13;
      v34 = &v24;
      v36 = v39;
      v38 = *((_QWORD *)a1 + 1);
      v39[0] = *a1;
      v40 = v43;
      v42 = *((_QWORD *)v15 + 1);
      v16 = *v15;
      v17 = (unsigned __int16 *)v22;
      v43[0] = v16;
      v35 = 4LL;
      v37 = 2LL;
      if ( v26 )
        v17 = v26;
      v39[1] = 0;
      v41 = 2LL;
      v44 = v47;
      v43[1] = 0;
      v46 = *((_QWORD *)v17 + 1);
      v47[0] = *v17;
      v48 = &v25;
      v50 = &v26;
      v22[0] = 2164260864LL;
      v52 = v22;
      v45 = 2LL;
      v47[1] = 0;
      v25 = a4;
      v49 = 4LL;
      LODWORD(v26) = a5;
      v51 = 4LL;
      v53 = 8LL;
      result = tlgWriteTransfer_EtwEventWriteTransfer(
                 (__int64)&dword_1801C5958,
                 byte_18019C349,
                 v9,
                 v10,
                 14,
                 (__int64)v29);
    }
  }
  if ( a4 < 0 )
  {
    v20 = a4;
    LODWORD(v19) = v13;
    LODWORD(v18) = v12;
    RtlStringCbPrintfW(
      v54,
      512LL,
      L"Hotpatching failed. BaseAddress: 0x%p, BaseCheckSum: 0x%x, BaseTimeDateStamp 0x%x, ProcessName: %wZ, PID: 0x%I64x,"
       " NtStatus: 0x%x, LoggingLocation: 0x%x",
      v11,
      v18,
      v19,
      a1,
      NtCurrentTeb()->ClientId.UniqueProcess,
      v20,
      a5);
    return RtlLogMessageInEventLogger(1, (unsigned int)&v28, a4, (unsigned int)L"Hotpatch-Loader", 1);
  }
  return result;
}
