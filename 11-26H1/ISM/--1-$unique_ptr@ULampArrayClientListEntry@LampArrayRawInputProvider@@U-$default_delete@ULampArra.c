/*
 * XREFs of ??1?$unique_ptr@ULampArrayClientListEntry@LampArrayRawInputProvider@@U?$default_delete@ULampArrayClientListEntry@LampArrayRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800E332C
 * Callers:
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z @ 0x1800E4200 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEA.c)
 * Callees:
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x1800E3760 (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<LampArrayRawInputProvider::LampArrayClientListEntry>::~unique_ptr<LampArrayRawInputProvider::LampArrayClientListEntry>(
        LampArrayRawInputProvider::LampArrayClientListEntry **a1,
        unsigned int a2)
{
  LampArrayRawInputProvider::LampArrayClientListEntry *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'(v2, a2);
  return result;
}
