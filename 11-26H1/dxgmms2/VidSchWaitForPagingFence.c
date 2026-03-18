/*
 * XREFs of VidSchWaitForPagingFence @ 0x1401194D4
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 * Callees:
 *     VidSchSubmitWaitToHwQueue @ 0x1400090D0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchWaitForSingleSyncObject @ 0x14002D9C0 (VidSchWaitForSingleSyncObject.c)
 */

__int64 __fastcall VidSchWaitForPagingFence(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  char v4; // r15
  unsigned int v5; // ebx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rcx

  if ( a4 )
  {
    v4 = *(_BYTE *)(a1 + 63);
    v5 = a4;
    v9 = 0LL;
    do
    {
      if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 84) )
        break;
      if ( (v5 & 1) != 0 )
      {
        if ( v4 )
        {
          result = *(_QWORD *)(a1 + 344);
          v11 = *(_QWORD *)(result + 8 * v9);
          if ( v11 )
            result = VidSchSubmitWaitToHwQueue(v11, a2, a3);
        }
        else
        {
          result = VidSchWaitForSingleSyncObject(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 8 * v9), a2, a3);
        }
      }
      v9 = (unsigned int)(v9 + 1);
      v5 >>= 1;
    }
    while ( v5 );
  }
  return result;
}
