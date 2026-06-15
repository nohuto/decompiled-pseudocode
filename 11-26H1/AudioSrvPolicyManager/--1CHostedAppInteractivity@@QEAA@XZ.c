/*
 * XREFs of ??1CHostedAppInteractivity@@QEAA@XZ @ 0x18002049C
 * Callers:
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180020470 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHostedAppInteractivity::~CHostedAppInteractivity(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *this = 0LL;
  }
}
