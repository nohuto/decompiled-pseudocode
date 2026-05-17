/*
 * XREFs of RtlLoadString @ 0x1800AAE90
 * Callers:
 *     <none>
 * Callees:
 *     RtlLocaleNameToLcid @ 0x1800045B0 (RtlLocaleNameToLcid.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x18002FFB0 (LdrpAccessResourceData.c)
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlLoadString(
        HANDLE Handle,
        unsigned __int16 a2,
        wchar_t *a3,
        int a4,
        _QWORD *a5,
        _WORD *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r10d
  __int64 v9; // r15
  unsigned __int16 v11; // bx
  char v12; // si
  int v13; // r8d
  unsigned __int64 v14; // r9
  int v15; // edi
  unsigned __int64 v16; // r9
  __int16 v17; // dx
  int v19; // [rsp+40h] [rbp-88h] BYREF
  __int64 v20; // [rsp+48h] [rbp-80h] BYREF
  __int64 v21; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-70h] BYREF
  _QWORD *v23; // [rsp+60h] [rbp-68h]
  _WORD *v24; // [rsp+68h] [rbp-60h]
  _QWORD v25[4]; // [rsp+70h] [rbp-58h] BYREF

  v8 = (unsigned int)a3;
  v9 = a2;
  v23 = a5;
  v24 = a6;
  v11 = 0;
  v22 = 0LL;
  v21 = 0LL;
  v19 = 0;
  v12 = a4 & 1;
  if ( !Handle || !a5 || (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( !v12 || !a7 && !a8 )
  {
    if ( (unsigned int)a3 <= 0xFFFF )
      goto LABEL_8;
    if ( *a3 )
    {
      if ( (int)RtlLocaleNameToLcid(a3, &v19, 3) < 0 )
        return 3221225485LL;
      v8 = (unsigned __int16)v19;
      v19 = (unsigned __int16)v19;
    }
    else
    {
      v8 = 0;
      v19 = 0;
    }
LABEL_8:
    v25[0] = 6LL;
    v25[1] = ((unsigned int)v9 >> 4) + 1;
    v25[2] = v8;
    v25[3] = v9;
    v20 = 0LL;
    if ( v12 )
    {
      v13 = LdrpSearchResourceSection_U((__int64)Handle, (__int64)v25, 4u, 1u, &v22);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v13 = LdrpAccessResourceData((__int64)Handle, v22, (__int64)&v21, 0LL);
      v14 = v20;
    }
    else
    {
      v13 = LdrResSearchResource(Handle, (__int64)&v21, (__int64)&v20, a7, a8);
      v14 = v20;
      if ( v13 >= 0 && (unsigned __int64)v20 > 0xFFFF )
        return (unsigned int)-1073741701;
    }
    if ( v13 < 0 || !v21 )
      return (unsigned int)v13;
    v15 = v9 & 0xF;
    v16 = v14 >> 1;
    v20 = v16;
    while ( 1 )
    {
      v17 = *(_WORD *)(v21 + 2LL * v11);
      v11 += v17 + 1;
      if ( !v12 && v11 > v16 )
        break;
      if ( --v15 < 0 )
      {
        if ( v11 && v17 )
          v11 -= v17;
        *v23 = v21 + 2LL * v11;
        if ( v24 )
          *v24 = v17;
        return (unsigned int)v13;
      }
    }
    return (unsigned int)-1073741701;
  }
  return 3221225659LL;
}
