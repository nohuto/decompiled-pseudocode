/*
 * XREFs of ?BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z @ 0x180116B40
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180116000 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?PeekFirst@?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOutput@@@Z @ 0x180116C18 (-PeekFirst@-$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOut.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CInteractionContextWrapper::BoundBufferedOutput(CInteractionContextWrapper *this, __int64 a2)
{
  bool v2; // cf
  _DWORD *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  void *v7; // rsi
  _DWORD *v8; // rcx
  __int64 v9; // rax
  void *v10; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // rax
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 138) < 0x7D0u;
  v3 = (_DWORD *)((char *)this + 536);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 560);
  v13 = 0LL;
  if ( v2 )
    goto LABEL_2;
  do
  {
    v10 = 0LL;
    EnterCriticalSection(v4);
    v11 = *(_QWORD **)v3;
    if ( *(_DWORD **)(*(_QWORD *)v3 + 8LL) != v3 || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11) )
LABEL_10:
      __fastfail(3u);
    *(_QWORD *)v3 = v12;
    *(_QWORD *)(v12 + 8) = v3;
    if ( v11 != (_QWORD *)v3 )
    {
      v10 = (void *)v11[2];
      operator delete(v11, 0x18uLL);
      --v3[4];
    }
    LeaveCriticalSection(v4);
    v13 = v10;
    operator delete(v10);
  }
  while ( *((_DWORD *)this + 138) >= 0x7D0u );
LABEL_2:
  while ( CQueue<CBufferedInteractionOutput *>::PeekFirst(v3, a2, &v13) )
  {
    v7 = v13;
    if ( (unsigned __int64)(a2 - *(_QWORD *)v13) <= 0x1E8480 )
      break;
    EnterCriticalSection(v4);
    v8 = *(_DWORD **)v3;
    if ( *(_DWORD **)(*(_QWORD *)v3 + 8LL) != v3 )
      goto LABEL_10;
    v9 = *(_QWORD *)v8;
    if ( *(_DWORD **)(*(_QWORD *)v8 + 8LL) != v8 )
      goto LABEL_10;
    *(_QWORD *)v3 = v9;
    *(_QWORD *)(v9 + 8) = v3;
    if ( v8 != v3 )
    {
      operator delete(v8, 0x18uLL);
      --v3[4];
    }
    LeaveCriticalSection(v4);
    operator delete(v7);
  }
}
