/*
 * XREFs of MiInitializeProbePacketVm @ 0x1402E578C
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1402E5470 (MiProbeAndLockPrepare.c)
 * Callees:
 *     MiGetMultiplexedVm @ 0x1402E47B0 (MiGetMultiplexedVm.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 */

__int64 __fastcall MiInitializeProbePacketVm(__int64 a1)
{
  unsigned __int64 v1; // rsi
  int v2; // ebx
  unsigned int v4; // eax
  void *v5; // rcx
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( v1 >= 0xFFFF800000000000uLL )
  {
    v2 = (unsigned __int8)byte_140E37A70[((v1 >> 39) & 0x1FF) - 256];
  }
  else if ( v1 < 0x7FFFFFFF0000LL )
  {
    v4 = *(_DWORD *)(a1 + 104) & 0xFFFFFFE1 | 2;
    v5 = (void *)(*(_QWORD *)(a1 + 88) + 1024LL);
    goto LABEL_4;
  }
  switch ( v2 )
  {
    case 5:
      v5 = &unk_140E37080;
      v4 = *(_DWORD *)(a1 + 104) & 0xFFFFFFE1 | 6;
      break;
    case 7:
      v5 = &unk_140E3D500;
      v4 = *(_DWORD *)(a1 + 104) & 0xFFFFFFE1 | 4;
      break;
    case 4:
    case 14:
      v5 = &unk_140E37440;
      v4 = *(_DWORD *)(a1 + 104) & 0xFFFFFFE1 | 8;
      break;
    case 17:
      v5 = &unk_140E36F40;
      v4 = *(_DWORD *)(a1 + 104) & 0xFFFFFFE1 | 0xE;
      break;
    case 11:
      v5 = &unk_140E36E00;
      v4 = *(_DWORD *)(a1 + 104) & 0xFFFFFFE1 | 0xC;
      break;
    case 13:
      v5 = &unk_140E37300;
      v4 = *(_DWORD *)(a1 + 104) & 0xFFFFFFE1 | 0x10;
      break;
    case 18:
    case 15:
      return 3221225477LL;
    default:
      v5 = &unk_140E371C0;
      v4 = *(_DWORD *)(a1 + 104) & 0xFFFFFFE1 | 0xA;
      break;
  }
LABEL_4:
  *(_QWORD *)(a1 + 112) = v5;
  *(_DWORD *)(a1 + 104) = v4 & 0xFFFFFFFE;
  if ( KeGetCurrentIrql() == 2 )
  {
    *(_BYTE *)(a1 + 72) = 17;
    MiLockWorkingSetSharedAtDpc(v5);
  }
  else
  {
    *(_BYTE *)(a1 + 72) = MiLockWorkingSetShared(v5);
  }
  if ( v2 == 7 )
    *(_QWORD *)(a1 + 112) = MiGetMultiplexedVm(v6, v1);
  return 0LL;
}
