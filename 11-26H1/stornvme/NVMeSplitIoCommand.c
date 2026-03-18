/*
 * XREFs of NVMeSplitIoCommand @ 0x14002015C
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 *     ProcessCommandNvmePacket @ 0x14002B038 (ProcessCommandNvmePacket.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline @ 0x140012230 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall NVMeSplitIoCommand(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v3; // r9
  _DWORD *v4; // r10
  __int64 v5; // rbx
  unsigned int v6; // eax
  char v7; // cl
  unsigned __int8 v8; // dl
  __int64 v9; // r9
  unsigned int v10; // r11d
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v20; // [rsp+40h] [rbp+8h]

  SrbExtension = GetSrbExtension(a2);
  v5 = SrbExtension;
  if ( (v4[14] & 0x2000000) == 0
    || (v4[1016] & 0x10000) == 0
    || (v6 = *(_DWORD *)(SrbExtension + 4220), v6 <= 3)
    || (v7 = 1, (v6 & 1) != 0) )
  {
    v7 = 0;
  }
  if ( (*(_BYTE *)(v5 + 4225) & 2) != 0 )
  {
    if ( *(_BYTE *)(v3 + 2) == 40 )
      v8 = *(_BYTE *)(*(unsigned int *)(v3 + 52) + v3 + 10);
    else
      v8 = *(_BYTE *)(v3 + 7);
    v9 = *(_QWORD *)&v4[2 * v8 + 418];
    v20 = *(_QWORD *)(v5 + 4136);
    v10 = *(_DWORD *)(v9 + 52);
    if ( v7 )
    {
      v11 = 4096;
    }
    else
    {
      v12 = *(unsigned __int16 *)(v9 + 92);
      if ( (_WORD)v12 )
      {
LABEL_15:
        ++*(_DWORD *)(v9 + 36);
        v13 = (*(_DWORD *)(v5 + 4120) & 0xFFF) + 4095LL;
        v14 = v20 % v12;
        *(_WORD *)(v5 + 4144) = v12 - v14 - 1;
        v15 = v10 * (v12 - (_DWORD)v14);
        v16 = (unsigned __int64)(v15 + v13) >> 12;
        if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline() )
        {
          v17 = *(_QWORD *)(v5 + 4120);
          v18 = (v15 + (unsigned __int64)(v17 & 0xFFF)) >> 12;
          if ( (_DWORD)v18 )
          {
            if ( *(_DWORD *)(v5 + 4220) <= 2u )
              v17 = *(_QWORD *)(v5 + 4128);
            else
              v17 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v18 - 1));
          }
          *(_QWORD *)(v5 + 4184) = v17;
          *(_DWORD *)(v5 + 4220) = v16;
        }
        if ( (_DWORD)v16 == 1 )
        {
          *(_QWORD *)(v5 + 4128) = 0LL;
        }
        else if ( (_DWORD)v16 == 2 )
        {
          *(_QWORD *)(v5 + 4128) = *(_QWORD *)v5;
        }
        *(_QWORD *)(v5 + 4192) = NVMeSplitIoCommandCompletion;
        return 0LL;
      }
      v11 = v4[13];
    }
    v12 = v11 / v10;
    goto LABEL_15;
  }
  return 0LL;
}
