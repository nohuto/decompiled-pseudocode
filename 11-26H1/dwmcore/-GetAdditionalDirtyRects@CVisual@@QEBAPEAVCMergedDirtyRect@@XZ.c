/*
 * XREFs of ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ @ 0x180187C68
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct CMergedDirtyRect *__fastcall CVisual::GetAdditionalDirtyRects(CVisual *this)
{
  _DWORD *v1; // r8
  struct CMergedDirtyRect *result; // rax
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  result = 0LL;
  if ( (*v1 & 0x40000000) != 0 )
  {
    v3 = (unsigned int)v1[1];
    v4 = v1 + 2;
    v5 = 0LL;
    if ( (_DWORD)v3 )
    {
      while ( *v4 != 2 )
      {
        v5 = (unsigned int)(v5 + 1);
        ++v4;
        if ( (unsigned int)v5 >= (unsigned int)v3 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( (unsigned int)v5 >= (unsigned int)v3 )
        return *(struct CMergedDirtyRect **)result;
    }
    result = (struct CMergedDirtyRect *)((char *)&v1[2 * v5] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    return *(struct CMergedDirtyRect **)result;
  }
  return result;
}
