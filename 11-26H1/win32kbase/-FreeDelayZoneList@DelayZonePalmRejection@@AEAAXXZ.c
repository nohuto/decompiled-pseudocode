/*
 * XREFs of ?FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ @ 0x1401C44D8
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1401C439C (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall DelayZonePalmRejection::FreeDelayZoneList(
        DelayZonePalmRejection *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rdi
  char *v5; // rbx
  char *v6; // rcx
  char **v7; // rax

  v4 = (char *)this + 72;
  v5 = (char *)*((_QWORD *)this + 9);
  while ( v5 != v4 )
  {
    v6 = v5;
    v5 = *(char **)v5;
    if ( *((char **)v5 + 1) != v6 || (v7 = (char **)*((_QWORD *)v6 + 1), *v7 != v6) )
      __fastfail(3u);
    *v7 = v5;
    *((_QWORD *)v5 + 1) = v7;
    GreDeleteFastMutex(v6, a2, a3, a4);
  }
}
