/*
 * XREFs of IncPaintCount @ 0x140033748
 * Callers:
 *     InternalInvalidate3 @ 0x140032DB8 (InternalInvalidate3.c)
 * Callees:
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 */

__int64 __fastcall IncPaintCount(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 640);
  result = (unsigned int)(v2 + 1);
  *(_DWORD *)(v1 + 640) = result;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, a1, 15LL);
    return SetWakeBit(v1, 32LL);
  }
  return result;
}
