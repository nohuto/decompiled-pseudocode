/*
 * XREFs of LdrpLogEtwHotPatchStatus @ 0x18008FFAC
 * Callers:
 *     LdrpFastpthReloadedDll @ 0x18003D2C0 (LdrpFastpthReloadedDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpApplyPatchImage @ 0x1800915AC (LdrpApplyPatchImage.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 *     LdrHotPatchNotify @ 0x18015B7C0 (LdrHotPatchNotify.c)
 *     LdrpLoadPatchImage @ 0x18015BD30 (LdrpLoadPatchImage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 *     RtlStringCbPrintfW @ 0x18011EDB8 (RtlStringCbPrintfW.c)
 *     RtlLogMessageInEventLogger @ 0x180120700 (RtlLogMessageInEventLogger.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

int __fastcall LdrpLogEtwHotPatchStatus(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3, int a4, int a5)
{
  int result; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // r14d
  int v13; // r15d
  unsigned __int16 *v14; // rbx
  unsigned __int16 *v15; // rcx
  int v16; // eax
  unsigned __int16 *v17; // rcx
  _QWORD v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+64h] [rbp-9Ch] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v24; // [rsp+80h] [rbp-80h] BYREF
  _EVENT_DATA_DESCRIPTOR v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  _DWORD *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  _DWORD v35[2]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 v38; // [rsp+110h] [rbp+10h]
  _DWORD v39[2]; // [rsp+118h] [rbp+18h] BYREF
  _DWORD *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  __int64 v42; // [rsp+130h] [rbp+30h]
  _DWORD v43[2]; // [rsp+138h] [rbp+38h] BYREF
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  unsigned __int16 **v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  _QWORD *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  _BYTE v50[512]; // [rsp+170h] [rbp+70h] BYREF

  v22 = a3;
  v18[1] = L"Not found";
  v18[0] = 1310738LL;
  v24 = v50;
  result = RtlRunOnceExecuteOnce(&LibLoaderTelemetryInitRunOnce, LibLoaderTelemetryInitOnce, 0LL, 0LL);
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
    v14 = (unsigned __int16 *)v18;
    v12 = 0;
    v13 = 0;
  }
  if ( (unsigned int)dword_1801C4958 > 5 && (qword_1801C4968 & 0x400000000001LL) != 0 )
  {
    result = qword_1801C4970 & 1;
    if ( (qword_1801C4970 & 0x400000000001LL) == qword_1801C4970 )
    {
      v23 = v11;
      v27 = 8LL;
      v26 = &v23;
      v15 = (unsigned __int16 *)v18;
      if ( v14 )
        v15 = v14;
      v19 = v12;
      v29 = 4LL;
      v28 = &v19;
      v20 = v13;
      v30 = &v20;
      v32 = v35;
      v34 = *((_QWORD *)a1 + 1);
      v35[0] = *a1;
      v36 = v39;
      v38 = *((_QWORD *)v15 + 1);
      v16 = *v15;
      v17 = (unsigned __int16 *)v18;
      v39[0] = v16;
      v31 = 4LL;
      v33 = 2LL;
      if ( v22 )
        v17 = v22;
      v35[1] = 0;
      v37 = 2LL;
      v40 = v43;
      v39[1] = 0;
      v42 = *((_QWORD *)v17 + 1);
      v43[0] = *v17;
      v44 = &v21;
      v46 = &v22;
      v18[0] = 2164260864LL;
      v48 = v18;
      v41 = 2LL;
      v43[1] = 0;
      v21 = a4;
      v45 = 4LL;
      LODWORD(v22) = a5;
      v47 = 4LL;
      v49 = 8LL;
      result = tlgWriteTransfer_EtwEventWriteTransfer(
                 (__int64)&dword_1801C4958,
                 (unsigned __int8 *)dword_18019B361,
                 v9,
                 v10,
                 0xEu,
                 &v25);
    }
  }
  if ( a4 < 0 )
  {
    RtlStringCbPrintfW(
      v50,
      512LL,
      L"Hotpatching failed. BaseAddress: 0x%p, BaseCheckSum: 0x%x, BaseTimeDateStamp 0x%x, ProcessName: %wZ, PID: 0x%I64x,"
       " NtStatus: 0x%x, LoggingLocation: 0x%x",
      v11);
    return RtlLogMessageInEventLogger(1, (unsigned int)&v24, a4, (unsigned int)L"Hotpatch-Loader", 1);
  }
  return result;
}
