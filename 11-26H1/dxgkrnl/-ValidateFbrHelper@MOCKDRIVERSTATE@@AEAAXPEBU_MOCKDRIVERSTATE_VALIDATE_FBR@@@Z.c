/*
 * XREFs of ?ValidateFbrHelper@MOCKDRIVERSTATE@@AEAAXPEBU_MOCKDRIVERSTATE_VALIDATE_FBR@@@Z @ 0x14007F460
 * Callers:
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x14007F5D4 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall MOCKDRIVERSTATE::ValidateFbrHelper(
        MOCKDRIVERSTATE *this,
        const struct _MOCKDRIVERSTATE_VALIDATE_FBR *a2)
{
  __int64 v2; // r8
  unsigned int v5; // r11d
  __int64 v6; // rdx
  unsigned int v7; // r12d
  __int64 v8; // r8
  __int64 i; // rbx
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-48h]

  v2 = *((_QWORD *)this + 3);
  if ( *(_BYTE *)(v2 + 3109) && !*(_BYTE *)(*((_QWORD *)this + 1) + 8LL) )
  {
    v5 = *(_DWORD *)(v2 + 1896);
    v6 = 0LL;
    v7 = *(_DWORD *)(v2 + 2984);
    while ( (unsigned int)v6 < *(_DWORD *)a2 )
    {
      v8 = 0LL;
LABEL_6:
      if ( (unsigned int)v8 < v5 )
      {
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= v7 )
          {
            v8 = (unsigned int)(v8 + 1);
            goto LABEL_6;
          }
          v10 = (unsigned int)v8;
          v11 = *(_QWORD *)(*(_QWORD *)this + 16 * (i + 10 * v8) + 56);
          if ( v11 )
          {
            if ( *(_QWORD *)(*((_QWORD *)a2 + 1) + 8 * v6) == v11 )
              break;
          }
        }
        WdLogSingleEntry3(2LL, *((_QWORD *)a2 + 2), (unsigned int)v8, (unsigned int)i);
        v13 = *((_QWORD *)a2 + 2);
        WdLogGlobalForLineNumber = 137;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Front buffer rendering detected for dxgprocess:0x%I64x on source:%u, plane:%u",
          v13,
          v10,
          (unsigned int)i,
          0LL,
          0LL);
        *(_QWORD *)(*((_QWORD *)this + 1) + 96LL) = *((_QWORD *)a2 + 2);
        *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) = i;
        *(_BYTE *)(*((_QWORD *)this + 1) + 8LL) = 1;
        v12 = *((_QWORD *)this + 1);
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 3) + 24LL));
        *(_QWORD *)(v12 + 16) = -1LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(*((_QWORD *)this + 1) + 24LL), DelayedWorkQueue);
        return;
      }
      v6 = (unsigned int)(v6 + 1);
    }
  }
}
