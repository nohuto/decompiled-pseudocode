/*
 * XREFs of ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x140066F64
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001FD20 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018990 (-FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFl.c)
 *     ?FlipManagerGetTracingIdFromToken@@YAIPEAVCFlipManagerToken@@@Z @ 0x14001CBE8 (-FlipManagerGetTracingIdFromToken@@YAIPEAVCFlipManagerToken@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x140022CCC (-UnlockAndRelease@CFlipManagerToken@@QEAAXXZ.c)
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x140022CFC (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 *     ?FlipManagerConsumerIFlipTokenSubmitted@@YAJPEAVCFlipManagerToken@@@Z @ 0x140054340 (-FlipManagerConsumerIFlipTokenSubmitted@@YAJPEAVCFlipManagerToken@@@Z.c)
 *     ?FlipManagerMarkAsLost@@YAXPEAVCFlipManagerToken@@@Z @ 0x1400A425C (-FlipManagerMarkAsLost@@YAXPEAVCFlipManagerToken@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::CompleteFlipManagerToken(
        CTokenManager *this,
        struct FlipManagerTokenObject *a2,
        bool *a3)
{
  struct CToken *v6; // rdi
  unsigned __int8 v7; // r12
  bool v8; // bp
  unsigned __int8 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // cl
  void (__fastcall *v13)(_QWORD, __int64, _QWORD, bool, _DWORD, _DWORD, _DWORD, _DWORD); // rbx
  unsigned int TracingIdFromToken; // eax
  CTokenManager *v15; // rax
  CTokenManager **v16; // rdx
  char *v17; // rax
  char **v18; // rdx
  void *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 Win32kImportTable; // rax
  char *v23; // rax
  char *v24; // rcx
  char **v25; // rdx
  unsigned __int8 v26; // [rsp+50h] [rbp-48h]
  __int64 v27; // [rsp+58h] [rbp-40h]
  struct CToken *PreviousState; // [rsp+B0h] [rbp+18h] BYREF
  struct CFlipManagerSignal *v29; // [rsp+B8h] [rbp+20h] BYREF

  *a3 = 1;
  PreviousState = 0LL;
  if ( (int)FlipManagerTokenObject::LockForWrite((char *)a2, &PreviousState) >= 0 )
  {
    v6 = PreviousState;
    v7 = 0;
    v8 = 0;
    v26 = 0;
    LOBYTE(v29) = 0;
    v9 = 0;
    LOBYTE(PreviousState) = 0;
    v27 = *((_QWORD *)v6 + 12);
    v10 = *((_QWORD *)v6 + 10);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 104);
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 56) )
        {
          v9 = 1;
          *(_BYTE *)(v10 + 28) = 0;
        }
        if ( *(_BYTE *)(v10 + 28) )
        {
          v7 = 1;
          v8 = *(_DWORD *)(v11 + 36) == 1;
        }
      }
      v26 = *(_BYTE *)(v10 + 86);
      v12 = *(_BYTE *)(v10 + 84);
      LOBYTE(PreviousState) = *(_BYTE *)(v10 + 92);
      LOBYTE(v29) = v12;
    }
    v13 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, bool, _DWORD, _DWORD, _DWORD, _DWORD))(DxgkGetWin32kImportTable()
                                                                                               + 96);
    TracingIdFromToken = FlipManagerGetTracingIdFromToken(v6);
    v13(TracingIdFromToken, v27, v7, v8, v9, v26, (unsigned __int8)v29, (unsigned __int8)PreviousState);
    if ( *((_DWORD *)v6 + 8) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v6 + 1) + 24LL))((__int64)v6 + 8);
      v8 = 0;
    }
    if ( !*((_BYTE *)v6 + 120) )
      goto LABEL_21;
    if ( v7 )
    {
      if ( !v8 )
      {
        FlipManagerConsumerIFlipTokenSubmitted(v6);
LABEL_21:
        if ( a2 )
          ObfDereferenceObject(a2);
        goto LABEL_23;
      }
      PreviousState = 0LL;
      v29 = 0LL;
      FlipManagerConsumerImmediateTokenCompleted((FlipManagerObject **)v6, &PreviousState, &v29);
      if ( !PreviousState )
        goto LABEL_21;
      v15 = (struct CToken *)((char *)PreviousState + 8);
      v16 = (CTokenManager **)*((_QWORD *)this + 38);
      if ( *v16 == (CTokenManager *)((char *)this + 296) )
      {
        *(_QWORD *)v15 = (char *)this + 296;
        *((_QWORD *)v15 + 1) = v16;
        *v16 = v15;
        *((_QWORD *)this + 38) = v15;
        v17 = v29 ? (char *)v29 + 8 : 0LL;
        v18 = (char **)*((_QWORD *)this + 40);
        if ( *v18 == (char *)this + 312 )
        {
          *((_QWORD *)v17 + 1) = v18;
          *(_QWORD *)v17 = (char *)this + 312;
          *v18 = v17;
          *((_QWORD *)this + 40) = v17;
          v19 = (void *)*((_QWORD *)this + 9);
          LODWORD(PreviousState) = 0;
          ZwSetEvent(v19, (PLONG)&PreviousState);
          *a3 = 0;
          goto LABEL_21;
        }
      }
LABEL_30:
      __fastfail(3u);
    }
    v21 = *((_QWORD *)v6 + 13);
    if ( v21 )
    {
      Win32kImportTable = DxgkGetWin32kImportTable();
      (*(void (__fastcall **)(__int64))(Win32kImportTable + 64))(v21);
    }
    v23 = (char *)v6 + 16;
    v24 = (char *)this + 280;
    if ( *((_QWORD *)v6 + 2) )
    {
      FlipManagerMarkAsLost(v6);
    }
    else
    {
      v25 = (char **)*((_QWORD *)this + 36);
      if ( *v25 != v24 )
        goto LABEL_30;
      *(_QWORD *)v23 = v24;
      *((_QWORD *)v6 + 3) = v25;
      *v25 = v23;
      *((_QWORD *)this + 36) = v23;
    }
    *a3 = 0;
LABEL_23:
    CFlipManagerToken::UnlockAndRelease(v6);
    v20 = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(__int64))(v20 + 104))(v27);
  }
}
