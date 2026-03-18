/*
 * XREFs of AlpcInitializeMessageAttribute @ 0x140438BA0
 * Callers:
 *     SshpAlpcMessageCallback @ 0x1407E4760 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     PopUmpoProcessMessages @ 0x140AAA08C (PopUmpoProcessMessages.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x140438C10 (AlpcGetHeaderSize.c)
 */

__int64 __fastcall AlpcInitializeMessageAttribute(__int64 a1, _DWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  int v7; // ebp
  unsigned int HeaderSize; // eax

  v7 = a1;
  HeaderSize = AlpcGetHeaderSize(a1);
  *a4 = HeaderSize;
  if ( HeaderSize > a3 )
    return 3221225507LL;
  if ( a2 )
  {
    *a2 = v7;
    a2[1] = 0;
  }
  return 0LL;
}
