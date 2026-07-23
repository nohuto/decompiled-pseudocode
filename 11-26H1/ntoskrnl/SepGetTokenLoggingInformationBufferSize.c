/*
 * XREFs of SepGetTokenLoggingInformationBufferSize @ 0x140ABC0A0
 * Callers:
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepGetTokenLoggingInformationBufferSize(
        __int64 a1,
        int *a2,
        _DWORD *a3,
        unsigned int *a4,
        _DWORD *a5)
{
  unsigned int v5; // eax
  __int64 **v6; // r10
  unsigned int v7; // r11d
  int v10; // ebx
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx

  v5 = *(_DWORD *)(a1 + 124);
  v6 = (__int64 **)(a1 + 152);
  v7 = 0;
  v10 = 16 * v5;
  if ( v5 )
  {
    v11 = *v6;
    v12 = v5;
    do
    {
      v13 = *v11;
      v11 += 2;
      v10 += (4 * *(unsigned __int8 *)(v13 + 1) + 15) & 0xFFFFFFF8;
      --v12;
    }
    while ( v12 );
  }
  v14 = *(_QWORD *)(a1 + 1104);
  if ( v14 )
    v7 = (4 * *(unsigned __int8 *)(v14 + 1) + 15) & 0xFFFFFFF8;
  v15 = *v6;
  *a3 = 16 * *(_DWORD *)(a1 + 124);
  v16 = *v15;
  *a2 = v10;
  *a4 = v7;
  LODWORD(v16) = (4 * *(unsigned __int8 *)(v16 + 1) + 15) & 0xFFFFFFF8;
  *a5 = v16;
  return v10 + v7 + (_DWORD)v16 + 80;
}
