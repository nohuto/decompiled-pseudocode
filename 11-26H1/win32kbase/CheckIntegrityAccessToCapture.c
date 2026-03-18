/*
 * XREFs of CheckIntegrityAccessToCapture @ 0x14016C000
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z @ 0x14016C054 (-CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z.c)
 */

__int64 __fastcall CheckIntegrityAccessToCapture(__int64 *a1, int a2, int a3)
{
  __int64 MouseProcessor; // rax
  unsigned int v5; // ebx
  __int64 v6; // xmm0_8
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  MouseProcessor = anonymous_namespace_::GetMouseProcessor((int)a1, a2, a3);
  v5 = 0;
  if ( MouseProcessor )
  {
    v6 = *a1;
    v9 = *((_DWORD *)a1 + 2);
    v8 = v6;
    return (unsigned __int8)CMouseProcessor::CanAccessMouseOwner(MouseProcessor, &v8) != 0;
  }
  return v5;
}
