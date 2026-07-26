/*
 * XREFs of ?ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140013DB0
 * Callers:
 *     ndisPktMonFilterRegister @ 0x140166B30 (ndisPktMonFilterRegister.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 */

bool __fastcall ndisReferenceRef(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  int v4; // edi
  KIRQL v5; // si
  unsigned __int16 v6; // cx

  v4 = 1;
  v5 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( !*((_BYTE *)SpinLock + 10) )
  {
    v6 = *((_WORD *)SpinLock + 4);
    if ( v6 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v4 = 2;
    }
    else
    {
      *((_WORD *)SpinLock + 4) = v6 + 1;
      NdisReferenceWithTag(SpinLock[2], a2);
      v4 = 0;
    }
  }
  KeReleaseSpinLock(SpinLock, v5);
  return v4 == 0;
}
