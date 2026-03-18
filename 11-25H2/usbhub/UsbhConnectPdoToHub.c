/*
 * XREFs of UsbhConnectPdoToHub @ 0x140016048
 * Callers:
 *     UsbhCreatePdo @ 0x140014360 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 */

__int64 __fastcall UsbhConnectPdoToHub(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rax

  *((_QWORD *)PdoExt(a1) + 148) = 0LL;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a2 )
    {
      v4 = *(_QWORD *)(a2 + 64);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
        *(_DWORD *)v5 = 726615120;
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_QWORD *)(v5 + 16) = a1;
        *(_QWORD *)(v5 + 24) = 0LL;
      }
    }
  }
  v6 = PdoExt(a1);
  v6[356] |= 2u;
  *((_QWORD *)PdoExt(a1) + 148) = a2;
  return 0LL;
}
