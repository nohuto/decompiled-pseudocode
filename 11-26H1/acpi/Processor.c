/*
 * XREFs of Processor @ 0x14006FC20
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     PushScope @ 0x1400138A0 (PushScope.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall Processor(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // rsi
  unsigned int NameSpaceObject; // ebx
  __int64 *v6; // rax
  __int64 v7; // r8

  v2 = a2 + 8;
  NameSpaceObject = CreateNameSpaceObject((_QWORD *)a1[40], *(_QWORD *)(a2[10] + 32), a1[10], a1[11], a2 + 8, 0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*v2 + 66) = 12;
    *(_DWORD *)(*v2 + 88) = 12;
    v6 = HeapAlloc((_QWORD *)a1[40], 1330794568, *(_DWORD *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v6;
    if ( v6 )
    {
      memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
      v7 = *(_QWORD *)(*v2 + 96);
      *(_BYTE *)(v7 + 8) = *(_BYTE *)(a2[10] + 56);
      *(_DWORD *)v7 = *(_DWORD *)(a2[10] + 96);
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(a2[10] + 136);
      if ( ghCreate )
        ghCreate(12LL, *v2 + 120);
      return (unsigned int)PushScope(a1, a1[15], a2[5], 0LL, *v2, a1[11], a1[40], a2[11]);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      PrintDebugMessage(0x97u, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return NameSpaceObject;
}
