/*
 * XREFs of ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@K@Z @ 0x180040F34
 * Callers:
 *     ?HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z @ 0x18004036C (-HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180040B0C (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180041DF8 (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     ?HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800411C4 (-HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004123C (-HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180043B08 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampSystemIssueActivityCallback(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a2,
        char a3)
{
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // r15
  int v8; // esi
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  char *Heap; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD v16[7]; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  if ( (*((_BYTE *)a1 + 144) & 1) != 0 )
  {
    (*((void (__fastcall **)(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *, _QWORD))a1 + 15))(a2, *((_QWORD *)a1 + 17));
  }
  else
  {
    v5 = a3 & 1;
    if ( (a3 & 1) == 0 )
      HampClientAcquireLockShared(a1);
    v6 = *((_QWORD *)a1 + 16);
    if ( v6 )
    {
      v7 = v6 + 24;
      v17 = 0;
      RtlAcquireSRWLockExclusive(v6 + 24);
      if ( *(_BYTE *)(v6 + 32) || (int)RtlQueryWnfMetaNotification(&v17, 2LL, *((_QWORD *)a1 + 15)) >= 0 && !v17 )
      {
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x5CuLL);
        v13 = Heap;
        if ( Heap )
        {
          *((_QWORD *)Heap + 2) = *((_QWORD *)a1 + 15);
          *(_OWORD *)(Heap + 28) = *(_OWORD *)a2;
          *(_OWORD *)(Heap + 44) = *((_OWORD *)a2 + 1);
          *(_OWORD *)(Heap + 60) = *((_OWORD *)a2 + 2);
          *(_OWORD *)(Heap + 76) = *((_OWORD *)a2 + 3);
          *((_DWORD *)Heap + 6) = 64;
          v14 = *(_QWORD **)(v6 + 8);
          if ( *v14 != v6 )
            __fastfail(3u);
          *v13 = v6;
          v13[1] = v14;
          *v14 = v13;
          *(_QWORD *)(v6 + 8) = v13;
          if ( !*(_BYTE *)(v6 + 32) )
          {
            v15 = *(_QWORD *)(v6 + 16);
            *(_BYTE *)(v6 + 32) = 1;
            TpPostWork(v15);
          }
          v8 = 0;
        }
        else
        {
          v8 = -1073741801;
        }
      }
      else
      {
        v8 = RtlPublishWnfStateData(*((_QWORD *)a1 + 15), 0LL, a2, 64LL, 0LL);
      }
      RtlReleaseSRWLockExclusive(v7);
      if ( v8 < 0
        && (unsigned int)dword_1800E12B0 > 4
        && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 0x400000000008LL) )
      {
        v17 = *((_DWORD *)a2 + 4);
        v16[0] = *(_QWORD *)a2;
        v18 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v9,
          (unsigned int)&unk_1800D4496,
          v10,
          v11,
          (__int64)v16,
          (__int64)&v17,
          (__int64)&v18);
      }
    }
    if ( !v5 )
      HampClientReleaseLockShared(a1);
  }
}
