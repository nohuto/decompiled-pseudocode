/*
 * XREFs of PiCreateDriverRedirectedStateKey @ 0x140A12888
 * Callers:
 *     PiCreateServiceStateKey @ 0x140A126EC (PiCreateServiceStateKey.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PiCreateServiceKeyUnderPath @ 0x1407A102C (PiCreateServiceKeyUnderPath.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCreateDriverRedirectedStateKey(UNICODE_STRING *a1, int a2, _QWORD *a3)
{
  HANDLE v4; // rdi
  int PersistedStateLocation; // eax
  __int64 v7; // r8
  int inited; // ebx
  unsigned int v10; // ebx
  void *Pool2; // r14
  int v12; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v15) = a2;
  v4 = 0LL;
  v14 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a1 || !a1->Buffer || a1->Length < 2u || !a3 )
  {
    inited = -1073741811;
    goto LABEL_8;
  }
  LODWORD(v15) = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(L"DriverStatePath", 0LL, 0LL, 0, 0LL, 0, (unsigned int *)&v15);
  inited = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
  {
    inited = -1073741823;
    goto LABEL_8;
  }
  if ( PersistedStateLocation != -2147483643 )
    goto LABEL_7;
  v10 = v15;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    inited = -1073741670;
    goto LABEL_8;
  }
  v12 = RtlGetPersistedStateLocation(L"DriverStatePath", 0LL, 0LL, 0, Pool2, v10, (unsigned int *)&v15);
  inited = v12;
  if ( v12 == -1073741772 )
  {
    inited = -1073741595;
LABEL_23:
    ExFreePoolWithTag(Pool2, 0);
LABEL_7:
    if ( inited < 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( v12 < 0 )
    goto LABEL_23;
  inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
  if ( inited < 0 )
    goto LABEL_23;
LABEL_17:
  inited = PiCreateServiceKeyUnderPath(a1, &DestinationString, v7, &v14);
  if ( inited < 0 )
    v4 = v14;
  else
    *a3 = v14;
LABEL_8:
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)inited;
}
