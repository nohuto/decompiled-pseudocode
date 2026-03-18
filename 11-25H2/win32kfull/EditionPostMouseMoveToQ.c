/*
 * XREFs of EditionPostMouseMoveToQ @ 0x14011FD80
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     CalcWakeMask @ 0x1401206B0 (CalcWakeMask.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x140120EA4 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall EditionPostMouseMoveToQ(
        struct tagQ *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6)
{
  __int64 v10; // rbp
  int v11; // r14d
  int v12; // eax
  __int64 v13; // r11
  __int64 v14; // r9
  int v15; // r10d
  InputTransform *v16; // rdi
  __int64 v18; // rbx
  int v19; // eax

  v10 = 0LL;
  v11 = 0;
  v12 = CalcWakeMask(512LL, 512LL, 0LL);
  v14 = *((_QWORD *)a1 + 18);
  v15 = v12;
  if ( !v14 )
  {
    v16 = 0LL;
    return PostInputMessage(a1, v16, 0x200u, a2, a3, a4, a5, 0, a6, 0LL, 0LL, v11, v13, v10);
  }
  v18 = 0LL;
  v16 = (InputTransform *)*((_QWORD *)a1 + 18);
  if ( (v12 & 0x1000) != 0 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 1496LL);
    if ( v18 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 528), 0, 0) & 1) == 0 )
      {
LABEL_12:
        vAdjustDelegatePriority((struct tagTHREADINFO *)v18);
        v11 = 1;
        a1 = *(struct tagQ **)(v18 + 472);
        v10 = v18;
        v13 = (*(_QWORD *)(v18 + 1360) >> 37) & 1LL;
        return PostInputMessage(a1, v16, 0x200u, a2, a3, a4, a5, 0, a6, 0LL, 0LL, v11, v13, v10);
      }
      v18 = 0LL;
    }
  }
  v19 = *(_DWORD *)(v14 + 260);
  if ( v19 && (v19 & v15) != 0 )
    v18 = *(_QWORD *)(v14 + 264);
  if ( v18 )
    goto LABEL_12;
  return PostInputMessage(a1, v16, 0x200u, a2, a3, a4, a5, 0, a6, 0LL, 0LL, v11, v13, v10);
}
