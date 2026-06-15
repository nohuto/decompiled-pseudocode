/*
 * XREFs of sub_140066978 @ 0x140066978
 * Callers:
 *     sub_140064B44 @ 0x140064B44 (sub_140064B44.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_1400660F0 @ 0x1400660F0 (sub_1400660F0.c)
 *     sub_140073A74 @ 0x140073A74 (sub_140073A74.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_140066978(
        LPUNKNOWN pUnkOuter,
        IID *rclsid,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        _QWORD *a9)
{
  LPUNKNOWN ppv; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  HRESULT Instance; // esi
  int v16; // edx
  struct IUnknownVtbl *v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // edx
  int v22; // eax
  int v23; // edx
  __int64 v24; // rbx
  struct IUnknownVtbl *v25; // rcx
  struct IUnknownVtbl *v26; // rcx
  int v27; // eax
  int v28; // edx
  int v29; // edi
  int v30; // edx
  int v31; // eax
  __int64 v32; // [rsp+48h] [rbp-28h] BYREF
  __int64 v33; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34[2]; // [rsp+60h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  ppv = pUnkOuter + 11;
  lpVtbl = pUnkOuter[11].lpVtbl;
  ppv->lpVtbl = 0LL;
  if ( a4 )
  {
    if ( lpVtbl )
      sub_1400B6010(lpVtbl);
    Instance = sub_140073A74((_DWORD)rclsid, (_DWORD)rclsid, a3, a4, (__int64)pUnkOuter, a5, (__int64)ppv);
    if ( Instance < 0 )
    {
      v16 = 64;
      goto LABEL_6;
    }
  }
  else
  {
    if ( lpVtbl )
      sub_1400B6010(lpVtbl);
    Instance = CoCreateInstance(rclsid, pUnkOuter, 1u, &stru_1400C6598, (LPVOID *)&ppv->lpVtbl);
    if ( Instance < 0 )
    {
      v16 = 57;
LABEL_6:
      sub_14000C2A8((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", Instance);
      return (unsigned int)Instance;
    }
  }
  v34[0] = 0LL;
  BYTE1(pUnkOuter[10].lpVtbl) = (int)sub_1400B6010(ppv->lpVtbl) >= 0;
  sub_140056130(v34);
  v34[0] = 0LL;
  BYTE2(pUnkOuter[10].lpVtbl) = (int)sub_1400B6010(ppv->lpVtbl) >= 0;
  sub_140056130(v34);
  LOBYTE(pUnkOuter[10].lpVtbl) = 1;
  v18 = ppv->lpVtbl;
  if ( a6 )
  {
    v34[0] = 0LL;
    v19 = sub_1400B6010(v18);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = 86;
LABEL_16:
      sub_14000C2A8((int)retaddr, v21, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v19);
LABEL_30:
      sub_140056130(v34);
      return v20;
    }
    v19 = sub_1400B6010(v34[0]);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = 89;
      goto LABEL_16;
    }
    v32 = 0LL;
    v22 = sub_1400660F0(a6, &v32);
    v20 = v22;
    if ( v22 < 0 )
    {
      v23 = 93;
LABEL_19:
      sub_14000C2A8((int)retaddr, v23, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v22);
LABEL_29:
      sub_140056130(&v32);
      goto LABEL_30;
    }
    v24 = v32;
    v25 = pUnkOuter[12].lpVtbl;
    pUnkOuter[12].lpVtbl = 0LL;
    if ( v25 )
      sub_1400B6010(v25);
    v22 = sub_1400B6010(v24);
    v20 = v22;
    if ( v22 < 0 )
    {
      v23 = 94;
      goto LABEL_19;
    }
    v33 = 0LL;
    v26 = pUnkOuter[12].lpVtbl;
    v33 = 0LL;
    v27 = sub_1400B6010(v26);
    v20 = v27;
    if ( v27 < 0 )
    {
      v28 = 100;
LABEL_28:
      sub_14000C2A8((int)retaddr, v28, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v27);
      sub_140056130(&v33);
      goto LABEL_29;
    }
    v27 = sub_1400B6010(pUnkOuter);
    v20 = v27;
    if ( v27 < 0 )
    {
      v28 = 114;
      goto LABEL_28;
    }
    *a8 = 0LL;
    *a9 = (unsigned __int64)&pUnkOuter[3] & ((unsigned __int128)-(__int128)(unsigned __int64)pUnkOuter >> 64);
    sub_1400B6010(pUnkOuter);
    sub_140056130(&v33);
    sub_140056130(&v32);
    sub_140056130(v34);
    return 0LL;
  }
  v29 = sub_1400B6010(v18);
  if ( v29 >= 0 )
  {
    v29 = sub_1400B6010(ppv->lpVtbl);
    if ( v29 >= 0 )
    {
      v31 = sub_1400B6010(ppv->lpVtbl);
      v20 = v31;
      if ( v31 < 0 )
      {
        sub_14000C2A8((int)retaddr, 128, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v31);
        return v20;
      }
      return 0LL;
    }
    v30 = 127;
  }
  else
  {
    v30 = 126;
  }
  sub_14000C2A8((int)retaddr, v30, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v29);
  return (unsigned int)v29;
}
