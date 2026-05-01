/*
 * XREFs of ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007C89C
 * Callers:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004394C (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 * Callees:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180012D50 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003F124 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800416FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043ACC (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18007CC58 (-HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampActCheckSetExpiration(struct _HAM_ACTIVITY *a1, unsigned int a2)
{
  bool v2; // zf
  char v5; // al
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  struct _RM_HAM_ACTIVITY_HOST *v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v22; // [rsp+90h] [rbp+50h] BYREF
  __int64 v23; // [rsp+98h] [rbp+58h] BYREF

  v2 = (*((_BYTE *)a1 + 552) & 0x40) == 0;
  v22 = 0LL;
  v21 = 0;
  if ( v2 )
  {
    v5 = *((_BYTE *)a1 + 562);
    if ( v5 == 2 || v5 == 3 )
    {
      v6 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      LODWORD(v7) = -1;
      if ( a2 )
      {
        do
        {
          _BitScanForward((unsigned int *)&v8, a2);
          v9 = ~(1 << v8);
          v10 = *(_DWORD *)(v6 + 4 * v8 + 456);
          if ( (unsigned int)v7 < v10 )
            v10 = v7;
          v7 = v10;
          a2 &= v9;
        }
        while ( a2 );
        if ( v10 != -1 )
        {
          v11 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
          if ( !v10 )
          {
            HampActCancelExpirationTimer(a1);
LABEL_11:
            HampActMarkExpired(a1);
            HampHostUpdateActivityState(v11);
            HampHostCheckQueueDependencyWorker(v11);
            return;
          }
          v12 = 10000LL * v10;
          RtlQueryUnbiasedInterruptTime(&v22);
          v13 = -1LL;
          v14 = *((_QWORD *)a1 + 68);
          if ( 10000 * v7 + v22 >= v22 )
            v13 = v12 + v22;
          if ( !v14 || v13 < v14 )
          {
            HampActCancelExpirationTimer(a1);
            if ( (int)TpAllocTimer((char *)a1 + 536, HampActExpirationTimerCallback, a1, 0LL) < 0 )
            {
              if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
              {
                v23 = *((_QWORD *)a1 + 5);
                v21 = v15;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  (__int64)&dword_1800E12B0,
                  byte_1800CFFA4,
                  v15,
                  v16,
                  (__int64)&v21,
                  (__int64)&v23);
              }
              *((_QWORD *)a1 + 68) = 0LL;
              goto LABEL_11;
            }
            if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
              __fastfail(0xEu);
            v17 = *((_QWORD *)a1 + 67);
            v20 = -10000 * v7;
            TpSetTimer(v17, &v20, 0LL, 0LL);
            *((_QWORD *)a1 + 68) = v13;
            if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
            {
              v23 = *((_QWORD *)a1 + 5);
              v21 = v7;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                (__int64)&dword_1800E12B0,
                byte_1800CFCEC,
                v18,
                v19,
                (__int64)&v23,
                (__int64)&v21);
            }
          }
        }
      }
    }
  }
}
