/*
 * XREFs of ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x14008E3B0
 * Callers:
 *     sub_14007EAC0 @ 0x14007EAC0 (sub_14007EAC0.c)
 *     sub_140083424 @ 0x140083424 (sub_140083424.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     sub_1401355EC @ 0x1401355EC (sub_1401355EC.c)
 *     sub_140135FC4 @ 0x140135FC4 (sub_140135FC4.c)
 *     sub_140136054 @ 0x140136054 (sub_140136054.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall CMSPAddress::get_DynamicTerminalClasses(
        CMSPAddress *this,
        struct tagVARIANT *a2,
        char a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        unsigned int a9,
        const void *a10,
        _BYTE *a11)
{
  int v14; // esi
  int v15; // eax
  __int64 v16; // r14
  int v17; // ebx
  int v19; // edi
  int v20; // edi
  int v21; // edi
  const char *v22; // r8
  __int64 v23; // r9
  unsigned int v24; // [rsp+50h] [rbp-B0h]
  _OWORD v25[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+80h] [rbp-80h]
  _BYTE Dst[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char v29; // [rsp+D0h] [rbp-30h]
  char v30; // [rsp+D1h] [rbp-2Fh]
  char v31; // [rsp+D2h] [rbp-2Eh]
  char v32; // [rsp+D3h] [rbp-2Dh]
  char v33; // [rsp+D4h] [rbp-2Ch]
  int v34; // [rsp+D8h] [rbp-28h]
  _OWORD v35[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v36; // [rsp+110h] [rbp+10h]

  v24 = (unsigned int)a2;
  memset_0(Dst, 0, 0x50uLL);
  v26 = 0;
  v36 = 0LL;
  v14 = 0;
  v15 = *(_DWORD *)this;
  memset(v25, 0, sizeof(v25));
  memset(v35, 0, sizeof(v35));
  if ( v15 != 1431193940 )
  {
    if ( v15 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)this + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v16 = *((_QWORD *)this + 757);
    if ( !v16 || !*((_QWORD *)this + 758) )
      return (unsigned int)-1073741637;
LABEL_11:
    v17 = sub_14008CC90((int *)this, v24, (__int64)Dst, a11);
    if ( v17 < 0 )
      return (unsigned int)v17;
    if ( !v28 && !v34 )
      return (unsigned int)-1073741811;
    v17 = sub_14008C3E8(v16, 0, a9, a10, (unsigned int *)v25, a11);
    if ( v17 < 0 )
      return (unsigned int)v17;
    if ( a3 )
    {
      v19 = a4 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            v14 = 3;
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 1;
      }
      v21 = v14;
    }
    else
    {
      v21 = 1;
      v14 = 1;
      if ( v29 )
      {
        if ( v31 )
        {
          v14 = 3;
        }
        else if ( v33 )
        {
          v14 = 2;
        }
      }
      if ( v30 )
      {
        if ( v32 )
        {
          v21 = 3;
        }
        else if ( v33 )
        {
          v21 = 2;
        }
      }
    }
    v17 = sub_140135288(v16, 2LL, v35);
    if ( v17 < 0 )
    {
      sub_14006FED8(a11, 32LL, (__int64)"TcglibOpenSession");
      return (unsigned int)v17;
    }
    v17 = sub_140135FC4(v16, v35);
    if ( v17 >= 0 )
    {
      v17 = sub_1401355EC(v16, (unsigned int)v35, v24, v14, v21, a5, a6, a8 & -(__int64)(a7 != 0), (__int64)v25);
      sub_140136054(v16, v35, (unsigned int)v17, v23);
      if ( v17 >= 0 )
      {
LABEL_41:
        sub_140134A98(v16, v35);
        return (unsigned int)v17;
      }
      v22 = "TcglibSetBand";
    }
    else
    {
      v22 = "TcglibStartTransaction";
    }
    sub_14006FED8(a11, 32LL, (__int64)v22);
    goto LABEL_41;
  }
  if ( (*((_BYTE *)this + 507) & 0x40) == 0 )
  {
    v16 = *((_QWORD *)this + 448);
    if ( v16 )
    {
      if ( *((_QWORD *)this + 449) )
        goto LABEL_11;
    }
  }
  return (unsigned int)-1073741637;
}
