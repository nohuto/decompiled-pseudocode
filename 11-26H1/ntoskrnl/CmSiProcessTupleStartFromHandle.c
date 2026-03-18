/*
 * XREFs of CmSiProcessTupleStartFromHandle @ 0x1406E2EA4
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140857024 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MmQueryWorkingSetInformation @ 0x140476F50 (MmQueryWorkingSetInformation.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmSiProcessTupleStartFromHandle(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  int v4; // eax
  PVOID Object; // [rsp+38h] [rbp-19h] BYREF
  struct _LIST_ENTRY *v7; // [rsp+40h] [rbp-11h] BYREF
  _ULARGE_INTEGER v8; // [rsp+48h] [rbp-9h] BYREF
  __int64 v9; // [rsp+50h] [rbp-1h] BYREF
  __int64 v10; // [rsp+58h] [rbp+7h] BYREF
  __int64 v11; // [rsp+60h] [rbp+Fh] BYREF
  _OWORD v12[3]; // [rsp+68h] [rbp+17h] BYREF

  Object = 0LL;
  memset(v12, 0, sizeof(v12));
  v3 = ObReferenceObjectByHandle(a2, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
  if ( v3 < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    CmpFreezeListLock.Teb = a2;
    CmpFreezeListLock.RelativeTimerBias = (unsigned __int64)Object;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v12);
    v7 = 0LL;
    v8.QuadPart = 0LL;
    LODWORD(Object) = 0;
    v4 = MmQueryWorkingSetInformation(&v11, &v10, &v9, &v7, &v8, &Object);
    if ( v4 >= 0 )
    {
      CmpFreezeListLock.Timer.Header.WaitListHead.Blink = v7;
      CmpFreezeListLock.Timer.DueTime = v8;
    }
    v3 = 0;
    if ( v4 < 0 )
      v3 = v4;
    KiUnstackDetachProcess((__int64)v12, 0);
    if ( v3 >= 0 )
      return 0;
  }
  return (unsigned int)v3;
}
