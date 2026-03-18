/*
 * XREFs of bConstructGET @ 0x14000E8C0
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x14000E9D0 (-AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z.c)
 *     ?GreIsThreadTerminating@@YA_NPEAU_GRETHREAD@@@Z @ 0x14000EBEC (-GreIsThreadTerminating@@YA_NPEAU_GRETHREAD@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall bConstructGET(__int64 a1, __int64 a2, struct EDGE *a3, struct _RECTL *a4)
{
  struct _POINTFIX *v4; // r12
  struct _POINTFIX *v5; // rdi
  __int64 v6; // rbx
  struct _GRETHREAD *CurrentThread; // rax
  struct _POINTFIX *v11; // rbx
  struct _GRETHREAD *v12; // r13
  struct _POINTFIX *v13; // rdx
  struct _POINTFIX *v14; // rbp
  struct _POINTFIX *v15; // rax
  unsigned __int64 v16; // r13
  struct EDGE *v17; // rax
  struct _GRETHREAD *v19; // [rsp+78h] [rbp+10h]

  *(_QWORD *)a2 = a2;
  v4 = 0LL;
  *(_DWORD *)(a2 + 16) = 0x7FFFFFFF;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  CurrentThread = GreGetCurrentThread();
  v11 = *(struct _POINTFIX **)(v6 + 32);
  v12 = CurrentThread;
  v19 = CurrentThread;
  while ( 1 )
  {
    if ( !v11 )
      return 1LL;
    if ( GreIsThreadTerminating(v12) )
      break;
    v13 = v11 + 3;
    v14 = v11 + 4;
    v15 = v11 + 3;
    if ( (v11[2].x & 1) == 0 )
    {
      v14 = v11 + 3;
      v15 = v5;
      v13 = v4;
    }
    v5 = v15;
    v4 = v13;
    if ( v14 < &v11[(unsigned int)v11[2].y + 3] )
    {
      v16 = (unsigned __int64)&v11[(unsigned int)v11[2].y + 3];
      do
      {
        v17 = AddEdgeToGET((struct EDGE *)a2, a3, v5, v14, a4);
        v5 = v14;
        a3 = v17;
        ++v14;
      }
      while ( (unsigned __int64)v14 < v16 );
      v12 = v19;
    }
    if ( (v11[2].x & 2) != 0 )
    {
      a3 = AddEdgeToGET((struct EDGE *)a2, a3, v5, v4, a4);
      v5 = 0LL;
    }
    v11 = (struct _POINTFIX *)*v11;
  }
  return 0LL;
}
