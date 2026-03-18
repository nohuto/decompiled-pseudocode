/*
 * XREFs of ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x140196CFC
 * Callers:
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140178390 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401DA6F4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1400D6810 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1400EB994 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140249A7C (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14024A3B8 (-CitpResetTracking@@YAJXZ.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

void __fastcall CitEtwEnableCallback(const struct _GUID *a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  unsigned __int64 v10; // rdi
  __int128 Buf1; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 18952);
  if ( v5 )
  {
    if ( *(_BYTE *)v5 )
    {
      if ( !*(_BYTE *)(v5 + 1) && a2 == 2048 )
      {
        if ( a1 )
        {
          Buf1 = (__int128)*a1;
          v6 = WORD2(Buf1);
          WORD2(Buf1) = 0;
          LODWORD(Buf1) = 0;
          if ( !memcmp(&Buf1, &CitControlGuid, 0x10uLL) && CitIsEnabled(v8, v7, v9) )
          {
            v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            switch ( v6 )
            {
              case 1:
                CitpContextFlush(*(struct _CIT_IMPACT_CONTEXT **)(v5 + 32), v10);
                break;
              case 2:
                CitpSetForegroundProcess(*(struct _CIT_IMPACT_CONTEXT **)(v5 + 32), v10, 0LL, 0LL);
                CitpContextReinitialize(*(struct _CIT_IMPACT_CONTEXT **)(v5 + 32), v10);
                break;
              case 12:
                CitpResetTracking();
                break;
              case 13:
                CitpInteractionSummariesFlush(*(struct _CIT_IMPACT_CONTEXT **)(v5 + 32), 0);
                break;
            }
          }
        }
      }
    }
  }
}
