/*
 * XREFs of UsbhDisconnectPdoFromHub @ 0x140010078
 * Callers:
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

_DWORD *__fastcall UsbhDisconnectPdoFromHub(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *result; // rax

  v2 = *((_QWORD *)PdoExt(a1) + 148);
  FdoExt(v2);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 64);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_DWORD *)v4 = 760169552;
        *(_QWORD *)(v4 + 16) = a1;
        *(_QWORD *)(v4 + 24) = v2;
      }
    }
  }
  result = PdoExt(a1);
  *((_QWORD *)result + 148) = 0LL;
  return result;
}
