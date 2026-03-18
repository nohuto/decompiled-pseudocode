/*
 * XREFs of NtGdiSetColorSpace @ 0x14033E670
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x140214B24 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, HCOLORSPACE a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE v7[32]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-88h]
  _QWORD v9[15]; // [rsp+50h] [rbp-78h] BYREF

  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
  if ( v9[0] )
  {
    if ( a2 == *(HCOLORSPACE *)(*(_QWORD *)(v9[0] + 976LL) + 16LL) )
    {
      v3 = 1;
    }
    else
    {
      COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v7, a2, v4, v5);
      if ( v8 )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)(v9[0] + 96LL));
        *(_QWORD *)(*(_QWORD *)(v9[0] + 976LL) + 16LL) = a2;
        *(_QWORD *)(v9[0] + 96LL) = v8;
        INC_SHARE_REF_CNT(v8);
        v3 = 1;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
  return v3;
}
