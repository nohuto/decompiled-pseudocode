/*
 * XREFs of LdrpGetDelayloadAPIInfo @ 0x1800C9110
 * Callers:
 *     LdrpRedirectDelayloadFailure @ 0x1800C3F70 (LdrpRedirectDelayloadFailure.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall LdrpGetDelayloadAPIInfo(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  bool v7; // sf
  int v8; // ecx
  _DWORD *result; // rax
  int v10; // ecx

  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 + *(unsigned int *)(a2 + 16) + 8 * ((a3 - *(unsigned int *)(a2 + 12) - v5) >> 3));
  if ( v6 < 0 )
  {
    v7 = v6 < 0;
    *a4 = 0LL;
    v10 = (unsigned __int16)v6;
    result = a5;
    if ( !v7 )
      v10 = 0;
    *a5 = v10;
  }
  else
  {
    *a4 = v6 + v5 + 2;
    v7 = v6 < 0;
    v8 = (unsigned __int16)v6;
    result = a5;
    if ( !v7 )
      v8 = 0;
    *a5 = v8;
  }
  return result;
}
