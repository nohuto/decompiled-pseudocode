/*
 * XREFs of ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x140135790
 * Callers:
 *     <none>
 * Callees:
 *     IsPublicPointerDevice @ 0x1401358DC (IsPublicPointerDevice.c)
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x14014F858 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x140212C18 (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceOpened(CHidInput *this, struct DEVICEINFO *a2)
{
  unsigned int v2; // ebx
  void *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  CTouchProcessor *v8; // rcx

  v2 = 0;
  if ( (*((_DWORD *)a2 + 46) & 0x80u) != 0 )
  {
    v5 = *(void **)a2;
    if ( *(_QWORD *)(W32GetUserSessionState(this, a2) + 3256) )
    {
      W32GetUserSessionState(v7, v6);
      CTouchProcessor::OnRimDeviceOpened(v8, v5);
    }
  }
  if ( (unsigned int)IsPublicPointerDevice(a2) )
    return CHidInput::UpdatePointerDeviceCount(this, 1u);
  return v2;
}
