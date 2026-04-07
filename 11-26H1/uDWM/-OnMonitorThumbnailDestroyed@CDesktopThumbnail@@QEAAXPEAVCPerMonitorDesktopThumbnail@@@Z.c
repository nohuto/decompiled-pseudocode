/*
 * XREFs of ?OnMonitorThumbnailDestroyed@CDesktopThumbnail@@QEAAXPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800ADE7C
 * Callers:
 *     ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800AD59C (--1CPerMonitorDesktopThumbnail@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopThumbnail::OnMonitorThumbnailDestroyed(
        CDesktopThumbnail *this,
        struct CPerMonitorDesktopThumbnail *a2)
{
  __int64 v2; // r10
  unsigned int v4; // ecx
  __int64 i; // r8
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 28);
  v4 = *((_DWORD *)this + 62);
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(struct CPerMonitorDesktopThumbnail **)(v2 + 8 * i) )
      break;
  }
  if ( (unsigned int)i < v4 )
  {
    if ( (unsigned int)i < v4 - 1 )
    {
      do
      {
        v6 = (unsigned int)i;
        LODWORD(i) = i + 1;
        *(_QWORD *)(v2 + 8 * v6) = *(_QWORD *)(v2 + 8LL * (unsigned int)i);
      }
      while ( (unsigned int)i < *((_DWORD *)this + 62) - 1 );
    }
    --*((_DWORD *)this + 62);
  }
}
