/*
 * XREFs of ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x180055580
 * Callers:
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1800553F4 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?SetProperty@CPathGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180177350 (-SetProperty@CPathGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPathGeometry::SetPath(CPathGeometry *this, const struct CPathData *a2)
{
  const struct CPathData *v2; // rdi
  const void *v5; // rdx
  bool v6; // r9
  const void *v7; // rcx
  size_t v8; // r8
  __int64 v9; // rcx
  int v10; // ecx
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rdi

  v2 = (const struct CPathData *)*((_QWORD *)this + 17);
  if ( !v2 )
  {
    if ( !a2 )
      return;
LABEL_7:
    if ( a2 )
      (*(void (__fastcall **)(const struct CPathData *))(*(_QWORD *)a2 + 8LL))(a2);
    goto LABEL_9;
  }
  if ( !a2 )
  {
LABEL_9:
    v9 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_11;
  }
  v5 = (const void *)*((_QWORD *)a2 + 2);
  v6 = 0;
  v7 = (const void *)*((_QWORD *)v2 + 2);
  v8 = *((_QWORD *)v2 + 3) - (_QWORD)v7;
  if ( v8 == *((_QWORD *)a2 + 3) - (_QWORD)v5 )
    v6 = memcmp_0(v7, v5, v8) == 0;
  if ( !v6 )
  {
    if ( v2 == a2 )
    {
LABEL_11:
      v10 = (*((_DWORD *)this + 10) | 1) ^ ((*((_BYTE *)this + 40) | 1) ^ (unsigned __int8)((*((_BYTE *)this + 40) | 1)
                                                                                          + 4)) & 0xC;
      *((_DWORD *)this + 10) = v10;
      if ( (v10 & 0xC) == 4
        && (*(unsigned int (__fastcall **)(CPathGeometry *, _QWORD, _QWORD))(*(_QWORD *)this + 184LL))(this, 0LL, 0LL) )
      {
        v11 = (_QWORD *)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 4);
        v12 = detail::pointer_buffer_impl<CResource *,0>::last((__int64 *)this + 4);
        while ( v11 != (_QWORD *)v12 )
          (*(void (__fastcall **)(CPathGeometry *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 88LL))(
            this,
            *v11++,
            0LL,
            0LL);
      }
      *((_DWORD *)this + 10) ^= ((unsigned __int8)*((_DWORD *)this + 10) ^ (unsigned __int8)(4
                                                                                           * (*((_DWORD *)this + 10) >> 2)
                                                                                           - 4)) & 0xC;
      return;
    }
    goto LABEL_7;
  }
}
