/*
 * XREFs of sub_14008E83C @ 0x14008E83C
 * Callers:
 *     sub_14007F650 @ 0x14007F650 (sub_14007F650.c)
 *     sub_140084010 @ 0x140084010 (sub_140084010.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     sub_1401359CC @ 0x1401359CC (sub_1401359CC.c)
 *     sub_140135FC4 @ 0x140135FC4 (sub_140135FC4.c)
 *     sub_140136054 @ 0x140136054 (sub_140136054.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14008E83C(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        const void *a6,
        _BYTE *a7)
{
  size_t v9; // r12
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // ebx
  __int64 v15; // r13
  unsigned int v16; // eax
  size_t v17; // r14
  void *v18; // rax
  void *v19; // rsi
  int v20; // r9d
  __int64 v21; // r9
  _OWORD v24[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+78h] [rbp-88h]
  _BYTE Dst[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+C8h] [rbp-38h]
  _OWORD v29[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+100h] [rbp+0h]

  v9 = a3;
  memset_0(Dst, 0, 0x50uLL);
  v25 = 0;
  v30 = 0LL;
  v10 = *(_DWORD *)a1;
  memset(v24, 0, sizeof(v24));
  memset(v29, 0, sizeof(v29));
  if ( v10 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v11 = *(_QWORD *)(a1 + 3584);
    if ( !v11 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 3592);
  }
  else
  {
    if ( v10 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v11 = *(_QWORD *)(a1 + 6056);
    if ( !v11 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6064);
  }
  if ( !v12 )
    return (unsigned int)-1073741637;
  v15 = *(_QWORD *)(a1 + 8);
  v13 = sub_14008CC90((int *)a1, a2, (__int64)Dst, a7);
  if ( v13 >= 0 )
  {
    if ( (v27 || v28)
      && (v16 = *(_DWORD *)(v12 + 140) / (unsigned int)*(unsigned __int16 *)(v12 + 136),
          v17 = v16,
          (unsigned int)v9 <= v16) )
    {
      v18 = (void *)sub_1400143E0(256LL, v16, 1129603410LL, v15);
      v19 = v18;
      if ( v18 )
      {
        memset_0(v18, 0, v17);
        if ( (_DWORD)v9 )
          memmove(v19, a4, v9);
        v13 = sub_14008C3E8(v11, 0, a5, a6, (unsigned int *)v24, a7);
        if ( v13 >= 0 )
        {
          v13 = sub_140135288(v11, 2LL, v29);
          if ( v13 >= 0 )
          {
            v13 = sub_140135FC4(v11, v29);
            if ( v13 >= 0 )
            {
              v13 = sub_1401359CC(v11, (unsigned int)v29, a2, v20, v17, (__int64)v19, (__int64)v24);
              sub_140136054(v11, v29, (unsigned int)v13, v21);
              if ( v13 < 0 )
                sub_14006FED8(a7, 32LL, (__int64)"TcglibSetBandMetadata");
            }
            sub_140134A98(v11, v29);
          }
          else
          {
            sub_14006FED8(a7, 32LL, (__int64)"TcglibOpenSession");
          }
        }
        ExFreePoolWithTag(v19, 0x43546152u);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v13;
}
