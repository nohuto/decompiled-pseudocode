/*
 * XREFs of EtwpQueryCoverageSamplerInformation @ 0x14093E61C
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     EtwpCoverageSamplerQueryStatusInformation @ 0x1408312D8 (EtwpCoverageSamplerQueryStatusInformation.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     EtwpCoverageSamplerQuery @ 0x14093FBF0 (EtwpCoverageSamplerQuery.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409E78E0 (ExCheckFullProcessInformationAccess.c)
 */

__int64 __fastcall EtwpQueryCoverageSamplerInformation(void *Src, unsigned int a2, KPROCESSOR_MODE a3, _DWORD *a4)
{
  PVOID v8; // rsi
  __int64 v9; // rcx
  int StatusInformation; // ebx
  __int64 v12; // rcx
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
  v9 = (unsigned int)BYTE4(Handle[0]) - 1;
  if ( BYTE4(Handle[0]) == 1 )
  {
    if ( a3 )
    {
      LOBYTE(v9) = a3;
      StatusInformation = ExCheckFullProcessInformationAccess(v9);
      if ( StatusInformation >= 0 )
      {
        Object = 0LL;
        StatusInformation = ObReferenceObjectByHandle(
                              Handle[1],
                              1u,
                              (POBJECT_TYPE)ExpSysDbgLock.OtherTransferCount,
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
  v12 = (unsigned int)BYTE4(Handle[0]) - 3;
  if ( BYTE4(Handle[0]) == 3 )
    goto LABEL_16;
  if ( BYTE4(Handle[0]) != 4 )
  {
    StatusInformation = -1073741821;
    goto LABEL_12;
  }
  if ( !a3 )
    goto LABEL_16;
  LOBYTE(v12) = a3;
  StatusInformation = ExCheckFullProcessInformationAccess(v12);
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
