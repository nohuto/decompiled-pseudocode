/*
 * XREFs of AMLIFindNameSpaceObject @ 0x14004B3A4
 * Callers:
 *     ACPIIoctlEnumChildren @ 0x140048808 (ACPIIoctlEnumChildren.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     GetBaseObject @ 0x140037400 (GetBaseObject.c)
 *     FindNSObjMainNoLock @ 0x14003F584 (FindNSObjMainNoLock.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall AMLIFindNameSpaceObject(__int64 *a1, __int64 a2, int a3, _BYTE *a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rdi
  unsigned int NSObjMainNoLock; // esi
  __int64 BaseObject; // rax
  __int64 v13; // rbp
  _BYTE *ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  const char *v16; // r8
  void *v17; // rbx
  __int64 v18; // rax
  KIRQL v19; // bl
  _BYTE P[128]; // [rsp+30h] [rbp-C8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( a4[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, a4, v8);
  Pool2[v8] = 0;
  if ( (*(_BYTE *)(*a1 + 64) & 4) != 0 )
  {
    NSObjMainNoLock = -1073741738;
  }
  else
  {
    BaseObject = GetBaseObject(*a1);
    v13 = BaseObject;
    if ( (gDebugger & 8) != 0 )
    {
      ObjectPath = GetObjectPath(BaseObject);
      CurrentThread = KeGetCurrentThread();
      v16 = byte_140075A82;
      v17 = ObjectPath;
      if ( ObjectPath )
        v16 = ObjectPath;
      PrintDebugMessage(0x35u, CurrentThread, v16, 0LL, 0LL);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
    }
    v18 = *(_QWORD *)(a2 + 8);
    *(_WORD *)(a2 + 2) = 2;
    *(_DWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(v18 + 24) = 0;
    *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL) = 2;
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = 0LL;
    v19 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    NSObjMainNoLock = FindNSObjMainNoLock(Pool2, v13, a2, a3);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v19);
    DereferenceObjectEx(v13);
  }
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return NSObjMainNoLock;
}
