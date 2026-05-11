/*
 * XREFs of PropertyGetSetChannelConfiguration @ 0x140032E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     QueuePropertyRequest @ 0x14003E21C (QueuePropertyRequest.c)
 *     DeviceRequestPowerUp @ 0x14003FECC (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertyGetSetChannelConfiguration(PIRP Irp, __int64 a2, _DWORD *a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // r8
  unsigned int v8; // edx
  _QWORD *Context; // r15
  __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned int i; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF

  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v8 = -1073741637;
  if ( !FilterFromIrp )
    return v8;
  Context = FilterFromIrp->Context;
  v10 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  v11 = *(_QWORD *)(v10 + 128);
  if ( *(_DWORD *)(Context[2] + 536LL) == 1 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 3) == 1 )
    {
      v8 = 0;
      *a3 = *(_DWORD *)(*(_QWORD *)(v11 + 32) + 4LL * (unsigned int)(*(_DWORD *)(v11 + 24) - 1));
    }
    else if ( (*(_DWORD *)(a2 + 20) & 3) == 2 )
    {
      for ( i = 0; i < *(_DWORD *)(v11 + 20); i = v13 )
      {
        v13 = i + 1;
        v14 = i;
        v15 = *(_QWORD *)(v11 + 32);
        v18 = v13;
        if ( *a3 == *(_DWORD *)(v15 + 4 * v14) )
        {
          LOBYTE(v7) = 1;
          v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, unsigned int *, int))(v10 + 136))(
                 Context,
                 v10,
                 v7,
                 2LL,
                 &v18,
                 1);
          if ( (v8 & 0x80000000) == 0 )
          {
            v16 = v18;
            *(_DWORD *)(v11 + 24) = v18;
            *(_DWORD *)(v10 + 88) = *(_DWORD *)(*(_QWORD *)(v11 + 32) + 4LL * (v16 - 1));
            return v8;
          }
        }
      }
    }
    return v8;
  }
  if ( (int)DeviceRequestPowerUp(Context, 3221225659LL) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
