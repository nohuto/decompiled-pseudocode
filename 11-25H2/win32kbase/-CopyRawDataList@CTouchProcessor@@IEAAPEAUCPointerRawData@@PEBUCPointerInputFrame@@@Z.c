/*
 * XREFs of ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1401323A4
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E5470 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x140187624 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

struct CPointerRawData *__fastcall CTouchProcessor::CopyRawDataList(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  struct CPointerRawData *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v8; // rax

  v2 = *((_QWORD *)a2 + 29);
  v3 = 0LL;
  v4 = 0LL;
  while ( 1 )
  {
    if ( !v2 )
      return v4;
    v6 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x64727355u);
    v7 = v6;
    if ( !v6 )
      break;
    *(_OWORD *)v6 = *(_OWORD *)v2;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    v8 = (void *)Win32AllocPoolZInitImpl(256LL, *(unsigned int *)(v2 + 8), 0x64727355u);
    *(_QWORD *)(v7 + 16) = v8;
    if ( !v8 )
      break;
    memmove(v8, *(const void **)(v2 + 16), *(unsigned int *)(v2 + 8));
    if ( v3 )
      *(_QWORD *)(v3 + 24) = v7;
    else
      v4 = (struct CPointerRawData *)v7;
    v2 = *(_QWORD *)(v2 + 24);
    v3 = v7;
  }
  if ( v4 )
    CTouchProcessor::FreePointerRawDataList(this, v4);
  if ( v7 )
    GreDeleteFastMutex((char *)v7);
  return 0LL;
}
