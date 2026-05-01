/*
 * XREFs of CempHostInfoInitialize @ 0x18000CF20
 * Callers:
 *     CempGetTokenHostInfo @ 0x18000C8A0 (CempGetTokenHostInfo.c)
 * Callees:
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 */

__int64 __fastcall CempHostInfoInitialize(__int64 a1, void *a2, int a3, int a4, __int64 a5, char *a6)
{
  __int64 v10; // r10
  _WORD *v11; // rax
  __int64 v12; // rbx
  __int16 v13; // cx
  _WORD *v14; // rcx
  __int64 result; // rax

  memset_0(a6, 0, 0x228uLL);
  v10 = 232LL;
  v11 = a6;
  v12 = a1 - (_QWORD)a6;
  do
  {
    if ( v10 == -2147483414 )
      break;
    v13 = *(_WORD *)((char *)v11 + v12);
    if ( !v13 )
      break;
    *v11++ = v13;
    --v10;
  }
  while ( v10 );
  v14 = v11 - 1;
  if ( v10 )
    v14 = v11;
  *v14 = 0;
  RtlCopySid(0x44u, a6 + 464, a2);
  result = a5;
  *((_DWORD *)a6 + 133) = a3;
  *((_DWORD *)a6 + 134) = a4;
  *((_QWORD *)a6 + 68) = a5;
  return result;
}
