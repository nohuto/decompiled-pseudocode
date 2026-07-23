/*
 * XREFs of RtlHandleGdsNoOverride @ 0x140C051C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlHandleGdsNoOverride(__int64 a1, int *a2)
{
  int v2; // eax

  if ( *(_DWORD *)a1 )
  {
    if ( *(_BYTE *)(a1 + 4) == 2 )
    {
      v2 = *(_DWORD *)(a1 + 20);
      if ( v2 == 722545 || (unsigned int)(v2 - 722594) <= 1 )
        *a2 = BYTE4(NormalizationListLock.Header.WaitListHead.Blink) & 1;
    }
  }
}
