/*
 * XREFs of IaaSubmitWorkToCpu @ 0x1406E59C8
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x140463B30 (RtlDecompressBufferEx.c)
 *     RtlCompressBuffer @ 0x140463C00 (RtlCompressBuffer.c)
 *     crc32 @ 0x14047DD24 (crc32.c)
 */

__int64 __fastcall IaaSubmitWorkToCpu(__int64 a1, char *a2, __int64 a3)
{
  char v5; // dl
  char v6; // dl
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  USHORT v11; // cx
  NTSTATUS v12; // eax
  char v13; // cl
  ULONG v14; // r8d
  __int64 v15; // rdx
  USHORT v16; // cx
  char v17; // al
  char v18; // al
  ULONG FinalUncompressedSize; // [rsp+50h] [rbp+8h] BYREF

  v5 = *a2 & 0xC1;
  FinalUncompressedSize = 0;
  v6 = v5 | 1;
  v7 = 0;
  *a2 = v6;
  v8 = *(unsigned __int8 *)(a1 + 7);
  if ( v8 )
  {
    v9 = v8 - 2;
    if ( v9 )
    {
      v10 = v9 - 64;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          v7 = -1073741811;
          *a2 = v6 & 0xC0 | 0x20;
          return v7;
        }
        if ( *(_DWORD *)(a3 + 8) == 1 )
        {
          v11 = 7;
        }
        else if ( *(_DWORD *)(a3 + 8) == 2 )
        {
          v11 = 4;
        }
        else
        {
          v11 = 0;
        }
        v12 = RtlCompressBuffer(
                v11,
                *(PUCHAR *)(a1 + 16),
                *(_DWORD *)(a1 + 32),
                *(PUCHAR *)(a1 + 24),
                *(_DWORD *)(a1 + 48),
                0x1000u,
                &FinalUncompressedSize,
                *(PVOID *)(a3 + 64));
        v13 = *a2;
        v7 = v12;
        if ( v12 < 0 )
        {
          if ( v12 == -1073741789 )
          {
            a2[1] = 25;
            *a2 = v13 & 0xC0 | 0xA;
          }
          else
          {
            *a2 = v13 & 0xC0 | 0x20;
          }
          return v7;
        }
        *((_DWORD *)a2 + 6) = FinalUncompressedSize;
        *a2 = v13 & 0xC0 | 1;
        v14 = *(_DWORD *)(a1 + 32);
        v15 = *(_QWORD *)(a1 + 16);
LABEL_16:
        *((_DWORD *)a2 + 8) = crc32(0LL, v15, v14);
        return v7;
      }
      if ( *(_DWORD *)(a3 + 8) == 1 )
      {
        v16 = 7;
      }
      else if ( *(_DWORD *)(a3 + 8) == 2 )
      {
        v16 = 4;
      }
      else
      {
        v16 = 0;
      }
      v7 = RtlDecompressBufferEx(
             v16,
             *(PUCHAR *)(a1 + 24),
             *(_DWORD *)(a1 + 48),
             *(PUCHAR *)(a1 + 16),
             *(_DWORD *)(a1 + 32),
             &FinalUncompressedSize,
             *(PVOID *)(a3 + 64));
      v17 = *a2;
      if ( (v7 & 0x80000000) == 0 )
      {
        v14 = FinalUncompressedSize;
        *((_DWORD *)a2 + 6) = FinalUncompressedSize;
        *a2 = v17 & 0xC0 | 1;
        v15 = *(_QWORD *)(a1 + 24);
        goto LABEL_16;
      }
      if ( v7 == -1073741789 )
      {
        a2[1] = 25;
        v18 = v17 & 0xC0 | 0xA;
      }
      else
      {
        v18 = v17 & 0xC0 | 0x20;
      }
      *a2 = v18;
    }
  }
  return v7;
}
