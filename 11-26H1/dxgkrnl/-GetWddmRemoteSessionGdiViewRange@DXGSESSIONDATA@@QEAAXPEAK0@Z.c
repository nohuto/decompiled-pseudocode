/*
 * XREFs of ?GetWddmRemoteSessionGdiViewRange@DXGSESSIONDATA@@QEAAXPEAK0@Z @ 0x140414100
 * Callers:
 *     DxgkGetWddmRemoteSessionGdiViewRange @ 0x140413FD0 (DxgkGetWddmRemoteSessionGdiViewRange.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGSESSIONDATA::GetWddmRemoteSessionGdiViewRange(
        DXGSESSIONDATA *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int v6; // eax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGSESSIONDATA *)((char *)this + 19120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( *((_DWORD *)this + 4792) )
  {
    *a2 = **((_DWORD **)this + 2398);
    v6 = *(_DWORD *)(*((_QWORD *)this + 2398) + 4LL * (unsigned int)(*((_DWORD *)this + 4792) - 1));
    *((_DWORD *)this + 4795) = v6;
  }
  else
  {
    *a2 = *((_DWORD *)this + 4795);
    v6 = *((_DWORD *)this + 4795) - 1;
  }
  *a3 = v6;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
}
