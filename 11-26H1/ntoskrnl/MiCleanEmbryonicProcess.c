/*
 * XREFs of MiCleanEmbryonicProcess @ 0x140AF4064
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessQuota @ 0x1403C716C (PsReturnProcessQuota.c)
 *     MiGetSharedVm @ 0x140441D90 (MiGetSharedVm.c)
 *     PsDereferenceSession @ 0x140AF4110 (PsDereferenceSession.c)
 */

__int64 __fastcall MiCleanEmbryonicProcess(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r8
  signed __int32 v6; // ebx
  signed __int32 v8; // ecx
  signed __int32 i; // eax

  MiGetSharedVm(a1 + 1024);
  v5 = *(unsigned int *)(v4 + 184);
  v6 = *(_DWORD *)(a1 + 500);
  if ( (v6 & 0x20) != 0 )
  {
    v5 = BYTE3(v5);
    LOBYTE(v5) = v5 & 0x30;
    if ( (_BYTE)v5 == 48 )
      return 0LL;
  }
  else if ( (v6 & 0x800) != 0 )
  {
    if ( (v6 & 0x400) != 0 )
      return 0LL;
    PsReturnProcessQuota((struct _KPROCESS *)a1, v2, *(_QWORD *)(v4 + 120) - 25LL);
    v8 = v6;
    v2 = 4294965247LL;
    for ( i = v6; ; v8 = i )
    {
      v3 = v8 & 0xFFFFF7FF;
      LODWORD(v3) = v3 | 0x400;
      i = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 500), v3, i);
      if ( v6 == i )
        break;
      v6 = i;
    }
    *(_QWORD *)(a1 + 648) = 0LL;
  }
  if ( (v6 & 0x10000) != 0 )
    PsDereferenceSession(v3, v2, v5);
  return 1LL;
}
