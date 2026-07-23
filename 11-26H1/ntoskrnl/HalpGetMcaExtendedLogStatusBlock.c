/*
 * XREFs of HalpGetMcaExtendedLogStatusBlock @ 0x14057D1E4
 * Callers:
 *     HalpAddMcaExtendedLogToMemoryErrorSection @ 0x14057CDC8 (HalpAddMcaExtendedLogToMemoryErrorSection.c)
 * Callees:
 *     HalpVerifyGenericError @ 0x14057DBC8 (HalpVerifyGenericError.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_DWORD *__fastcall HalpGetMcaExtendedLogStatusBlock(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  struct _LIST_ENTRY *v5; // rdx
  signed __int64 v6; // rdx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v8 = 0;
  if ( HalpMcaExtendedLoggingSupported )
  {
    if ( stru_140E3EAA8.WaitBlock[1].Thread )
    {
      if ( (int)guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 16), &v8) >= 0 )
      {
        v3 = (unsigned int)(*(_DWORD *)(a1 + 36) + v8 * *(_DWORD *)&stru_140E3EAA8.WaitBlockFill11[88]);
        if ( (PVOID)v3 < stru_140E3EAA8.WaitBlock[1].Object )
        {
          _mm_lfence();
          v4 = *(&stru_140E3EAA8.WaitBlock[1].Thread->ThreadLock + v3);
          if ( v4 < 0 )
          {
            v5 = (struct _LIST_ENTRY *)(v4 & 0x7FFFFFFFFFFFFFFFLL);
            if ( v5 >= stru_140E3EAA8.WaitBlock[2].WaitListEntry.Flink
              && &v5[256] <= (struct _LIST_ENTRY *)((char *)stru_140E3EAA8.WaitBlock[2].WaitListEntry.Flink
                                                  + *(_QWORD *)&stru_140E3EAA8.WaitBlockFill11[112]) )
            {
              v6 = (char *)v5 - (char *)stru_140E3EAA8.WaitBlock[2].WaitListEntry.Flink;
              v1 = (_DWORD *)((char *)stru_140E3EAA8.WaitBlock[2].WaitListEntry.Blink + v6);
              if ( !*(_DWORD *)((char *)&stru_140E3EAA8.WaitBlock[2].WaitListEntry.Blink->Flink + v6) )
                return 0LL;
              if ( (int)HalpVerifyGenericError(a1, (char *)stru_140E3EAA8.WaitBlock[2].WaitListEntry.Blink + v6) < 0 )
              {
                *v1 = 0;
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
