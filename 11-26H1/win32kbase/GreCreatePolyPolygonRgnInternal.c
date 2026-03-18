/*
 * XREFs of GreCreatePolyPolygonRgnInternal @ 0x1400C0C00
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x140010C70 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140011400 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x140011B40 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     bPolyPolygon @ 0x1400C0DA0 (bPolyPolygon.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1400C2A7C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 */

HRGN __fastcall GreCreatePolyPolygonRgnInternal(struct _POINTL *a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  HRGN v5; // rbx
  _QWORD v10[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v12; // [rsp+48h] [rbp-80h]

  v5 = 0LL;
  if ( a4 - 1 <= 1 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v11);
    if ( v12 )
    {
      if ( (unsigned int)bPolyPolygon((EPATHOBJ *)v11, (struct EXFORMOBJR *)&off_140255510, a1, a3, a5) )
      {
        v10[0] = 0LL;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)v10, (struct EPATHOBJ *)v11, a4, 0LL);
        if ( v10[0] )
        {
          v5 = RGNOBJ::hrgnAssociate((RGNOBJ *)v10);
          if ( !v5 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v10);
        }
      }
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v11);
  }
  return v5;
}
