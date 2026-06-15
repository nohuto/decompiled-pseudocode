/*
 * XREFs of ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x180080B00
 * Callers:
 *     <none>
 * Callees:
 *     VADServerUserSessionChanged @ 0x18001CD2C (VADServerUserSessionChanged.c)
 */

void __fastcall SESSION_EVENT::Invoke(SESSION_EVENT *this)
{
  VADServerUserSessionChanged(*((_DWORD *)this + 2), *((_QWORD *)this + 2));
  MME_SessionChanged();
}
