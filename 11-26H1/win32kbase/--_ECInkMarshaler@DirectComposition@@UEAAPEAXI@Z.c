/*
 * XREFs of ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022A9A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140128F7C (--1CInkMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInkMarshaler *__fastcall DirectComposition::CInkMarshaler::`vector deleting destructor'(
        DirectComposition::CInkMarshaler *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CInkMarshaler::~CInkMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
