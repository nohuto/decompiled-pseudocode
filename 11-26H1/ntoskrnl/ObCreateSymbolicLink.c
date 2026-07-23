/*
 * XREFs of ObCreateSymbolicLink @ 0x140AB6B08
 * Callers:
 *     MiCreateMemoryEvent @ 0x140885798 (MiCreateMemoryEvent.c)
 *     IoCreateSymbolicLink2 @ 0x140AB66D0 (IoCreateSymbolicLink2.c)
 *     NtCreateSymbolicLinkObject @ 0x140AB67A0 (NtCreateSymbolicLinkObject.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     ObpGetIntegrityLevel @ 0x140AB6F0C (ObpGetIntegrityLevel.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObCreateSymbolicLink(_QWORD *a1, int a2, __int64 a3, __int64 a4, char a5)
{
  int IntegrityLevel; // esi
  _QWORD *v8; // rdi
  void *Pool2; // rcx
  unsigned __int16 v10; // ax
  void *v11; // rdx
  int v12; // r12d
  __int16 v14; // cx
  unsigned __int16 *v15; // rax
  REGHANDLE v16; // r10
  unsigned int v17; // r9d
  __int64 v18; // rax
  unsigned int v19; // r9d
  ULONGLONG v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rax
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-128h]
  int v27; // [rsp+50h] [rbp-F8h] BYREF
  int v28; // [rsp+58h] [rbp-F0h] BYREF
  PVOID Object[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+78h] [rbp-D0h]
  _QWORD *v32; // [rsp+80h] [rbp-C8h]
  __int64 v33; // [rsp+88h] [rbp-C0h]
  __int64 v34; // [rsp+90h] [rbp-B8h]
  struct _EVENT_DATA_DESCRIPTOR v35[6]; // [rsp+A0h] [rbp-A8h] BYREF

  v31 = a3;
  v27 = a2;
  v32 = a1;
  v28 = a2;
  v33 = a3;
  v34 = a4;
  v30 = 0LL;
  Object[0] = 0LL;
  IntegrityLevel = ObCreateObjectEx(a5, ObpSymbolicLinkObjectType, a3, a5, (__int64)UserData, 40, 0, 0, Object, 0LL);
  if ( IntegrityLevel < 0 )
  {
    v8 = Object[0];
    goto LABEL_24;
  }
  v8 = Object[0];
  *(_QWORD *)Object[0] = MEMORY[0xFFFFF78000000014];
  v8[3] = 0LL;
  if ( (*(_DWORD *)a4 & 1) != 0 )
  {
    *((_DWORD *)v8 + 7) = 16;
    v8[1] = *(_QWORD *)(a4 + 8);
    v8[2] = *(_QWORD *)(a4 + 16);
  }
  else
  {
    if ( a5 )
    {
      *((_WORD *)v8 + 5) = *(_WORD *)(a4 + 10);
    }
    else
    {
      v14 = *(_WORD *)(a4 + 8);
      *((_WORD *)v8 + 5) = v14;
      if ( *(_WORD *)(a4 + 10) > *(_WORD *)(a4 + 8) )
        *((_WORD *)v8 + 5) = v14 + 2;
    }
    *((_WORD *)v8 + 4) = *(_WORD *)(a4 + 8);
    if ( (*(_DWORD *)a4 & 2) != 0 )
      *((_DWORD *)v8 + 7) |= 0x20u;
    if ( *((_WORD *)v8 + 5) )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v8[2] = Pool2;
      if ( Pool2 )
      {
        if ( a5 )
          v10 = *((_WORD *)v8 + 5);
        else
          v10 = *((_WORD *)v8 + 4);
        v11 = *(void **)(a4 + 16);
        if ( a5 )
          RtlCopyFromUser(Pool2, v11, v10);
        else
          RtlCopyVolatileMemory(Pool2, v11, v10);
        goto LABEL_15;
      }
      IntegrityLevel = -1073741801;
LABEL_24:
      v12 = v27;
      goto LABEL_25;
    }
    v8[2] = 0LL;
  }
LABEL_15:
  IntegrityLevel = ObpGetIntegrityLevel(0LL);
  if ( IntegrityLevel < 0 )
    goto LABEL_24;
  if ( RtlIsSandboxedToken(0LL, a5) )
    *((_DWORD *)v8 + 7) |= 2u;
  IntegrityLevel = ObInsertObjectEx((char *)v8, 0LL, v27, 0, 0, 0LL, &v30);
  v8 = 0LL;
  Object[0] = 0LL;
  if ( IntegrityLevel < 0 )
    goto LABEL_24;
  if ( a5 )
    RtlWriteULong64ToUser(v32, v30);
  else
    *v32 = v30;
  v12 = v27;
  IntegrityLevel = 0;
LABEL_25:
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( (*(_DWORD *)a4 & 5) == 0 )
  {
    LODWORD(Object[0]) = IntegrityLevel;
    v15 = *(unsigned __int16 **)(v31 + 16);
    v28 = v12;
    v16 = EtwApiCallsProvRegHandle;
    if ( EtwApiCallsProvRegHandle )
    {
      LOWORD(v27) = 0;
      v17 = 0;
      if ( *((_QWORD *)v15 + 1) )
      {
        v35[0].Ptr = *((_QWORD *)v15 + 1);
        v35[0].Size = *v15;
        v35[0].Reserved = 0;
        v17 = 1;
      }
      v18 = v17;
      v35[v18].Ptr = (ULONGLONG)&v27;
      *(_QWORD *)&v35[v18].Size = 2LL;
      v19 = v17 + 1;
      v20 = *(_QWORD *)(a4 + 16);
      if ( v20 )
      {
        v21 = v19;
        v35[v21].Ptr = v20;
        v35[v21].Size = *(unsigned __int16 *)(a4 + 8);
        *(&v35[0].Reserved + 1 * v21) = 0;
        ++v19;
      }
      v22 = v19;
      v35[v22].Ptr = (ULONGLONG)&v27;
      *(_QWORD *)&v35[v22].Size = 2LL;
      v23 = v19 + 1;
      v24 = v23;
      v35[v24].Ptr = (ULONGLONG)&v28;
      *(_QWORD *)&v35[v24].Size = 4LL;
      v25 = ++v23;
      v35[v25].Ptr = (ULONGLONG)Object;
      *(_QWORD *)&v35[v25].Size = 4LL;
      EtwWrite(v16, &KERNEL_AUDIT_API_CREATESYMBOLICLINKOBJECT, 0LL, v23 + 1, v35);
    }
  }
  return (unsigned int)IntegrityLevel;
}
