/*
 * XREFs of _lambda_cbfcde231c2a8d1b9d404329183532d4_::operator() @ 0x1401C6D68
 * Callers:
 *     _lambda_cbfcde231c2a8d1b9d404329183532d4_::_lambda_invoker_cdecl_ @ 0x1401C6690 (_lambda_cbfcde231c2a8d1b9d404329183532d4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DxgkInvalidateDeviceState @ 0x14006C7B4 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall lambda_cbfcde231c2a8d1b9d404329183532d4_::operator()(__int64 a1, __int64 a2, unsigned int *a3)
{
  struct _LUID *v5; // rdx
  __int64 v6; // r11
  unsigned int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  void *v10; // rbx
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v12,
    (struct DXGADAPTER *)a2,
    1);
  if ( (*(_DWORD *)(a2 + 444) & 0x100) != 0 && !*(_BYTE *)(a2 + 3057) && *(_DWORD *)(a2 + 200) == 1 )
  {
    LODWORD(v13) = 0;
    if ( DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v5, (unsigned int *)&v13, 0LL) )
    {
      v7 = *a3;
      if ( (_DWORD)v13 == *a3 )
      {
        v8 = *(_DWORD *)(a2 + 412);
        v9 = *(_DWORD *)(a2 + 416);
        v13 = v6;
        DxgkLogCodePointPacketForSession(v6 + 113, v7, v9, v8, v6, (unsigned int)v6);
        v10 = *(void **)(a2 + 216);
        ObfReferenceObject(v10);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
        DxgkInvalidateDeviceState((__int64)v10);
        ObfDereferenceObject(v10);
      }
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  return 0LL;
}
