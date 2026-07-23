/*
 * XREFs of PnpNotifyHwProfileChange @ 0x140B6D3FC
 * Callers:
 *     PnpRequestHwProfileChangeNotification @ 0x1407A4944 (PnpRequestHwProfileChangeNotification.c)
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x140A1A800 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140A1A8A4 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyHwProfileChange(GUID *Source1, _DWORD *a2, UNICODE_STRING *a3)
{
  int v4; // r14d
  $C4B476A2C3C06CA2C7794EC3358E8686 *Spare32; // rdi
  $C4B476A2C3C06CA2C7794EC3358E8686 *v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  GUID v10; // xmm0
  int v11; // ebx
  $C4B476A2C3C06CA2C7794EC3358E8686 *v12; // rsi
  $C4B476A2C3C06CA2C7794EC3358E8686 *v13; // rbx
  struct _KTHREAD *v14; // rax
  int v16; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v17[20]; // [rsp+28h] [rbp-28h] BYREF

  v16 = 0;
  memset(v17, 0, sizeof(v17));
  v4 = 0;
  ExAcquireFastMutex(&PnpHwProfileNotifyLock);
  Spare32 = ($C4B476A2C3C06CA2C7794EC3358E8686 *)PspSiloMonitorLock.Spare32;
  while ( Spare32 != &PspSiloMonitorLock.1144 )
  {
    ++LOWORD(Spare32[7].Spare32);
    v8 = Spare32;
    KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)Spare32[9].Spare32, 1u);
    if ( BYTE2(Spare32[7].UserAbEntries) )
    {
      ExReleaseResourceLite((PERESOURCE)Spare32[9].Spare32);
      KeLeaveCriticalRegion();
    }
    else
    {
      v10 = *Source1;
      *(_DWORD *)v17 = 1310721;
      *(GUID *)&v17[4] = v10;
      v11 = PnpNotifyDriverCallback((__int64)Spare32, (__int64)v17, &v16);
      ExReleaseResourceLite((PERESOURCE)Spare32[9].Spare32);
      KeLeaveCriticalRegion();
      v4 = v16;
      if ( v11 < 0 )
        v4 = 0;
      v16 = v4;
      if ( v4 < 0
        && (Source1 == &GUID_HWPROFILE_QUERY_CHANGE
         || RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) == 16) )
      {
        if ( a2 )
          *a2 = 7;
        if ( a3 )
        {
          a3->Length = 0;
          RtlCopyUnicodeString(a3, (PCUNICODE_STRING)((char *)Spare32[6].Spare32 + 56));
        }
        *(_WORD *)&v17[2] = 16;
        v12 = Spare32;
        *(GUID *)&v17[4] = GUID_HWPROFILE_CHANGE_CANCELLED;
        ExAcquireFastMutex(&PnpHwProfileNotifyLock);
        do
        {
          ++LOWORD(Spare32[7].Spare32);
          v13 = Spare32;
          KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
          v14 = KeGetCurrentThread();
          --v14->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)Spare32[9].Spare32, 1u);
          if ( !BYTE2(Spare32[7].UserAbEntries) )
            PnpNotifyDriverCallback((__int64)Spare32, (__int64)v17, 0LL);
          ExReleaseResourceLite((PERESOURCE)Spare32[9].Spare32);
          KeLeaveCriticalRegion();
          ExAcquireFastMutex(&PnpHwProfileNotifyLock);
          Spare32 = ($C4B476A2C3C06CA2C7794EC3358E8686 *)Spare32[1].Spare32;
          PnpDereferenceNotify(v13);
          if ( v13 == v12 )
            PnpDereferenceNotify(v13);
        }
        while ( Spare32 != &PspSiloMonitorLock.1144 );
        v4 = v16;
        break;
      }
    }
    ExAcquireFastMutex(&PnpHwProfileNotifyLock);
    Spare32 = ($C4B476A2C3C06CA2C7794EC3358E8686 *)Spare32->Spare32;
    PnpDereferenceNotify(v8);
  }
  KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
  return (unsigned int)v4;
}
