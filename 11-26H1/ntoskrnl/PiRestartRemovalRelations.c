/*
 * XREFs of PiRestartRemovalRelations @ 0x140B3BCBC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 */

__int64 __fastcall PiRestartRemovalRelations(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdi
  _DWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v7 = 0LL;
  while ( *(_BYTE *)(a2 + 8) )
  {
    v8 = *(_DWORD **)a2;
    if ( (unsigned int)v7 >= **(_DWORD **)a2 || !v8 )
      break;
    _mm_lfence();
    v9 = 3 * v7;
    v7 = (unsigned int)(v7 + 1);
    v10 = *(_QWORD *)&v8[2 * v9 + 4];
    if ( v10 )
    {
      result = *(_QWORD *)(v10 + 312);
      v11 = *(_DWORD **)(result + 40);
    }
    else
    {
      v11 = 0LL;
    }
    if ( v10 == a3 )
    {
      result = *(unsigned int *)(a1 + 152);
      if ( (result & 2) == 0 && v11[75] == 788 && (v11[99] & 0x2000) != 0 && v11[101] == 21 )
      {
        PipClearDevNodeProblem((__int64)v11);
        goto LABEL_17;
      }
    }
    else if ( (v11[99] & 0x6000) == 0 && v11[75] == 788 )
    {
LABEL_17:
      result = PnpRestartDeviceNode((__int64)v11);
    }
  }
  return result;
}
