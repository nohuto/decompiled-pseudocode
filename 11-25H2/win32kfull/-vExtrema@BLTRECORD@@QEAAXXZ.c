/*
 * XREFs of ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x14019E340
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x14019DBC0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x140306398 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vExtrema(BLTRECORD *this)
{
  int v1; // ebx
  int v2; // edi
  int v3; // r9d
  int v4; // r10d
  int v5; // edx
  int v6; // r8d

  v1 = *((_DWORD *)this + 27);
  v2 = *((_DWORD *)this + 25);
  v3 = *((_DWORD *)this + 26);
  v4 = *((_DWORD *)this + 24);
  v5 = v3 + *((_DWORD *)this + 28) - v4;
  v6 = v1 + *((_DWORD *)this + 29) - v2;
  *((_DWORD *)this + 30) = v5;
  *((_DWORD *)this + 31) = v6;
  *((_DWORD *)this + 50) = (v3 > v4) ^ (v3 <= v5);
  *((_DWORD *)this + 51) = (v1 > v2) ^ (v1 <= v6);
}
