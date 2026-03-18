/*
 * XREFs of GrePtInRegion @ 0x140106D90
 * Callers:
 *     NtGdiPtInRegion @ 0x140106D70 (NtGdiPtInRegion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall GrePtInRegion(HRGN a1, int a2, int a3)
{
  REGION_CORE *v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  _QWORD **v8; // rcx
  _BOOL8 result; // rax
  struct SCAN *pScan; // rax
  int v11; // r8d
  struct SCAN *i; // rdx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  _QWORD **v18; // [rsp+30h] [rbp-30h]
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+88h] [rbp+28h] BYREF
  int v21; // [rsp+8Ch] [rbp+2Ch]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v16, a1, 1, 0);
  if ( v16 )
  {
    v20 = a2;
    v21 = a3;
    v5 = (REGION_CORE *)((v16 + 24) & -(__int64)(v16 != 0));
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v6 = (*(__int64 (__fastcall **)(REGION_CORE *, int *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 72LL))(
             v5,
             &v20);
    }
    else if ( a2 < *(_DWORD *)(((v16 + 24) & -(__int64)(v16 != 0)) + 0x1C)
           || a3 >= *(_DWORD *)(((v16 + 24) & -(__int64)(v16 != 0)) + 0x28)
           || a2 >= *(_DWORD *)(((v16 + 24) & -(__int64)(v16 != 0)) + 0x24)
           || a3 < *(_DWORD *)(((v16 + 24) & -(__int64)(v16 != 0)) + 0x20) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 1;
      pScan = REGION_CORE::get_pScan(v5);
      v11 = *((_DWORD *)v5 + 6);
      for ( i = pScan; ; i = (struct SCAN *)((char *)i + (unsigned int)(4 * *(_DWORD *)i + 16)) )
      {
        v13 = v11--;
        if ( !v13 || *((_DWORD *)i + 1) > v21 )
          break;
        if ( *((_DWORD *)i + 2) > v21 )
        {
          v14 = 0;
          while ( v14 != *(_DWORD *)i )
          {
            v15 = v14++;
            if ( *((_DWORD *)i + v15 + 3) > v20 )
              goto LABEL_4;
            v6 ^= 3u;
          }
        }
      }
    }
LABEL_4:
    if ( !v19 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v16);
    if ( v16 )
      _InterlockedDecrement16((volatile signed __int16 *)(v16 + 12));
    v7 = v17;
    v8 = v18;
    if ( *(__int64 **)(v17 + 8) != &v17 || *v18 != &v17 )
      __fastfail(3u);
    *v18 = (_QWORD *)v17;
    result = v6 == 2;
    *(_QWORD *)(v7 + 8) = v8;
  }
  else
  {
    EngSetLastError(6u);
    if ( !v19 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v16);
    if ( v16 )
      _InterlockedDecrement16((volatile signed __int16 *)(v16 + 12));
    PopThreadGuardedObject(&v17);
    return 0LL;
  }
  return result;
}
