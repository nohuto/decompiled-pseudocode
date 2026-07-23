/*
 * XREFs of PspSelectSessionAttachProcess @ 0x140A838E8
 * Callers:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     PsGetNextSession @ 0x140A837F0 (PsGetNextSession.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     MmProcessAttachAllowed @ 0x14048041C (MmProcessAttachAllowed.c)
 */

_QWORD *__fastcall PspSelectSessionAttachProcess(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rdi
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 120) && (*(_DWORD *)(a1 + 4) & 2) == 0 )
  {
    v1 = (_QWORD *)(a1 + 16);
    for ( i = *(_QWORD **)(a1 + 16); i != v1; i = (_QWORD *)*i )
    {
      if ( (*((_DWORD *)i + 363) & 8) == 0
        && (*((_DWORD *)i - 15) & 0xC00u) >= 0xC00
        && MmProcessAttachAllowed((__int64)(i - 70))
        && ObReferenceObjectSafeWithTag(v3, 0x79517350u) )
      {
        return i - 70;
      }
    }
  }
  return 0LL;
}
