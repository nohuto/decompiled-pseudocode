/*
 * XREFs of ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x140149598
 * Callers:
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x14003A42C (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K_N@Z @ 0x1401F17C0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K_N@Z.c)
 */

__int64 __fastcall DC::bOldPenNominal(DC *this, struct EXFORMOBJ *a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v6; // ecx
  int v7; // r8d
  int v8; // ecx
  bool v9; // sf
  int v10; // r8d
  int v11; // r10d
  int v12; // r8d
  bool v13; // sf
  int v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+34h] [rbp-Ch]
  int v16; // [rsp+3Ch] [rbp-4h]
  int v17; // [rsp+50h] [rbp+10h] BYREF
  int v18; // [rsp+54h] [rbp+14h]

  v3 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x20) != 0 )
  {
    v14 = a3;
    v16 = a3;
    v15 = 0LL;
    if ( EXFORMOBJ::bXform(a2, (const struct _VECTORL *)&v14, (struct _VECTORFX *)&v14, 2uLL, 0) )
    {
      v6 = v14;
      if ( v14 < 0 )
        v6 = -v14;
      v7 = v15;
      if ( (int)v15 < 0 )
        v7 = -(int)v15;
      if ( v6 <= v7 )
      {
        v8 = v15;
        v9 = (int)v15 < 0;
      }
      else
      {
        v8 = v14;
        v9 = v14 < 0;
      }
      if ( v9 )
        v8 = -v8;
      if ( v8 < 24 )
      {
        v10 = HIDWORD(v15);
        if ( v15 < 0 )
          v10 = -HIDWORD(v15);
        v11 = v16;
        if ( v16 < 0 )
          v11 = -v16;
        if ( v10 > v11 )
        {
          v12 = HIDWORD(v15);
          v13 = v15 < 0;
        }
        else
        {
          v12 = v16;
          v13 = v16 < 0;
        }
        if ( v13 )
          v12 = -v12;
        if ( v12 < 24 && v14 * v14 + (int)v15 * (int)v15 < 576 && HIDWORD(v15) * HIDWORD(v15) + v16 * v16 < 576 )
          return 1;
      }
    }
  }
  else
  {
    v17 = a3;
    v18 = 0;
    if ( EXFORMOBJ::bXform(a2, (const struct _VECTORL *)&v17, (struct _VECTORFX *)&v17, 1uLL, 0) )
    {
      v4 = -v17;
      if ( v17 > 0 )
        v4 = v17;
      if ( v4 < 24 )
        return 1;
    }
  }
  return v3;
}
