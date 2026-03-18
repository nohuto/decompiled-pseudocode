/*
 * XREFs of ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1400A1B20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1403B6D4C (DxgkSignalSynchronizationObjectInternal.c)
 */

__int64 __fastcall CAdapter::AddSignalToContext(CAdapter *this, unsigned int a2, int a3, __int64 a4)
{
  _QWORD Src[58]; // [rsp+20h] [rbp-1E8h] BYREF

  memset(Src, 0, sizeof(Src));
  Src[0] = a2 | 0x100000000LL;
  LODWORD(Src[1]) = a3;
  Src[50] = a4;
  return DxgkSignalSynchronizationObjectInternal(Src);
}
