/*
 * XREFs of ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x140063F90
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x140063560 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x14004D098 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

struct CPointerRawData *__fastcall CTouchProcessor::CopyRawDataList(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  struct CPointerRawData *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  void *v11; // rax

  v2 = *((_QWORD *)a2 + 29);
  v3 = 0LL;
  v4 = 0LL;
  while ( 1 )
  {
    if ( !v2 )
      return v4;
    v6 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x64727355u);
    v10 = v6;
    if ( !v6 )
      break;
    *(_OWORD *)v6 = *(_OWORD *)v2;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    v11 = (void *)Win32AllocPoolZInitImpl(256LL, *(unsigned int *)(v2 + 8), 0x64727355u);
    *(_QWORD *)(v10 + 16) = v11;
    if ( !v11 )
      break;
    memmove(v11, *(const void **)(v2 + 16), *(unsigned int *)(v2 + 8));
    if ( v3 )
      *(_QWORD *)(v3 + 24) = v10;
    else
      v4 = (struct CPointerRawData *)v10;
    v2 = *(_QWORD *)(v2 + 24);
    v3 = v10;
  }
  if ( v4 )
    CTouchProcessor::FreePointerRawDataList(this, v4);
  if ( v10 )
    GreDeleteFastMutex((char *)v10, v7, v8, v9);
  return 0LL;
}
