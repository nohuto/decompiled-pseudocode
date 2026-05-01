/*
 * XREFs of ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x18069FD94
 * Callers:
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x18069DFB0 (-Commit@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1802388D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1802B1C54 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180300D38 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180659804 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x1806A1334 (-s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::_CommitGutters(CAppLayout *this, __int64 a2, enum DEVICE_SCALE_FACTOR a3)
{
  LONG v3; // edi
  LONG v5; // r15d
  LONG v6; // ebx
  LONG v7; // esi
  struct tagSIZE v8; // rdx
  int v9; // r12d
  char v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  int v14; // ebx
  const struct _GUID *v15; // r8
  void *v17[2]; // [rsp+28h] [rbp-49h] BYREF
  struct tagRECT v18; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v19; // [rsp+48h] [rbp-29h] BYREF
  ImmersiveApplicationLayout *v20[2]; // [rsp+58h] [rbp-19h] BYREF
  LONG v21[4]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v22; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v23[8]; // [rsp+88h] [rbp+17h] BYREF
  LONG v24; // [rsp+90h] [rbp+1Fh]

  v3 = *((_DWORD *)this + 18);
  v5 = *((_DWORD *)this + 16);
  v6 = *((_DWORD *)this + 19);
  v7 = *((_DWORD *)this + 17);
  v8 = (struct tagSIZE)*((unsigned int *)this + 20);
  LODWORD(v20[0]) = v3 - v5;
  v17[0] = (void *)__PAIR64__(v7, v5);
  HIDWORD(v20[0]) = v6 - v7;
  v17[1] = (void *)__PAIR64__(v6, v3);
  v9 = ImmersiveApplicationLayout::ComputeGutterWidth(v20[0], v8, a3);
  v10 = 0;
  `vector constructor iterator'((char *)&v18, 16LL, 2LL, (void (__fastcall *)(char *))Geometry::CRect::CRect);
  v11 = *((_QWORD *)this + 14);
  v18.right = v3;
  v18.left = v5;
  v18.top = v7;
  v18.bottom = v6;
  v19 = *(struct tagRECT *)v17;
  if ( v11 != 1 )
  {
    if ( v11 != 2 )
      return (unsigned int)-2147418113;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      0LL,
      &v22);
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      1LL,
      v23);
    (*(void (__fastcall **)(_QWORD, _QWORD, ImmersiveApplicationLayout **))(**(_QWORD **)(*((_QWORD *)this + 13) + 8LL)
                                                                          + 56LL))(
      *(_QWORD *)(*((_QWORD *)this + 13) + 8LL),
      0LL,
      v20);
    (*(void (__fastcall **)(_QWORD, __int64, LONG *))(**(_QWORD **)(*((_QWORD *)this + 13) + 8LL) + 56LL))(
      *(_QWORD *)(*((_QWORD *)this + 13) + 8LL),
      1LL,
      v21);
    v18.right = v21[0];
    v18.left = v24;
    v19.left = v24 + ((unsigned int)(v21[0] - v24 - v9) >> 1);
    v19.right = v9 + v19.left;
    goto LABEL_11;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 13);
  v22 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(*(_QWORD *)*v12 + 56LL))(*v12, 0LL, &v22);
  *(_OWORD *)v20 = v22;
  if ( !Geometry::operator==(v20, v17) )
  {
    v13 = (_QWORD *)*((_QWORD *)this + 13);
    *(_OWORD *)v20 = 0LL;
    v10 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, ImmersiveApplicationLayout **))(*(_QWORD *)*v13 + 56LL))(*v13, 0LL, v20);
    if ( LODWORD(v20[0]) == v5 )
    {
      v18.left = (LONG)v20[1];
      v18.right = v9 + LODWORD(v20[1]);
    }
    else
    {
      v18.right = (LONG)v20[0];
      v18.left = LODWORD(v20[0]) - v9;
    }
    v19 = v18;
  }
  v14 = 0;
  if ( v10 )
  {
LABEL_11:
    v17[0] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v17);
    v14 = CAppLayoutItem::s_CreateInstance_Gutter(&v18, &v19, v15, v17);
    if ( v14 >= 0 )
    {
      v20[0] = (ImmersiveApplicationLayout *)v17[0];
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v20);
      v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
              (_QWORD *)this + 13,
              v20,
              1uLL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v17);
  }
  return (unsigned int)v14;
}
