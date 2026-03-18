/*
 * XREFs of NtGdiDeleteColorTransform @ 0x14033E1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x140078724 (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x140312C80 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14033191C (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiDeleteColorTransform(HDC a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE v7[32]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-88h]
  DC *v9[15]; // [rsp+50h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
  v3 = 0;
  if ( v9[0] )
  {
    if ( DC::bInFullScreen(v9[0]) )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v7, a2, v4, v5);
      if ( v8 )
        v3 = COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v7, (struct XDCOBJ *)v9);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
  return v3;
}
