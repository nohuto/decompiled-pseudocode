/*
 * XREFs of ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x180192040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAsyncFlushResponse::SendResponse(CAsyncFlushResponse *this, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r15
  _DWORD *v4; // rbp
  _DWORD *v5; // r14
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  int v8; // edi
  int v9; // eax
  HANDLE ProcessHeap; // rax
  _OWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  if ( !*((_BYTE *)this + 33) )
  {
    v3 = *((_QWORD *)this + 5);
    LODWORD(v12[0]) = 13;
    *((_BYTE *)this + 33) = 1;
    memset((char *)v12 + 4, 0, 20);
    v4 = 0LL;
    v5 = 0LL;
    DWORD2(v12[0]) = *((_DWORD *)this + 12);
    HIDWORD(v12[0]) = a2;
    v6 = MIDL_user_allocate(0x44uLL);
    v7 = v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x44uLL);
      *v7 = 10;
      v5 = v7 + 10;
      v7[1] = 68;
      v4 = v7;
      v7[10] = 13;
      v8 = 0;
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Du, 0LL);
    }
    operator delete(0LL);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xA8u, 0LL);
    }
    else
    {
      *(_OWORD *)v5 = v12[0];
      *((_QWORD *)v5 + 2) = *(_QWORD *)&v12[1];
      v5[6] = 0;
      v4[4] = *(_DWORD *)(v3 + 24);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(v3 + 56) + 8LL))(*(_QWORD *)(v3 + 56), v4);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xB0u, 0LL);
    }
    if ( v4 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x74u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x58u, 0LL);
    }
    return (unsigned int)v8;
  }
  return v2;
}
