/*
 * XREFs of QatSubmitWorkToCpu @ 0x1406E5330
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x140463B30 (RtlDecompressBufferEx.c)
 *     RtlCompressBuffer @ 0x140463C00 (RtlCompressBuffer.c)
 *     crc32 @ 0x14047DD24 (crc32.c)
 */

__int64 __fastcall QatSubmitWorkToCpu(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  int v6; // ecx
  unsigned __int64 v7; // rdi
  int v8; // ecx
  USHORT v9; // r10
  NTSTATUS v10; // eax
  ULONG v11; // r8d
  __int64 v12; // rdx
  char v13; // al
  ULONG FinalCompressedSize; // [rsp+50h] [rbp+8h] BYREF

  *(_BYTE *)(a2 + 6) = 0;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  FinalCompressedSize = 0;
  v8 = v6 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
      v9 = 4;
    else
      v9 = 0;
  }
  else
  {
    v9 = 7;
  }
  if ( *(_BYTE *)(v7 + 2) )
  {
    if ( *(_BYTE *)(v7 + 2) == 1 )
    {
      v4 = RtlCompressBuffer(
             v9,
             *(PUCHAR *)(v7 + 32),
             *(_DWORD *)(v7 + 48),
             *(PUCHAR *)(v7 + 40),
             *(_DWORD *)(v7 + 60),
             0x1000u,
             &FinalCompressedSize,
             *(PVOID *)(a3 + 64));
      if ( (v4 & 0x80000000) == 0 )
      {
        *(_DWORD *)(a2 + 20) = FinalCompressedSize;
        *(_BYTE *)(a2 + 6) = 0;
        v11 = *(_DWORD *)(v7 + 48);
        v12 = *(_QWORD *)(v7 + 32);
        goto LABEL_20;
      }
      v13 = 32;
      *(_BYTE *)(a2 + 4) = -13;
      if ( v4 == -1073741789 )
        v13 = 16;
      *(_BYTE *)(a2 + 6) = v13;
    }
    else
    {
      if ( *(_BYTE *)(v7 + 2) != 2 )
      {
        v4 = -1073741811;
        *(_BYTE *)(a2 + 6) = 32;
        *(_BYTE *)(a2 + 4) = -13;
        return v4;
      }
      v10 = RtlDecompressBufferEx(
              v9,
              *(PUCHAR *)(v7 + 40),
              *(_DWORD *)(v7 + 60),
              *(PUCHAR *)(v7 + 32),
              *(_DWORD *)(v7 + 48),
              &FinalCompressedSize,
              *(PVOID *)(a3 + 64));
      v4 = v10;
      if ( v10 >= 0 )
      {
        v11 = FinalCompressedSize;
        *(_DWORD *)(a2 + 20) = FinalCompressedSize;
        *(_BYTE *)(a2 + 6) = 0;
        v12 = *(_QWORD *)(v7 + 40);
LABEL_20:
        *(_DWORD *)(a2 + 24) = crc32(0LL, v12, v11);
        return v4;
      }
      if ( v10 == -1073741789 )
      {
        *(_BYTE *)(a2 + 6) = 16;
        *(_BYTE *)(a2 + 4) = -13;
      }
      else
      {
        *(_BYTE *)(a2 + 6) = 32;
      }
    }
  }
  return v4;
}
