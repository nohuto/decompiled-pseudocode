/*
 * XREFs of ?GetRuntimeId@CPlaceModeButtonAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x180549CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaceModeButtonAcc::GetRuntimeId(CPlaceModeButtonAcc *this, struct tagSAFEARRAY **a2)
{
  HRESULT v3; // ebx
  int v4; // eax
  SAFEARRAY *Vector; // rdi
  LONG v6; // eax
  LONG rgIndices; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+3Ch] [rbp+14h]

  *a2 = 0LL;
  v3 = -2147220991;
  if ( *((_BYTE *)this + 32) )
  {
    v4 = *((_DWORD *)this + 9);
    v9 = 3;
    v10 = v4;
    Vector = SafeArrayCreateVector(3u, 0, 2u);
    if ( Vector )
    {
      v3 = 0;
      rgIndices = 0;
      v6 = 0;
      while ( (unsigned __int64)v6 < 2 )
      {
        v3 = SafeArrayPutElement(Vector, &rgIndices, &v9 + v6);
        v6 = ++rgIndices;
        if ( v3 < 0 )
        {
          SafeArrayDestroy(Vector);
          return (unsigned int)v3;
        }
      }
      *a2 = Vector;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v3;
}
