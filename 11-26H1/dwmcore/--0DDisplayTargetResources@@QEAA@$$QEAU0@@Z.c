/*
 * XREFs of ??0DDisplayTargetResources@@QEAA@$$QEAU0@@Z @ 0x18029CA28
 * Callers:
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@@Z @ 0x18029C75C (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDisplayTargetResources::DDisplayTargetResources(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = *a2;
  *a2 = 0LL;
  *(_QWORD *)a1 = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 8) = v3;
  v4 = a2[2];
  a2[2] = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  v5 = a2[3];
  a2[3] = 0LL;
  *(_QWORD *)(a1 + 24) = v5;
  v6 = a2[4];
  a2[4] = 0LL;
  *(_QWORD *)(a1 + 32) = v6;
  v7 = a2[5];
  a2[5] = 0LL;
  *(_QWORD *)(a1 + 40) = v7;
  v8 = a2[6];
  a2[6] = 0LL;
  *(_QWORD *)(a1 + 48) = v8;
  v9 = a2[7];
  a2[7] = 0LL;
  *(_QWORD *)(a1 + 56) = v9;
  v10 = a2[8];
  a2[8] = 0LL;
  *(_QWORD *)(a1 + 64) = v10;
  v11 = a2[9];
  a2[9] = 0LL;
  *(_QWORD *)(a1 + 72) = v11;
  v12 = a2[10];
  a2[10] = 0LL;
  *(_QWORD *)(a1 + 80) = v12;
  *(_DWORD *)(a1 + 88) = *((_DWORD *)a2 + 22);
  *(_DWORD *)(a1 + 92) = *((_DWORD *)a2 + 23);
  return a1;
}
