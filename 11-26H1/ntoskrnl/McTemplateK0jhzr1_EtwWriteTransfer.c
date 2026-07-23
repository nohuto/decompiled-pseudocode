/*
 * XREFs of McTemplateK0jhzr1_EtwWriteTransfer @ 0x1404982B4
 * Callers:
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0jhzr1_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        __int64 a6)
{
  _BYTE v7[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  unsigned __int16 *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  v8 = a4;
  v14 = 0;
  v10 = &a5;
  v12 = a6;
  v9 = 16LL;
  v13 = 2 * a5;
  v11 = 2LL;
  return McGenEventWrite_EtwWriteTransfer(&IoMgrProvider_Context, a2, a3, 4LL, v7);
}
