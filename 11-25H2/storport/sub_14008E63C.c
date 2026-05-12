/*
 * XREFs of sub_14008E63C @ 0x14008E63C
 * Callers:
 *     sub_14007F0A4 @ 0x14007F0A4 (sub_14007F0A4.c)
 *     sub_140083A3C @ 0x140083A3C (sub_140083A3C.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     sub_140135B20 @ 0x140135B20 (sub_140135B20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14008E63C(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        const void *a6,
        _BYTE *a7)
{
  int v11; // eax
  __int64 v12; // rdi
  int v13; // ebx
  _OWORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h]
  _OWORD v17[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  _BYTE Dst[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-48h]
  int v21; // [rsp+C8h] [rbp-38h]
  _OWORD v22[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+100h] [rbp+0h]

  v18 = 0;
  memset(v17, 0, sizeof(v17));
  memset_0(Dst, 0, 0x50uLL);
  v16 = 0;
  v23 = 0LL;
  v11 = *(_DWORD *)a1;
  memset(v15, 0, sizeof(v15));
  memset(v22, 0, sizeof(v22));
  if ( v11 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 || (v12 = *(_QWORD *)(a1 + 3584)) == 0 || !*(_QWORD *)(a1 + 3592) )
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( v11 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6056);
    if ( !v12 || !*(_QWORD *)(a1 + 6064) )
      return (unsigned int)-1073741637;
  }
  v13 = sub_14008CC90((int *)a1, a2, (__int64)Dst, a7);
  if ( v13 >= 0 )
  {
    if ( v20 || v21 )
    {
      v13 = sub_14008C3E8(v12, 0, a3, a4, (unsigned int *)v17, a7);
      if ( v13 >= 0 )
      {
        v13 = sub_14008C3E8(v12, 0, a5, a6, (unsigned int *)v15, a7);
        if ( v13 >= 0 )
        {
          v13 = sub_140135288(v12, 2LL, v22);
          if ( v13 >= 0 )
          {
            v13 = sub_140135B20(v12, (unsigned int)v22, a2, (unsigned int)v17, (__int64)v15);
            if ( v13 < 0 )
              sub_14006FED8(a7, 32LL, (__int64)"TcglibSetBandPin");
            sub_140134A98(v12, v22);
          }
          else
          {
            sub_14006FED8(a7, 32LL, (__int64)"TcglibOpenSession");
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v13;
}
