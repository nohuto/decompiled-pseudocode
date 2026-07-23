/*
 * XREFs of IoWriteDeferredLiveDumpData @ 0x1405CEAAC
 * Callers:
 *     DbgkpWerDeferredWriteRoutine @ 0x14078EE20 (DbgkpWerDeferredWriteRoutine.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IopLiveDumpWriteDumpFile @ 0x140345D88 (IopLiveDumpWriteDumpFile.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpReleaseResources @ 0x1405D3E34 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1405D49D4 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405D4B5C (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1405D4D44 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405DA3E0 (IopLiveDumpTraceNoArgs.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoWriteDeferredLiveDumpData(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  __int64 MillisecondCounter; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-39h] BYREF
  __int64 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+7h]
  __int64 v13; // [rsp+78h] [rbp+Fh]
  __int64 *v14; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]
  __int64 *v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]

  v2 = 0LL;
  IopLiveDumpTraceInterfaceStart(1LL);
  IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_WRITE_DEFERRED_DUMPDATA_TO_FILE_START);
  if ( *(_QWORD *)(a1 + 64) )
  {
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
    v3 = IopLiveDumpWriteDumpFile(a1);
    v2 = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
    IopLiveDumpTraceDumpFileWriteEnd(a1, v2, 1LL, v3);
    if ( (v3 & 0x80000000) == 0 && (*(_BYTE *)(a1 + 80) & 2) != 0 )
      v3 = 261;
  }
  else
  {
    v3 = -1073741816;
  }
  IopLiveDumpTraceInterfaceEnd(a1, 1LL, v3, v2);
  if ( v3 != -1073741816
    && (unsigned int)dword_140E06D90 > 5
    && tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL) )
  {
    v8 = 0x1000000LL;
    v12 = &v8;
    v5 = *(_QWORD *)(a1 + 560);
    v13 = 8LL;
    v15 = 8LL;
    v10 = v2;
    v6 = *(_QWORD *)(v5 + 4000);
    v14 = &v9;
    v16 = &v10;
    v9 = v6;
    v17 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06D90,
      (unsigned __int8 *)word_140047D82,
      (const GUID *)(a1 + 968),
      (const GUID *)(a1 + 952),
      5u,
      &v11);
  }
  EtwActivityIdControl(2u, (LPGUID)(a1 + 952));
  IopLiveDumpReleaseResources(a1);
  ExFreePoolWithTag((PVOID)a1, 0x706D644Cu);
  return v3;
}
