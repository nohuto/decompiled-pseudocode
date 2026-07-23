/*
 * XREFs of CcDeleteVolumeCacheMap @ 0x1404F3C40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteVolumeCacheMap(volatile signed __int64 *P)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  void *v5; // rcx

  v2 = _InterlockedExchangeAdd64(P + 1, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    _InterlockedDecrement64((volatile signed __int64 *)&EmpParseLock.Timer.TimerListEntry.Blink);
    v5 = (void *)*((_QWORD *)P + 21);
    if ( v5 )
    {
      ObfDereferenceObjectWithTag(v5, 0x746C6644u);
      *((_QWORD *)P + 21) = 0LL;
    }
    ExFreePoolWithTag((PVOID)P, 0x6D566343u);
  }
}
