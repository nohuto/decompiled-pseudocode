/*
 * XREFs of KeRundownQueueCommon @ 0x1403E0A74
 * Callers:
 *     KeRundownQueueEx @ 0x1403DF4A8 (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x1405FC0A8 (KeRundownPriQueue.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

char __fastcall KeRundownQueueCommon(__int64 a1, volatile signed __int32 **a2, __int64 a3, unsigned int a4, int a5)
{
  volatile signed __int32 **v5; // rax
  _DWORD *v6; // rdi
  unsigned __int64 v7; // rsi
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // r8
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v5 = (volatile signed __int32 **)&retaddr;
  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  v6 = (_DWORD *)a3;
  v7 = a4;
  if ( (_BYTE)a5 )
  {
    while ( 1 )
    {
      v16 = *a2;
      if ( *a2 == (volatile signed __int32 *)a2 )
        break;
      v17 = *(_QWORD *)v16;
      v5 = (volatile signed __int32 **)*((_QWORD *)v16 + 1);
      if ( *(volatile signed __int32 **)(*(_QWORD *)v16 + 8LL) != v16 || *v5 != v16 )
        __fastfail(3u);
      *v5 = (volatile signed __int32 *)v17;
      *(_QWORD *)(v17 + 8) = v5;
      a5 = 0;
      while ( _interlockedbittestandset64(v16 - 114, 0LL) )
      {
        do
        {
          KeYieldProcessorEx(&a5);
          v5 = (volatile signed __int32 **)*((_QWORD *)v16 - 57);
        }
        while ( v5 );
      }
      *((_QWORD *)v16 - 36) = 0LL;
      *((_QWORD *)v16 - 57) = 0LL;
    }
    if ( (_DWORD)v7 )
    {
      v5 = (volatile signed __int32 **)v7;
      do
      {
        *v6++ = 0;
        v5 = (volatile signed __int32 **)((char *)v5 - 1);
      }
      while ( v5 );
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = (_QWORD *)(a1 + 8);
  v12 = *(_QWORD **)(a1 + 8);
  while ( v12 != v11 )
  {
    v13 = (__int64)v12;
    v12 = (_QWORD *)*v12;
    v14 = *(_BYTE *)(v13 + 16);
    switch ( v14 )
    {
      case 1:
        v15 = *(unsigned __int16 *)(v13 + 18);
        goto LABEL_6;
      case 2:
        *(_BYTE *)(v13 + 17) = 5;
        LOBYTE(v5) = KiInsertQueueInternal(*(_QWORD *)(v13 + 24), (_QWORD *)v13, a3);
        break;
      case 4:
        *(_BYTE *)(v13 + 17) = 5;
        *(_DWORD *)(a1 + 4) = 0;
        LOBYTE(v5) = KiInsertQueueDpc(*(_QWORD *)(v13 + 24), a1, v13, 0LL, 0);
        break;
      default:
        v15 = 256LL;
LABEL_6:
        LOBYTE(v5) = KiTryUnwaitThread((__int64)CurrentPrcb, v13, v15, 0LL);
        break;
    }
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v11 = v11;
  return (char)v5;
}
