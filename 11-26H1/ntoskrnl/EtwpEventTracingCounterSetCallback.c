/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x140A76390
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpGetNextGuidEntry @ 0x140912280 (EtwpGetNextGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     PcwAddInstance @ 0x140A76640 (PcwAddInstance.c)
 *     ExpPcwDisabledStatus @ 0x140A768D4 (ExpPcwDisabledStatus.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ecx
  struct _PCW_BUFFER *v4; // r13
  struct _LIST_ENTRY *Flink; // rsi
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // r8
  int v8; // edi
  __int64 i; // r14
  unsigned int *v10; // rbx
  unsigned int v11; // edi
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  _QWORD *NextGuidEntry; // rax
  struct _PCW_DATA Data; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-19h] BYREF
  _DWORD v20[3]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v21; // [rsp+64h] [rbp+3h]
  int v22; // [rsp+6Ch] [rbp+Bh]
  __int128 v23; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+80h] [rbp+1Fh]

  v19[0] = 3014700LL;
  v19[1] = L"EventTracingCounterSet";
  result = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v3 = a1 - 2;
  if ( !v3 || v3 == 1 )
  {
    v4 = *(struct _PCW_BUFFER **)(a2 + 24);
    Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
    if ( v7 == 1 )
    {
      v21 = 0LL;
      v16 = 0LL;
      v22 = 0;
      while ( 1 )
      {
        NextGuidEntry = EtwpGetNextGuidEntry((__int64)Flink, v16, 0, v6);
        if ( !NextGuidEntry )
          break;
        if ( *((_DWORD *)NextGuidEntry + 24) )
        {
          if ( (_QWORD *)NextGuidEntry[7] == NextGuidEntry + 7 )
            ++v22;
          else
            LODWORD(v21) = v21 + 1;
        }
        else
        {
          ++HIDWORD(v21);
        }
        v16 = NextGuidEntry;
      }
      v20[0] = HIDWORD(Flink[275].Flink);
      v20[2] = Flink[275].Flink;
      v20[1] = HIDWORD(Flink[274].Blink);
      Data.Data = v20;
      Data.Size = 24;
      if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
      {
        v8 = guard_dispatch_icall_no_overrides((__int64)v4, (__int64)v19);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
      }
      else
      {
        return (unsigned int)ExpPcwDisabledStatus(v15);
      }
    }
    else
    {
      v8 = 0;
      for ( i = 0LL; (unsigned int)i < LODWORD(Flink[1].Flink); i = (unsigned int)(i + 1) )
      {
        v10 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, i, 0);
        if ( v10 )
        {
          v23 = 0LL;
          v24 = 0LL;
          if ( v10[75] == 1 )
            LODWORD(v23) = v10[1] * v10[58];
          else
            DWORD1(v23) = v10[1] * v10[58];
          v11 = 0;
          v12 = KeNumberProcessors_0;
          LODWORD(v24) = v10[60];
          HIDWORD(v24) = v10[86];
          if ( (_DWORD)KeNumberProcessors_0 )
          {
            do
            {
              v13 = *((_QWORD *)v10 + 170);
              if ( v13 == EtwpHostSiloState )
                v14 = *(_QWORD *)(KeGetPrcb(v11) + 35816) + 320LL;
              else
                v14 = *(_QWORD *)(v13 + 4416) + ((unsigned __int64)v11 << 6);
              ++v11;
              *((_QWORD *)&v23 + 1) += *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * i);
            }
            while ( v11 != v12 );
          }
          Data.Size = 24;
          Data.Data = &v23;
          v8 = PcwAddInstance(v4, (PCUNICODE_STRING)(v10 + 34), i, 1u, &Data);
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v10 + 170) + 704LL) + 8LL * *v10),
            1u);
          if ( v8 < 0 )
            break;
        }
      }
    }
    return (unsigned int)v8;
  }
  return result;
}
