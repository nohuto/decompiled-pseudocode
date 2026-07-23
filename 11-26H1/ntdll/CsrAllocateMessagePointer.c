/*
 * XREFs of CsrAllocateMessagePointer @ 0x1800C8430
 * Callers:
 *     CsrCaptureMessageBuffer @ 0x1800C7BD0 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x1800C7E2C (CsrpClientConnectToServer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CsrAllocateMessagePointer(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( !(_DWORD)a2 )
  {
    *a3 = 0LL;
    a3 = 0LL;
    goto LABEL_4;
  }
  *a3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)a2 < 0x7FFFFFFF )
  {
    a2 = ((_DWORD)a2 + 3) & 0xFFFFFFFC;
    *(_QWORD *)(a1 + 24) += a2;
LABEL_4:
    *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 16) + 32) = a3;
    result = (unsigned int)a2;
    ++*(_DWORD *)(a1 + 16);
    return result;
  }
  return 0LL;
}
