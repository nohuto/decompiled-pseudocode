/*
 * XREFs of ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121FD0
 * Callers:
 *     <none>
 * Callees:
 *     EngDeleteSurface @ 0x140121E90 (EngDeleteSurface.c)
 *     EngCreateDeviceSurface @ 0x140122040 (EngCreateDeviceSurface.c)
 *     EngAssociateSurface @ 0x1401F0E20 (EngAssociateSurface.c)
 */

HSURF __fastcall StubDispEnableSurface(struct DHPDEV__ *a1)
{
  HSURF DeviceSurface; // rax
  HSURF v3; // rbx

  DeviceSurface = EngCreateDeviceSurface(0LL, *(SIZEL *)(a1 + 4), 6u);
  v3 = DeviceSurface;
  if ( !DeviceSurface )
    return 0LL;
  if ( !EngAssociateSurface(DeviceSurface, *(HDEV *)a1, 0x479u) )
  {
    EngDeleteSurface(v3);
    return 0LL;
  }
  *((_QWORD *)a1 + 1) = v3;
  return v3;
}
