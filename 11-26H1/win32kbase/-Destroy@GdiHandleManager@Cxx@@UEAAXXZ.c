/*
 * XREFs of ?Destroy@GdiHandleManager@Cxx@@UEAAXXZ @ 0x14024B1F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Destroy@GdiHandleEntryDirectory@Cxx@@SAXPEAV12@@Z @ 0x140179558 (-Destroy@GdiHandleEntryDirectory@Cxx@@SAXPEAV12@@Z.c)
 */

void __fastcall Cxx::GdiHandleManager::Destroy(PVOID Buffer, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v5 = (char *)*((_QWORD *)Buffer + 4);
  if ( v5 )
    GreDeleteFastMutex(v5, a2, a3, a4);
  Cxx::GdiHandleEntryDirectory::Destroy(*((char ***)Buffer + 1), a2, a3, a4);
  GreDeleteFastMutex((char *)Buffer, v6, v7, v8);
}
