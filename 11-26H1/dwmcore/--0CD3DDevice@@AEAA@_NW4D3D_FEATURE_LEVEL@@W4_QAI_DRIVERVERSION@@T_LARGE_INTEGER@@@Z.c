/*
 * XREFs of ??0CD3DDevice@@AEAA@_NW4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z @ 0x180298D78
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801D4410 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801744A0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CD2DContext@@IEAA@XZ @ 0x18020DFA4 (--0CD2DContext@@IEAA@XZ.c)
 */

__int64 __fastcall CD3DDevice::CD3DDevice(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // rcx
  int v8; // r8d
  int v9; // r9d
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 448) = 0LL;
  CD2DContext::CD2DContext((CD2DContext *)(a1 + 16));
  *(_DWORD *)(a1 + 472) = 1;
  *(_QWORD *)(a1 + 456) = a1 + 488;
  *(_QWORD *)(a1 + 464) = a1 + 488;
  *(_QWORD *)(a1 + 476) = 1LL;
  *(_DWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)a1 = &CD3DDevice::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *v7 = &CD3DDevice::`vftable'{for `CD2DContext'};
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 632) = a5;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_DWORD *)(a1 + 624) = v8;
  *(_DWORD *)(a1 + 628) = v9;
  *(_DWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 976) = -1LL;
  *(_QWORD *)(a1 + 1024) = 0LL;
  *(_QWORD *)(a1 + 1032) = 0LL;
  *(_QWORD *)(a1 + 1040) = 0LL;
  *(_QWORD *)(a1 + 1048) = 0LL;
  *(_QWORD *)(a1 + 1072) = 0LL;
  *(_QWORD *)(a1 + 1136) = &CD3DResourceManager::`vftable';
  *(_DWORD *)(a1 + 1208) = 0;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1152));
  *(_QWORD *)(a1 + 1176) = a1 + 1168;
  *(_QWORD *)(a1 + 1168) = a1 + 1168;
  *(_QWORD *)(a1 + 1184) = 0LL;
  *(_QWORD *)(a1 + 1232) = a1 + 1256;
  *(_QWORD *)(a1 + 1240) = a1 + 1256;
  *(_QWORD *)(a1 + 1248) = a1 + 1424;
  *(_QWORD *)(a1 + 1424) = 0LL;
  *(_QWORD *)(a1 + 1432) = 0LL;
  *(_QWORD *)(a1 + 1440) = 0LL;
  *(_BYTE *)(a1 + 1488) = a2;
  *(_QWORD *)(a1 + 1448) = 0LL;
  *(_QWORD *)(a1 + 1456) = 0LL;
  *(_QWORD *)(a1 + 1472) = 0LL;
  *(_QWORD *)(a1 + 1480) = 0LL;
  *(_DWORD *)(a1 + 1496) = 0;
  *(_QWORD *)(a1 + 1504) = 0LL;
  *(_QWORD *)(a1 + 1512) = 0LL;
  *(_DWORD *)(a1 + 1520) = 0;
  *(_QWORD *)(a1 + 1528) = 0LL;
  `vector constructor iterator'(
    (char *)(a1 + 1536),
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)(a1 + 1568),
    8LL,
    24LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)(a1 + 1760),
    8LL,
    48LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)(a1 + 2144),
    8LL,
    1LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)(a1 + 2152),
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  result = a1;
  *(_QWORD *)(a1 + 2184) = 0LL;
  return result;
}
