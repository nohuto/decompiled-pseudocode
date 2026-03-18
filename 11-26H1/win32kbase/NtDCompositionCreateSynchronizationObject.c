/*
 * XREFs of NtDCompositionCreateSynchronizationObject @ 0x140228E30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     DCompositionCreateSynchronizationObject @ 0x140228680 (DCompositionCreateSynchronizationObject.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtDCompositionCreateSynchronizationObject(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v5; // rdi
  __int64 v6; // r9
  int v8; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  Object = 0LL;
  v2 = DCompositionCreateSynchronizationObject(&Object);
  if ( v2 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v3);
    v5 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)DefaultConnection + 2));
      v2 = OpenDwmHandle(Object, ExCompositionObjectType, 3u, v6, v8, &Handle);
      ExReleaseResourceLite(v5[2]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v5);
    }
    else
    {
      v2 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  if ( v2 >= 0 )
    RtlWriteULong64ToUser(a1, Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v2;
}
