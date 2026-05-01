/*
 * XREFs of CreateBitmapFromIcon @ 0x18049F3C0
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1801EFC84 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ImageList_Destroy @ 0x1802157F0 (ImageList_Destroy.c)
 *     ImageList_Create @ 0x18021BAC8 (ImageList_Create.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _GetProcFromComCtl32 @ 0x1802D8288 (_GetProcFromComCtl32.c)
 *     ?Create32BitHBITMAP@@YAJPEAUHDC__@@PEBUtagSIZE@@PEAPEAXPEAPEAUHBITMAP__@@@Z @ 0x18049EC74 (-Create32BitHBITMAP@@YAJPEAUHDC__@@PEBUtagSIZE@@PEAPEAXPEAPEAUHBITMAP__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateBitmapFromIcon(HDC a1, __int64 a2, void **a3, const struct tagSIZE *a4, _QWORD *a5)
{
  int v7; // r15d
  HRESULT v8; // ebx
  HDC CompatibleDC; // rax
  HDC v10; // rsi
  HGDIOBJ v11; // rax
  int v12; // r9d
  struct _IMAGELIST *v13; // r14
  __int64 (__fastcall *v14)(struct _IMAGELIST *, __int64, HDC); // rax
  __int64 (__fastcall *v15)(struct _IMAGELIST *, GUID *, void **); // rax
  void *v16; // rcx
  HGDIOBJ v17; // rax
  int v19; // [rsp+20h] [rbp-91h]
  void *ppvObj; // [rsp+30h] [rbp-81h] BYREF
  HGDIOBJ h; // [rsp+38h] [rbp-79h] BYREF
  HGDIOBJ v22; // [rsp+40h] [rbp-71h]
  __int64 v23; // [rsp+50h] [rbp-61h] BYREF
  _BYTE v24[8]; // [rsp+58h] [rbp-59h] BYREF
  int v25; // [rsp+60h] [rbp-51h]
  HDC v26; // [rsp+68h] [rbp-49h]
  LONG v27; // [rsp+78h] [rbp-39h]
  LONG v28; // [rsp+7Ch] [rbp-35h]
  int v29; // [rsp+88h] [rbp-29h]
  int v30; // [rsp+8Ch] [rbp-25h]
  int v31; // [rsp+90h] [rbp-21h]
  __int64 v32; // [rsp+B0h] [rbp-1h] BYREF
  LONG cx; // [rsp+B8h] [rbp+7h]
  LONG cy; // [rsp+BCh] [rbp+Bh]

  h = 0LL;
  v7 = 0;
  *a5 = 0LL;
  v8 = Create32BitHBITMAP(a1, a4, a3, (HBITMAP *)&h);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v8 = -2147467259;
  CompatibleDC = CreateCompatibleDC(0LL);
  v10 = CompatibleDC;
  if ( !CompatibleDC )
  {
LABEL_27:
    DeleteObject(h);
    *a5 = 0LL;
    return (unsigned int)v8;
  }
  v11 = SelectObject(CompatibleDC, h);
  v32 = 0LL;
  v22 = v11;
  cx = a4->cx;
  cy = a4->cy;
  SHFillRectClr(v10, &v32, 0xFFFFFFFFLL);
  ppvObj = 0LL;
  if ( a1 )
  {
    v8 = -2147024882;
    v13 = ImageList_Create(a4->cx, a4->cy, 0x21u, v12, v19);
    if ( !v13 )
      goto LABEL_21;
    v14 = (__int64 (__fastcall *)(struct _IMAGELIST *, __int64, HDC))qword_1808D8438;
    if ( qword_1808D8438 == -1 )
    {
      GetProcFromComCtl32(&qword_1808D8438, "ImageList_ReplaceIcon");
      v14 = (__int64 (__fastcall *)(struct _IMAGELIST *, __int64, HDC))qword_1808D8438;
    }
    if ( v14 )
    {
      v7 = v14(v13, 0xFFFFFFFFLL, a1);
      if ( v7 != -1 )
      {
        v15 = (__int64 (__fastcall *)(struct _IMAGELIST *, GUID *, void **))qword_1808D8428;
        if ( qword_1808D8428 == -1 )
        {
          GetProcFromComCtl32(&qword_1808D8428, "HIMAGELIST_QueryInterface");
          v15 = (__int64 (__fastcall *)(struct _IMAGELIST *, GUID *, void **))qword_1808D8428;
        }
        if ( v15 )
          v8 = v15(v13, &GUID_192b9d83_50fc_457b_90a0_2b82a8b5dae1, &ppvObj);
        else
          v8 = -2147467259;
      }
    }
    else
    {
      v7 = -1;
    }
    ImageList_Destroy(v13);
  }
  else
  {
    v8 = SHGetImageList(-1, &GUID_192b9d83_50fc_457b_90a0_2b82a8b5dae1, &ppvObj);
    if ( v8 < 0 )
      goto LABEL_21;
    v8 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppvObj + 256LL))(
           ppvObj,
           (unsigned int)a4->cx,
           (unsigned int)a4->cy);
    if ( v8 < 0 )
      goto LABEL_21;
    v8 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppvObj + 296LL))(ppvObj, 0LL, 0LL);
  }
  if ( v8 >= 0 )
  {
    v23 = 88LL;
    memset_0(v24, 0, 0x50uLL);
    v27 = a4->cx;
    v28 = a4->cy;
    v29 = -16777216;
    v30 = -16777216;
    v25 = v7 & 0xFFFFFF;
    v26 = v10;
    v31 = 327681;
    v8 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvObj + 64LL))(ppvObj, &v23);
  }
LABEL_21:
  v16 = ppvObj;
  ppvObj = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = SelectObject(v10, v22);
  *a5 = v17;
  if ( v8 >= 0 && !v17 )
    v8 = -2147467259;
  DeleteDC(v10);
  if ( v8 < 0 )
    goto LABEL_27;
  return (unsigned int)v8;
}
