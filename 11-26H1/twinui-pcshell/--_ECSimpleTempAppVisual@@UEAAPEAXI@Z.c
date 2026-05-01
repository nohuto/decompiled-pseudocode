/*
 * XREFs of ??_ECSimpleTempAppVisual@@UEAAPEAXI@Z @ 0x180548770
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1CSimpleTempAppVisual@@UEAA@XZ @ 0x180548748 (--1CSimpleTempAppVisual@@UEAA@XZ.c)
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
