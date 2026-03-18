/*
 * XREFs of ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1400A7F4C
 * Callers:
 *     EtwTraceDWMGetDirtyRegion @ 0x1400A6100 (EtwTraceDWMGetDirtyRegion.c)
 *     EtwTraceLifetimeAccum @ 0x1400A7AA0 (EtwTraceLifetimeAccum.c)
 *     EtwTraceMoveRegion @ 0x1401F9EE0 (EtwTraceMoveRegion.c)
 * Callees:
 *     ?numRect@RGNCOREOBJ@@QEBAKXZ @ 0x1400A81D0 (-numRect@RGNCOREOBJ@@QEBAKXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepGetRegionPtrData(struct REGION *a1, DWORD a2, struct _RGNDATA *a3)
{
  REGION_CORE *v6; // rbx
  DWORD v7; // eax
  DWORD v8; // esi
  char *Buffer; // rdi
  __int64 v10; // r14
  struct SCAN *pScan; // rax
  int v12; // r9d
  struct SCAN *v13; // rdx
  __int64 v14; // r10
  unsigned __int64 v15; // r11
  unsigned int v16; // ebp
  int v17; // ebx
  char *v18; // r8
  __int64 v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-28h]
  char *v22; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 0;
  v6 = (struct REGION *)((char *)a1 + 24);
  v22 = (char *)a1 + 24;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    v7 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 248LL))((char *)a1 + 24);
  else
    v7 = 16 * RGNCOREOBJ::numRect((RGNCOREOBJ *)&v22);
  v8 = v7 + 32;
  if ( !a3 )
    return v8;
  if ( v8 > a2 )
    return 0;
  a3->rdh.dwSize = 32;
  a3->rdh.iType = 1;
  a3->rdh.nCount = v7 >> 4;
  a3->rdh.nRgnSize = v7;
  if ( v7 >> 4 )
  {
    a3->rdh.rcBound = *(RECT *)((char *)a1 + 52);
  }
  else
  {
    *(_QWORD *)&a3->rdh.rcBound.left = 0LL;
    *(_QWORD *)&a3->rdh.rcBound.right = 0LL;
  }
  Buffer = a3->Buffer;
  v10 = v7 >> 4;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    (*(void (__fastcall **)(REGION_CORE *, char *, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 256LL))(
      v6,
      Buffer,
      v7 >> 4);
  }
  else
  {
    pScan = REGION_CORE::get_pScan(v6);
    v12 = *((_DWORD *)a1 + 12);
    v13 = pScan;
    v14 = 0LL;
    while ( v12 )
    {
      --v12;
      v15 = (unsigned __int64)*(unsigned int *)v13 >> 1;
      DWORD1(v21) = *((_DWORD *)v13 + 1);
      if ( v15 >= v10 - v14 )
        v15 = v10 - v14;
      HIDWORD(v21) = *((_DWORD *)v13 + 2);
      v16 = 0;
      if ( v15 )
      {
        v17 = 0;
        v18 = &Buffer[16 * v14];
        do
        {
          v19 = v17;
          ++v16;
          ++v14;
          v17 += 2;
          LODWORD(v21) = *((_DWORD *)v13 + v19 + 3);
          DWORD2(v21) = *((_DWORD *)v13 + v19 + 4);
          *(_OWORD *)v18 = v21;
          v18 += 16;
        }
        while ( v16 < v15 );
      }
      v13 = (struct SCAN *)((char *)v13 + (unsigned int)(4 * *(_DWORD *)v13 + 16));
    }
  }
  return v8;
}
