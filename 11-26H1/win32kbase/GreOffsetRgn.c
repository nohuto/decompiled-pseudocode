/*
 * XREFs of GreOffsetRgn @ 0x1400208C0
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1400820A8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserSetDCVisRgn @ 0x140082180 (UserSetDCVisRgn.c)
 *     NtGdiOffsetRgn @ 0x140159460 (NtGdiOffsetRgn.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, int a2, int a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // r9d
  int v13; // r10d
  int v14; // r8d
  int v15; // edx
  int v16; // r9d
  unsigned int *i; // rdx
  __int64 v18; // rcx
  unsigned int *v19; // r8
  __int64 v20; // rcx
  _QWORD **v21; // rax
  unsigned int (__fastcall **v23)(const struct REGION_CORE *); // rdi
  const struct REGION_CORE *v24; // rsi
  int v25; // ebx
  __int64 v26; // r10
  __int64 v27; // r8
  __int64 v28; // rdx
  __int128 v29; // [rsp+20h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-40h] BYREF
  __int64 v31; // [rsp+38h] [rbp-38h] BYREF
  _QWORD **v32; // [rsp+40h] [rbp-30h]
  int v33; // [rsp+60h] [rbp-10h]
  int v34; // [rsp+B8h] [rbp+48h] BYREF
  int v35; // [rsp+BCh] [rbp+4Ch]

  v3 = a2;
  v4 = a3;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v30, a1, 0, 0);
  v5 = v30;
  v6 = 0;
  if ( v30 )
  {
    v34 = v3;
    v35 = v4;
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v23 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      v24 = (const struct REGION_CORE *)((v30 + 24) & -(__int64)(v30 != 0));
      v25 = (*(__int64 (__fastcall **)(const struct REGION_CORE *, int *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                         + 96LL))(
              v24,
              &v34);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan(v23, v24);
      if ( v25 )
      {
        if ( !WPP_MAIN_CB.Dpc.DeferredContext )
        {
LABEL_21:
          v5 = v30;
          goto LABEL_22;
        }
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 32LL))((v30 + 24) & -(__int64)(v30 != 0));
      }
    }
    else
    {
      if ( *(_DWORD *)(v30 + 48) == 1 )
      {
LABEL_34:
        v6 = 1;
        goto LABEL_24;
      }
      v7 = *(int *)(v30 + 52);
      v8 = *(int *)(v30 + 60);
      v9 = *(int *)(v30 + 56);
      v10 = *(int *)(v30 + 64);
      if ( (int)v7 >= (int)v8 || (int)v9 >= (int)v10 )
      {
LABEL_22:
        if ( *(_DWORD *)(v5 + 48) != 1 )
        {
          LOBYTE(v6) = *(_DWORD *)(v5 + 40) > 0x38u;
          v6 += 2;
          goto LABEL_24;
        }
        goto LABEL_34;
      }
      v11 = v3 + v7;
      if ( v3 + v7 >= (__int64)0xFFFFFFFF80000000uLL && v11 <= 0x7FFFFFFF )
      {
        v26 = v4 + v10;
        if ( v4 + v10 >= (__int64)0xFFFFFFFF80000000uLL && v26 <= 0x7FFFFFFF )
        {
          v27 = v8 + v3;
          HIDWORD(v29) = v4 + v10;
          if ( v8 + v3 >= (__int64)0xFFFFFFFF80000000uLL && v27 <= 0x7FFFFFFF )
          {
            v28 = v4 + v9;
            if ( v4 + v9 >= (__int64)0xFFFFFFFF80000000uLL && v28 <= 0x7FFFFFFF )
            {
              v12 = v11 & 0xF8000000;
              if ( !v12 || v12 == -134217728 )
              {
                v13 = v26 & 0xF8000000;
                if ( !v13 || v13 == -134217728 )
                {
                  v14 = v27 & 0xF8000000;
                  if ( !v14 || v14 == -134217728 )
                  {
                    v15 = v28 & 0xF8000000;
                    if ( !v15 || v15 == -134217728 )
                    {
                      LODWORD(v29) = v3 + v7;
                      DWORD1(v29) = v4 + v9;
                      DWORD2(v29) = v8 + v3;
                      *(_OWORD *)(v30 + 52) = v29;
                      v16 = *(_DWORD *)(v30 + 48);
                      for ( i = *(unsigned int **)(v30 + 24); v16; i += *i + 4 )
                      {
                        i[1] += v4;
                        --v16;
                        i[2] += v4;
                        v18 = *i;
                        if ( (_DWORD)v18 )
                        {
                          v19 = &i[v18 + 3];
                          do
                          {
                            *--v19 += v3;
                            LODWORD(v18) = v18 - 1;
                          }
                          while ( (_DWORD)v18 );
                        }
                      }
                      i[-*(i - 1) - 2] = 0x7FFFFFFF;
                      *(_DWORD *)(*(_QWORD *)(v30 + 24) + 4LL) = 0x80000000;
                      goto LABEL_21;
                    }
                  }
                }
              }
            }
          }
        }
      }
      EngSetLastError(0x216u);
    }
    v5 = v30;
  }
LABEL_24:
  if ( !v33 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v30);
    v5 = v30;
  }
  if ( v5 )
    _InterlockedDecrement16((volatile signed __int16 *)(v5 + 12));
  v20 = v31;
  v21 = v32;
  if ( *(__int64 **)(v31 + 8) != &v31 || *v32 != &v31 )
    __fastfail(3u);
  *v32 = (_QWORD *)v31;
  *(_QWORD *)(v20 + 8) = v21;
  return v6;
}
