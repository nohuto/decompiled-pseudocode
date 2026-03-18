/*
 * XREFs of ?FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ @ 0x1401A0DA8
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1400CF1E8 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall DelayZonePalmRejection::FreeDelayZoneList(DelayZonePalmRejection *this)
{
  char *v1; // rdi
  char *v2; // rbx
  char *v3; // rdx
  char *v4; // rcx
  char **v5; // rax

  v1 = (char *)this + 72;
  v2 = (char *)*((_QWORD *)this + 9);
  while ( v2 != v1 )
  {
    v3 = *(char **)v2;
    v4 = v2;
    v2 = v3;
    if ( *((char **)v3 + 1) != v4 || (v5 = (char **)*((_QWORD *)v4 + 1), *v5 != v4) )
      __fastfail(3u);
    *v5 = v3;
    *((_QWORD *)v3 + 1) = v5;
    GreDeleteFastMutex(v4);
  }
}
