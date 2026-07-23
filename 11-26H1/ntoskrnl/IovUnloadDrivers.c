/*
 * XREFs of IovUnloadDrivers @ 0x140C26E9C
 * Callers:
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ZwDelayExecution @ 0x140728640 (ZwDelayExecution.c)
 *     ObEnumerateObjectsByType @ 0x1407C6754 (ObEnumerateObjectsByType.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     IovpUnloadDriver @ 0x140C2701C (IovpUnloadDriver.c)
 */

__int64 IovUnloadDrivers()
{
  PVOID *v1; // rbx
  unsigned int v2; // ebp
  PVOID *v3; // rdi
  char v4; // dl
  PVOID *v5; // rdi
  PVOID *v6; // r8
  PVOID *v7; // rsi
  _DWORD *v8; // rcx
  PVOID *v9; // rdi
  PVOID v10; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp+8h] BYREF

  if ( !PopShutdownCleanly )
    return 3221225473LL;
  v1 = 0LL;
  IovDriverListHead = 0LL;
  v2 = ObEnumerateObjectsByType();
  while ( 1 )
  {
    v3 = (PVOID *)IovDriverListHead;
    if ( !IovDriverListHead )
      break;
    IovDriverListHead = *(PVOID *)IovDriverListHead;
    if ( (unsigned int)IovpUnloadDriver(v3[1]) == 259 )
    {
      *v3 = v1;
      v1 = v3;
    }
    else
    {
      ObfDereferenceObject(v3[1]);
      ExFreePoolWithTag(v3, 0);
    }
  }
  while ( 1 )
  {
    v4 = 0;
    v5 = 0LL;
    while ( 1 )
    {
      v6 = v1;
      v7 = v1;
      if ( !v1 )
        break;
      v8 = v1[1];
      v1 = (PVOID *)*v1;
      if ( (v8[4] & 1) != 0 )
      {
        ObfDereferenceObject(v8);
        ExFreePoolWithTag(v7, 0);
        v4 = 1;
      }
      else
      {
        *v6 = v5;
        v5 = v7;
      }
    }
    if ( !v4 )
      break;
    DelayInterval.QuadPart = -100000000LL;
    ZwDelayExecution(0, &DelayInterval);
    v1 = v5;
    if ( !v5 )
      goto LABEL_17;
  }
  v1 = v5;
LABEL_17:
  while ( 1 )
  {
    v9 = v1;
    if ( !v1 )
      break;
    v10 = v1[1];
    v1 = (PVOID *)*v1;
    ObfDereferenceObject(v10);
    ExFreePoolWithTag(v9, 0);
  }
  return v2;
}
