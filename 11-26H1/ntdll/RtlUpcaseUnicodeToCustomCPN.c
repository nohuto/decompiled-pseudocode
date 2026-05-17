/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x18013C500
 * Callers:
 *     <none>
 * Callees:
 *     NLS_UPCASE @ 0x180036DE0 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlUpcaseUnicodeToCustomCPN(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v7; // ebx
  unsigned int *v8; // r14
  unsigned int v9; // edi
  _BYTE *v10; // r11
  unsigned int v11; // eax
  __int64 v12; // r14
  unsigned __int16 *v13; // rbp
  __int64 v14; // r15
  unsigned __int16 v15; // ax
  _BYTE *v16; // r11
  __int64 v17; // r15
  int v18; // r12d
  __int64 v19; // r13
  unsigned __int16 *v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  int v26; // edx
  __int16 v27; // dx
  unsigned int v28; // eax
  __int64 v31; // [rsp+70h] [rbp+8h]

  v7 = a6 >> 1;
  v8 = a4;
  v9 = a3;
  v31 = qword_1801C6038;
  LODWORD(v10) = a2;
  if ( *(_WORD *)(a1 + 12) )
  {
    v17 = *(_QWORD *)(a1 + 56);
    v18 = a2;
    v19 = *(_QWORD *)(a1 + 40);
    if ( v7 )
    {
      v20 = a5;
      v21 = qword_1801C6038;
      do
      {
        if ( !v9 )
          break;
        v22 = *v20++;
        v23 = *(unsigned __int16 *)(v19 + 2 * v22);
        v24 = (unsigned __int8)v23;
        v25 = v23 >> 8;
        if ( *(_WORD *)(v17 + 2 * v25) )
          v26 = *(unsigned __int16 *)(v17 + 2 * (*(unsigned __int16 *)(v17 + 2 * v25) + v24));
        else
          v26 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 2 * v24);
        v27 = *(_WORD *)(v19 + 2LL * (unsigned __int16)NLS_UPCASE(v21, v26));
        if ( HIBYTE(v27) )
        {
          v28 = v9--;
          if ( v28 < 2 )
            break;
          *v10++ = HIBYTE(v27);
        }
        *v10 = v27;
        --v9;
        LODWORD(v10) = (_DWORD)v10 + 1;
        --v7;
      }
      while ( v7 );
      v8 = a4;
      v18 = a2;
    }
    if ( v8 )
      *v8 = (_DWORD)v10 - v18;
  }
  else
  {
    v11 = a3;
    if ( v7 < a3 )
      v11 = a6 >> 1;
    if ( a4 )
      *a4 = v11;
    v12 = *(_QWORD *)(a1 + 40);
    if ( v11 )
    {
      v13 = a5;
      v14 = v11;
      do
      {
        v15 = NLS_UPCASE(v31, *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*v13++ + v12)));
        *v16 = *(_BYTE *)(v15 + v12);
        --v14;
      }
      while ( v14 );
      v9 = a3;
    }
  }
  return v9 < v7 ? 0x80000005 : 0;
}
