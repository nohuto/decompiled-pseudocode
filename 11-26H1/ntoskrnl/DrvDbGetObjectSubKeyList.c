/*
 * XREFs of DrvDbGetObjectSubKeyList @ 0x140AFD1DC
 * Callers:
 *     DrvDbGetObjectList @ 0x140AFCFE0 (DrvDbGetObjectList.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140974660 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyList(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7,
        int a8)
{
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // eax
  _QWORD v18[3]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[516]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v22; // [rsp+258h] [rbp+158h]
  __int64 v23; // [rsp+260h] [rbp+160h]
  _WORD *v24; // [rsp+268h] [rbp+168h]
  unsigned int v25; // [rsp+270h] [rbp+170h]
  unsigned int v26; // [rsp+274h] [rbp+174h]

  *a7 = 0;
  if ( a5 && a6 )
    *a5 = 0;
  memset_0(v21, 0, sizeof(v21));
  v22 = a3;
  v20 = a8;
  v13 = 0LL;
  v23 = a4;
  v24 = a5;
  v25 = a6;
  v26 = 0;
  if ( a1 )
    v13 = *(_QWORD *)(a1 + 224);
  v19[0] = v13;
  v18[1] = DrvDbGetObjectSubKeyCallback;
  v19[1] = PnpCtxInternalEnumKeyCallback;
  v18[2] = &v20;
  v18[0] = a1;
  v19[2] = v18;
  v14 = RegRtlEnumKeyWithCallback(a2, v12, v19);
  if ( v14 >= 0 )
  {
    v15 = v26;
    *a7 = v26;
    if ( v15 )
    {
      v16 = v15 + 1;
      *a7 = v16;
      if ( a5 && v16 <= a6 )
        a5[v16 - 1] = 0;
      else
        return (unsigned int)-1073741789;
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v14;
}
