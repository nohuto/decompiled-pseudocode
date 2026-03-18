/*
 * XREFs of ScsiReportLunsCommand @ 0x140011620
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeIsLunActive @ 0x14000FE20 (NVMeIsLunActive.c)
 */

__int64 __fastcall ScsiReportLunsCommand(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r10
  _BYTE *SrbDataBuffer; // r11
  _DWORD *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // r11
  unsigned int *v13; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a2 + 3) = 1;
  v2 = *(_DWORD *)(a1 + 128);
  v13 = 0LL;
  if ( ((v2 & 0x10) != 0 || (*(_DWORD *)(a1 + 24) & 0x2000) == 0) && *(_WORD *)(a1 + 332) && *(_WORD *)(a1 + 330) )
  {
    SrbDataBuffer = (_BYTE *)GetSrbDataBuffer(a2, &v13);
    v7 = v13;
    v8 = 8 * *(_DWORD *)(v3 + 224);
    if ( *v13 >= (unsigned __int64)v8 + 8 )
    {
      SrbDataBuffer[3] = v8;
      *SrbDataBuffer = HIBYTE(v8);
      SrbDataBuffer[1] = BYTE2(v8);
      for ( SrbDataBuffer[2] = BYTE1(v8); v4 < *(_DWORD *)(v3 + 224); v4 = v10 + 1 )
      {
        if ( NVMeIsLunActive(*(_QWORD *)(v3 + 8LL * v4 + 1672)) )
        {
          *(_BYTE *)(v11 + 8 * v9 + 8) = 0;
          *(_BYTE *)(v11 + 8 * v9 + 9) = v10;
          *(_DWORD *)(v11 + 8 * v9 + 10) = 0;
          *(_WORD *)(v11 + 8 * v9 + 14) = 0;
        }
      }
    }
    else
    {
      *(_BYTE *)(v5 + 3) = 18;
      if ( *v7 >= 4u )
      {
        SrbDataBuffer[3] = v8;
        *SrbDataBuffer = HIBYTE(v8);
        SrbDataBuffer[1] = BYTE2(v8);
        SrbDataBuffer[2] = BYTE1(v8);
      }
    }
  }
  return 0LL;
}
