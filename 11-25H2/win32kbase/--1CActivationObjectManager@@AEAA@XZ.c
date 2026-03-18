/*
 * XREFs of ??1CActivationObjectManager@@AEAA@XZ @ 0x1401A9A30
 * Callers:
 *     UnInitializeInputComponents @ 0x1400CEE88 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall CActivationObjectManager::~CActivationObjectManager(CActivationObjectManager *this)
{
  char *v1; // rcx

  v1 = (char *)*((_QWORD *)this + 1);
  if ( v1 )
    GreDeleteFastMutex(v1);
}
