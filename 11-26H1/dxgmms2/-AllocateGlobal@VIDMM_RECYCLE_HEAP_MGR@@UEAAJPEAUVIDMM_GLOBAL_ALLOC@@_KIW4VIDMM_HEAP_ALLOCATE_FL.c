/*
 * XREFs of ?AllocateGlobal@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400ACD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400F1DE0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::AllocateGlobal(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        struct VIDMM_RECYCLE_MULTIRANGE **a8,
        _QWORD *a9,
        unsigned __int8 *a10)
{
  char v14; // dl
  char v15; // al
  int v16; // edi
  __int64 v17; // rcx
  int v18; // eax
  _BYTE v20[16]; // [rsp+40h] [rbp-38h] BYREF
  char v21; // [rsp+80h] [rbp+8h]
  char v22; // [rsp+A0h] [rbp+28h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(a1 + 332), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v14 = 0;
  v15 = a5 & 1;
  v16 = -1073741823;
  v22 = a5 & 1;
  while ( 1 )
  {
    v21 = v14;
    if ( v15 )
    {
      switch ( a7 )
      {
        case 1:
          v17 = (__int64)(a1 + 184);
          goto LABEL_40;
        case 2:
          v17 = (__int64)(a1 + 202);
          goto LABEL_40;
        case 3:
          v17 = (__int64)(a1 + 220);
          goto LABEL_40;
        case 4:
          v17 = (__int64)(a1 + 238);
          goto LABEL_40;
        case 5:
          v17 = (__int64)(a1 + 256);
          goto LABEL_40;
        case 6:
          v17 = (__int64)(a1 + 274);
          goto LABEL_40;
        case 7:
          v17 = (__int64)(a1 + 292);
          goto LABEL_40;
        case 8:
          v17 = (__int64)(a1 + 310);
LABEL_40:
          v18 = VIDMM_RECYCLE_HEAP::Allocate(v17, a3, a4, a8, a9, a10, a1[423], a5);
          v14 = v21;
          v16 = v18;
          break;
      }
    }
    else if ( a7 > 6 )
    {
      switch ( a7 )
      {
        case 7:
          v17 = (__int64)(a1 + 112);
          goto LABEL_40;
        case 8:
          v17 = (__int64)(a1 + 130);
          goto LABEL_40;
        case 9:
          v17 = (__int64)(a1 + 148);
          goto LABEL_40;
        case 10:
          v17 = (__int64)(a1 + 166);
          goto LABEL_40;
      }
    }
    else
    {
      switch ( a7 )
      {
        case 6:
          v17 = (__int64)(a1 + 94);
          goto LABEL_40;
        case 1:
          v17 = (__int64)(a1 + 4);
          goto LABEL_40;
        case 2:
          v17 = (__int64)(a1 + 22);
          goto LABEL_40;
        case 3:
          v17 = (__int64)(a1 + 40);
          goto LABEL_40;
        case 4:
          v17 = (__int64)(a1 + 58);
          goto LABEL_40;
        case 5:
          v17 = (__int64)(a1 + 76);
          goto LABEL_40;
      }
    }
    if ( v16 >= 0 || v14 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)a1, 0, 0);
    v15 = v22;
    v14 = 1;
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v20);
  return (unsigned int)v16;
}
