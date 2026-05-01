/*
 * XREFs of ?HampHostTryEnterModsPlmPhase@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E20C
 * Callers:
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18003DFCC (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@433@Z @ 0x180001C88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B1A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180027964 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004394C (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180059D50 (-HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 */

char __fastcall HampHostTryEnterModsPlmPhase(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  unsigned __int64 v5; // r14
  char v6; // di
  struct _HAM_ACTIVITY *FirstActivity; // rsi
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  const wchar_t *v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  const wchar_t *v21; // [rsp+A8h] [rbp+48h] BYREF

  v2 = *(_BYTE *)(a1 + 592) == 0;
  LODWORD(v19) = 0;
  if ( !v2
    || (int)HampHostQueryIsDebugEnabled((struct _RM_HAM_ACTIVITY_HOST *)a1, (unsigned int *)&v19) >= 0 && (_DWORD)v19 )
  {
    return 0;
  }
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  v5 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 792) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                             + 120)
                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned int)HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1) )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    if ( (*(_QWORD *)(a1 + 664) & 0x800000000LL) == 0 )
    {
      FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
      while ( FirstActivity )
      {
        if ( !HampActIsIgnored(FirstActivity) )
        {
          v9 = *((_BYTE *)FirstActivity + 562);
          if ( v9 == 2 || v9 == 3 )
          {
            if ( (*((_DWORD *)FirstActivity + 28) & 0x4000) != 0 )
            {
              v6 = 2;
              if ( (*(_BYTE *)(a1 + 672) & 4) == 0 && a2 >= *(_DWORD *)(v5 + 264) )
              {
                LODWORD(v19) = 0;
                HampHostQueueTerminateEx(a1, 3, 0x800u, 0LL, 1, 0, 0LL, (unsigned int *)&v19);
                v12 = v19;
                if ( (unsigned int)dword_1800E12B0 > 4
                  && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 0x400000000008LL) )
                {
                  v19 = 0x1000000LL;
                  v16 = 32LL;
                  if ( a1 )
                    v16 = a1 - 24;
                  v20 = *(_QWORD *)v16;
                  v21 = (const wchar_t *)(a1 + 24);
                  v17 = (const wchar_t *)((char *)FirstActivity + 124);
                  v18 = *((_QWORD *)FirstActivity + 5);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                    v16,
                    (__int64)&unk_1800CD70A,
                    v14,
                    v15,
                    (__int64)&v18,
                    &v17,
                    &v21,
                    (__int64)&v20,
                    (__int64)&v19);
                }
                goto LABEL_16;
              }
            }
            if ( (*((_BYTE *)FirstActivity + 120) & 4) != 0 )
            {
              v6 = 3;
LABEL_23:
              HampActRequestStopEx(v8, 3LL, 4LL, 0LL, 6912, (*((_DWORD *)FirstActivity + 28) & 0x800) != 0 ? 8 : 4, 0LL);
              goto LABEL_11;
            }
            if ( (*((_BYTE *)FirstActivity + 120) & 8) != 0 )
            {
              v6 = 4;
              if ( a2 >= *(_DWORD *)(v5 + 260) )
                goto LABEL_23;
            }
          }
        }
LABEL_11:
        v10 = *((_QWORD *)FirstActivity + 12);
        v11 = *((_QWORD *)FirstActivity + 10);
        FirstActivity = 0LL;
        if ( v10 != v11 + 608 )
          FirstActivity = (struct _HAM_ACTIVITY *)(v10 - 96);
      }
    }
  }
  v12 = 0;
LABEL_16:
  HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
  if ( v12 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 704));
  return v6;
}
