/*
 * XREFs of NtCreateKeyedEvent @ 0x140841C70
 * Callers:
 *     DifNtCreateKeyedEventWrapper @ 0x1406719E0 (DifNtCreateKeyedEventWrapper.c)
 * Callees:
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateKeyedEvent(_QWORD *a1, unsigned int a2, int a3, int a4)
{
  int v4; // esi
  _QWORD *v7; // rbx
  char PreviousMode; // di
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD v12[5]; // [rsp+68h] [rbp-30h] BYREF

  v4 = a4;
  v7 = a1;
  v12[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12[1] = 1LL;
    ProbeForRead(a1, 1uLL, 8u);
  }
  *v7 = 0LL;
  if ( v4 )
    return 3221225714LL;
  LOBYTE(a4) = PreviousMode;
  LOBYTE(a1) = PreviousMode;
  result = ObCreateObjectEx((_DWORD)a1, (_DWORD)ExpKeyedEventObjectType, a3, a4);
  if ( (int)result >= 0 )
  {
    v10 = 8LL;
    v11 = 64LL;
    do
    {
      *(_QWORD *)(v10 - 8) = 0LL;
      *(_QWORD *)(v10 + 8) = v10;
      *(_QWORD *)v10 = v10;
      v10 += 24LL;
      --v11;
    }
    while ( v11 );
    result = ObInsertObjectEx(0LL, 0LL, a2, 0LL, 0, 0LL, v12);
    if ( (int)result >= 0 )
    {
      *v7 = v12[0];
      return (unsigned int)result;
    }
  }
  return result;
}
