/*
 * XREFs of ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x14022CB60
 * Callers:
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 *     DxgkEngGetRemoteDeviceCount @ 0x1403265E0 (DxgkEngGetRemoteDeviceCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetRemoteDeviceCount(Gre::Base *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  bool v3; // zf
  unsigned int v4; // ecx

  v1 = 0;
  v2 = *((_QWORD *)Gre::Base::Globals(a1) + 137);
  while ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 160) & 0x4000000) == 0;
    v4 = v1 + 1;
    v2 = *(_QWORD *)(v2 + 128);
    if ( v3 )
      v4 = v1;
    v1 = v4;
  }
  return v1;
}
