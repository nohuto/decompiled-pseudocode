/*
 * XREFs of RtlpCreateServerAcl @ 0x18004556C
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlCreateAcl @ 0x180047A70 (RtlCreateAcl.c)
 *     RtlUShortAdd @ 0x18013D684 (RtlUShortAdd.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  unsigned __int16 v5; // bx
  _BYTE *v9; // rax
  unsigned __int16 *v10; // rdi
  unsigned int v11; // ebp
  unsigned __int16 v12; // r9
  unsigned int v13; // r11d
  __int64 v14; // r10
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r10
  int v20; // r11d
  ACL *Heap_0; // rax
  ACL *v22; // r15
  unsigned int v23; // ebp
  unsigned int v24; // eax
  ACL *v25; // rbx
  unsigned __int8 *v26; // r15
  char v27; // al
  ACL *v28; // r13
  unsigned __int8 *v29; // r14
  char *p_AceCount; // rbx
  char *v31; // rbx
  __int64 v32; // rcx
  __int16 v33; // ax
  ACL *v34; // [rsp+20h] [rbp-48h]
  unsigned __int16 v35; // [rsp+70h] [rbp+8h] BYREF
  void *Src; // [rsp+80h] [rbp+18h]

  Src = a3;
  v5 = 8;
  v35 = 8;
  if ( !a1 )
  {
    v9 = a5;
    *a4 = 0LL;
    *v9 = 0;
    return 0LL;
  }
  v10 = (unsigned __int16 *)(a1 + 8);
  v11 = *(unsigned __int16 *)(a1 + 4);
  v12 = 4 * (a3[1] + 2);
  v13 = 0;
  v14 = a1 + 8;
  while ( v13 < v11 )
  {
    if ( *(_BYTE *)v14 )
    {
      if ( !a2 || *(_BYTE *)v14 != 4 )
        goto LABEL_16;
      v18 = (unsigned __int16)(4 * *(unsigned __int8 *)(v14 + 13));
      v17 = (unsigned int)(v18 + 8);
      if ( (unsigned __int16)(v18 + 8) <= v12 )
      {
        v17 = v12;
        LOWORD(v17) = v12 - v18 - 8;
      }
      else
      {
        LOWORD(v17) = v18 + 8 - v12;
      }
      v16 = v5;
    }
    else
    {
      result = RtlUShortAdd(v5, v12, &v35);
      if ( (int)result < 0 )
        return result;
      v16 = v35;
      v17 = 4LL;
    }
    result = RtlUShortAdd(v16, v17, &v35);
    if ( (int)result < 0 )
      return result;
    v5 = v35;
LABEL_16:
    result = RtlUShortAdd(v5, *(unsigned __int16 *)(v14 + 2), &v35);
    if ( (int)result < 0 )
      return result;
    v13 = v20 + 1;
    v5 = v35;
    v14 = *(unsigned __int16 *)(v19 + 2) + v19;
  }
  Heap_0 = (ACL *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v5);
  *a4 = Heap_0;
  if ( !Heap_0 )
    return 3221225626LL;
  *a5 = 1;
  RtlCreateAcl(Heap_0, v5, 3u);
  v22 = *a4;
  v23 = 0;
  LOWORD(v24) = *(_WORD *)(a1 + 4);
  v34 = *a4;
  v25 = *a4 + 1;
  if ( (_WORD)v24 )
  {
    v26 = (unsigned __int8 *)Src;
    do
    {
      v27 = *(_BYTE *)v10;
      if ( !*(_BYTE *)v10 || a2 && v27 == 4 )
      {
        v28 = v25;
        if ( v27 )
          v29 = (unsigned __int8 *)&v10[2 * *((unsigned __int8 *)v10 + 13) + 10];
        else
          v29 = (unsigned __int8 *)(v10 + 4);
        *v25 = *(ACL *)v10;
        p_AceCount = (char *)&v25[1].AceCount;
        memmove(p_AceCount, v26, 4LL * v26[1] + 8);
        v31 = &p_AceCount[(unsigned __int8)(4 * (v26[1] + 2))];
        memmove(v31, v29, 4LL * v29[1] + 8);
        v32 = v29[1];
        v33 = v26[1] + 7;
        v28->AclRevision = 4;
        v25 = (ACL *)&v31[4 * v32 + 8];
        v28->AclSize = 4 * (v33 + v32);
        *(_WORD *)&v28[1].AclRevision = 1;
      }
      else
      {
        memmove(v25, v10, v10[1]);
        v25 = (ACL *)((char *)v25 + v10[1]);
      }
      ++v23;
      v10 = (unsigned __int16 *)((char *)v10 + v10[1]);
      v24 = *(unsigned __int16 *)(a1 + 4);
    }
    while ( v23 < v24 );
    v22 = v34;
  }
  v22->AceCount = v24;
  return 0LL;
}
