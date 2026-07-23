/*
 * XREFs of VmRegisterFeatureBitmap @ 0x140821EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     RtlCopyBitMap @ 0x14048CE30 (RtlCopyBitMap.c)
 */

__int64 __fastcall VmRegisterFeatureBitmap(PRTL_BITMAP Source)
{
  unsigned int v2; // edx
  const signed __int64 *Buffer; // r9

  if ( stru_140F06A28.StackBase != (void *)stru_140F06A28.ThreadLock )
    NT_ASSERT("ReadPointerNoFence (&VmpFeaturesBitmap) == VmpFeaturesBitmapEmpty");
  if ( !Source->SizeOfBitMap )
    NT_ASSERT("DriverFeaturesBitmap->SizeOfBitMap != 0");
  v2 = 0;
  do
  {
    Buffer = (const signed __int64 *)Source->Buffer;
    if ( _bittest64(Buffer, v2) )
    {
      if ( v2 < 4 )
      {
        if ( !v2 )
          *(_BYTE *)Buffer &= ~1u;
      }
      else
      {
        *((_BYTE *)Buffer + ((unsigned __int64)v2 >> 3)) &= ~(1 << (v2 & 7));
      }
    }
    ++v2;
  }
  while ( v2 < Source->SizeOfBitMap );
  RtlClearAllBits((PRTL_BITMAP)stru_140F06A28.CycleTime);
  RtlCopyBitMap(Source, (PRTL_BITMAP)stru_140F06A28.CycleTime, 0);
  stru_140F06A28.StackBase = (void *)stru_140F06A28.CycleTime;
  return 0LL;
}
