/*
 * XREFs of ViSpIoSetCompletionRoutineEx_Exit @ 0x140C499E0
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilFreePoolCheckIRQL @ 0x1403C1640 (VfUtilFreePoolCheckIRQL.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 */

void __fastcall ViSpIoSetCompletionRoutineEx_Exit(__int64 a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( *(int *)(a1 + 48) >= 0 )
  {
    v2 = (_OWORD *)VfHandlePoolAlloc(
                     NonPagedPool,
                     0x240uLL,
                     0x20uLL,
                     0x73556656uLL,
                     LowPoolPriority,
                     (__int64)&VfExtendedParameters,
                     1,
                     retaddr);
    if ( v2 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 184LL);
      v4 = *(_QWORD *)(v3 - 8);
      *v2 = *(_OWORD *)v4;
      v2[1] = *(_OWORD *)(v4 + 16);
      *(_QWORD *)(v3 - 8) = v2;
      VfUtilFreePoolCheckIRQL((_SLIST_ENTRY *)v4);
    }
  }
}
