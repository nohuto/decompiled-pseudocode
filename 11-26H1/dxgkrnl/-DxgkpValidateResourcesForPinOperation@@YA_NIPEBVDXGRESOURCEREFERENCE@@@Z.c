/*
 * XREFs of ?DxgkpValidateResourcesForPinOperation@@YA_NIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1401C2C24
 * Callers:
 *     ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1401C34A4 (-PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall DxgkpValidateResourcesForPinOperation(unsigned int a1, const struct DXGRESOURCEREFERENCE *a2)
{
  __int64 v4; // rbx
  int IsEnabledDeviceUsageNoInline; // ebp
  __int64 v6; // rdi
  __int64 i; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_3472570682__private_IsEnabledDeviceUsageNoInline();
  if ( a1 )
  {
    while ( 2 )
    {
      v6 = *((_QWORD *)a2 + v4);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(v6 + 80), 0);
      if ( IsEnabledDeviceUsageNoInline )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
      for ( i = *(_QWORD *)(v6 + 24); i; i = *(_QWORD *)(i + 64) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(i + 48) + 4LL) & 0x2000) != 0 )
        {
          WdLogSingleEntry2(3LL, v6, i);
          WdLogGlobalForLineNumber = 6873;
          goto LABEL_13;
        }
        if ( (*(_DWORD *)(i + 72) & 0x800) != 0 )
        {
          WdLogSingleEntry2(3LL, v6, i);
          WdLogGlobalForLineNumber = 6881;
LABEL_13:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
          return 0;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 < a1 )
        continue;
      break;
    }
  }
  return 1;
}
