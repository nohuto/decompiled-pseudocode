/*
 * XREFs of ?PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z @ 0x1401928CC
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14016DC30 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@43AEBU?$_tlgWrapperByVal@$07@@4444@Z @ 0x140006F88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@-.c)
 *     ?InertiaSourceToString@InputTraceLogging@@CAPEBDW4INERTIA_SOURCE@@@Z @ 0x14021947C (-InertiaSourceToString@InputTraceLogging@@CAPEBDW4INERTIA_SOURCE@@@Z.c)
 */

void __fastcall InputTraceLogging::Inertia::PostInertiaMessage(
        __int64 a1,
        const struct INERTIA_INFO_INTERNAL *a2,
        struct tagPOINT a3)
{
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r10d
  const char *v10; // rax
  int v11; // [rsp+70h] [rbp+27h] BYREF
  int v12; // [rsp+74h] [rbp+2Bh] BYREF
  int v13; // [rsp+78h] [rbp+2Fh] BYREF
  int v14; // [rsp+7Ch] [rbp+33h] BYREF
  int v15; // [rsp+80h] [rbp+37h] BYREF
  __int64 v16; // [rsp+88h] [rbp+3Fh] BYREF
  __int64 v17; // [rsp+90h] [rbp+47h] BYREF
  const char *v18; // [rsp+98h] [rbp+4Fh] BYREF
  int v19; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 2) != 0 && (qword_1402A9E58 & 2) == qword_1402A9E58 )
  {
    v3 = *((_DWORD *)a2 + 46);
    v19 = -__CFSHR__(v3, 4);
    v11 = -__CFSHR__(v3, 3);
    v12 = -__CFSHR__(v3, 5);
    v4 = *((_QWORD *)a2 + 15);
    v13 = -__CFSHR__(v3, 2);
    v5 = *((unsigned int *)a2 + 6);
    v16 = v4;
    v17 = InputTraceLogging::InertiaSourceToString(v5);
    v14 = HIDWORD(v6);
    v15 = v6;
    v9 = v8 - 571;
    if ( v9 )
    {
      if ( v9 == 1 )
        v10 = "EndInertia";
      else
        v10 = "UNKNOWN";
    }
    else
    {
      v10 = "StopInertia";
    }
    v18 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1402A9E40,
      (__int64)&unk_14028B428,
      v6,
      v7,
      (void **)&v18,
      (__int64)&v15,
      (__int64)&v14,
      (void **)&v17,
      (__int64)&v16,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v19);
  }
}
