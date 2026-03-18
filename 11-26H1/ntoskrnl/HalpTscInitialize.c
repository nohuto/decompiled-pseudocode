/*
 * XREFs of HalpTscInitialize @ 0x1405994A0
 * Callers:
 *     <none>
 * Callees:
 *     HalUpdateTimerCapabilities @ 0x140598090 (HalUpdateTimerCapabilities.c)
 *     HalpTscGetAttributes @ 0x1405992E4 (HalpTscGetAttributes.c)
 */

__int64 __fastcall HalpTscInitialize(__int64 a1)
{
  int v2; // ebx
  char v3; // cl
  char v4; // al
  char v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v2 = 0;
  if ( (int)HalpTscGetAttributes(&v7, &v6, &v8) >= 0 )
  {
    v4 = v6;
    v3 = v7;
  }
  else
  {
    v3 = 0;
    v4 = 0;
  }
  if ( v3 != LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Teb) && !v3 )
  {
    v2 = 0x2000;
    LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Teb) = 0;
  }
  if ( v4 != BYTE1(IommuInterfaceStateChangeCallbackPushLock.Queue) && !v4 )
  {
    v2 |= 0x4000u;
    BYTE1(IommuInterfaceStateChangeCallbackPushLock.Queue) = 0;
  }
  return HalUpdateTimerCapabilities(a1, v2, 0);
}
