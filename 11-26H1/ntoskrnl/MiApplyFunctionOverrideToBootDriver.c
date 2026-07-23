/*
 * XREFs of MiApplyFunctionOverrideToBootDriver @ 0x140D05BF4
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140D07090 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x14080F814 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     RtlInitializeImageSystemOverride @ 0x140ACA95C (RtlInitializeImageSystemOverride.c)
 */

__int64 __fastcall MiApplyFunctionOverrideToBootDriver(ULONG_PTR BugCheckParameter2)
{
  PVOID v1; // rdi
  unsigned int v3; // esi
  int v4; // eax
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // r9
  _OWORD v19[13]; // [rsp+30h] [rbp-248h] BYREF
  int v20; // [rsp+100h] [rbp-178h]
  _DWORD v21[56]; // [rsp+110h] [rbp-168h] BYREF
  _BYTE v22[8]; // [rsp+1F0h] [rbp-88h] BYREF
  PVOID v23; // [rsp+1F8h] [rbp-80h]
  __int64 v24; // [rsp+200h] [rbp-78h]

  v1 = *(PVOID *)(BugCheckParameter2 + 48);
  v3 = *(_DWORD *)(BugCheckParameter2 + 64);
  if ( v1 != PsNtosImageBase && v1 != PsHalImageBase )
  {
    if ( (MiFlags & 0x20000) != 0 )
    {
      memset_0(v22, 0, 0x68uLL);
      v23 = v1;
      v24 = 1LL;
      v4 = VslpEnterIumSecureMode(2u, 0xE5u, 0, (__int64)v22);
    }
    else
    {
      v5 = RtlInitializeImageSystemOverride(v21, v3, 1);
      v6 = v5[1];
      v19[0] = *v5;
      v7 = v5[2];
      v19[1] = v6;
      v8 = v5[3];
      v19[2] = v7;
      v9 = v5[4];
      v19[3] = v8;
      v10 = v5[5];
      v19[4] = v9;
      v11 = v5[6];
      v19[5] = v10;
      v19[6] = v11;
      v12 = v5[7];
      v5 += 8;
      v19[7] = v12;
      v13 = v5[1];
      v19[8] = *v5;
      v14 = v5[2];
      v19[9] = v13;
      v15 = v5[3];
      v19[10] = v14;
      v16 = v5[4];
      LODWORD(v5) = *((_DWORD *)v5 + 20);
      v19[11] = v15;
      v19[12] = v16;
      v20 = (int)v5;
      v4 = RtlApplyFunctionOverrideFixupsToImage(v1, v3, (__int64)&stru_140E2D2D0.WpsFeedback, v17, (__int64)v19);
    }
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741637 )
      KeBugCheckEx(0x1Au, 0x1084uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 48), v4);
  }
  return 1LL;
}
