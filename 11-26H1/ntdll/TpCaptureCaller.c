/*
 * XREFs of TpCaptureCaller @ 0x1800E0340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TpCaptureCaller(int a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  result = (__int64)NtCurrentTeb();
  v2 = *(_QWORD *)(result + 6008);
  if ( v2 )
  {
    result = (unsigned int)(a1 - 1);
    if ( (unsigned int)result <= 1 )
    {
      v3 = ((unsigned __int8)*(_DWORD *)(v2 + 128) - 1) & 1;
      *(_DWORD *)(v2 + 128) = v3;
      *(_DWORD *)(v2 + 16 * v3 + 104) = a1;
      result = 2 * (v3 + 6);
      *(_QWORD *)(v2 + 16 * (v3 + 6)) = retaddr;
    }
  }
  return result;
}
