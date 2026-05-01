/*
 * XREFs of ??_ECSimpleTempAppVisual@@UEAAPEAXI@Z @ 0x180525730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1CSimpleTempAppVisual@@UEAA@XZ @ 0x180525708 (--1CSimpleTempAppVisual@@UEAA@XZ.c)
 */

CSimpleTempAppVisual *__fastcall CSimpleTempAppVisual::`vector deleting destructor'(
        CSimpleTempAppVisual *this,
        char a2)
{
  CSimpleTempAppVisual::~CSimpleTempAppVisual(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
