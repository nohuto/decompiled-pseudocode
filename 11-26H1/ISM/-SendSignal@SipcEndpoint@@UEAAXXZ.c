/*
 * XREFs of ?SendSignal@SipcEndpoint@@UEAAXXZ @ 0x1801131C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcEndpoint::SendSignal(SipcEndpoint *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 3);
  if ( v1 )
    SetEvent(v1);
}
