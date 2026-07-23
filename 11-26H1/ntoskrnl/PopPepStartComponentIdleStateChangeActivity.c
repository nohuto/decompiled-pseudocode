/*
 * XREFs of PopPepStartComponentIdleStateChangeActivity @ 0x1403BCE50
 * Callers:
 *     <none>
 * Callees:
 *     PopPlNotifyDeviceFState @ 0x1403B7D3C (PopPlNotifyDeviceFState.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403BBF88 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x1403BCFD8 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPluginNotifyIdleState @ 0x1403BD0A4 (PopPluginNotifyIdleState.c)
 */

char __fastcall PopPepStartComponentIdleStateChangeActivity(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v7; // rdi
  unsigned int *v8; // rcx
  unsigned int *v9; // r14
  int v10; // edx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  _QWORD *v13; // r12
  _DWORD *v14; // r15
  _DWORD *v15; // rbx
  __int64 v17; // rbx
  unsigned int *v19; // [rsp+78h] [rbp+10h]

  v3 = 0;
  if ( !a2 )
    return v3;
  v7 = *(_QWORD *)(a2 + 64);
  v8 = (unsigned int *)(a2 + 180);
  v9 = (unsigned int *)(a2 + 176);
  v19 = (unsigned int *)(a2 + 180);
  v10 = *(_DWORD *)(v7 + 12);
  if ( v10 )
  {
    v19 = (unsigned int *)(a2 + 180);
    v15 = (_DWORD *)(a2 + 176);
    v13 = (_QWORD *)(a1 + 32);
    v14 = (_DWORD *)(a2 + 8);
    if ( v10 != 1 )
      goto LABEL_6;
  }
  else
  {
    v11 = *v9;
    *v8 = *v9;
    v12 = *(_DWORD *)(v7 + 8);
    *v9 = v12;
    if ( !*(_BYTE *)(a1 + 124) )
    {
      v13 = (_QWORD *)(a1 + 32);
      v14 = (_DWORD *)(a2 + 8);
      PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), v11, v12, 0);
      v15 = (_DWORD *)(a2 + 176);
LABEL_5:
      *(_DWORD *)(v7 + 12) = 2;
      goto LABEL_6;
    }
    *(_DWORD *)(v7 + 12) = 1;
  }
  v13 = (_QWORD *)(a1 + 32);
  v14 = (_DWORD *)(a2 + 8);
  PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), *v8, *v9, 0);
  v17 = *v9;
  PopPepUpdateIdleStateRefCount(
    *(_DWORD *)(*(_QWORD *)(a2 + 200) + 24LL * *v19 + 16),
    *(_DWORD *)(*(_QWORD *)(a2 + 200) + 24 * v17 + 16),
    1,
    a1,
    *(_DWORD *)(a2 + 8));
  PopFxUpdateComponentAccountingEnhanced(*v13, *(unsigned int *)(a2 + 8), (unsigned int)v17, 0LL);
  v15 = (_DWORD *)(a2 + 176);
  if ( (unsigned __int8)PopPluginNotifyIdleState(*v13, *(unsigned int *)(a2 + 8), *v9, 0LL) == 1 )
    goto LABEL_5;
LABEL_6:
  if ( *(_DWORD *)(v7 + 12) == 2 )
  {
    *(_DWORD *)a3 = 1;
    v3 = 1;
    *(_QWORD *)(a3 + 8) = *v13;
    *(_DWORD *)(a3 + 16) = *v14;
    *(_DWORD *)(a3 + 20) = *v15;
    *(_DWORD *)(v7 + 12) = 3;
  }
  return v3;
}
