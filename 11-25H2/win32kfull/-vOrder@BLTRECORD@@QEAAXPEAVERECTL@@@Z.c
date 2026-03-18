/*
 * XREFs of ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x14019E304
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x14019DBC0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vOrder(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  int v5; // r8d

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 > v3 )
  {
    *(_DWORD *)a2 = v3;
    *((_DWORD *)a2 + 2) = v2;
    *((_DWORD *)this + 49) ^= 8u;
  }
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 3);
  if ( v4 > v5 )
  {
    *((_DWORD *)a2 + 1) = v5;
    *((_DWORD *)a2 + 3) = v4;
    *((_DWORD *)this + 49) ^= 0x10u;
  }
}
