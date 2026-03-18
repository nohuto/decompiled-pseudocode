/*
 * XREFs of ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400DD9EC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ProtectHandle @ 0x1400DDACC (ProtectHandle.c)
 */

void __fastcall UninitializeThreadInfoIocp(struct tagTHREADINFO *a1, __int64 a2)
{
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v3 = (void *)*((_QWORD *)a1 + 206);
  if ( v3 )
  {
    ObCloseHandle(v3, 0);
    *((_QWORD *)a1 + 206) = 0LL;
  }
  v4 = (void *)*((_QWORD *)a1 + 205);
  if ( v4 )
  {
    ObCloseHandle(v4, 0);
    *((_QWORD *)a1 + 205) = 0LL;
  }
  v5 = *((_QWORD *)a1 + 203);
  if ( v5 )
  {
    if ( (int)ProtectHandle(v5, a2, 0LL, 0LL) >= 0 )
      ObCloseHandle(*((HANDLE *)a1 + 203), 1);
    *((_QWORD *)a1 + 203) = 0LL;
  }
  v6 = (void *)*((_QWORD *)a1 + 202);
  if ( v6 )
  {
    ObCloseHandle(v6, 0);
    *((_QWORD *)a1 + 202) = 0LL;
  }
  v7 = (void *)*((_QWORD *)a1 + 201);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *((_QWORD *)a1 + 201) = 0LL;
  }
}
