/*
 * XREFs of MiZeroNodeConductorWait @ 0x1404F18D8
 * Callers:
 *     MiZeroNodeExiting @ 0x14050CC64 (MiZeroNodeExiting.c)
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     MiDeleteThreadContext @ 0x1404F1A20 (MiDeleteThreadContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiZeroNodeConductorWait(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // esi
  ULONG v6; // r10d
  _OWORD *v7; // rdi
  struct _KWAIT_BLOCK *WaitBlockArray; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // ebp
  _OWORD v13[3]; // [rsp+40h] [rbp-178h] BYREF
  char v14; // [rsp+70h] [rbp-148h] BYREF

  v3 = *(unsigned int *)(a1 + 60);
  memset(v13, 0, sizeof(v13));
  while ( 1 )
  {
    v5 = *(_BYTE *)(a1 + 162) == 0 ? 6 : 0;
    v6 = v5;
    if ( (_DWORD)v3 )
    {
      v7 = *(_OWORD **)(a1 + 72);
      v6 = v5 + v3;
      WaitBlockArray = (struct _KWAIT_BLOCK *)((char *)v7 + 8 * v3 + 48);
    }
    else
    {
      v7 = v13;
      WaitBlockArray = (struct _KWAIT_BLOCK *)&v14;
    }
    if ( *(_BYTE *)(a1 + 162) )
    {
      v7 += 3;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 48);
      *((_QWORD *)v7 + 3) = a1;
      *(_QWORD *)v7 = v9 + 88;
      *((_QWORD *)v7 + 1) = &stru_140E2ED08.Timer.Header.WaitListHead;
      *((_QWORD *)v7 + 2) = a1 + 168;
      *((_QWORD *)v7 + 4) = a1 + 192;
      *((_QWORD *)v7 + 5) = a1 + 88;
    }
    v10 = KeWaitForMultipleObjects(v6, (PVOID *)v7, WaitAny, WrFreePage, 0, 0, a2, WaitBlockArray);
    v11 = v10;
    if ( v10 < v5 )
      break;
    if ( v10 >= v5 + *(_DWORD *)(a1 + 60) )
      break;
    MiDeleteThreadContext(a1, *((_QWORD *)v7 + v10));
    v3 = *(unsigned int *)(a1 + 60);
    if ( !(_DWORD)v3 )
    {
      if ( *(_BYTE *)(a1 + 162) )
        break;
    }
  }
  return v11;
}
