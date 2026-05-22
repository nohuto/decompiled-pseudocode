/*
 * XREFs of ?FlushInteresting@FlickRecognizer@@UEAAXW4GestureType@@@Z @ 0x1801B8B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FlickRecognizer::FlushInteresting(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  if ( (a2 & 0x100) != 0 )
  {
    *(_BYTE *)(a1 + 138) &= ~4u;
    result = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_DWORD *)(a1 + 152) = 0;
  }
  return result;
}
