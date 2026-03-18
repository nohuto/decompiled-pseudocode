/*
 * XREFs of ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x14016B4B0
 * Callers:
 *     <none>
 * Callees:
 *     IsPublicPointerDevice @ 0x14016B628 (IsPublicPointerDevice.c)
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x14018E238 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceOpened(CHidInput *this, struct DEVICEINFO *a2, int a3)
{
  unsigned int v3; // ebx
  void *v7; // rbp
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  CTouchProcessor *v11; // rcx

  v3 = 0;
  if ( (*((_DWORD *)a2 + 46) & 0x80u) != 0 )
  {
    v7 = *(void **)a2;
    if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3) + 3256) )
    {
      W32GetUserSessionState(v9, v8, v10);
      CTouchProcessor::OnRimDeviceOpened(v11, v7);
    }
  }
  if ( (unsigned int)IsPublicPointerDevice(a2) )
    return (unsigned int)++*((_DWORD *)this + 332);
  return v3;
}
