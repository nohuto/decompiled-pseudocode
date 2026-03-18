/*
 * XREFs of IsPathBoundsInRange @ 0x1400A3994
 * Callers:
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400A2EAC (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400A32F0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400A3624 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 * Callees:
 *     <none>
 */

char __fastcall IsPathBoundsInRange(int *a1)
{
  int v1; // r8d
  char v2; // dl
  int v3; // r10d
  int v4; // r9d
  int v5; // ecx

  v1 = a1[2];
  v2 = 0;
  v3 = *a1;
  if ( (*a1 ^ v1) < 0 )
  {
    if ( v1 < 0 )
    {
      if ( v1 < (int)(v3 + 0x80000000) )
        return v2;
    }
    else if ( v1 > v3 + 0x7FFFFFFF )
    {
      return v2;
    }
  }
  v4 = a1[1];
  v5 = a1[3];
  if ( (v4 ^ v5) < 0 )
  {
    if ( v5 < 0 )
    {
      if ( v5 < (int)(v4 + 0x80000000) )
        return v2;
    }
    else if ( v5 > v4 + 0x7FFFFFFF )
    {
      return v2;
    }
  }
  if ( v1 >= v3 && v5 >= v4 )
    return 1;
  return v2;
}
