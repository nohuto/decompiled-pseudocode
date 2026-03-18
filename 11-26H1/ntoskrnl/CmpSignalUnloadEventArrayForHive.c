/*
 * XREFs of CmpSignalUnloadEventArrayForHive @ 0x1408B9A4C
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpSignalUnloadEventArrayForHive(__int64 a1)
{
  PVOID *v1; // rdi
  __int64 v2; // rbp
  unsigned int v4; // eax

  v1 = (PVOID *)(a1 + 2936);
  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 2928) )
  {
    do
    {
      KeSetEvent(*((PRKEVENT *)*v1 + v2), 0, 0);
      ObfDereferenceObject(*((PVOID *)*v1 + v2));
      v4 = *(_DWORD *)(a1 + 2928);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
    if ( v4 )
      ExFreePoolWithTag(*v1, 0);
  }
}
