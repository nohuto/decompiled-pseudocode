/*
 * XREFs of ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x14018E364
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x14016B654 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x14018E238 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 */

bool __fastcall CTouchProcessor::IsTouchDevice(CTouchProcessor *this, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  bool result; // al
  __int64 v5; // rdx
  int v6; // edx

  v2 = a2;
  LOBYTE(a2) = 19;
  v3 = HMValidateHandleNoSecure(v2, a2);
  result = 0;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 456);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 24);
      return v6 == 1 || (unsigned int)(v6 - 2) <= 1 || v6 == 4;
    }
  }
  return result;
}
