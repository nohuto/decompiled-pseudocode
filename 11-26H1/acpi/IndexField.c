/*
 * XREFs of IndexField @ 0x140030BC0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ParseFieldList @ 0x140010940 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall IndexField(__int64 a1, _QWORD *a2)
{
  unsigned int NameSpaceObject; // ebx
  __int64 *v6; // r14
  __int64 *v7; // rax
  _QWORD *v8; // rcx

  NameSpaceObject = GetNameSpaceObject(*(void **)(a2[10] + 32LL));
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(*(void **)(a2[10] + 72LL));
    if ( !NameSpaceObject )
    {
      if ( MEMORY[0x42] == 5 )
      {
        v6 = a2 + 8;
        NameSpaceObject = CreateNameSpaceObject(
                            *(_QWORD **)(a1 + 320),
                            0LL,
                            *(_QWORD *)(a1 + 80),
                            *(_QWORD *)(a1 + 88),
                            a2 + 8,
                            0);
        if ( !NameSpaceObject )
        {
          *(_WORD *)(*v6 + 66) = 132;
          *(_DWORD *)(*v6 + 88) = 16;
          v7 = HeapAlloc(*(_QWORD **)(a1 + 320), 1180191048, *(_DWORD *)(*v6 + 88));
          *(_QWORD *)(*v6 + 96) = v7;
          if ( v7 )
          {
            memset(*(void **)(*v6 + 96), 0, *(unsigned int *)(*v6 + 88));
            v8 = *(_QWORD **)(*v6 + 96);
            *v8 = 0LL;
            v8[1] = 0LL;
            return (unsigned int)ParseFieldList(a1, a2[5], *v6, *(_DWORD *)(a2[10] + 96LL), 0xFFFFFFFF);
          }
          else
          {
            NameSpaceObject = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            PrintDebugMessage(0x3Fu, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      else
      {
        NameSpaceObject = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        PrintDebugMessage(0x40u, *(const void **)(a2[10] + 32LL), 0LL, 0LL, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
