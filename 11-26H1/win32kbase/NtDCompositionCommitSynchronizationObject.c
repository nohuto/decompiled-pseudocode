/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x140228A40
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1401191F0 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1, int a2, int a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v7; // rdi
  __int64 v8; // r8
  PVOID v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( UserIsCurrentProcessDwm((int)a1, a2, a3)
    || (LOBYTE(Object) = 0,
        DestinationString = 0LL,
        RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
        (int)RtlCapabilityCheck(0LL, &DestinationString, &Object) >= 0)
    && (_BYTE)Object )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v5);
    v7 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)DefaultConnection + 2));
      Object = 0LL;
      LOBYTE(v8) = 1;
      v4 = DirectComposition::SynchronizationObject::ResolveHandle(
             a1,
             2LL,
             v8,
             (struct DirectComposition::SynchronizationObject **)&Object);
      if ( v4 >= 0 )
      {
        v9 = Object;
        *((_BYTE *)Object + 33) = 1;
        ObfDereferenceObject(v9);
      }
      ExReleaseResourceLite(v7[2]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v7);
    }
    else
    {
      v4 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v4;
}
