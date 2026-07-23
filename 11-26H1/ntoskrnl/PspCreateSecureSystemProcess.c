/*
 * XREFs of PspCreateSecureSystemProcess @ 0x140CDE3BC
 * Callers:
 *     PspInitPhase1 @ 0x140CDE4AC (PspInitPhase1.c)
 * Callees:
 *     strcpy_s @ 0x14053EAD0 (strcpy_s.c)
 *     VslRegisterSecureSystemProcess @ 0x1405C6414 (VslRegisterSecureSystemProcess.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

bool PspCreateSecureSystemProcess()
{
  char v0; // r9
  NTSTATUS v1; // eax
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  if ( !VslVsmEnabled )
    return 1;
  v0 = BYTE2(PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1]);
  Handle = 0LL;
  if ( (int)PsCreateMinimalProcess(
              (__int64)PsInitialSystemProcess,
              0LL,
              0LL,
              v0,
              0LL,
              0,
              0,
              0LL,
              0LL,
              0LL,
              0LL,
              &Handle) < 0 )
    return 0;
  Object = 0LL;
  v1 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  PsSecureSystemProcess = (ULONG_PTR)Object;
  if ( v1 < 0 )
    return 0;
  strcpy_s((char *)Object + 824, 0xFuLL, "Secure System");
  return (int)VslRegisterSecureSystemProcess() >= 0;
}
