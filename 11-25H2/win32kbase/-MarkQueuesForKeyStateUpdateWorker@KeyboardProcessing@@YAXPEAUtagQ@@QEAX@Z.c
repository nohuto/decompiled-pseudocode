/*
 * XREFs of ?MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z @ 0x140215B88
 * Callers:
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1401A9CB8 (-ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyboardProcessing::MarkQueuesForKeyStateUpdateWorker(__m128i *this, struct tagQ *a2, void *const a3)
{
  __m128i si128; // xmm0

  if ( this )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        this[14].m128i_i8[(unsigned __int64)*((unsigned __int8 *)a2 + 16) >> 3] |= 1 << (*((_BYTE *)a2 + 16) & 7);
        if ( this != *((__m128i **)a2 + 1) )
          this[25].m128i_i32[3] |= 1u;
      }
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      this[25].m128i_i32[3] |= 1u;
      this[14] = si128;
      this[15] = si128;
    }
  }
}
