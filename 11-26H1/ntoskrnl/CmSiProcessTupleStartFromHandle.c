/*
 * XREFs of CmSiProcessTupleStartFromHandle @ 0x1406E7B50
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x14085D3B4 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MmQueryWorkingSetInformation @ 0x1404706D0 (MmQueryWorkingSetInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmSiProcessTupleStartFromHandle(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  int v4; // eax
  PVOID Object; // [rsp+38h] [rbp-19h] BYREF
  _XSAVE_FORMAT *v7; // [rsp+40h] [rbp-11h] BYREF
  _KSCHEDULING_GROUP *v8; // [rsp+48h] [rbp-9h] BYREF
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
    CmpFreezeListLock.ThreadLock = (unsigned __int64)a2;
    CmpFreezeListLock.CycleTime = (volatile unsigned __int64)Object;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v12);
    v7 = 0LL;
    v8 = 0LL;
    LODWORD(Object) = 0;
    v4 = MmQueryWorkingSetInformation(&v11, &v10, &v9, &v7, &v8, &Object);
    if ( v4 >= 0 )
    {
      CmpFreezeListLock.StateSaveArea = v7;
      CmpFreezeListLock.SchedulingGroup = v8;
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
