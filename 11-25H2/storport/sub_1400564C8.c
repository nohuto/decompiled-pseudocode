/*
 * XREFs of sub_1400564C8 @ 0x1400564C8
 * Callers:
 *     sub_14008C28C @ 0x14008C28C (sub_14008C28C.c)
 * Callees:
 *     StorPortFreeDeviceBase @ 0x140073D10 (StorPortFreeDeviceBase.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400564C8(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int v8; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_11;
  if ( a3 && a2 >= a4 )
  {
    memmove(a1, a3, a4);
    return 0LL;
  }
  memset_0(a1, 0, a2);
  if ( a3 )
  {
    if ( a2 >= a4 )
      return 22LL;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  StorPortFreeDeviceBase(0LL, 0LL, 0LL, 0LL, 0LL);
  return v8;
}
