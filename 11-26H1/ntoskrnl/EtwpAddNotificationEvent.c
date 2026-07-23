/*
 * XREFs of EtwpAddNotificationEvent @ 0x140915480
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     EtwpAddDataSource @ 0x1409148C4 (EtwpAddDataSource.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpAddNotificationEvent(void *a1, char a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  volatile signed __int64 *v7; // rcx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 < 0 )
  {
LABEL_8:
    if ( v4 )
      ObfDereferenceObject(v4);
    return v5;
  }
  v6 = EtwpAddDataSource((__int64)KeGetCurrentThread()->ApcState.Process);
  v7 = (volatile signed __int64 *)v6;
  if ( !v6 )
  {
    v5 = -1073741801;
    goto LABEL_8;
  }
  if ( a2 )
    v7 = (volatile signed __int64 *)(v6 + 8);
  if ( _InterlockedCompareExchange64(v7, (signed __int64)v4, 0LL) )
  {
    v5 = -1073740008;
    goto LABEL_8;
  }
  return v5;
}
