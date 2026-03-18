/*
 * XREFs of Name @ 0x1400107C0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 */

__int64 __fastcall Name(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = (_QWORD *)(a2 + 64);
  result = CreateNameSpaceObject(a1[40], *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), a1[10], a1[11], a2 + 64, 0);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == -1073741771 && g_SimulatorCallbackObject )
      return 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 80) + 40LL;
    v6 = *v2 + 64LL;
    if ( v6 != v5 )
    {
      *(_OWORD *)v6 = *(_OWORD *)v5;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)(v5 + 16);
      *(_QWORD *)(v6 + 32) = *(_QWORD *)(v5 + 32);
      *(_OWORD *)v5 = 0LL;
      *(_OWORD *)(v5 + 16) = 0LL;
      *(_QWORD *)(v5 + 32) = 0LL;
    }
  }
  return result;
}
