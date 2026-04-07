/*
 * XREFs of ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180064184
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A0700 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VisualCollectionIterator::MoveNext(VisualCollectionIterator *this)
{
  char v1; // r8

  v1 = *((_BYTE *)this + 17);
  if ( *((_BYTE *)this + 16) )
  {
    if ( !v1 )
      ++*((_DWORD *)this + 3);
  }
  else
  {
    *((_DWORD *)this + 3) = 0;
    *((_BYTE *)this + 16) = 1;
  }
  if ( *((_DWORD *)this + 3) >= *(_DWORD *)(*(_QWORD *)this + 32LL) )
  {
    *((_BYTE *)this + 17) = 1;
    v1 = 1;
  }
  return v1 == 0;
}
