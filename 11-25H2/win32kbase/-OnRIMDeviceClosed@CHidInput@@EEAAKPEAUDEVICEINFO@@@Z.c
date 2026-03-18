/*
 * XREFs of ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x140135820
 * Callers:
 *     <none>
 * Callees:
 *     IsPublicPointerDevice @ 0x1401358DC (IsPublicPointerDevice.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x140135908 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x140212C18 (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceClosed(CHidInput *this, struct DEVICEINFO *a2)
{
  unsigned int v3; // edi
  __int64 i; // r8
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r9d
  CHidInput *v9; // r10
  void *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax

  v3 = 0;
  for ( i = **((_QWORD **)this + 155); i; i = *(_QWORD *)(v5 + 56) )
  {
    IsPublicPointerDevice(i);
    if ( (struct DEVICEINFO *)v5 == a2 )
      break;
  }
  if ( (unsigned int)IsPublicPointerDevice(a2) )
  {
    v3 = v8 + 1;
    CHidInput::UpdatePointerDeviceCount(v9, 2u);
  }
  if ( (*((_DWORD *)a2 + 46) & 0x80u) != 0 )
  {
    v11 = *(void **)a2;
    if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + 3256) )
    {
      UserSessionState = W32GetUserSessionState(v13, v12);
      CTouchProcessor::OnRimDeviceClosed(*(CTouchProcessor **)(UserSessionState + 3256), v11);
    }
  }
  return v3;
}
