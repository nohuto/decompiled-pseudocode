/*
 * XREFs of ?IsEmpty@CRegion@@UEBA_NXZ @ 0x14008BCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x1400123FC (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     ?RegionCore_iComplexity@Win32kRS@@YAJPEBVREGION_CORE@@@Z @ 0x14008BD58 (-RegionCore_iComplexity@Win32kRS@@YAJPEBVREGION_CORE@@@Z.c)
 */

char __fastcall CRegion::IsEmpty(CRegion *this)
{
  int v1; // edx
  int v2; // edi
  const struct REGION_CORE *v3; // rdx
  char v4; // bl
  Win32kRS *v5; // rax
  unsigned int sizeScan; // eax
  int v7; // edi

  v1 = *((_DWORD *)this + 3);
  v2 = 0;
  if ( !v1 )
    return 1;
  v3 = (const struct REGION_CORE *)(unsigned int)(v1 - 1);
  if ( !(_DWORD)v3 )
    return 0;
  v4 = 1;
  if ( (_DWORD)v3 == 1 )
  {
    v5 = (Win32kRS *)*((_QWORD *)this + 2);
    if ( qword_1402A10B0 )
    {
      v7 = Win32kRS::RegionCore_iComplexity(v5, v3);
    }
    else if ( *((_DWORD *)v5 + 6) == 1 )
    {
      v7 = 1;
    }
    else
    {
      if ( qword_1402A10B0 )
        sizeScan = Win32kRS::RegionCore_get_sizeScan(v5, v3);
      else
        sizeScan = *((_DWORD *)v5 + 4);
      LOBYTE(v2) = sizeScan > 0x38;
      v7 = v2 + 2;
    }
    return v7 == 1;
  }
  return v4;
}
