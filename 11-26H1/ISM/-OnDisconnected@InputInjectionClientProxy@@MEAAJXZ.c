/*
 * XREFs of ?OnDisconnected@InputInjectionClientProxy@@MEAAJXZ @ 0x1801A1A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E28B8 (-OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputInjectionClientProxy::OnDisconnected(InputInjectionClientProxy *this)
{
  InjectionRawInputProvider *v2; // rbx

  v2 = InjectionRawInputProvider::s_rawInputProvider;
  if ( InjectionRawInputProvider::s_rawInputProvider )
    _InterlockedIncrement((volatile signed __int32 *)InjectionRawInputProvider::s_rawInputProvider + 4);
  if ( *((_BYTE *)this + 56) && (int)InjectionRawInputProvider::OnRemoveDevice(v2, this) >= 0 )
    *((_BYTE *)this + 56) = 0;
  if ( v2 )
    InputContext::Release((InjectionRawInputProvider *)((char *)v2 + 8));
  return 0LL;
}
