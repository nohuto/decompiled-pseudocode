/*
 * XREFs of ?HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18005B854
 * Callers:
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x1800139F4 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18005BA40 (-HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall HampClientSerializeActivities(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_CLIENT_CONNECTION_PARAMETERS *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  unsigned int v6; // esi
  bool v7; // zf
  __int64 i; // rax
  __int64 v9; // r10
  __int64 v11; // rdx
  _DWORD *Heap; // rax
  _DWORD *v13; // rdi
  unsigned int v14; // edx
  struct _HAM_ACTIVITY *FirstActivity; // r8
  __int16 v16; // ax
  __int16 v17; // cx
  __int64 v18; // rdx
  __int64 v19; // rcx

  v2 = 0;
  v3 = *((_QWORD *)a1 + 7);
  v6 = 0;
  v7 = v3 == (_QWORD)a1 + 56;
  for ( i = v3 - 48; ; i = v11 - 48 )
  {
    v9 = 0LL;
    if ( !v7 )
      v9 = i;
    if ( !v9 )
      break;
    if ( v6 + 1 < v6 )
      return (unsigned int)-1073741675;
    v11 = *(_QWORD *)(v9 + 48);
    ++v6;
    v7 = v11 == *(_QWORD *)(v9 + 64) + 56LL;
  }
  if ( v6 )
  {
    if ( !is_mul_ok(v6, 0x98uLL) )
      return (unsigned int)-1073741675;
    Heap = HampAllocateHeap(152LL * v6);
    *((_QWORD *)a2 + 1) = Heap;
    v13 = Heap;
    if ( Heap )
    {
      *((_DWORD *)a2 + 4) = v6;
      memset_0(Heap, 0, 152LL * v6);
      FirstActivity = HampClientGetFirstActivity(a1, v14);
      while ( FirstActivity )
      {
        if ( *((_BYTE *)FirstActivity + 562) == 3 )
          v13[36] |= 1u;
        *(_QWORD *)v13 = *((_QWORD *)FirstActivity + 5);
        *((_OWORD *)v13 + 1) = *(_OWORD *)((char *)FirstActivity + 124);
        *((_OWORD *)v13 + 2) = *(_OWORD *)((char *)FirstActivity + 140);
        *((_OWORD *)v13 + 3) = *(_OWORD *)((char *)FirstActivity + 156);
        *((_OWORD *)v13 + 4) = *(_OWORD *)((char *)FirstActivity + 172);
        *((_OWORD *)v13 + 5) = *(_OWORD *)((char *)FirstActivity + 188);
        *((_OWORD *)v13 + 6) = *(_OWORD *)((char *)FirstActivity + 204);
        *((_OWORD *)v13 + 7) = *(_OWORD *)((char *)FirstActivity + 220);
        *((_OWORD *)v13 + 8) = *(_OWORD *)((char *)FirstActivity + 236);
        v13[3] = *((_DWORD *)FirstActivity + 106);
        *((_WORD *)v13 + 5) = 7;
        v16 = *((_WORD *)v13 + 4) ^ (*((_WORD *)v13 + 4) ^ (2 * (*((_DWORD *)FirstActivity + 28) >> 7))) & 6;
        *((_WORD *)v13 + 4) = v16;
        v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(8 * (*((_DWORD *)FirstActivity + 28) >> 14))) & 8;
        *((_WORD *)v13 + 4) = v17;
        *((_WORD *)v13 + 4) = v17 ^ (v17 ^ (*((_DWORD *)FirstActivity + 28) >> 9)) & 1;
        v13 += 38;
        v18 = *((_QWORD *)FirstActivity + 6);
        v19 = *((_QWORD *)FirstActivity + 8);
        FirstActivity = 0LL;
        if ( v18 != v19 + 56 )
          FirstActivity = (struct _HAM_ACTIVITY *)(v18 - 48);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v2;
}
