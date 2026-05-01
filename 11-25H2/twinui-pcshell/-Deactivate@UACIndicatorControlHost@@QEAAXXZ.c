/*
 * XREFs of ?Deactivate@UACIndicatorControlHost@@QEAAXXZ @ 0x18065EA8C
 * Callers:
 *     _dynamic_atexit_destructor_for__g_uacIndicatorControlHost___0 @ 0x180285260 (_dynamic_atexit_destructor_for__g_uacIndicatorControlHost___0.c)
 * Callees:
 *     <none>
 */

void __fastcall UACIndicatorControlHost::Deactivate(UACIndicatorControlHost *this)
{
  if ( *((_QWORD *)this + 1) )
  {
    PostThreadMessageW(*((_DWORD *)this + 4), 0x12u, 0LL, 0LL);
    WaitForSingleObject(*((HANDLE *)this + 1), 0x1388u);
    *((_QWORD *)this + 1) = 0LL;
  }
}
