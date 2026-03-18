/*
 * XREFs of EditionPostInputMessage @ 0x14011FA60
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     CalcWakeMask @ 0x1401206B0 (CalcWakeMask.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x140120EA4 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        __int64 *a11)
{
  int v12; // ebx
  __int64 v14; // rdx
  void *v15; // r13
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // rbp
  int v21; // edx
  __int64 v22; // rdi
  int v23; // eax
  unsigned __int8 v25; // al
  bool v26; // zf
  __int64 v27; // [rsp+80h] [rbp-58h]
  _QWORD v28[9]; // [rsp+90h] [rbp-48h] BYREF
  int v29; // [rsp+E0h] [rbp+8h]

  v12 = 0;
  v14 = *(_QWORD *)(a1 + 80);
  v15 = 0LL;
  v16 = *a11;
  if ( *(char *)(*(_QWORD *)(v14 + 40) + 19LL) < 0 )
    return 0LL;
  if ( a3 - 512 > 0xE )
  {
    if ( a3 - 581 > 0x12 )
      goto LABEL_9;
    a2 = *(_QWORD *)(a1 + 80);
    if ( !v16 )
      goto LABEL_9;
LABEL_8:
    v15 = *(void **)(v16 + 8);
    goto LABEL_9;
  }
  if ( v16 && *(_DWORD *)v16 == 2 )
    goto LABEL_8;
LABEL_9:
  v17 = *(_QWORD *)(v14 + 16);
  LODWORD(v18) = 0;
  v27 = v17;
  v19 = *(_QWORD *)(v17 + 472);
  if ( a3 == 255 )
    return PostInputMessage(
             (struct tagQ *)v19,
             (InputTransform *)a2,
             a3,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             v15,
             (struct tagUIPI_INFO *)a11[1],
             v12,
             v18,
             v17);
  v20 = a2;
  v29 = CalcWakeMask(a3, a3, 0LL);
  v21 = v29;
  if ( (a3 == 513 || a3 == 516)
    && a2
    && (*(_DWORD *)(a2 + 260) & 6) != 0
    && !*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1472LL)
    && a10
    && ((*(_DWORD *)a10 - 2) & 0xFFFFFFEF) == 0 )
  {
    if ( !*(_QWORD *)(v19 + 144) )
    {
      v28[0] = v19 + 144;
      v28[1] = a2;
      HMAssignmentLock(v28, 0LL);
      v17 = v27;
      v21 = v29;
    }
    *(_BYTE *)(v19 + 152) |= (a3 != 513) + 1;
    goto LABEL_39;
  }
  if ( !*(_QWORD *)(v19 + 144) )
    goto LABEL_13;
  if ( a3 != 514 && a3 != 517 )
  {
    if ( a3 == 512 )
    {
      v20 = *(_QWORD *)(v19 + 144);
      a2 = v20;
LABEL_39:
      v22 = 0LL;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v20 = *(_QWORD *)(v19 + 144);
  v25 = (a3 == 514) - 3;
  v26 = (v25 & *(_BYTE *)(v19 + 152)) == 0;
  *(_BYTE *)(v19 + 152) &= v25;
  if ( !v26 )
  {
LABEL_13:
    a2 = v20;
    v22 = 0LL;
    if ( v20 )
    {
LABEL_14:
      if ( (v21 & 0x1000) != 0 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 1496LL);
        if ( v22 )
        {
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 528), 0, 0) & 1) == 0 )
          {
LABEL_22:
            vAdjustDelegatePriority((struct tagTHREADINFO *)v22);
            v12 = 1;
            v19 = *(_QWORD *)(v22 + 472);
            v17 = v22;
            v18 = (*(_QWORD *)(v22 + 1360) >> 37) & 1LL;
            return PostInputMessage(
                     (struct tagQ *)v19,
                     (InputTransform *)a2,
                     a3,
                     a5,
                     a6,
                     a7,
                     a8,
                     a9,
                     a10,
                     v15,
                     (struct tagUIPI_INFO *)a11[1],
                     v12,
                     v18,
                     v17);
          }
          v22 = 0LL;
        }
      }
      v23 = *(_DWORD *)(v20 + 260);
      if ( v23 )
      {
        if ( (v23 & v21) != 0 )
          v22 = *(_QWORD *)(v20 + 264);
      }
      if ( !v22 )
        return PostInputMessage(
                 (struct tagQ *)v19,
                 (InputTransform *)a2,
                 a3,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 v15,
                 (struct tagUIPI_INFO *)a11[1],
                 v12,
                 v18,
                 v17);
      goto LABEL_22;
    }
    return PostInputMessage(
             (struct tagQ *)v19,
             (InputTransform *)a2,
             a3,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             v15,
             (struct tagUIPI_INFO *)a11[1],
             v12,
             v18,
             v17);
  }
  v20 = HMAssignmentUnlock(v19 + 144);
  if ( v20 )
  {
    v17 = v27;
    v21 = v29;
    goto LABEL_13;
  }
  return 0LL;
}
