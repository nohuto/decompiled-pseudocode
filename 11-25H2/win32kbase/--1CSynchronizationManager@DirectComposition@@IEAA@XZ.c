/*
 * XREFs of ??1CSynchronizationManager@DirectComposition@@IEAA@XZ @ 0x140144BFC
 * Callers:
 *     ??_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z @ 0x140144BD4 (--_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x140144C68 (--_GCSyncData@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CSynchronizationManager::~CSynchronizationManager(char **this, unsigned int a2)
{
  char *v3; // rcx
  char *v4; // rcx
  __int64 i; // rdi
  char *v6; // rcx

  v3 = *this;
  if ( v3 )
  {
    ExDeleteResourceLite((PERESOURCE)v3);
    GreDeleteFastMutex(*this);
  }
  v4 = this[1];
  if ( v4 )
    GreDeleteFastMutex(v4);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 5); i = (unsigned int)(i + 1) )
  {
    v6 = this[i + 3];
    if ( v6 )
      DirectComposition::CSyncData::`scalar deleting destructor'(v6, a2);
  }
}
