/*
 * XREFs of NVMeControllerPreparePLDR @ 0x140017420
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeIsDeviceGone @ 0x140006B90 (NVMeIsDeviceGone.c)
 *     IoQueuesDeletion @ 0x14000C4A0 (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x14000DB20 (NVMeSetHostMemoryBuffer.c)
 *     RoundUp64 @ 0x14000EB40 (RoundUp64.c)
 */

__int64 __fastcall NVMeControllerPreparePLDR(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v4; // r8
  unsigned int *v5; // r9
  unsigned int v6; // eax
  void *Src; // rcx
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned __int64 v10; // r9
  unsigned int v11; // eax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned int v14; // r10d
  int v15; // ecx
  unsigned int i; // esi
  int v17; // eax
  signed __int32 v19[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  LODWORD(v1) = 0;
  v2 = *(_QWORD *)(a1 + 1560);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 1) == 0
    || NVMeIsDeviceGone(a1)
    || (*(_DWORD *)(a1 + 24) & 0x440000) != 0 )
  {
    *(_DWORD *)(a1 + 24) |= 0x20000u;
  }
  else
  {
    v5 = *(unsigned int **)(a1 + 3720);
    if ( !v5
      || (v6 = v5[1],
          Src = v5 + 2,
          v8 = *v5,
          LODWORD(Size) = v6,
          v9 = NVMeSetHostMemoryBuffer(a1, v1, 0, v8, Src, Size),
          (v1 = v9) == 0) )
    {
      if ( (unsigned __int8)IoQueuesDeletion(a1, v1, v4, (__int64)v5) )
      {
        v11 = *(_DWORD *)(v2 + 88);
        if ( v11 )
          v12 = RoundUp64(v11, 0x2710uLL) / 0x2710;
        else
          LODWORD(v12) = 500;
        if ( *(_BYTE *)(a1 + 47) )
        {
          v13 = RoundUp64((unsigned int)v12, 0x64uLL);
          v15 = v14;
          v10 = v13 / 0x64;
          if ( (unsigned int)(v13 / 0x64) > v14 )
            v15 = v13 / 0x64;
          LODWORD(v12) = 100 * v15;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) & 0xFFFF3FFF | 0x4000;
        _InterlockedOr(v19, 0);
        for ( i = 0; i < (unsigned int)v12; ++i )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 0xC) == 8 )
            break;
          StorPortExtendedFunction(81LL, a1, 10000LL, v10);
        }
        v17 = *(_DWORD *)(a1 + 24);
        if ( i < (unsigned int)v12 )
        {
          *(_DWORD *)(a1 + 24) = v17 | 0x20000;
          LODWORD(v1) = 0;
        }
        else
        {
          LODWORD(v1) = -1056964594;
          *(_DWORD *)(a1 + 24) = v17 | 0x200000;
        }
      }
      else
      {
        LODWORD(v1) = -1056964599;
      }
    }
  }
  return (unsigned int)v1;
}
