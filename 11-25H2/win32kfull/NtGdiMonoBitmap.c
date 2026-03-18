/*
 * XREFs of NtGdiMonoBitmap @ 0x14016BE80
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x14016BED0 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall NtGdiMonoBitmap(HSURF a1)
{
  unsigned int IsMonochrome; // ebx
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)v3, a1);
  IsMonochrome = 0;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 128);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v5);
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v3);
  return IsMonochrome;
}
