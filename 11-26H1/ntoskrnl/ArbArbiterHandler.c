/*
 * XREFs of ArbArbiterHandler @ 0x14078A970
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // eax
  struct _KEVENT *v10; // rcx
  struct _KEVENT *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    if ( a2 != 6 && a2 != 7 )
    {
      if ( a2 == 8 )
        goto LABEL_7;
      if ( a2 != 9 )
        goto LABEL_15;
    }
    goto LABEL_16;
  }
  if ( a2 == 5 )
  {
LABEL_7:
    v8 = -1073741822;
    goto LABEL_22;
  }
  if ( (unsigned int)a2 < 2 )
  {
LABEL_16:
    v9 = guard_dispatch_icall_no_overrides(a1, a3);
    goto LABEL_17;
  }
  if ( a2 != 2 && a2 != 3 )
  {
    if ( a2 == 4 )
      goto LABEL_7;
LABEL_15:
    v8 = -1073741811;
    goto LABEL_22;
  }
  v9 = guard_dispatch_icall_no_overrides(a1, v7);
LABEL_17:
  v8 = v9;
  if ( v9 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v11 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 1;
      KeResetEvent(v11);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v10 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 0;
      KeSetEvent(v10, 0, 0);
    }
  }
LABEL_22:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v8;
}
