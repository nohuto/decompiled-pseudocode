/*
 * XREFs of VmRegisterFeatureBitmap @ 0x14081BCA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearAllBits @ 0x14047EA90 (RtlClearAllBits.c)
 *     RtlCopyBitMap @ 0x140492FF0 (RtlCopyBitMap.c)
 */

__int64 __fastcall VmRegisterFeatureBitmap(__int64 a1)
{
  unsigned int v2; // edx
  const signed __int64 *v3; // r9

  if ( (void *)stru_140F066E8.ThreadLock != stru_140F066E8.StackBase )
    NT_ASSERT("ReadPointerNoFence (&VmpFeaturesBitmap) == VmpFeaturesBitmapEmpty");
  if ( !*(_DWORD *)a1 )
    NT_ASSERT("DriverFeaturesBitmap->SizeOfBitMap != 0");
  v2 = 0;
  do
  {
    v3 = *(const signed __int64 **)(a1 + 8);
    if ( _bittest64(v3, v2) )
    {
      if ( v2 < 4 )
      {
        if ( !v2 )
          *(_BYTE *)v3 &= ~1u;
      }
      else
      {
        *((_BYTE *)v3 + ((unsigned __int64)v2 >> 3)) &= ~(1 << (v2 & 7));
      }
    }
    ++v2;
  }
  while ( v2 < *(_DWORD *)a1 );
  RtlClearAllBits((PRTL_BITMAP)stru_140F066E8.StackLimit);
  RtlCopyBitMap((unsigned int *)a1, (__int64)stru_140F066E8.StackLimit, 0);
  stru_140F066E8.ThreadLock = (unsigned __int64)stru_140F066E8.StackLimit;
  return 0LL;
}
