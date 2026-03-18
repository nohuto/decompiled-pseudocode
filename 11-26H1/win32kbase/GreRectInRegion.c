/*
 * XREFs of GreRectInRegion @ 0x1400A8460
 * Callers:
 *     NtGdiRectInRegion @ 0x1400A8230 (NtGdiRectInRegion.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreRectInRegion(HRGN a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rbx
  struct SCAN *pScan; // rax
  int v7; // r8d
  struct SCAN *v8; // rdx
  __int64 v9; // r10
  _DWORD *v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD **v13; // rcx
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  _QWORD **v17; // [rsp+30h] [rbp-30h]
  int v18; // [rsp+50h] [rbp-10h]

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v15, a1, 1, 0);
  v4 = v15;
  if ( a2 && v15 )
  {
    v5 = (v15 + 24) & -(__int64)(v15 != 0);
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      if ( (*(unsigned int (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 80LL))(
             (v15 + 24) & -(__int64)(v15 != 0),
             a2,
             v15) == 2 )
      {
LABEL_17:
        v4 = v15;
        v3 = 1;
        goto LABEL_18;
      }
    }
    else
    {
      if ( *a2 >= *(_DWORD *)(((v15 + 24) & -(__int64)(v15 != 0)) + 0x24)
        || a2[2] <= *(_DWORD *)(((v15 + 24) & -(__int64)(v15 != 0)) + 0x1C)
        || a2[1] >= *(_DWORD *)(((v15 + 24) & -(__int64)(v15 != 0)) + 0x28)
        || a2[3] <= *(_DWORD *)(((v15 + 24) & -(__int64)(v15 != 0)) + 0x20) )
      {
        goto LABEL_26;
      }
      pScan = REGION_CORE::get_pScan((REGION_CORE *)((v15 + 24) & -(__int64)(v15 != 0)));
      v7 = *(_DWORD *)(v5 + 24);
      v8 = pScan;
      if ( v7 )
      {
        do
        {
          if ( a2[1] < *((_DWORD *)v8 + 2) )
            break;
          v8 = (struct SCAN *)((char *)v8 + (unsigned int)(4 * *(_DWORD *)v8 + 16));
          --v7;
        }
        while ( v7 );
        while ( v7 && a2[3] > *((_DWORD *)v8 + 1) )
        {
          v9 = *(unsigned int *)v8;
          v10 = (_DWORD *)((char *)v8 + 12);
          v11 = (unsigned __int64)v8 + 4 * v9 + 12;
          if ( (unsigned __int64)v8 + 12 < v11 )
          {
            while ( *a2 >= v10[1] )
            {
              v10 += 2;
              if ( (unsigned __int64)v10 >= v11 )
                goto LABEL_15;
            }
            if ( a2[2] > *v10 )
              goto LABEL_17;
          }
LABEL_15:
          v8 = (struct SCAN *)((char *)v8 + (unsigned int)(4 * v9 + 16));
          --v7;
        }
      }
    }
    v4 = v15;
LABEL_26:
    v3 = 0;
  }
LABEL_18:
  if ( !v18 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v15);
    v4 = v15;
  }
  if ( v4 )
    _InterlockedDecrement16((volatile signed __int16 *)(v4 + 12));
  v12 = v16;
  v13 = v17;
  if ( *(__int64 **)(v16 + 8) != &v16 || *v17 != &v16 )
    __fastfail(3u);
  result = v3;
  *v17 = (_QWORD *)v16;
  *(_QWORD *)(v12 + 8) = v13;
  return result;
}
