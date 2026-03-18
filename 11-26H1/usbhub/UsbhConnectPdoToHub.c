/*
 * XREFs of UsbhConnectPdoToHub @ 0x14000EB98
 * Callers:
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

__int64 __fastcall UsbhConnectPdoToHub(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  signed __int32 v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax

  *(_QWORD *)(PdoExt(a1) + 1184) = 0LL;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a2 )
    {
      v4 = *(_QWORD *)(a2 + 64);
      if ( v4 )
      {
        v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 880), 0xFFFFFFFF);
        v6 = *(_DWORD *)(v4 + 884);
        v7 = *(_QWORD *)(v4 + 888);
        v8 = 32LL * ((v5 - 1) & v6);
        *(_DWORD *)(v8 + v7) = 726615120;
        *(_QWORD *)(v8 + v7 + 8) = 0LL;
        *(_QWORD *)(v8 + v7 + 16) = a1;
        *(_QWORD *)(v8 + v7 + 24) = 0LL;
      }
    }
  }
  v9 = PdoExt(a1);
  *(_DWORD *)(v9 + 1424) |= 2u;
  *(_QWORD *)(PdoExt(a1) + 1184) = a2;
  return 0LL;
}
