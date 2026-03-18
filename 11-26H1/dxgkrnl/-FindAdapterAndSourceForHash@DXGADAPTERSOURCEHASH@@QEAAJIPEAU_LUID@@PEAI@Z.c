/*
 * XREFs of ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x14031FD8C
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x140318FCC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x14031F6F0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x140320A4C (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  __int64 v4; // rdi
  unsigned int v8; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v8 = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  if ( v8 > 1 << *((_DWORD *)this + 17) )
    v8 = 1 << *((_DWORD *)this + 17);
  if ( (unsigned int)v4 < v8 )
  {
    v10 = *((_QWORD *)this + 6);
    if ( (*(_DWORD *)(v10 + 16 * v4 + 12) & 1) != 0 )
    {
      v11 = 0;
      *a3 = *(struct _LUID *)(v10 + 16 * v4);
      *a4 = *(_DWORD *)(v10 + 16 * v4 + 8);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 5925;
      v11 = -1073741811;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
    return v11;
  }
  else
  {
    WdLogSingleEntry2(3LL, (unsigned int)v4, v8);
    WdLogGlobalForLineNumber = 5914;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
    return 3221225485LL;
  }
}
