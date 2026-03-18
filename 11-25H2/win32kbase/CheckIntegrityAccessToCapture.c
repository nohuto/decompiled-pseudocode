/*
 * XREFs of CheckIntegrityAccessToCapture @ 0x140145620
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z @ 0x140145674 (-CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z.c)
 */

__int64 __fastcall CheckIntegrityAccessToCapture(__int64 a1, __int64 a2)
{
  __int64 MouseProcessor; // rax
  unsigned int v4; // ebx
  __int64 v5; // xmm0_8
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2);
  v4 = 0;
  if ( MouseProcessor )
  {
    v5 = *(_QWORD *)a1;
    v8 = *(_DWORD *)(a1 + 8);
    v7 = v5;
    return (unsigned __int8)CMouseProcessor::CanAccessMouseOwner(MouseProcessor, &v7) != 0;
  }
  return v4;
}
