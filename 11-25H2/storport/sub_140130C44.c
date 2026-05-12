/*
 * XREFs of sub_140130C44 @ 0x140130C44
 * Callers:
 *     sub_14012FCD0 @ 0x14012FCD0 (sub_14012FCD0.c)
 * Callees:
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 */

char __fastcall sub_140130C44(PVOID SystemArgument2, PSLIST_HEADER ListHead)
{
  USHORT DepthSList; // ax
  char v5; // bp
  int v6; // r14d
  PSLIST_ENTRY v7; // rdi
  PSLIST_ENTRY v8; // rsi
  __int64 v9; // rax
  NTSTATUS v10; // edi
  bool v11; // zf
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rdi
  _QWORD *v17; // rcx
  __int128 v18; // xmm1
  signed __int32 v20[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v21; // [rsp+30h] [rbp-48h]
  __int128 v22; // [rsp+40h] [rbp-38h]
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF

  DepthSList = ExQueryDepthSList(ListHead);
  v5 = 0;
  v6 = 0;
  if ( DepthSList )
  {
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)SystemArgument2 + 159) + 32LL) + 48LL) = DepthSList;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)SystemArgument2 + 159) + 32LL) + 52LL) = 0;
    v7 = ExpInterlockedPopEntrySList(ListHead);
    if ( v7 )
    {
      do
      {
        v8 = v7 - 32;
        v7[-25].Next = (struct _SLIST_ENTRY *)((unsigned __int64)v7[-25].Next & ~0x80uLL);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)&v7[-1].Next->Next + 2, 1, 0) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)SystemArgument2 + 159) + 32LL) + 48LL));
          ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)&v8[7].Next + 1));
        }
        else
        {
          IoQueueWorkItem((PIO_WORKITEM)v8[31].Next->Next, sub_140130EC0, DelayedWorkQueue, &v7[-32]);
          ++*((_DWORD *)&v8[31].Next->Next + 3);
          ++v6;
        }
        v7 = v7->Next;
      }
      while ( v7 );
      if ( v6 )
      {
        v9 = *((_QWORD *)SystemArgument2 + 159);
        Timeout.QuadPart = -300000000LL;
        v10 = KeWaitForSingleObject((PVOID)(*(_QWORD *)(v9 + 32) + 24LL), Executive, 0, 0, &Timeout);
        if ( v10 != 258 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)SystemArgument2 + 159) + 32LL) + 52LL) )
            v5 = sub_140130818((int *)SystemArgument2, 3);
          else
            v5 = 1;
        }
        if ( (*((_BYTE *)SystemArgument2 + 1344) & 0x10) != 0 )
        {
          v11 = *(_DWORD *)SystemArgument2 == 1314276178;
          v21 = 0LL;
          LODWORD(v21) = v10;
          BYTE4(v21) = v5;
          v22 = 0LL;
          if ( v11 )
          {
            v12 = *(_QWORD *)(*((_QWORD *)SystemArgument2 + 169) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
            v13 = *(_DWORD *)(v12 + 12);
            v14 = v12 + 64;
            _InterlockedOr(v20, 0);
            if ( v13 )
            {
              if ( v12 != -64 )
              {
                v15 = _InterlockedIncrement((volatile signed __int32 *)v12) % v13;
                v16 = v14 + ((unsigned __int64)v15 << 6);
                if ( (*((_DWORD *)SystemArgument2 + 330) & 1) != 0 )
                  *(_DWORD *)(v16 + 4) = _InterlockedIncrement((volatile signed __int32 *)SystemArgument2 + 352);
                else
                  *(_DWORD *)(v16 + 4) = v15;
                *(_DWORD *)v16 = 65538;
                v17 = (_QWORD *)(v16 + 8);
                if ( (*((_DWORD *)SystemArgument2 + 330) & 2) != 0 )
                  KeQuerySystemTimePrecise(v17);
                else
                  *v17 = MEMORY[0xFFFFF78000000014];
                v18 = v22;
                *(_OWORD *)(v16 + 16) = v21;
                *(_OWORD *)(v16 + 32) = v18;
              }
            }
          }
        }
      }
    }
    LOBYTE(DepthSList) = v5;
  }
  return DepthSList;
}
