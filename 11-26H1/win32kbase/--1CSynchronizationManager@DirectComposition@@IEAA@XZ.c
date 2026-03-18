/*
 * XREFs of ??1CSynchronizationManager@DirectComposition@@IEAA@XZ @ 0x140134D5C
 * Callers:
 *     ??_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z @ 0x140134D34 (--_GCSynchronizationManager@DirectComposition@@IEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x140134DC8 (--_GCSyncData@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CSynchronizationManager::~CSynchronizationManager(
        char **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rcx
  __int64 i; // rdi
  char *v11; // rcx

  v5 = *this;
  if ( v5 )
  {
    ExDeleteResourceLite((PERESOURCE)v5);
    GreDeleteFastMutex(*this, v6, v7, v8);
  }
  v9 = this[1];
  if ( v9 )
    GreDeleteFastMutex(v9, a2, a3, a4);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 5); i = (unsigned int)(i + 1) )
  {
    v11 = this[i + 3];
    if ( v11 )
      DirectComposition::CSyncData::`scalar deleting destructor'(v11, a2);
  }
}
