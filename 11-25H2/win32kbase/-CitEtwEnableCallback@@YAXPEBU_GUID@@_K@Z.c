/*
 * XREFs of ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023FB58
 * Callers:
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140140BD8 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     _lambda_96b8056d46963c03c201fa3bdebf14cf_::operator() @ 0x1401B75B0 (_lambda_96b8056d46963c03c201fa3bdebf14cf_--operator().c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x14007C5C0 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140156A6C (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x14023FD10 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x140240788 (-CitpResetTracking@@YAJXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CitEtwEnableCallback(const struct _GUID *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // esi
  unsigned __int64 v8; // rdi
  struct _GUID v9; // [rsp+20h] [rbp-28h]

  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  if ( v6 )
  {
    if ( *(_BYTE *)v6 )
    {
      if ( !*(_BYTE *)(v6 + 1) && a2 == 2048 )
      {
        if ( a1 )
        {
          v9 = *a1;
          v7 = (unsigned __int16)WORD2(*(_QWORD *)&a1->Data1);
          v9.Data2 = 0;
          v9.Data1 = 0;
          if ( *(_OWORD *)&v9 == *(_OWORD *)&CitControlGuid && CitIsEnabled(v5, v4) )
          {
            v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            switch ( v7 )
            {
              case 1:
                CitpContextFlush(*(struct _CIT_IMPACT_CONTEXT **)(v6 + 32), (unsigned int)v8);
                break;
              case 2:
                CitpSetForegroundProcess(*(struct _CIT_IMPACT_CONTEXT **)(v6 + 32), (unsigned int)v8, 0LL, 0LL);
                CitpContextReinitialize(*(struct _CIT_IMPACT_CONTEXT **)(v6 + 32), v8);
                break;
              case 12:
                CitpResetTracking();
                break;
              case 13:
                CitpInteractionSummariesFlush(*(struct _CIT_IMPACT_CONTEXT **)(v6 + 32), 0);
                break;
            }
          }
        }
      }
    }
  }
}
