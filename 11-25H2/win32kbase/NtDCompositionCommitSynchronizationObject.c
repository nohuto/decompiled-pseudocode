/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x140226800
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1400D0A7C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1, __int64 a2)
{
  int v3; // ebx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v5; // rdi
  __int64 v6; // r8
  PVOID v7; // rcx
  unsigned int v8; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( UserIsCurrentProcessDwm((__int64)a1, a2)
    || (LOBYTE(Object) = 0,
        DestinationString = 0LL,
        RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
        (int)RtlCapabilityCheck(0LL, &DestinationString, &Object) >= 0)
    && (_BYTE)Object )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v5 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)DefaultConnection + 2));
      Object = 0LL;
      LOBYTE(v6) = 1;
      v3 = DirectComposition::SynchronizationObject::ResolveHandle(
             a1,
             2LL,
             v6,
             (struct DirectComposition::SynchronizationObject **)&Object);
      if ( v3 >= 0 )
      {
        v7 = Object;
        *((_BYTE *)Object + 33) = 1;
        ObfDereferenceObject(v7);
      }
      ExReleaseResourceLite(v5[2]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v5, v8);
    }
    else
    {
      v3 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v3;
}
