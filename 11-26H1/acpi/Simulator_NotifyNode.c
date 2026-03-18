/*
 * XREFs of Simulator_NotifyNode @ 0x14006CAC4
 * Callers:
 *     Simulator_CallbackWorker @ 0x14006C690 (Simulator_CallbackWorker.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Simulator_NotifyNode(__int64 a1)
{
  int NameSpaceObject; // eax
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16), 0LL, &v6, 0);
  v3 = v6;
  v4 = NameSpaceObject;
  if ( NameSpaceObject >= 0 )
  {
    if ( ghNotify )
      v4 = ghNotify(2LL, *(unsigned int *)(a1 + 24), v6 + 120, qword_14008EAE0, 0LL, *(_QWORD *)(a1 + 16));
    else
      v4 = -1073741224;
  }
  DereferenceObjectEx(v3);
  return v4;
}
