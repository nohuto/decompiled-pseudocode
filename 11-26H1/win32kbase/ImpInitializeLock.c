/*
 * XREFs of ImpInitializeLock @ 0x1400C0380
 * Callers:
 *     ImpInitializeWork @ 0x1400BE40C (ImpInitializeWork.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ImpInitializeLock(struct _ERESOURCE **a1)
{
  struct _ERESOURCE *Pool2; // rax
  struct _ERESOURCE *v3; // rsi
  NTSTATUS v4; // ebx

  if ( *a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1836084809LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    v4 = ExInitializeResourceLite(Pool2);
    if ( v4 < 0 )
    {
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      a1[1] = 0LL;
      *a1 = v3;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
