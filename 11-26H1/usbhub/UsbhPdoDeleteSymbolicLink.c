/*
 * XREFs of UsbhPdoDeleteSymbolicLink @ 0x140010C08
 * Callers:
 *     UsbhPdoRemoveCleanup @ 0x140010CF0 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

void __fastcall UsbhPdoDeleteSymbolicLink(__int64 a1)
{
  NTSTATUS v2; // esi
  __int64 v3; // rbx
  NTSTATUS v4; // eax
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx

  v2 = 0;
  v3 = PdoExt(a1);
  if ( (*(_DWORD *)(v3 + 1420) & 8) != 0 )
  {
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 1200), 0);
    v5 = *(void **)(v3 + 1208);
    v2 = v4;
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(v3 + 1208) = 0LL;
    }
    *(_DWORD *)(v3 + 1420) &= ~8u;
  }
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v6 = *(_QWORD *)(v3 + 1184);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 64);
      if ( v7 )
      {
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = *(_DWORD *)(v7 + 884);
        v10 = *(_QWORD *)(v7 + 888);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 1282242931;
        *(_QWORD *)(v11 + v10 + 16) = v2;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 24) = a1;
      }
    }
  }
}
