/*
 * XREFs of ?GetRegionData@CRegion@@UEAAJPEAKPEAUtagRECT@@PEAW4Type@IRegion@@@Z @ 0x1401143C0
 * Callers:
 *     <none>
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRegion::GetRegionData(CRegion *this, unsigned int *a2, struct tagRECT *a3, enum IRegion::Type *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  int v8; // r9d
  unsigned int v9; // r10d
  int v10; // r9d
  REGION_CORE *v11; // rbx
  unsigned int i; // edx
  __int64 v13; // r8
  unsigned int *v15; // rdx
  int v16; // r10d
  unsigned int v17; // esi
  unsigned __int64 v18; // r11
  int v19; // ebx
  struct tagRECT *v20; // r9
  __int64 v21; // rcx
  int v22; // esi
  struct SCAN *pScan; // r8
  struct tagRECT v24; // [rsp+20h] [rbp-28h]

  v4 = *a2;
  v5 = 0;
  *(_DWORD *)a4 = *((_DWORD *)this + 3);
  v8 = *((_DWORD *)this + 3);
  v9 = -1073741823;
  if ( v8 && (v10 = v8 - 1) != 0 )
  {
    if ( v10 == 1 )
    {
      v11 = (REGION_CORE *)*((_QWORD *)this + 2);
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        i = (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 240LL))(v11);
      }
      else
      {
        v22 = *((_DWORD *)v11 + 6);
        pScan = REGION_CORE::get_pScan(v11);
        for ( i = 0; v22; --v22 )
        {
          i += *(_DWORD *)pScan >> 1;
          pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
        }
      }
      if ( i > (unsigned int)v4 )
      {
        v9 = -1073741789;
      }
      else
      {
        if ( WPP_MAIN_CB.Dpc.DeferredContext )
        {
          LODWORD(v13) = (*(__int64 (__fastcall **)(REGION_CORE *, struct tagRECT *, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                             + 256LL))(
                           v11,
                           a3,
                           v4);
        }
        else
        {
          v15 = *(unsigned int **)v11;
          v13 = 0LL;
          v16 = *((_DWORD *)v11 + 6);
          while ( v16 )
          {
            --v16;
            v17 = 0;
            v24.top = v15[1];
            v18 = (unsigned __int64)*v15 >> 1;
            v24.bottom = v15[2];
            if ( v18 >= v4 - v13 )
              v18 = v4 - v13;
            if ( v18 )
            {
              v19 = 0;
              v20 = &a3[v13];
              do
              {
                v21 = v19;
                ++v17;
                ++v13;
                v19 += 2;
                v24.left = v15[v21 + 3];
                v24.right = v15[v21 + 4];
                *v20++ = v24;
              }
              while ( v17 < v18 );
            }
            v15 += *v15 + 4;
          }
        }
        v9 = 0;
        v5 = v13;
      }
      *a2 = v5;
    }
  }
  else
  {
    *a2 = 0;
    return 0;
  }
  return v9;
}
