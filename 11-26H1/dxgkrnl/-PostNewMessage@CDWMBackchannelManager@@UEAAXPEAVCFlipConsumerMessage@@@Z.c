/*
 * XREFs of ?PostNewMessage@CDWMBackchannelManager@@UEAAXPEAVCFlipConsumerMessage@@@Z @ 0x1400500A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostNewMessage@CBackchannelManager@@UEAAXPEAVCFlipConsumerMessage@@@Z @ 0x140050150 (-PostNewMessage@CBackchannelManager@@UEAAXPEAVCFlipConsumerMessage@@@Z.c)
 */

void __fastcall CDWMBackchannelManager::PostNewMessage(CDWMBackchannelManager *this, struct CFlipConsumerMessage *a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rcx
  unsigned int i; // r9d
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  char v11; // al
  int v12; // ecx

  v2 = *((_DWORD *)a2 + 3);
  v4 = (_DWORD *)*((_QWORD *)a2 + 3);
  for ( i = 0; i < v2; ++i )
  {
    v7 = *((_QWORD *)a2 + 2);
    v8 = 32LL * i;
    v9 = *(_QWORD *)(v8 + v7) - *(_QWORD *)&GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + v7 + 8) - *(_QWORD *)GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8.Data4;
    if ( !v9 && *(_DWORD *)(v8 + v7 + 16) == 4 )
    {
      if ( !v4 )
        return;
      v10 = *v4 - 1;
      if ( v10 )
      {
        v12 = v10 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
            return;
          v11 = *((_BYTE *)this + 40) >> 2;
        }
        else
        {
          v11 = *((_BYTE *)this + 40) >> 1;
        }
      }
      else
      {
        v11 = *((_BYTE *)this + 40);
      }
      if ( (v11 & 1) != 0 )
        CBackchannelManager::PostNewMessage(this, a2);
      return;
    }
    v4 = (_DWORD *)((char *)v4 + *(unsigned int *)(v8 + v7 + 16));
  }
}
