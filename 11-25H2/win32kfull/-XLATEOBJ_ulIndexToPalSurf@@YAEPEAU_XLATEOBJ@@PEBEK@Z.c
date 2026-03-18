/*
 * XREFs of ?XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1401D65B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XLATEOBJ_ulIndexToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  struct Gre::Base::SESSION_GLOBALS *v7; // rbp
  unsigned int v8; // eax
  FLONG flXlate; // ecx
  __int64 v10; // r8
  __int64 v12; // rax
  char v13; // cl
  __int64 v14; // rax
  ULONG *pulXlate; // [rsp+30h] [rbp+8h] BYREF

  v6 = Gre::Base::Globals((Gre::Base *)a1);
  pulXlate = a1[1].pulXlate;
  v7 = v6;
  v8 = XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, a3);
  flXlate = a1[3].flXlate;
  v10 = a2[((unsigned __int64)BYTE2(v8) >> 3) | (4 * ((v8 >> 8) & 0xF8 | (32 * (v8 & 0xF8))))];
  if ( (flXlate & 0x800) != 0 )
  {
    v12 = *(_QWORD *)&a1[2].iSrcType;
    if ( v12 == *((_QWORD *)v7 + 471) )
    {
      v13 = v10 - 20;
      if ( (unsigned __int8)v10 < 0xAu )
        v13 = v10;
      LOBYTE(v10) = v13;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v14 = *(_QWORD *)(v12 + 80);
      else
        v14 = *(_QWORD *)(v12 + 72);
      LOBYTE(v10) = *(_BYTE *)(v14 + v10 + 4);
    }
  }
  return v10;
}
