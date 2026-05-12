/*
 * XREFs of MdlToNVMeCommandPrp @ 0x14010047C
 * Callers:
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x140100F94 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     ScsiToNVMeCommand @ 0x140116B04 (ScsiToNVMeCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MdlToNVMeCommandPrp(__int64 a1, unsigned int a2, _DWORD *a3, _QWORD *a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // r11
  unsigned __int64 v11; // r8
  __int64 v13; // rax
  unsigned int v14; // r9d
  __int64 v15; // rcx

  v6 = a3[11];
  v9 = (((v6 + a3[8]) & 0xFFFLL) + (unsigned __int64)(unsigned int)a3[10] + 4095) >> 12;
  v10 = 0LL;
  v11 = ((v6 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
  if ( !(_DWORD)v11 )
    return 3221225473LL;
  if ( v6 >= 0x1000 )
  {
    v10 = v6 >> 12;
    v6 -= v6 >> 12 << 12;
  }
  if ( (int)v10 + (int)v11 > (unsigned int)v9 )
    return 3221225701LL;
  *(_QWORD *)(a1 + 24) = v6 + (*(_QWORD *)&a3[2 * v10 + 12] << 12);
  if ( (_DWORD)v11 == 1 )
    return 0LL;
  if ( (_DWORD)v11 == 2 )
  {
    v13 = *(_QWORD *)&a3[2 * (unsigned int)(v10 + 1) + 12] << 12;
LABEL_10:
    *(_QWORD *)(a1 + 32) = v13;
    return 0LL;
  }
  if ( a4 )
  {
    v13 = a5;
    if ( a5 )
    {
      v14 = 1;
      do
      {
        v15 = v14 + (unsigned int)v10;
        ++v14;
        *a4++ = *(_QWORD *)&a3[2 * v15 + 12] << 12;
      }
      while ( v14 < (unsigned int)v11 );
      goto LABEL_10;
    }
  }
  return 3221225485LL;
}
