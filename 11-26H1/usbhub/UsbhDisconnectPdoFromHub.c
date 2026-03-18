/*
 * XREFs of UsbhDisconnectPdoFromHub @ 0x140008740
 * Callers:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhDisconnectPdoFromHub(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(PdoExt(a1) + 1184);
  FdoExt(v2, v3, v4, v5);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( v2 )
    {
      v6 = *(_QWORD *)(v2 + 64);
      if ( v6 )
      {
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 880), 0xFFFFFFFF);
        v8 = *(_DWORD *)(v6 + 884);
        v9 = *(_QWORD *)(v6 + 888);
        v10 = 32LL * ((v7 - 1) & v8);
        *(_DWORD *)(v10 + v9) = 760169552;
        *(_QWORD *)(v10 + v9 + 8) = 0LL;
        *(_QWORD *)(v10 + v9 + 16) = a1;
        *(_QWORD *)(v10 + v9 + 24) = v2;
      }
    }
  }
  result = PdoExt(a1);
  *(_QWORD *)(result + 1184) = 0LL;
  return result;
}
