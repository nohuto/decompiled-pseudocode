/*
 * XREFs of DwmAsyncSendTouchContacts @ 0x140107F1C
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x1401969A0 (_anonymous_namespace_--ContactVisualizationWorker.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 */

__int64 __fastcall DwmAsyncSendTouchContacts(PVOID Object, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // r14d
  __int64 v9; // rax
  _WORD *v10; // rbx
  _OWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int128 v14; // xmm1

  v8 = -1073741823;
  if ( Object && a2 && a4 )
  {
    v9 = PALLOCMEM(40 * (a4 - 1) + 100, 1951225668LL);
    v10 = (_WORD *)v9;
    if ( v9 )
    {
      v11 = (_OWORD *)(v9 + 60);
      *(_WORD *)(v9 + 4) = 0x8000;
      *(_DWORD *)(v9 + 40) = 1073741888;
      *(_QWORD *)(v9 + 52) = a3;
      *(_DWORD *)(v9 + 44) = a4;
      *(_WORD *)v9 = 40 * a4 + 20;
      *(_DWORD *)(v9 + 48) = 40 * a4;
      v12 = a2 - (v9 + 60);
      v13 = a4;
      v10[1] = 40 * a4 + 100;
      do
      {
        *v11 = *(_OWORD *)((char *)v11 + v12);
        v14 = *(_OWORD *)((char *)v11 + v12 + 16);
        v11 = (_OWORD *)((char *)v11 + 40);
        *(_OWORD *)((char *)v11 - 24) = v14;
        *((_QWORD *)v11 - 1) = *(_QWORD *)((char *)v11 + v12 - 8);
        --v13;
      }
      while ( v13 );
      v8 = LpcRequestPort(Object, v10);
      Win32FreePool(v10);
    }
    ObfDereferenceObject(Object);
  }
  return v8;
}
