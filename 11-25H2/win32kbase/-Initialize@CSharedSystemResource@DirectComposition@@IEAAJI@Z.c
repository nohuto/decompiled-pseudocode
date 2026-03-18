/*
 * XREFs of ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x14004F748
 * Callers:
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x14004F700 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140050234 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Initialize(
        DirectComposition::CSharedSystemResource *this,
        int a2)
{
  DirectComposition::CConnection *DefaultConnection; // rax
  int SystemResource; // ebx

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  KeEnterCriticalRegion();
  *((_DWORD *)this + 3) = a2;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  *((_QWORD *)this + 3) = DefaultConnection;
  if ( DefaultConnection )
  {
    SystemResource = DirectComposition::CConnection::CreateSystemResource(
                       DefaultConnection,
                       *((_DWORD *)this + 3),
                       (DirectComposition::CSharedSystemResource *)((char *)this + 16));
    if ( SystemResource >= 0 )
      *((_BYTE *)this + 8) = 1;
  }
  else
  {
    SystemResource = -1073741790;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SystemResource;
}
