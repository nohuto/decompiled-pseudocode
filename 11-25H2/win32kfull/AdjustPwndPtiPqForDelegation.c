/*
 * XREFs of AdjustPwndPtiPqForDelegation @ 0x1401203DC
 * Callers:
 *     PostPointerEventMessage @ 0x14011BED0 (PostPointerEventMessage.c)
 *     EditionPostMouseWheelToForeground @ 0x14011F510 (EditionPostMouseWheelToForeground.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x14024FA10 (EditionHandleAndPostKeyEvent.c)
 *     ?PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z @ 0x1402B6AB0 (-PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     CalcWakeMask @ 0x1401206B0 (CalcWakeMask.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x140120EA4 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall AdjustPwndPtiPqForDelegation(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // ebp
  int v13; // r11d
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // rdx
  char v19; // si
  unsigned __int8 v20; // al
  bool v21; // zf
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( a4 == 255 )
    return 1LL;
  v10 = *a2;
  v11 = *a1;
  v12 = CalcWakeMask(a4, a4, 0LL);
  if ( (v13 == 513 || v13 == 516)
    && v10
    && (*(_DWORD *)(v10 + 260) & 6) != 0
    && !*(_QWORD *)(*(_QWORD *)(v10 + 16) + 1472LL)
    && a5
    && ((*a5 - 2) & 0xFFFFFFEF) == 0 )
  {
    v19 = (v13 != 513) + 1;
    if ( !*(_QWORD *)(v11 + 144) )
    {
      v22[0] = v11 + 144;
      v22[1] = v10;
      HMAssignmentLock(v22, 0LL);
    }
    *(_BYTE *)(v11 + 152) |= v19;
    *a2 = v10;
    goto LABEL_30;
  }
  v14 = *(_QWORD *)(v11 + 144);
  if ( !v14 )
  {
LABEL_5:
    *a2 = v10;
    v15 = 0LL;
    if ( !v10 )
      return 1LL;
LABEL_6:
    if ( (v12 & 0x1000) != 0 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 1496LL);
      if ( v15 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v15 + 528), 0, 0) & 1) == 0 )
        {
LABEL_14:
          vAdjustDelegatePriority((struct tagTHREADINFO *)v15);
          *a1 = *(_QWORD *)(v15 + 472);
          v18 = (*(_QWORD *)(v15 + 1360) >> 37) & 1LL;
          *a3 = v15;
          *a6 = 1;
          *a7 = v18;
          return 1LL;
        }
        v15 = 0LL;
      }
    }
    v16 = *(_DWORD *)(v10 + 260);
    if ( v16 )
    {
      if ( (v16 & v12) != 0 )
        v15 = *(_QWORD *)(v10 + 264);
    }
    if ( !v15 )
      return 1LL;
    goto LABEL_14;
  }
  if ( v13 != 514 && v13 != 517 )
  {
    if ( v13 == 512 )
    {
      v10 = *(_QWORD *)(v11 + 144);
      *a2 = v14;
LABEL_30:
      v15 = 0LL;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v11 + 144);
  v20 = (v13 == 514) - 3;
  v21 = (v20 & *(_BYTE *)(v11 + 152)) == 0;
  *(_BYTE *)(v11 + 152) &= v20;
  if ( !v21 )
    goto LABEL_5;
  result = HMAssignmentUnlock(v11 + 144);
  v10 = result;
  if ( result )
    goto LABEL_5;
  return result;
}
