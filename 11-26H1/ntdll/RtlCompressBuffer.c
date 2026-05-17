/*
 * XREFs of RtlCompressBuffer @ 0x1800ED650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlCompressBuffer(unsigned __int16 a1)
{
  if ( !(_BYTE)a1 || (unsigned __int8)a1 == 1 )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 8u )
    return 3221226079LL;
  return ((__int64 (__fastcall *)(_QWORD))RtlCompressBufferProcs[(unsigned __int8)a1])(a1 & 0xFF00);
}
