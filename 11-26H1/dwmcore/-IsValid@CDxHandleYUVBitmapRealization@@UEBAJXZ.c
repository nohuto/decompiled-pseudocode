/*
 * XREFs of ?IsValid@CDxHandleYUVBitmapRealization@@UEBAJXZ @ 0x1802AF440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::IsValid(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
  {
    return *(_BYTE *)(v1 + 118) == 0 ? 0x8898008D : 0;
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x56u, 0LL);
  }
  return v2;
}
