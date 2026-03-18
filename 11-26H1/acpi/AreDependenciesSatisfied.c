/*
 * XREFs of AreDependenciesSatisfied @ 0x140059FF8
 * Callers:
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x140043030 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 */

bool __fastcall AreDependenciesSatisfied(__int64 *a1, __int64 a2)
{
  _DWORD *v2; // rdi
  unsigned int v3; // ebx
  unsigned int v5; // esi
  _BYTE **v6; // rdi
  __int64 v7; // rbp
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD **)(a2 + 32);
  v3 = 0;
  v9 = 0LL;
  v5 = *v2;
  if ( *v2 )
  {
    v6 = (_BYTE **)(v2 + 10);
    do
    {
      if ( (int)AMLIGetNameSpaceObject(*v6, a1, &v9, 0) < 0 )
        break;
      v7 = *(_QWORD *)(*(_QWORD *)v9 + 104LL);
      AMLIDereferenceHandleEx(v9);
      if ( !v7 )
        break;
      if ( *(_DWORD *)(v7 + 368) != 3 )
        break;
      ++v3;
      v6 += 5;
    }
    while ( v3 < v5 );
  }
  return v3 == v5;
}
