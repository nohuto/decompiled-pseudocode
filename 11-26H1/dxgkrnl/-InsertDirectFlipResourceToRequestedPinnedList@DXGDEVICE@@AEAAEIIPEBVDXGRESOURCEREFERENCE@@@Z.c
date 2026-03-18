/*
 * XREFs of ?InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1404347BC
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1403887AC (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     ?InsertDirectFlipAllocationToRequestedPinnedList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1403D2D94 (-InsertDirectFlipAllocationToRequestedPinnedList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

unsigned __int8 __fastcall DXGDEVICE::InsertDirectFlipResourceToRequestedPinnedList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int a3,
        const struct DXGRESOURCEREFERENCE *a4)
{
  __int64 v8; // rdi
  int IsEnabledDeviceUsageNoInline; // r12d
  struct DXGALLOCATION *i; // rbx
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_3472570682__private_IsEnabledDeviceUsageNoInline();
  if ( a3 )
  {
    while ( 2 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(*((_QWORD *)a4 + v8) + 80LL), 0);
      if ( IsEnabledDeviceUsageNoInline )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
      for ( i = *(struct DXGALLOCATION **)(*((_QWORD *)a4 + v8) + 24LL); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
      {
        if ( !DXGDEVICE::InsertDirectFlipAllocationToRequestedPinnedList(this, a2, i) )
        {
          WdLogSingleEntry2(3LL, i, *((_QWORD *)a4 + v8));
          WdLogGlobalForLineNumber = 9737;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
          return 0;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 < a3 )
        continue;
      break;
    }
  }
  return 1;
}
