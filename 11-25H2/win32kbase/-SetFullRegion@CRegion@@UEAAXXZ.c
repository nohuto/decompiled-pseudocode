/*
 * XREFs of ?SetFullRegion@CRegion@@UEAAXXZ @ 0x140110CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x14001E180 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 */

void __fastcall CRegion::SetFullRegion(CRegion *this, struct REGION_CORE *a2)
{
  Win32kRS *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (Win32kRS *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    RGNCOREOBJ::vDeleteRGNCOREOBJ(&v3, a2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 1;
}
