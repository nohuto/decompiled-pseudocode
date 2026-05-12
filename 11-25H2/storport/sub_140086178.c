/*
 * XREFs of sub_140086178 @ 0x140086178
 * Callers:
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 * Callees:
 *     sub_140134250 @ 0x140134250 (sub_140134250.c)
 *     sub_140134334 @ 0x140134334 (sub_140134334.c)
 *     sub_1401345A0 @ 0x1401345A0 (sub_1401345A0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_1401A9C1C @ 0x1401A9C1C (sub_1401A9C1C.c)
 */

void __fastcall sub_140086178(__int64 a1, int a2, union _SLIST_HEADER **a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  NTSTATUS TraceInformation; // eax
  CHAR *v9; // rbx
  void (__fastcall *v10)(_QWORD); // rax
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  unsigned int v15; // r11d
  union _SLIST_HEADER *v16; // rdx
  union _SLIST_HEADER *v17; // rdi
  unsigned int i; // r10d
  __int64 v19; // r8
  union _SLIST_HEADER *v20; // rdi

  if ( a2 > 2003 )
  {
    v11 = a2 - 2004;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1995;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 == 1 )
              _InterlockedExchange((volatile __int32 *)&a3[1][-1], 0);
          }
          else
          {
            v15 = *((_DWORD *)a3 + 2);
            v16 = 0LL;
            v17 = *a3;
            if ( v15 <= 0xF0 )
            {
              for ( i = 0; i < LODWORD(v17[5].Alignment); ++i )
              {
                v19 = *(_QWORD *)(v17[3].Region + 8LL * i);
                if ( !*(_DWORD *)(v19 + 16) && !_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 16), 1, 0) )
                {
                  *(_DWORD *)(v19 + 20) = v15;
                  v16 = (union _SLIST_HEADER *)(v19 + 32);
                  break;
                }
              }
            }
            a3[2] = v16;
          }
        }
        else
        {
          v20 = *a3;
          ExpInterlockedPushEntrySList(*a3 + 4, (PSLIST_ENTRY)&a3[1][-2]);
          if ( KeGetCurrentIrql() <= 2u )
          {
            sub_140134250((PVOID)v20->Region, v20 + 4);
          }
          else
          {
            _InterlockedAdd((volatile signed __int32 *)&v20[5].HeaderX64 + 1, 1u);
            KeInsertQueueDpc((PRKDPC)((char *)&v20[5].HeaderX64 + 8), 0LL, 0LL);
          }
        }
      }
      else
      {
        vDbgPrintExWithPrefix("StorMiniport: ", 0xDu, 0, (PCCH)*a3, (va_list)a3[1]);
      }
    }
    else
    {
      RtlInitUnicodeString((PUNICODE_STRING)*a3, (PCWSTR)a3[1]);
    }
  }
  else
  {
    if ( a2 == 2003 )
    {
      TraceInformation = WmiQueryTraceInformation(
                           *(TRACE_INFORMATION_CLASS *)a3,
                           a3[1],
                           *((_DWORD *)a3 + 4),
                           (PULONG)a3[3],
                           a3[4]);
      goto LABEL_11;
    }
    v4 = a2 - 1000;
    if ( !v4 )
    {
      sub_1401345A0(a3);
      return;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 999;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
            *((_DWORD *)a3 + 3) = IoWMIRegistrationControl((PDEVICE_OBJECT)*a3, *((_DWORD *)a3 + 2));
        }
        else
        {
          sub_140134334(a3);
        }
        return;
      }
      TraceInformation = WmiTraceMessageVa(*a3, *((unsigned int *)a3 + 2), a3[2], *((unsigned __int16 *)a3 + 12), a3[4]);
LABEL_11:
      *((_DWORD *)a3 + 10) = TraceInformation;
      return;
    }
    v9 = (CHAR *)*a3;
    sub_1401A9C1C(*a3);
    v10 = (void (__fastcall *)(_QWORD))*((_QWORD *)v9 + 2);
    if ( v10 )
      v10(*((_QWORD *)v9 + 1));
    ExFreePoolWithTag(v9, 0);
  }
}
