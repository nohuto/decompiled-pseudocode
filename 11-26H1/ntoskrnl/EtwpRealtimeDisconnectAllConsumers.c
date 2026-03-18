/*
 * XREFs of EtwpRealtimeDisconnectAllConsumers @ 0x140A1520C
 * Callers:
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 *     EtwpShutdownConsumers @ 0x140A6D194 (EtwpShutdownConsumers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

void __fastcall EtwpRealtimeDisconnectAllConsumers(__int64 a1)
{
  void **v2; // rdi
  void *v3; // rbx
  void **v4; // rax
  struct _KEVENT *v5; // rcx

  v2 = (void **)(a1 + 328);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( *((void ***)v3 + 1) != v2 || (v4 = *(void ***)v3, *(void **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_DWORD *)(a1 + 344);
    v5 = (struct _KEVENT *)*((_QWORD *)v3 + 6);
    *((_BYTE *)v3 + 90) |= 4u;
    KeSetEvent(v5, 0, 0);
    ObfDereferenceObject(v3);
  }
}
