/*
 * XREFs of TraceDxgkPatchLocationList @ 0x140058B80
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F6600 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 * Callees:
 *     McTemplateK0ppqQR2QR2QR2QR2QR2QR2QR2_EtwWriteTransfer @ 0x140058CF8 (McTemplateK0ppqQR2QR2QR2QR2QR2QR2QR2_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall TraceDxgkPatchLocationList(int a1, char a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  _BYTE v17[256]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v18[256]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v19[256]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v20[256]; // [rsp+380h] [rbp+280h] BYREF
  _DWORD v21[64]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v22[256]; // [rsp+580h] [rbp+480h] BYREF
  _DWORD v23[64]; // [rsp+680h] [rbp+580h] BYREF

  result = (__int64)memset(v21, 0, sizeof(v21));
  v11 = 0;
  do
  {
    v12 = 0;
    v13 = a3 - v11;
    if ( a3 - v11 >= 0x40 )
    {
      v13 = 64;
LABEL_9:
      v14 = 0LL;
      do
      {
        v15 = v12 + v11;
        ++v12;
        v9 = 3 * v15;
        v23[v14 / 4] = *(_DWORD *)(a4 + 24 * v15);
        v14 += 4LL;
        v21[v14 / 4 + 63] = *(_DWORD *)(a4 + 24 * v15 + 4) & 0xFFFFFF;
        *(_DWORD *)&v19[v14 + 252] = *(_DWORD *)(a4 + 24 * v15 + 8);
        *(_DWORD *)&v18[v14 + 252] = *(_DWORD *)(a4 + 24 * v15 + 12);
        *(_DWORD *)&v17[v14 + 252] = *(_DWORD *)(a4 + 24 * v15 + 16);
        result = *(unsigned int *)(a4 + 24 * v15 + 20);
        *(_DWORD *)&v17[v14 - 4] = result;
      }
      while ( v12 < v13 );
      goto LABEL_4;
    }
    if ( v13 )
      goto LABEL_9;
LABEL_4:
    v11 += v13;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      result = McTemplateK0ppqQR2QR2QR2QR2QR2QR2QR2_EtwWriteTransfer(
                 v10,
                 v9,
                 v13,
                 a1,
                 a2,
                 v13,
                 (__int64)v23,
                 (__int64)v22,
                 (__int64)v21,
                 (__int64)v20,
                 (__int64)v19,
                 (__int64)v18,
                 (__int64)v17);
  }
  while ( v11 < a3 );
  return result;
}
