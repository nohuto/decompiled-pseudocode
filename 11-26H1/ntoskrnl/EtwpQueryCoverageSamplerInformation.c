/*
 * XREFs of EtwpQueryCoverageSamplerInformation @ 0x140A31734
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     EtwpCoverageSamplerQueryStatusInformation @ 0x140837518 (EtwpCoverageSamplerQueryStatusInformation.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409D42F8 (ExCheckFullProcessInformationAccess.c)
 *     EtwpCoverageSamplerQuery @ 0x140A32D00 (EtwpCoverageSamplerQuery.c)
 */

__int64 __fastcall EtwpQueryCoverageSamplerInformation(void *Src, unsigned int a2, char a3, _DWORD *a4)
{
  PVOID v8; // rsi
  int StatusInformation; // ebx
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-40h] BYREF

  v8 = 0LL;
  Object = 0LL;
  *(_OWORD *)Handle = 0LL;
  if ( a2 < 0x10 )
  {
    StatusInformation = -1073741820;
    goto LABEL_12;
  }
  if ( a3 )
    RtlCopyFromUser(Handle, Src, 0x10uLL);
  else
    RtlCopyVolatileMemory(Handle, Src, 0x10uLL);
  if ( BYTE5(Handle[0]) != 0xCF )
    goto LABEL_16;
  if ( BYTE4(Handle[0]) == 1 )
  {
    if ( a3 )
    {
      StatusInformation = ExCheckFullProcessInformationAccess(a3);
      if ( StatusInformation >= 0 )
      {
        Object = 0LL;
        StatusInformation = ObReferenceObjectByHandle(
                              Handle[1],
                              1u,
                              (POBJECT_TYPE)ExpSysDbgLock.KernelWaitTime,
                              a3,
                              &Object,
                              0LL);
        v8 = Object;
        if ( StatusInformation >= 0 )
        {
          StatusInformation = EtwpCoverageSamplerQuery((struct _KTHREAD *)Object);
          if ( StatusInformation >= 0 )
            StatusInformation = 0;
        }
      }
      goto LABEL_12;
    }
LABEL_16:
    StatusInformation = -1073741637;
    goto LABEL_12;
  }
  if ( BYTE4(Handle[0]) == 3 )
    goto LABEL_16;
  if ( BYTE4(Handle[0]) != 4 )
  {
    StatusInformation = -1073741821;
    goto LABEL_12;
  }
  if ( !a3 )
    goto LABEL_16;
  StatusInformation = ExCheckFullProcessInformationAccess(a3);
  if ( StatusInformation >= 0 )
  {
    *a4 = 24;
    if ( a2 >= 0x18 )
      StatusInformation = EtwpCoverageSamplerQueryStatusInformation((_BYTE *)Src + 16);
    else
      StatusInformation = -1073741789;
  }
LABEL_12:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)StatusInformation;
}
