/*
 * XREFs of ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x1806C7C44
 * Callers:
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x1806C5E00 (-Commit@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x18022A7D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1802A5250 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1802FC478 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F850 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x1806C92A8 (-s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  void *v17; // [rsp+28h] [rbp-49h] BYREF
  LONG v18; // [rsp+30h] [rbp-41h]
  LONG v19; // [rsp+34h] [rbp-3Dh]
  struct tagRECT v20; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v21; // [rsp+48h] [rbp-29h] BYREF
  ImmersiveApplicationLayout *v22[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v23; // [rsp+68h] [rbp-9h] BYREF
  __int128 v24; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v25[8]; // [rsp+88h] [rbp+17h] BYREF
  LONG v26; // [rsp+90h] [rbp+1Fh]

  v3 = *((_DWORD *)this + 18);
  v5 = *((_DWORD *)this + 16);
  v6 = *((_DWORD *)this + 19);
  v7 = *((_DWORD *)this + 17);
  v8 = (struct tagSIZE)*((unsigned int *)this + 20);
  LODWORD(v22[0]) = v3 - v5;
  v17 = (void *)__PAIR64__(v7, v5);
  HIDWORD(v22[0]) = v6 - v7;
  v18 = v3;
  v19 = v6;
  v9 = ImmersiveApplicationLayout::ComputeGutterWidth(v22[0], v8, a3);
  v10 = 0;
  `vector constructor iterator'((char *)&v20, 16LL, 2LL, (void (__fastcall *)(char *))Geometry::CRect::CRect);
  v11 = *((_QWORD *)this + 14);
  v20.right = v3;
  v21.right = v3;
  v20.left = v5;
  v20.top = v7;
  v20.bottom = v6;
  v21.left = v5;
  v21.top = v7;
  v21.bottom = v6;
  if ( v11 != 1 )
  {
    if ( v11 != 2 )
      return (unsigned int)-2147418113;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      0LL,
      &v24);
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      1LL,
      v25);
    (*(void (__fastcall **)(_QWORD, _QWORD, ImmersiveApplicationLayout **))(**(_QWORD **)(*((_QWORD *)this + 13) + 8LL)
                                                                          + 56LL))(
      *(_QWORD *)(*((_QWORD *)this + 13) + 8LL),
      0LL,
      v22);
    (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(*((_QWORD *)this + 13) + 8LL) + 56LL))(
      *(_QWORD *)(*((_QWORD *)this + 13) + 8LL),
      1LL,
      &v23);
    v20.right = v23;
    v20.left = v26;
    v21.left = v26 + ((unsigned int)(v23 - v26 - v9) >> 1);
    v21.right = v9 + v21.left;
    goto LABEL_11;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 13);
  v24 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(*(_QWORD *)*v12 + 56LL))(*v12, 0LL, &v24);
  *(_OWORD *)v22 = v24;
  if ( !Geometry::operator==(v22, &v17) )
  {
    v13 = (_QWORD *)*((_QWORD *)this + 13);
    *(_OWORD *)v22 = 0LL;
    v10 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, ImmersiveApplicationLayout **))(*(_QWORD *)*v13 + 56LL))(*v13, 0LL, v22);
    if ( LODWORD(v22[0]) == v5 )
    {
      v20.left = (LONG)v22[1];
      v20.right = v9 + LODWORD(v22[1]);
    }
    else
    {
      v20.right = (LONG)v22[0];
      v20.left = LODWORD(v22[0]) - v9;
    }
    v21 = v20;
  }
  v14 = 0;
  if ( v10 )
  {
LABEL_11:
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    v14 = CAppLayoutItem::s_CreateInstance_Gutter(&v20, &v21, v15, &v17);
    if ( v14 >= 0 )
    {
      v22[0] = (ImmersiveApplicationLayout *)v17;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v22);
      v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
              (_QWORD *)this + 13,
              (__int64)v22,
              1uLL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  }
  return (unsigned int)v14;
}
