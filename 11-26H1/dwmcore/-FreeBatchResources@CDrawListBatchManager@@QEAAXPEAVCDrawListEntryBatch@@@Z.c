/*
 * XREFs of ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x180176380
 * Callers:
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180150FDC (--1CDrawListEntryBatch@@EEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListBatchManager::FreeBatchResources(CDrawListBatchManager *this, struct CDrawListEntryBatch *a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // edi
  int *v5; // rbx
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v14; // eax
  int *v15; // r15
  __int64 v16; // rcx
  HANDLE ProcessHeap; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  int *v22; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a2 + 11);
  v3 = *((_DWORD *)a2 + 10);
  if ( v3 < v2 )
  {
    while ( 1 )
    {
      v5 = *(int **)(*(_QWORD *)this + 8LL * v3);
      v6 = *v5;
      if ( *v5 )
      {
        if ( v6 == 4 )
        {
          v15 = (int *)*((_QWORD *)v5 + 12);
          if ( v5 + 26 != v15 )
          {
            if ( v15 )
            {
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, v15);
            }
            *((_QWORD *)v5 + 12) = v5 + 26;
            v5[26] = 0;
          }
          v16 = *((_QWORD *)v5 + 1);
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        }
        else
        {
          v18 = v6 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                if ( v20 != 2 )
                  ModuleFailFastForHRESULT(-2147418113, retaddr);
              }
            }
          }
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)v5 + 1);
        }
      }
      *v5 = 0;
      v7 = *((_DWORD *)this + 16);
      v22 = v5;
      v8 = v7 + 1;
      if ( v7 + 1 < v7 )
        break;
      if ( v8 > *((_DWORD *)this + 15) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v22);
        if ( v13 < 0 )
        {
          v14 = 194;
LABEL_17:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v14, 0LL);
          ModuleFailFastForHRESULT(v13, retaddr);
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v7) = v5;
        *((_DWORD *)this + 16) = v8;
      }
      if ( ++v3 >= v2 )
        goto LABEL_7;
    }
    v13 = -2147024362;
    v14 = 183;
    goto LABEL_17;
  }
LABEL_7:
  if ( (*((_DWORD *)this + 38))-- == 1 )
  {
    v10 = *((_DWORD *)this + 9);
    if ( v10 <= *((_DWORD *)this + 6) - *((_DWORD *)this + 8) )
      v10 = *((_DWORD *)this + 6) - *((_DWORD *)this + 8);
    *((_DWORD *)this + 9) = v10;
    v11 = *((_DWORD *)this + 19);
    if ( v11 <= *((_DWORD *)this + 16) - *((_DWORD *)this + 18) )
      v11 = *((_DWORD *)this + 16) - *((_DWORD *)this + 18);
    *((_DWORD *)this + 19) = v11;
    v12 = *((_DWORD *)this + 29);
    if ( v12 <= *((_DWORD *)this + 26) - *((_DWORD *)this + 28) )
      v12 = *((_DWORD *)this + 26) - *((_DWORD *)this + 28);
    *((_DWORD *)this + 29) = v12;
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 8) = 0;
  }
}
