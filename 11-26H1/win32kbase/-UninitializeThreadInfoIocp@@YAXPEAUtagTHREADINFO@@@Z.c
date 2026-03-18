/*
 * XREFs of ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400BBE90
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall UninitializeThreadInfoIocp(struct tagTHREADINFO *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rbx
  __int64 v5; // r8
  int v6; // ebx
  void *v7; // rcx
  void *v8; // rcx
  bool v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+41h] [rbp+9h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v2 = (void *)*((_QWORD *)a1 + 206);
  if ( v2 )
  {
    ObCloseHandle(v2, 0);
    *((_QWORD *)a1 + 206) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 205);
  if ( v3 )
  {
    ObCloseHandle(v3, 0);
    *((_QWORD *)a1 + 205) = 0LL;
  }
  v4 = (void *)*((_QWORD *)a1 + 203);
  if ( v4 )
  {
    HandleInformation = 0LL;
    Object = 0LL;
    if ( ObReferenceObjectByHandle(v4, 0x1F0003u, 0LL, 1, &Object, &HandleInformation) >= 0 )
    {
      LOBYTE(v5) = 1;
      v10 = 0;
      v9 = (HandleInformation.HandleAttributes & 2) != 0;
      v6 = ObSetHandleAttributes(v4, &v9, v5);
      ObfDereferenceObject(Object);
      if ( v6 >= 0 )
        ObCloseHandle(*((HANDLE *)a1 + 203), 1);
    }
    *((_QWORD *)a1 + 203) = 0LL;
  }
  v7 = (void *)*((_QWORD *)a1 + 202);
  if ( v7 )
  {
    ObCloseHandle(v7, 0);
    *((_QWORD *)a1 + 202) = 0LL;
  }
  v8 = (void *)*((_QWORD *)a1 + 201);
  if ( v8 )
  {
    ObfDereferenceObject(v8);
    *((_QWORD *)a1 + 201) = 0LL;
  }
}
