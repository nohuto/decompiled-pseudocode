/*
 * XREFs of GreCreatePolyPolygonRgnInternal @ 0x14009ADAC
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x140097BD0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x14000D9B0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001F7EC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140098640 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     bPolyPolygon @ 0x140099400 (bPolyPolygon.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14009AEA0 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreCreatePolyPolygonRgnInternal(
        struct _POINTL *a1,
        int *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rbx
  struct _RECTL *v10; // r9
  struct OBJECT *v12[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v14; // [rsp+48h] [rbp-80h]
  _QWORD v15[4]; // [rsp+90h] [rbp-38h] BYREF
  int v16; // [rsp+B0h] [rbp-18h]

  v5 = 0LL;
  if ( a4 - 1 <= 1 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v13);
    if ( v14 )
    {
      if ( (unsigned int)bPolyPolygon((EPATHOBJ *)v13, (struct EXFORMOBJR *)&off_14024AEB0, a1, a2, a3, a5) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12, (struct EPATHOBJ *)v13, a4, v10);
        if ( v12[0] )
        {
          v5 = RGNOBJ::hrgnAssociate(v12);
          if ( !v5 )
            RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)v12);
        }
      }
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)v13);
    if ( v16 )
      PopThreadGuardedObject(v15);
  }
  return v5;
}
