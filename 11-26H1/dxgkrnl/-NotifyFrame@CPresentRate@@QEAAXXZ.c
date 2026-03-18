/*
 * XREFs of ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x140021D2C
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14001C914 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x140021340 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPresentRate::NotifyFrame(CPresentRate *this)
{
  unsigned int *v1; // rdx
  CPresentRate *v2; // r11
  unsigned __int64 v3; // r8
  __int64 v4; // r10
  unsigned int v5; // r9d

  v1 = 0LL;
  v2 = this;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = 0LL;
  while ( 1 )
  {
    v5 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 )
    {
      if ( (unsigned int)v3 >= v5 && (unsigned int)v3 - v5 <= 0x3E8 )
        break;
    }
    if ( !v1 || v5 < *v1 )
      v1 = (unsigned int *)((char *)this + 8 * v4);
    v4 = (unsigned int)(v4 + 1);
    v2 = (CPresentRate *)((char *)v2 + 8);
    if ( (unsigned int)v4 >= 5 )
    {
      *v1 = v3;
      v1[1] = 1;
      return;
    }
  }
  ++*((_DWORD *)this + 2 * v4 + 1);
}
