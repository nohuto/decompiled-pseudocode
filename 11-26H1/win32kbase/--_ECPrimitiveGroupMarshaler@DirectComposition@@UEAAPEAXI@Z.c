/*
 * XREFs of ??_ECPrimitiveGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140159240
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CPrimitiveGroupMarshaler@DirectComposition@@UEAA@XZ @ 0x1401C39F8 (--1CPrimitiveGroupMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CPrimitiveGroupMarshaler *__fastcall DirectComposition::CPrimitiveGroupMarshaler::`vector deleting destructor'(
        DirectComposition::CPrimitiveGroupMarshaler *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CPrimitiveGroupMarshaler::~CPrimitiveGroupMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
