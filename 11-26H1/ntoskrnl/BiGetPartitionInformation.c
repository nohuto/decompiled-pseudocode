/*
 * XREFs of BiGetPartitionInformation @ 0x140B3CC28
 * Callers:
 *     BiCreatePartitionDevice @ 0x140897EAC (BiCreatePartitionDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1407280A0 (ZwDeviceIoControlFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall BiGetPartitionInformation(HANDLE FileHandle, ULONG InputBufferLength, _OWORD *a3)
{
  NTSTATUS v6; // edx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  __m256i OutputBuffer; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+80h] [rbp-80h]
  __int128 v18; // [rsp+90h] [rbp-70h]
  __int128 v19; // [rsp+A0h] [rbp-60h]
  __int128 v20; // [rsp+B0h] [rbp-50h]
  __int128 v21; // [rsp+C0h] [rbp-40h]
  __int128 v22; // [rsp+D0h] [rbp-30h]
  __int128 v23; // [rsp+E0h] [rbp-20h]
  __int128 v24; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v25; // [rsp+100h] [rbp+0h]

  IoStatusBlock = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  memset_0(&OutputBuffer, 0, 0x90uLL);
  v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, &OutputBuffer, 0x90u);
  if ( v6 >= 0 )
    goto LABEL_2;
  if ( !InputBufferLength )
  {
    v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x74004u, 0LL, 0, &v24, 0x20u);
    if ( v6 >= 0 )
    {
      *(_OWORD *)&OutputBuffer.m256i_u64[1] = v24;
      OutputBuffer.m256i_i32[6] = DWORD1(v25);
      OutputBuffer.m256i_i8[28] = BYTE11(v25);
      LOWORD(v17) = WORD4(v25);
      BYTE2(v17) = BYTE10(v25);
      DWORD1(v17) = v25;
      OutputBuffer.m256i_i32[0] = 0;
LABEL_2:
      v7 = *(_OWORD *)&OutputBuffer.m256i_u64[2];
      *a3 = *(_OWORD *)OutputBuffer.m256i_i8;
      v8 = v17;
      a3[1] = v7;
      v9 = v18;
      a3[2] = v8;
      v10 = v19;
      a3[3] = v9;
      v11 = v20;
      a3[4] = v10;
      v12 = v21;
      a3[5] = v11;
      v13 = v23;
      a3[6] = v12;
      a3[7] = v22;
      a3[8] = v13;
    }
  }
  return (unsigned int)v6;
}
