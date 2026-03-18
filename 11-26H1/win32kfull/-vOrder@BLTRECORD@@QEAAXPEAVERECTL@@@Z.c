/*
 * XREFs of ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1401AACA8
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401A91A0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vOrder(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  int v5; // r8d

  v2 = *((_DWORD *)a2 + 2);
  v3 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > v2 )
  {
    *(_DWORD *)a2 = v2;
    *((_DWORD *)a2 + 2) = v3;
    *((_DWORD *)this + 49) ^= 8u;
  }
  v4 = *((_DWORD *)a2 + 3);
  v5 = *((_DWORD *)a2 + 1);
  if ( v5 > v4 )
  {
    *((_DWORD *)a2 + 1) = v4;
    *((_DWORD *)a2 + 3) = v5;
    *((_DWORD *)this + 49) ^= 0x10u;
  }
}
