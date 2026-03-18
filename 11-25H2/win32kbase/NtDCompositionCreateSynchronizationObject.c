/*
 * XREFs of NtDCompositionCreateSynchronizationObject @ 0x140226C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     OpenDwmHandle @ 0x1400579D4 (OpenDwmHandle.c)
 *     DCompositionCreateSynchronizationObject @ 0x140226440 (DCompositionCreateSynchronizationObject.c)
 */

__int64 __fastcall NtDCompositionCreateSynchronizationObject(_QWORD *a1)
{
  int v2; // ebx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v4; // rsi
  __int64 v5; // r9
  unsigned int v6; // edx
  int v8; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  Object = 0LL;
  v2 = DCompositionCreateSynchronizationObject(&Object);
  if ( v2 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v4 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)DefaultConnection + 2));
      v2 = OpenDwmHandle(Object, ExCompositionObjectType, 3u, v5, v8, &Handle);
      ExReleaseResourceLite(v4[2]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v4, v6);
    }
    else
    {
      v2 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  if ( v2 >= 0 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = Handle;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v2;
}
