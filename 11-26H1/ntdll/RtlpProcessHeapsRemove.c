/*
 * XREFs of RtlpProcessHeapsRemove @ 0x18007E93C
 * Callers:
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

struct _PEB *__fastcall RtlpProcessHeapsRemove(__int64 a1)
{
  struct _PEB *result; // rax
  __int64 v3; // rax
  _QWORD *v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rax

  result = NtCurrentPeb();
  if ( result->ProcessHeap != (void *)a1 )
  {
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
    v3 = 56LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v3 = 392LL;
    v4 = *(_QWORD **)(v3 + a1);
    if ( v4 )
    {
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
        *(_QWORD *)(a1 + 56) = 0LL;
      else
        *(_QWORD *)(a1 + 392) = 0LL;
      RtlFreeHeap_0();
    }
    return (struct _PEB *)RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  }
  return result;
}
