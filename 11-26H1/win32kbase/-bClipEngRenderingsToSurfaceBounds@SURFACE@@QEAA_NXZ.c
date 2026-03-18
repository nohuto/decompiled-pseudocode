/*
 * XREFs of ?bClipEngRenderingsToSurfaceBounds@SURFACE@@QEAA_NXZ @ 0x1401EE160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall SURFACE::bClipEngRenderingsToSurfaceBounds(SURFACE *this)
{
  __int64 v1; // rax

  if ( *((_WORD *)this + 50) )
  {
    v1 = *((_QWORD *)this + 6);
    if ( v1 )
      LOBYTE(v1) = (*(_DWORD *)(v1 + 40) & 0x8000) == 0;
  }
  else
  {
    LOBYTE(v1) = 1;
  }
  return v1;
}
