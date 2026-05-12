/*
 * XREFs of sub_14008CE14 @ 0x14008CE14
 * Callers:
 *     sub_14007D5A8 @ 0x14007D5A8 (sub_14007D5A8.c)
 *     sub_140081EB8 @ 0x140081EB8 (sub_140081EB8.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_14013500C @ 0x14013500C (sub_14013500C.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     sub_140135FC4 @ 0x140135FC4 (sub_140135FC4.c)
 *     sub_140136054 @ 0x140136054 (sub_140136054.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14008CE14(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        const void *a6,
        _BYTE *a7)
{
  size_t v8; // r15
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // ebx
  int v16; // r9d
  const char *v17; // r8
  __int64 v18; // r9
  _OWORD v19[2]; // [rsp+38h] [rbp-B9h] BYREF
  int v20; // [rsp+58h] [rbp-99h]
  _BYTE Dst[56]; // [rsp+60h] [rbp-91h] BYREF
  __int64 v22; // [rsp+98h] [rbp-59h]
  int v23; // [rsp+A8h] [rbp-49h]
  _OWORD v24[3]; // [rsp+B0h] [rbp-41h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-11h]

  v8 = a3;
  memset_0(Dst, 0, 0x50uLL);
  v20 = 0;
  v25 = 0LL;
  v11 = *(_DWORD *)a1;
  memset(v19, 0, sizeof(v19));
  memset(v24, 0, sizeof(v24));
  if ( v11 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 3584);
    if ( !v12 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 3592);
  }
  else
  {
    if ( v11 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6056);
    if ( !v12 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 6064);
  }
  if ( v13 )
  {
    v14 = sub_14008CC90((int *)a1, a2, (__int64)Dst, a7);
    if ( v14 < 0 )
      return (unsigned int)v14;
    if ( !v22 && !v23
      || !(_DWORD)v8
      || (unsigned int)v8 > *(_DWORD *)(v13 + 140) / (unsigned int)*(unsigned __int16 *)(v13 + 136) )
    {
      return (unsigned int)-1073741811;
    }
    memset_0(a4, 0, v8);
    v14 = sub_14008C3E8(v12, 0, a5, a6, (unsigned int *)v19, a7);
    if ( v14 < 0 )
      return (unsigned int)v14;
    v14 = sub_140135288(v12, 2LL, v24);
    if ( v14 < 0 )
    {
      sub_14006FED8(a7, 32LL, (__int64)"TcglibOpenSession");
      return (unsigned int)v14;
    }
    v14 = sub_140135FC4(v12, v24);
    if ( v14 >= 0 )
    {
      v14 = sub_14013500C(v12, (unsigned int)v24, a2, v16, v8, (__int64)a4);
      sub_140136054(v12, v24, (unsigned int)v14, v18);
      if ( v14 >= 0 )
      {
LABEL_26:
        sub_140134A98(v12, v24);
        return (unsigned int)v14;
      }
      v17 = "TcglibGetBandMetadata";
    }
    else
    {
      v17 = "TcglibStartTransaction";
    }
    sub_14006FED8(a7, 32LL, (__int64)v17);
    goto LABEL_26;
  }
  return (unsigned int)-1073741637;
}
