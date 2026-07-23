/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x140499C50
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 */

char __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _UNKNOWN **v4; // rax
  __int64 v5; // r13
  int v6; // r15d
  int v8; // r11d
  int v9; // r9d
  int v10; // r10d
  unsigned int v11; // edi
  __int64 v12; // rcx
  _QWORD *v13; // rbp
  __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned int v16; // esi
  unsigned __int64 v17; // rbx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h]

  v4 = &retaddr;
  v20 = a2;
  v5 = *(_QWORD *)(a2 + 56);
  v6 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 16LL;
  v13 = (_QWORD *)(a3 + 48);
  if ( a4 )
  {
    v14 = 96LL;
    do
    {
      LOBYTE(v4) = qword_140E361B8;
      if ( *v13 == qword_140E361B8
        || (v15 = *(_QWORD *)(v14 + *(_QWORD *)(a2 + 72)), LOBYTE(v4) = (unsigned __int8)v15 >> 3, (v15 & 8) == 0) )
      {
        LODWORD(v17) = v10;
        v16 = 16;
      }
      else
      {
        v16 = (unsigned __int16)v15 >> 12;
        if ( qword_140E2D8C0 && (v15 & 0x10) == 0 )
          v15 &= qword_140E2D8C8;
        v17 = HIDWORD(v15);
      }
      if ( (_DWORD)v17 == v10 && (_DWORD)v12 == v16 )
      {
        ++v8;
      }
      else
      {
        if ( (_DWORD)v12 != 16 )
        {
          LOBYTE(v4) = MiMapPageFileHash(*(_QWORD *)(v5 + 8 * v12 + 22304), v6, v11 - v8, v9, v8);
          a2 = v20;
        }
        v12 = v16;
        v9 = v17;
        v10 = v17;
        v8 = 1;
      }
      ++v11;
      v14 += 8LL;
      ++v13;
      ++v10;
    }
    while ( v11 < a4 );
    if ( (_DWORD)v12 != 16 )
      LOBYTE(v4) = MiMapPageFileHash(*(_QWORD *)(v5 + 8 * v12 + 22304), v6, v11 - v8, v9, v8);
  }
  return (char)v4;
}
